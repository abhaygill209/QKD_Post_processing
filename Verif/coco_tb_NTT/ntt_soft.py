import math

# ============================================================
# CONFIG
# ============================================================
MOD = 3329
PRIMITIVE_ROOT = 17

N = 256   # 🔥 change this to anything (8,16,32,...)

# Montgomery
R_BITS = 16
R = 1 << R_BITS
R_INV = pow(R, -1, MOD)

# ============================================================
# HELPERS
# ============================================================

def to_mont(x):
    return (x * R) % MOD

def from_mont(x):
    return (x * R_INV) % MOD

def mont_mul(a, b):
    return (a * b * R_INV) % MOD

def hex32(x):
    return f"0x{x & 0xFFFFFFFF:08X}"

# ============================================================
# ROOT
# ============================================================

def compute_omega():
    return pow(PRIMITIVE_ROOT, (MOD - 1) // N, MOD)

# ============================================================
# BUTTERFLY
# ============================================================

def butterfly(a, b, w, tag=""):
    t = mont_mul(b, w)
    a_out = (a + t) % MOD
    b_out = (a - t) % MOD

    print(f"{tag} | w={hex32(w)} | t={hex32(t)} | a'={hex32(a_out)}, b'={hex32(b_out)}")
    return a_out, b_out

# ============================================================
# GENERIC CT NTT
# ============================================================

def ntt_ct(x):

    assert (len(x) & (len(x)-1)) == 0, "N must be power of 2"

    N = len(x)
    logN = int(math.log2(N))

    omega = compute_omega()

    print(f"\nN = {N}")
    print(f"Primitive root ω = {hex32(omega)}")

    # Twiddles
    W_normal = [pow(omega, i, MOD) for i in range(N)]
    W = [to_mont(w) for w in W_normal]

    print("\n===== TWIDDLES (HEX) =====")
    for i, w in enumerate(W):
        print(f"ω^{i} = {hex32(w)}")

    # Convert input
    x = [to_mont(v) for v in x]

    print("\nInput (Mont HEX):")
    for i, val in enumerate(x):
        print(f"x[{i}] = {hex32(val)}")

    # ============================================================
    # GENERIC STAGES
    # ============================================================
    for stage in range(logN):

        m = 1 << (stage + 1)
        half = m >> 1

        print(f"\n===== STAGE {stage+1} =====")
        print(f"m = {m}, half = {half}")

        for k in range(0, N, m):
            for j in range(half):

                tw_idx = j * (N // m)
                w = W[tw_idx]

                i1 = k + j
                i2 = k + j + half

                x[i1], x[i2] = butterfly(
                    x[i1], x[i2], w,
                    tag=f"S{stage+1} BF({i1},{i2}) uses ω^{tw_idx}"
                )

        print(f"After Stage {stage+1}:")
        for i, val in enumerate(x):
            print(f"x[{i}] = {hex32(val)}")

    # Convert back
    x_out = [from_mont(v) for v in x]

    print("\nFinal Output (HEX):")
    for i, val in enumerate(x_out):
        print(f"X[{i}] = {hex32(val)}")

    return x_out

# ============================================================
# TEST
# ============================================================

if __name__ == "__main__":

    input_data = list(range(1, N+1))

    print("Input:")
    for i, v in enumerate(input_data):
        print(f"x[{i}] = {hex32(v)}")

    result = ntt_ct(input_data)

    print("\nFinal NTT Output (decimal):", result)