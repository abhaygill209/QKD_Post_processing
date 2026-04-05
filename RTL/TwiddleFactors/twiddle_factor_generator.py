import os
import math
import glob
import sys

# ============================================================
# ===================== USER CONFIG ===========================
# ============================================================


if len(sys.argv) > 1:
    N = int(sys.argv[1])
else:
    N = 16  # default

MOD = 3329
DATA_WIDTH = 32

# Store in SAME folder as script (NO subfolder)
try:
    BASE_DIR = os.path.dirname(os.path.abspath(__file__))
except NameError:
    BASE_DIR = os.getcwd()

OUTPUT_DIR = BASE_DIR

R = 1 << DATA_WIDTH

# ============================================================
# ===================== MATH UTILITIES ========================
# ============================================================

def prime_factors(n):
    factors = set()
    d = 2
    while d * d <= n:
        while n % d == 0:
            factors.add(d)
            n //= d
        d += 1
    if n > 1:
        factors.add(n)
    return factors

def find_primitive_root(mod):
    phi = mod - 1
    factors = prime_factors(phi)

    for g in range(2, mod):
        ok = True
        for f in factors:
            if pow(g, phi // f, mod) == 1:
                ok = False
                break
        if ok:
            return g

def compute_omega(N, mod, g):
    return pow(g, (mod - 1) // N, mod)

# ============================================================
# ===================== MONTGOMERY ============================
# ============================================================

def to_montgomery(x, mod, R):
    return (x * R) % mod

# ============================================================
# ===================== CLEAN DIRECTORY =======================
# ============================================================

def clean_directory():
    # Only remove .mem files in same directory
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

    print(f"\nMOD = {MOD}, N = {N}, R = {R}")

    # Primitive root
    g = find_primitive_root(MOD)
    print(f"Primitive root = {g}")

    # Omega
    omega = compute_omega(N, MOD, g)
    print(f"Omega = {omega}")

    # Twiddles
    twiddles = [pow(omega, k, MOD) for k in range(N // 2)]
    intt_twiddles = [twiddles[0]] + twiddles[:0:-1]

    # Montgomery
    twiddles_mont = [to_montgomery(w, MOD, R) for w in twiddles]
    intt_twiddles_mont = [to_montgomery(w, MOD, R) for w in intt_twiddles]

    stages = int(math.log2(N))

    # ========================================================
    # Write NTT + INTT stage files (SKIP stage 0)
    # ========================================================

    for stage in range(1, stages):
        step = 2 ** (stage + 1)
        half_step = step // 2

        ntt_file = os.path.join(OUTPUT_DIR, f"stage_{stage}.mem")
        intt_file = os.path.join(OUTPUT_DIR, f"intt_stage_{stage}.mem")

        with open(ntt_file, "w") as f_ntt, open(intt_file, "w") as f_intt:
            for i in range(half_step):

                index = i * (N // step)

                val_ntt = twiddles_mont[index] & ((1 << DATA_WIDTH) - 1)
                val_intt = intt_twiddles_mont[index] & ((1 << DATA_WIDTH) - 1)

                hex_width = DATA_WIDTH // 4

                f_ntt.write(f"{val_ntt:0{hex_width}X}\n")
                f_intt.write(f"{val_intt:0{hex_width}X}\n")

        print(f"stage_{stage}.mem ({half_step} entries)")
        print(f"intt_stage_{stage}.mem ({half_step} entries)")

    print("\nDone.\n")


if __name__ == "__main__":
    write_stage_files()