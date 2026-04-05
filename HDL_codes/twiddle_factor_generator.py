# import os
# import math

# # ============================================================
# # ===================== USER CONFIG ===========================
# # ============================================================

# N = 8
# MOD = 3329
# DATA_WIDTH = 32
# OUTPUT_DIR = "twiddle_mem"

# R = 1 << DATA_WIDTH   # Montgomery R

# # ============================================================
# # ===================== MATH UTILITIES ========================
# # ============================================================

# def prime_factors(n):
#     factors = set()
#     d = 2
#     while d * d <= n:
#         while n % d == 0:
#             factors.add(d)
#             n //= d
#         d += 1
#     if n > 1:
#         factors.add(n)
#     return factors

# def find_primitive_root(mod):
#     phi = mod - 1
#     factors = prime_factors(phi)

#     for g in range(2, mod):
#         ok = True
#         for f in factors:
#             if pow(g, phi // f, mod) == 1:
#                 ok = False
#                 break
#         if ok:
#             return g

# def compute_omega(N, mod, g):
#     return pow(g, (mod - 1) // N, mod)

# # ============================================================
# # ===================== MONTGOMERY ============================
# # ============================================================

# def to_montgomery(x, mod, R):
#     return (x * R) % mod

# # ============================================================
# # ===================== MAIN =================================
# # ============================================================

# def write_stage_files():
#     if not os.path.exists(OUTPUT_DIR):
#         os.makedirs(OUTPUT_DIR)

#     print(f"\nMOD = {MOD}, N = {N}, R = {R}")

#     # Step 1: primitive root
#     g = find_primitive_root(MOD)
#     print(f"Primitive root = {g}")

#     # Step 2: omega
#     omega = compute_omega(N, MOD, g)
#     print(f"Omega = {omega}")

#     # Step 3: base twiddles
#     twiddles = [pow(omega, k, MOD) for k in range(N // 2)]

#     # Step 4: convert to Montgomery
#     twiddles_mont = [to_montgomery(w, MOD, R) for w in twiddles]

#     # Debug print
#     print("\nnormal twiddles: ", twiddles[:10])
#     print("mont twiddles:  ", twiddles_mont[:10], "\n")

#     stages = int(math.log2(N))

#     # Step 5: stage-wise files
#     for stage in range(stages):
#         step = 2 ** (stage + 1)
#         half_step = step // 2

#         filename = os.path.join(OUTPUT_DIR, f"stage_{stage}.mem")

#         with open(filename, "w") as f:
#             for i in range(half_step):

#                 index = i * (N // step)
#                 value = twiddles_mont[index] & ((1 << DATA_WIDTH) - 1)

#                 hex_width = DATA_WIDTH // 4
#                 f.write(f"{value:0{hex_width}X}\n")

#         print(f"✔ stage_{stage}.mem ({half_step} entries)")

#     print("\nDone.\n")


# if __name__ == "__main__":
#     write_stage_files()

import os
import math
import glob

# ============================================================
# ===================== USER CONFIG ===========================
# ============================================================

N = 8
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
# ===================== CLEAN DIRECTORY =======================
# ============================================================

def clean_directory():
    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)
        return

    files = glob.glob(os.path.join(OUTPUT_DIR, "stage_*.mem"))
    for f in files:
        os.remove(f)

    files = glob.glob(os.path.join(OUTPUT_DIR, "intt_stage_*.mem"))
    for f in files:
        os.remove(f)

    print("🧹 Old memory files removed")

# ============================================================
# ===================== MAIN =================================
# ============================================================

def write_stage_files():
    clean_directory()

    print(f"\nMOD = {MOD}, N = {N}, R = {R}")

    # Step 1: primitive root
    g = find_primitive_root(MOD)
    print(f"Primitive root = {g}")

    # Step 2: omega
    omega = compute_omega(N, MOD, g)
    print(f"Omega = {omega}")

    # Step 3: base twiddles (NTT)
    twiddles = [pow(omega, k, MOD) for k in range(N // 2)]

    # Step 4: INTT twiddles (reverse)
    intt_twiddles = [twiddles[0]] + twiddles[:0:-1]

    # Step 5: Montgomery conversion
    twiddles_mont = [to_montgomery(w, MOD, R) for w in twiddles]
    intt_twiddles_mont = [to_montgomery(w, MOD, R) for w in intt_twiddles]

    # Debug print
    print("\nNTT normal: ", twiddles[:10])
    print("NTT mont:   ", twiddles_mont[:10])
    print("INTT normal:", intt_twiddles[:10])
    print("INTT mont:  ", intt_twiddles_mont[:10], "\n")

    stages = int(math.log2(N))

    # ========================================================
    # Write NTT + INTT stage files
    # ========================================================

    for stage in range(stages):
        step = 2 ** (stage + 1)
        half_step = step // 2

        ntt_file = os.path.join(OUTPUT_DIR, f"stage_{stage}.mem")
        intt_file = os.path.join(OUTPUT_DIR, f"intt_stage_{stage}.mem")

        with open(ntt_file, "w") as f_ntt, open(intt_file, "w") as f_intt:
            for i in range(half_step):

                index = i * (N // step)

                # NTT
                val_ntt = twiddles_mont[index] & ((1 << DATA_WIDTH) - 1)

                # INTT
                val_intt = intt_twiddles_mont[index] & ((1 << DATA_WIDTH) - 1)

                hex_width = DATA_WIDTH // 4

                f_ntt.write(f"{val_ntt:0{hex_width}X}\n")
                f_intt.write(f"{val_intt:0{hex_width}X}\n")

        print(f"✔ stage_{stage}.mem ({half_step} entries)")
        print(f"✔ intt_stage_{stage}.mem ({half_step} entries)")

    print("\nDone.\n")


if __name__ == "__main__":
    write_stage_files()