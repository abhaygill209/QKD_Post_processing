"""
Cocotb testbench for an NTT accelerator (Kyber / ML-KEM style, CT butterflies).

What this bench assumes about the DUT
-------------------------------------
* q = 3329, N = 256, Montgomery R = 2^16  -> classic Kyber parameters.
* The core uses Cooley-Tukey butterflies (t = zeta*b; b' = a - t; a' = a + t).
* First stage pairs index i with i + N/2 (half-distance pairing), which is
  exactly the first layer (len = 128) of the FIPS-203 forward NTT.
* Twiddles live in the Montgomery domain inside the DUT, so feeding Montgomery
  inputs yields Montgomery outputs (the domain is preserved through every stage
  because the NTT is linear and each butterfly does exactly one MontMul).

The two things most likely to cause a "mismatch" that are NOT RTL bugs:
  1. NTT_TYPE: a Kyber core does the 7-layer *incomplete* NTT, NOT a full
     256-point DFT. Pick the wrong reference and nothing lines up. Default
     here is "kyber".
  2. Output ordering / pairing: how the DUT groups its 128 output beats into
     (a, b) pairs, and whether the result array is natural or bit-reversed.
     Configure OUTPUT_HALF_DISTANCE_PAIRING / OUTPUT_BIT_REVERSED to match.

Everything is parameterised below so you can dial the bench to your RTL.
"""

import random

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly, NextTimeStep

# =====================================================
# PARAMETERS
# =====================================================

Q              = 3329
N              = 256
PRIMITIVE_ROOT = 17          # 17 is the primitive 256th root of unity mod 3329 (Kyber zeta)

DATA_WIDTH     = 16
MASK           = (1 << DATA_WIDTH) - 1

R_BITS         = 16
R              = 1 << R_BITS

LOG2N          = N.bit_length() - 1   # 8

TIMEOUT_CYCLES = 100000
CLK_PERIOD_NS  = 10

# =====================================================
# CONFIG: REFERENCE MODEL
# =====================================================

# "kyber"    -> 7-layer incomplete NTT per FIPS-203
# "full_dft" -> full 256-point cyclic DFT
# NOTE: the DUT's out[0] equals sum(inputs) (the DC term), which only a cyclic
# transform produces -> this core is a full DFT, so use "full_dft".
NTT_TYPE = "full_dft"

# Only used when NTT_TYPE == "full_dft".
# True  -> treat PRIMITIVE_ROOT as a generator of Z_q* and derive the N-th root
#          as PRIMITIVE_ROOT^((Q-1)/N)  (this is what your original bench did)
# False -> treat PRIMITIVE_ROOT as the N-th root of unity directly (omega = 17)
OMEGA_FROM_GENERATOR = False

# =====================================================
# CONFIG: INPUT / OUTPUT FORMAT
# =====================================================

# How the two lanes packed in one AXIS beat map to coefficient indices.
# True  -> beat i carries (x[i], x[i + N/2])      (half-distance, Kyber stage-1)
# False -> beat i carries (x[2i], x[2i + 1])      (consecutive)
USE_HALF_DISTANCE_PAIRING    = True    # input side
OUTPUT_HALF_DISTANCE_PAIRING = False   # output side (often consecutive on a CT core)

# Apply a full LOG2N-bit reversal to the natural-order DUT result before
# comparing. Leave False for a Kyber core (its order is already the spec order);
# flip to True if your DUT emits a bit-reversed array.
OUTPUT_BIT_REVERSED = False

# Montgomery domain control
INPUT_IN_MONT  = True   # we send Montgomery-encoded inputs
OUTPUT_IN_MONT = True   # we expect Montgomery-encoded outputs

# =====================================================
# CONFIG: STIMULUS
# =====================================================

RANDOM_INPUT = False    # False -> deterministic ramp 1..N (easy to eyeball)
RANDOM_SEED  = 0
MAX_MISMATCH_PRINT = 16

# --- repeated / multi-frame test -------------------------------------------
NUM_FRAMES        = 4      # how many times the same vector is streamed in
FRAME_GAP         = 0      # idle cycles inserted between frames (0 = back-to-back)
CHECK_OUTPUT_TLAST = False  # set True only if the DUT actually drives m_axis_tlast

# =====================================================
# MONTGOMERY
# =====================================================

R_INV = pow(R, -1, Q)


def to_mont(x):
    return (int(x) * R) % Q


def from_mont(x):
    return (int(x) * R_INV) % Q


# =====================================================
# HELPERS
# =====================================================

def bitrev(i, bits):
    r = 0
    for _ in range(bits):
        r = (r << 1) | (i & 1)
        i >>= 1
    return r


# =====================================================
# REFERENCE NTT MODELS
# =====================================================

def ntt_kyber(f):
    """FIPS-203 Algorithm 9 forward NTT (7 layers, CT butterflies).

    Result is the standard Kyber NTT order (natural array order, with the
    bit-reversal folded into the choice of zeta per butterfly group).
    """
    a = [int(x) % Q for x in f]
    zeta = PRIMITIVE_ROOT
    i = 1
    length = N // 2          # 128
    while length >= 2:
        start = 0
        while start < N:
            z = pow(zeta, bitrev(i, LOG2N - 1), Q)   # BitRev7 for N=256
            i += 1
            for j in range(start, start + length):
                t = (z * a[j + length]) % Q
                a[j + length] = (a[j] - t) % Q
                a[j]          = (a[j] + t) % Q
            start += 2 * length
        length //= 2
    return a


def ntt_full_dft(f):
    """Full 256-point cyclic NTT: out[k] = sum_n f[n] * omega^(k*n)."""
    if OMEGA_FROM_GENERATOR:
        omega = pow(PRIMITIVE_ROOT, (Q - 1) // N, Q)
    else:
        omega = PRIMITIVE_ROOT % Q
    out = [0] * N
    for k in range(N):
        acc = 0
        for n in range(N):
            acc += int(f[n]) * pow(omega, (k * n) % N, Q)
        out[k] = acc % Q
    return out


def compute_expected_normal(inp):
    if NTT_TYPE == "kyber":
        return ntt_kyber(inp)
    elif NTT_TYPE == "full_dft":
        return ntt_full_dft(inp)
    raise ValueError(f"Unknown NTT_TYPE: {NTT_TYPE}")


def format_reference(expected_normal):
    if OUTPUT_IN_MONT:
        return [to_mont(x) for x in expected_normal]
    return [int(x) for x in expected_normal]


# =====================================================
# STIMULUS
# =====================================================

def generate_input():
    if RANDOM_INPUT:
        rng = random.Random(RANDOM_SEED)
        return [rng.randrange(0, Q) for _ in range(N)]
    return list(range(1, N + 1))


def get_input_pair(inp, i):
    if USE_HALF_DISTANCE_PAIRING:
        return int(inp[i]), int(inp[i + N // 2])
    return int(inp[2 * i]), int(inp[2 * i + 1])


def build_input_beats(inp):
    """Return a list of packed AXIS words, one per beat."""
    beats = []
    for i in range(N // 2):
        a, b = get_input_pair(inp, i)
        if INPUT_IN_MONT:
            a, b = to_mont(a), to_mont(b)
        assert 0 <= a <= MASK and 0 <= b <= MASK, \
            f"lane value does not fit in {DATA_WIDTH} bits: a={a} b={b}"
        beats.append((b << DATA_WIDTH) | a)
    return beats


# =====================================================
# AXI-STREAM MASTER (input)
# =====================================================

async def axis_master_send(dut, words):
    """Drive s_axis with proper handshake. Holds data stable until accepted,
    keeps tvalid asserted across beats so back-to-back transfer is possible."""
    last_idx = len(words) - 1
    for idx, word in enumerate(words):
        dut.s_axis_tdata.value  = int(word)
        dut.s_axis_tvalid.value = 1
        dut.s_axis_tlast.value  = 1 if idx == last_idx else 0
        # Wait for a rising edge where tready was high (transfer accepted).
        while True:
            await RisingEdge(dut.clk)
            await ReadOnly()
            if dut.s_axis_tready.value == 1:
                break
        await NextTimeStep()    # leave ReadOnly phase so we can drive again
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value  = 0


# =====================================================
# AXI-STREAM MONITOR (output)
# =====================================================

async def axis_monitor(dut, store, n_beats):
    while len(store) < n_beats:
        await RisingEdge(dut.clk)
        await ReadOnly()
        if dut.m_axis_tvalid.value == 1 and dut.m_axis_tready.value == 1:
            store.append(int(dut.m_axis_tdata.value))


def reorder_dut_output(beats):
    """Map raw output beats -> natural-order coefficient array."""
    out = [None] * N
    for j, word in enumerate(beats):
        a = word & MASK
        b = (word >> DATA_WIDTH) & MASK
        if OUTPUT_HALF_DISTANCE_PAIRING:
            out[j]          = a
            out[j + N // 2] = b
        else:
            out[2 * j]     = a
            out[2 * j + 1] = b
    if OUTPUT_BIT_REVERSED:
        out = [out[bitrev(i, LOG2N)] for i in range(N)]
    return out


# =====================================================
# MULTI-FRAME AXI-STREAM (repeated input)
# =====================================================

async def axis_master_send_frames(dut, frames, gap=0):
    """Stream several frames. tvalid is held high across the whole burst
    (when gap == 0) so frames go back-to-back; tlast pulses on the last beat
    of each frame. Set gap > 0 to insert idle cycles between frames."""
    n_frames = len(frames)
    for f_idx, words in enumerate(frames):
        last_idx = len(words) - 1
        for idx, word in enumerate(words):
            dut.s_axis_tdata.value  = int(word)
            dut.s_axis_tvalid.value = 1
            dut.s_axis_tlast.value  = 1 if idx == last_idx else 0
            while True:
                await RisingEdge(dut.clk)
                await ReadOnly()
                if dut.s_axis_tready.value == 1:
                    break
            await NextTimeStep()
        if gap > 0 and f_idx != n_frames - 1:
            dut.s_axis_tvalid.value = 0
            dut.s_axis_tlast.value  = 0
            for _ in range(gap):
                await RisingEdge(dut.clk)
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value  = 0


async def axis_monitor_framed(dut, store, n_beats):
    """Collect (data, tlast) tuples. tlast is captured only when enabled."""
    while len(store) < n_beats:
        await RisingEdge(dut.clk)
        await ReadOnly()
        if dut.m_axis_tvalid.value == 1 and dut.m_axis_tready.value == 1:
            tl = None
            if CHECK_OUTPUT_TLAST:
                tl = 1 if dut.m_axis_tlast.value == 1 else 0
            store.append((int(dut.m_axis_tdata.value), tl))


# =====================================================
# TEST
# =====================================================

@cocotb.test()
async def test_ntt(dut):

    # --- sanity on parameters ---------------------------------------------
    assert (R * R_INV) % Q == 1, "R_INV is wrong for this R/Q"
    if NTT_TYPE == "kyber":
        assert pow(PRIMITIVE_ROOT, N, Q) == 1 and pow(PRIMITIVE_ROOT, N // 2, Q) != 1, \
            "PRIMITIVE_ROOT is not a primitive N-th root of unity"

    # --- clock ------------------------------------------------------------
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, units="ns").start())

    # --- reset ------------------------------------------------------------
    dut.rstn.value          = 0
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tdata.value  = 0
    dut.s_axis_tlast.value  = 0
    dut.m_axis_tready.value = 1     # sink always ready (add backpressure later)

    for _ in range(10):
        await RisingEdge(dut.clk)
    dut.rstn.value = 1
    await RisingEdge(dut.clk)

    # --- reference --------------------------------------------------------
    inp = generate_input()
    expected_normal = compute_expected_normal(inp)
    expected = format_reference(expected_normal)

    dut._log.info(f"NTT_TYPE={NTT_TYPE}  INPUT_IN_MONT={INPUT_IN_MONT}  "
                  f"OUTPUT_IN_MONT={OUTPUT_IN_MONT}")
    dut._log.info(f"input[:8]   = {inp[:8]}")
    dut._log.info(f"expected[:8]= {expected[:8]}")

    # --- start monitor BEFORE sending ------------------------------------
    out_beats = []
    cocotb.start_soon(axis_monitor(dut, out_beats, N // 2))

    # --- send -------------------------------------------------------------
    await axis_master_send(dut, build_input_beats(inp))

    # --- wait for all output beats ---------------------------------------
    for _ in range(TIMEOUT_CYCLES):
        if len(out_beats) >= N // 2:
            break
        await RisingEdge(dut.clk)

    assert len(out_beats) == N // 2, (
        f"TIMEOUT: expected {N // 2} output beats, got {len(out_beats)}. "
        f"Check that the DUT raises m_axis_tvalid and that tlast/handshake match."
    )

    got = reorder_dut_output(out_beats)
    dut._log.info(f"dut[:8]     = {got[:8]}")

    # --- compare ----------------------------------------------------------
    mismatches = []
    for i in range(N):
        if got[i] != expected[i]:
            mismatches.append(i)

    if mismatches:
        dut._log.error(f"{len(mismatches)} mismatch(es). First {MAX_MISMATCH_PRINT}:")
        for i in mismatches[:MAX_MISMATCH_PRINT]:
            line = f"  idx {i:3d}: EXP={expected[i]:5d}  GOT={got[i]:5d}"
            if OUTPUT_IN_MONT:
                line += (f"   (normal EXP={from_mont(expected[i]):4d}  "
                         f"GOT={from_mont(got[i]):4d})")
            dut._log.error(line)
        raise AssertionError(
            f"{len(mismatches)}/{N} coefficients mismatched. "
            f"If ALL mismatch, suspect NTT_TYPE or Montgomery domain. "
            f"If a permutation, suspect OUTPUT_HALF_DISTANCE_PAIRING / "
            f"OUTPUT_BIT_REVERSED."
        )

    dut._log.info("TEST PASSED")


# =====================================================
# TEST: REPEATED INPUT (is the output repeated?)
# =====================================================

@cocotb.test()
async def test_ntt_repeated(dut):
    """Stream the same 1..N vector NUM_FRAMES times without resetting in
    between, and check that every output frame is (a) correct and (b)
    identical to the first frame. This catches non-determinism and state
    that leaks from one frame into the next."""

    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, units="ns").start())

    # --- reset once -------------------------------------------------------
    dut.rstn.value          = 0
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tdata.value  = 0
    dut.s_axis_tlast.value  = 0
    dut.m_axis_tready.value = 1
    for _ in range(10):
        await RisingEdge(dut.clk)
    dut.rstn.value = 1
    await RisingEdge(dut.clk)

    # --- reference (same for every frame) ---------------------------------
    inp      = generate_input()
    expected = format_reference(compute_expected_normal(inp))
    one_frame = build_input_beats(inp)
    frames    = [one_frame for _ in range(NUM_FRAMES)]

    dut._log.info(f"Streaming the same vector {NUM_FRAMES}x "
                  f"(gap={FRAME_GAP} cycle(s) between frames)")

    # --- monitor for all frames ------------------------------------------
    total_beats = NUM_FRAMES * (N // 2)
    out_store = []
    cocotb.start_soon(axis_monitor_framed(dut, out_store, total_beats))

    # --- send -------------------------------------------------------------
    await axis_master_send_frames(dut, frames, gap=FRAME_GAP)

    # --- wait -------------------------------------------------------------
    for _ in range(TIMEOUT_CYCLES):
        if len(out_store) >= total_beats:
            break
        await RisingEdge(dut.clk)

    assert len(out_store) == total_beats, (
        f"TIMEOUT: expected {total_beats} output beats over {NUM_FRAMES} "
        f"frames, got {len(out_store)}. The DUT may stall after the first "
        f"frame or need a gap between frames (try FRAME_GAP > 0)."
    )

    # --- split into frames and analyse ------------------------------------
    bpf = N // 2
    got_frames = []
    for f in range(NUM_FRAMES):
        chunk = out_store[f * bpf:(f + 1) * bpf]
        words = [d for (d, _) in chunk]
        got_frames.append(reorder_dut_output(words))

        # optional tlast framing check
        if CHECK_OUTPUT_TLAST:
            tlasts = [t for (_, t) in chunk]
            bad = [i for i, t in enumerate(tlasts) if t != (1 if i == bpf - 1 else 0)]
            assert not bad, (
                f"Frame {f}: m_axis_tlast not asserted exactly on the last "
                f"beat (offending beat indices: {bad[:8]})"
            )

    # (a) correctness of each frame vs the reference
    per_frame_errors = []
    for f, gf in enumerate(got_frames):
        errs = [i for i in range(N) if gf[i] != expected[i]]
        per_frame_errors.append(errs)
        dut._log.info(f"Frame {f}: {len(errs)} mismatch(es) vs reference")

    # (b) determinism: every frame identical to frame 0
    drift = []
    for f in range(1, NUM_FRAMES):
        diff = [i for i in range(N) if got_frames[f][i] != got_frames[0][i]]
        if diff:
            drift.append((f, diff))
            dut._log.error(f"Frame {f} differs from frame 0 at "
                           f"{len(diff)} positions, first few: {diff[:8]}")

    # --- verdicts ---------------------------------------------------------
    if drift:
        raise AssertionError(
            f"Output is NOT repeatable: {len(drift)} frame(s) differ from the "
            f"first. This points to state leaking between frames (pipeline not "
            f"flushed, accumulator/index not reset on tlast, etc.) rather than a "
            f"reference-model issue."
        )

    if any(per_frame_errors):
        i0 = per_frame_errors[0][0]
        line = (f"All {NUM_FRAMES} frames are identical to each other but do "
                f"NOT match the reference (e.g. idx {i0}: EXP={expected[i0]} "
                f"GOT={got_frames[0][i0]}). The DUT is repeatable; suspect "
                f"NTT_TYPE / Montgomery domain / output ordering config.")
        raise AssertionError(line)

    dut._log.info(f"TEST PASSED: all {NUM_FRAMES} frames correct and identical")


# =====================================================
# DIAGNOSTIC: identify root + input/output ordering
# =====================================================
# Feeds a unit impulse e_m (value 1 at coefficient DELTA_POS, 0 elsewhere).
# For a cyclic DFT, out[k] = w^(m*k), so every normal-domain output is a pure
# power of the root w. Taking the discrete log base 17 of each output reveals
# the root exponent and the physical-position -> frequency-index mapping with
# no ambiguity. Run this, then paste the printed table.

DELTA_POS = 1   # which input coefficient gets the single '1'


@cocotb.test()
async def test_dft_identify(dut):
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, units="ns").start())
    dut.rstn.value = 0
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tdata.value = 0
    dut.s_axis_tlast.value = 0
    dut.m_axis_tready.value = 1
    for _ in range(10):
        await RisingEdge(dut.clk)
    dut.rstn.value = 1
    await RisingEdge(dut.clk)

    # impulse input (value domain), then encode exactly like the real path
    impulse = [0] * N
    impulse[DELTA_POS] = 1

    out_store = []
    cocotb.start_soon(axis_monitor_framed(dut, out_store, N // 2))
    await axis_master_send(dut, build_input_beats(impulse))
    for _ in range(TIMEOUT_CYCLES):
        if len(out_store) >= N // 2:
            break
        await RisingEdge(dut.clk)
    assert len(out_store) == N // 2, "impulse: did not get a full output frame"

    # discrete-log table base 17 over the order-256 subgroup
    dlog = {}
    acc = 1
    for k in range(N):
        dlog.setdefault(acc, k)
        acc = (acc * PRIMITIVE_ROOT) % Q

    nat = reorder_dut_output([d for (d, _) in out_store])  # natural-consec assembly
    if OUTPUT_IN_MONT:
        nat = [from_mont(v) for v in nat]

    exps = [dlog.get(v, None) for v in nat]
    dut._log.info(f"impulse at input coeff {DELTA_POS}")
    dut._log.info(f"out normal[:16] = {nat[:16]}")
    dut._log.info(f"log17(out)[:32] = {exps[:32]}")
    if None in exps:
        dut._log.warning(f"{exps.count(None)} outputs are NOT powers of 17 -> "
                         f"either wrong root family or a residual Montgomery "
                         f"factor; paste 'out normal' so it can be decoded.")
    else:
        diffs = {(exps[i] - exps[i - 1]) % N for i in range(1, 16)}
        dut._log.info(f"consecutive log differences (first 16): {sorted(diffs)} "
                      f"-> a single constant step means natural order; the step "
                      f"value is (root_exponent * {DELTA_POS}).")
    dut._log.info("Paste the two arrays above to finish the configuration.")