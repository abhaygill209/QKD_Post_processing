import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
import random

DATA_WIDTH = 32
N = 2**6
MOD = 12289


def mod_q(x):
    return x % MOD


def butterfly_gs(a, b, w):
    """Gentleman-Sande butterfly model"""
    t = mod_q((a - b) * w)
    u = mod_q(a + b)
    return u, t


async def reset_dut(dut):
    dut.rst.value = 1
    dut.valid_i.value = 0
    dut.stall_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)


@cocotb.test()
async def test_streaming_intt_pairs(dut):
    """
    Sends input in folding pairs:
      (0, N/2), (1, N/2+1), ...
    and checks streamed output when valid_o rises.

    Assumes DUT eventually emits natural order pairs:
      (0,1), (2,3), ...
    """

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    await reset_dut(dut)

    # -----------------------------
    # Generate deterministic input
    # -----------------------------
    input_data = [random.randint(0, MOD - 1) for _ in range(N)]

    # Folding pair stream: (0,32), (1,33), ... for N=64
    input_pairs = []
    for i in range(N // 2):
        input_pairs.append((input_data[i], input_data[i + N // 2]))

    # -----------------------------
    # Golden reference placeholder
    # -----------------------------
    # NOTE:
    # Replace this with your actual inverse NTT software model.
    # For now this assumes DUT reorders into natural adjacent pairs.
    golden_pairs = []
    for i in range(0, N, 2):
        golden_pairs.append((input_data[i], input_data[i + 1]))

    # -----------------------------
    # Drive input stream
    # -----------------------------
    dut.valid_i.value = 1

    for a, b in input_pairs:
        await RisingEdge(dut.clk)
        dut.a_i.value = a
        dut.b_i.value = b
        dut._log.info(f"Input pair: ({a}, {b})")

    await RisingEdge(dut.clk)
    dut.valid_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0

    # -----------------------------
    # Monitor output stream
    # -----------------------------
    received = []
    timeout_cycles = 2000

    for cycle in range(timeout_cycles):
        await RisingEdge(dut.clk)

        if dut.valid_o.value:
            a_out = int(dut.a_o.value)
            b_out = int(dut.b_o.value)
            received.append((a_out, b_out))
            dut._log.info(f"Output pair: ({a_out}, {b_out})")

            idx = len(received) - 1
            if idx < len(golden_pairs):
                exp_a, exp_b = golden_pairs[idx]
                assert a_out == exp_a, (
                    f"Mismatch at pair {idx}: got a={a_out}, expected {exp_a}"
                )
                assert b_out == exp_b, (
                    f"Mismatch at pair {idx}: got b={b_out}, expected {exp_b}"
                )

            if len(received) == len(golden_pairs):
                break

    assert len(received) == len(golden_pairs), (
        f"Timed out: expected {len(golden_pairs)} output pairs, got {len(received)}"
    )

    dut._log.info("Streaming INTT test passed successfully")
