import os
import math
import glob
import sys

# ============================================================
# ===================== USER CONFIG ===========================
# ============================================================

# Usage:
# python twiddle_gen.py 8

N = 8
for arg in sys.argv[1:]:
    try:
        N = int(arg)
        break
    except ValueError:
        continue

MOD = 3329
DATA_WIDTH = 32

# Kyber primitive root
PRIMITIVE_ROOT = 17

# Montgomery configuration (IMPORTANT)
R_BITS = 16
R = 1 << R_BITS

# Output directory
try:
    BASE_DIR = os.path.dirname(os.path.abspath(__file__))
except NameError:
    BASE_DIR = os.getcwd()

OUTPUT_DIR = BASE_DIR

# ============================================================
# ===================== UTILITIES =============================
# ============================================================

def is_power_of_two(n):
    return (n & (n - 1)) == 0 and n != 0

def compute_omega(N, mod, g):
    return pow(g, (mod - 1) // N, mod)

def to_montgomery(x, mod, R):
    return (x * R) % mod

def hex32(x):
    return f"{x & 0xFFFFFFFF:08X}"

def compute_q_inv(q, r_bits):
    """
    Compute Q_INV = -q^{-1} mod 2^r_bits
    """
    R = 1 << r_bits
    q_inv = pow(q, -1, R)
    return (-q_inv) % R

# ============================================================
# ===================== CLEAN DIRECTORY =======================
# ============================================================

def clean_directory():
    files = glob.glob(os.path.join(OUTPUT_DIR, "stage_*.mem"))
    for f in files:
        os.remove(f)

    files = glob.glob(os.path.join(OUTPUT_DIR, "intt_stage_*.mem"))
    for f in files:
        os.remove(f)

    print("Old memory files removed")

# ============================================================
# ===================== MAIN =================================
# ============================================================

def write_stage_files():

    if not is_power_of_two(N):
        raise ValueError("N must be a power of 2")

    clean_directory()

    print("================================================")
    print("Twiddle ROM Generator (Montgomery / HEX)")
    print("================================================")
    print(f"N               = {N}")
    print(f"MOD             = {MOD}")
    print(f"DATA_WIDTH      = {DATA_WIDTH}")
    print(f"R_BITS          = {R_BITS}")
    print(f"Primitive Root  = {PRIMITIVE_ROOT}")

    # --------------------------------------------------------
    # Montgomery inverse
    # --------------------------------------------------------
    Q_INV = compute_q_inv(MOD, R_BITS)

    print("------------------------------------------------")
    print(f"Q               = {MOD}")
    print(f"Q_INV (Mont)    = {Q_INV} (0x{Q_INV:08X})")
    print(f"Check: (Q * Q_INV) mod 2^{R_BITS} = {(MOD * Q_INV) % (1 << R_BITS)}")
    print("------------------------------------------------")

    # --------------------------------------------------------
    # Root of unity
    # --------------------------------------------------------
    omega = compute_omega(N, MOD, PRIMITIVE_ROOT)

    # Sanity checks
    assert pow(omega, N, MOD) == 1, "Not N-th root"
    assert pow(omega, N//2, MOD) != 1, "Not primitive"

    print(f"Omega           = {omega} (0x{omega:08X})")
    print(f"R mod Q         = {R % MOD}")
    print("================================================")

    # --------------------------------------------------------
    # Twiddles
    # --------------------------------------------------------
    twiddles = [pow(omega, k, MOD) for k in range(N // 2)]

    # Correct inverse twiddles
    omega_inv = pow(omega, MOD - 2, MOD)
    intt_twiddles = [pow(omega_inv, k, MOD) for k in range(N // 2)]

    # Convert to Montgomery
    twiddles_mont = [to_montgomery(w, MOD, R) for w in twiddles]
    intt_twiddles_mont = [to_montgomery(w, MOD, R) for w in intt_twiddles]

    stages = int(math.log2(N))

    # ========================================================
    # Write stage files
    # ========================================================
    for stage in range(1, stages):

        step = 2 ** (stage + 1)
        half_step = step // 2

        ntt_file = os.path.join(OUTPUT_DIR, f"stage_{stage}.mem")
        intt_file = os.path.join(OUTPUT_DIR, f"intt_stage_{stage}.mem")

        print("\n================================================")
        print(f"STAGE {stage}")
        print(f"Butterfly span      = {step}")
        print(f"Twiddles per stage  = {half_step}")
        print("================================================")

        with open(ntt_file, "w") as f_ntt, open(intt_file, "w") as f_intt:

            for i in range(half_step):

                index = i * (N // step)

                val_ntt = twiddles_mont[index]
                val_intt = intt_twiddles_mont[index]

                f_ntt.write(f"{hex32(val_ntt)}\n")
                f_intt.write(f"{hex32(val_intt)}\n")

                print(
                    f"i={i:2d} | "
                    f"tw_idx={index:2d} | "
                    f"NTT={hex32(val_ntt)} | "
                    f"INTT={hex32(val_intt)}"
                )

        print(f"\nWritten: stage_{stage}.mem")
        print(f"Written: intt_stage_{stage}.mem")

    print("\n================================================")
    print("Twiddle ROM generation complete.")
    print("================================================")


# ============================================================
# ===================== RUN ==================================
# ============================================================

if __name__ == "__main__":
    write_stage_files()