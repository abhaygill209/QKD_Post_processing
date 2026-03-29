import os
import math

# ============================================================
# ===================== USER CONFIG ===========================
# ============================================================

N = 256
MOD = 3329
DATA_WIDTH = 32
OUTPUT_DIR = "twiddle_mem"

R = 1 << DATA_WIDTH   # Montgomery R

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
# ===================== MAIN =================================
# ============================================================

def write_stage_files():
    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)

    print(f"\nMOD = {MOD}, N = {N}, R = {R}")

    # Step 1: primitive root
    g = find_primitive_root(MOD)
    print(f"Primitive root = {g}")

    # Step 2: omega
    omega = compute_omega(N, MOD, g)
    print(f"Omega = {omega}")

    # Step 3: base twiddles
    twiddles = [pow(omega, k, MOD) for k in range(N // 2)]

    # Step 4: convert to Montgomery
    twiddles_mont = [to_montgomery(w, MOD, R) for w in twiddles]

    # Debug print
    print("\nFirst 10 normal twiddles: ", twiddles[:10])
    print("First 10 mont twiddles:  ", twiddles_mont[:10], "\n")

    stages = int(math.log2(N))

    # Step 5: stage-wise files
    for stage in range(stages):
        step = 2 ** (stage + 1)
        half_step = step // 2

        filename = os.path.join(OUTPUT_DIR, f"stage_{stage}.mem")

        with open(filename, "w") as f:
            for i in range(half_step):

                index = i * (N // step)
                value = twiddles_mont[index] & ((1 << DATA_WIDTH) - 1)

                hex_width = DATA_WIDTH // 4
                f.write(f"{value:0{hex_width}X}\n")

        print(f"✔ stage_{stage}.mem ({half_step} entries)")

    print("\nDone.\n")


if __name__ == "__main__":
    write_stage_files()