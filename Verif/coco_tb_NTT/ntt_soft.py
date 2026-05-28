# =========================================================
# CONFIG
# =========================================================
MOD = 3329
N = 256
PRIMITIVE_ROOT = 17

INPUT_SEQUENCE = list(range(1, N + 1))


# =========================================================
# ROOT OF UNITY
# =========================================================
def get_omega():
    return pow(PRIMITIVE_ROOT, (MOD - 1) // N, MOD)


# =========================================================
# BIT REVERSAL
# =========================================================
def bit_reverse(x, bits):
    y = 0
    for i in range(bits):
        if (x >> i) & 1:
            y |= 1 << (bits - 1 - i)
    return y


def bit_reverse_array(a):
    n = len(a)
    bits = n.bit_length() - 1
    res = [0] * n
    for i in range(n):
        res[bit_reverse(i, bits)] = a[i]
    return res


# =========================================================
# NTT (DIT - with bit reversal)
# =========================================================
def ntt(a):
    a = bit_reverse_array(a.copy())
    omega = get_omega()

    length = 2
    while length <= N:
        w_len = pow(omega, N // length, MOD)

        for i in range(0, N, length):
            w = 1
            for j in range(length // 2):
                u = a[i + j]
                v = (a[i + j + length // 2] * w) % MOD

                a[i + j] = (u + v) % MOD
                a[i + j + length // 2] = (u - v) % MOD

                w = (w * w_len) % MOD

        length *= 2

    return a


# =========================================================
# NTT (NO bit reversal → many HW designs match this)
# =========================================================
def ntt_no_bitrev(a):
    a = a.copy()
    omega = get_omega()

    length = 2
    while length <= N:
        w_len = pow(omega, N // length, MOD)

        for i in range(0, N, length):
            w = 1
            for j in range(length // 2):
                u = a[i + j]
                v = (a[i + j + length // 2] * w) % MOD

                a[i + j] = (u + v) % MOD
                a[i + j + length // 2] = (u - v) % MOD

                w = (w * w_len) % MOD

        length *= 2

    return a


# =========================================================
# FLATTEN HW OUTPUT (pairs → full vector)
# =========================================================
def flatten_pairs(pairs):
    res = []
    for a, b in pairs:
        res.append(a)
        res.append(b)
    return res


# =========================================================
# ================== USER INPUT ============================
# =========================================================
# 🔥 PASTE YOUR COCOTB FRAME OUTPUT HERE
# Format: [(A0,B0), (A1,B1), ...]
# Example placeholder:

hw_pairs = [
    # (a, b),
    # (a, b),
]

# =========================================================
# MAIN CHECK
# =========================================================
if __name__ == "__main__":

    # Reference outputs
    ref_bitrev = ntt(INPUT_SEQUENCE)
    ref_natural = ntt_no_bitrev(INPUT_SEQUENCE)

    print("\n=== REFERENCE (BIT-REVERSED ORDER) ===")
    for i, v in enumerate(ref_bitrev):
        print(f"{i:3d}: {v}")

    print("\n=== REFERENCE (NATURAL ORDER) ===")
    for i, v in enumerate(ref_natural):
        print(f"{i:3d}: {v}")

    # If user pasted HW output → compare
    if hw_pairs:
        hw = flatten_pairs(hw_pairs)

        print("\n=== COMPARISON ===")

        match_bitrev = True
        match_natural = True

        for i in range(N):
            if hw[i] != ref_bitrev[i]:
                match_bitrev = False
            if hw[i] != ref_natural[i]:
                match_natural = False

        if match_bitrev:
            print("✅ MATCHES BIT-REVERSED NTT")

        if match_natural:
            print("✅ MATCHES NATURAL ORDER NTT")

        if not match_bitrev and not match_natural:
            print("❌ NO MATCH — first mismatch:")

            for i in range(N):
                if hw[i] != ref_bitrev[i] and hw[i] != ref_natural[i]:
                    print(
                        f"Index {i}: HW={hw[i]}, "
                        f"BITREV={ref_bitrev[i]}, NATURAL={ref_natural[i]}"
                    )
                    break