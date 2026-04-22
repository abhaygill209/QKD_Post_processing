import os
import math
import glob
import sys

# ============================================================
# ===================== USER CONFIG ===========================
# ============================================================

# Example:
# python twiddle_gen.py 64

N = 64
for arg in sys.argv[1:]:
    try:
        N = int(arg)
        break
    except ValueError:
        continue

MOD = 3329
DATA_WIDTH = 32

# Fixed hardware primitive root (Kyber compatible)
PRIMITIVE_ROOT = 17

# Store in SAME folder as script
try:
    BASE_DIR = os.path.dirname(os.path.abspath(__file__))
except NameError:
    BASE_DIR = os.getcwd()

OUTPUT_DIR = BASE_DIR

R = 1 << DATA_WIDTH

# ============================================================
# ===================== MATH UTILITIES ========================
# ============================================================

def compute_omega(N, mod, g):
    """
    Compute primitive N-th root of unity
    """
    return pow(g, (mod - 1) // N, mod)


# ============================================================
# ===================== MONTGOMERY ============================
# ============================================================

def to_montgomery(x, mod, R):
    """
    Convert normal -> Montgomery
    """
    return (x * R) % mod


def hex32(x):
    """
    32-bit uppercase hex
    """
    return f"{x & 0xFFFFFFFF:08X}"


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

    clean_directory()

    print("================================================")
    print("Twiddle ROM Generator (Montgomery / HEX)")
    print("================================================")
    print(f"N               = {N}")
    print(f"MOD             = {MOD}")
    print(f"DATA_WIDTH      = {DATA_WIDTH}")
    print(f"Primitive Root  = {PRIMITIVE_ROOT}")
    print(f"R               = 2^{DATA_WIDTH}")
    print("================================================")

    # --------------------------------------------------------
    # Root of unity
    # --------------------------------------------------------
    omega = compute_omega(N, MOD, PRIMITIVE_ROOT)

    print(f"Omega = {omega} (0x{omega:08X})")

    # --------------------------------------------------------
    # Full twiddle tables
    # --------------------------------------------------------
    twiddles = [pow(omega, k, MOD) for k in range(N // 2)]

    # Inverse twiddles
    intt_twiddles = [twiddles[0]] + twiddles[:0:-1]

    # Convert to Montgomery
    twiddles_mont = [to_montgomery(w, MOD, R) for w in twiddles]
    intt_twiddles_mont = [to_montgomery(w, MOD, R) for w in intt_twiddles]

    stages = int(math.log2(N))

    # ========================================================
    # Write NTT + INTT stage files
    # ========================================================
    # stage_1 -> stage_(stages-1)
    # stage 0 skipped because twiddle always = 1
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

                # Write files
                f_ntt.write(f"{hex32(val_ntt)}\n")
                f_intt.write(f"{hex32(val_intt)}\n")

                # Print copy-paste friendly output
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


if __name__ == "__main__":
    write_stage_files()