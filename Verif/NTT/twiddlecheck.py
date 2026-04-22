# ============================================================
# Correct 64-point CT Forward NTT (Montgomery / HEX)
# Hardware matched:
#   N          = 64
#   Q          = 3329
#   DATA_WIDTH = 32
#   Q_INV      = 2488732927
#   Primitive root = 17
# ============================================================

# ============================================================
# Parameters
# ============================================================
N = 64
Q = 3329
DATA_WIDTH = 32

R = 1 << DATA_WIDTH
R_MASK = R - 1

Q_INV = 2488732927
G = 17


# ============================================================
# Utils
# ============================================================
def compute_omega():
    return pow(G, (Q - 1) // N, Q)


def to_mont(x):
    return (x * R) % Q


def montgomery_reduce(x):
    m = (x * Q_INV) & R_MASK
    t = (x + m * Q) >> DATA_WIDTH

    if t >= Q:
        t -= Q

    return t


def mont_mul(a, b):
    return montgomery_reduce(a * b)


def h(x):
    return f"0x{x & 0xFFFFFFFF:08X}"


# ============================================================
# CT butterfly
# ============================================================
def butterfly_ct(a, b, w_mont):
    bw = mont_mul(b, w_mont)

    top = a + bw
    if top >= Q:
        top -= Q

    bot = a - bw
    if bot < 0:
        bot += Q

    return top, bot


# ============================================================
# Forward NTT
# ============================================================
def ntt_forward_ct_hex(inp):

    omega = compute_omega()

    # convert input to Montgomery
    vec = [to_mont(x) for x in inp]

    print("================================================")
    print("Correct 64-point Forward CT NTT (HEX)")
    print("================================================")
    print(f"N                = {N}")
    print(f"Q                = {Q}")
    print(f"Q_INV            = {Q_INV}")
    print(f"Primitive Root    = {G}")
    print(f"Omega             = {omega} ({h(omega)})")
    print("================================================")

    print("\nInitial Input (Montgomery HEX):")
    for i, v in enumerate(vec):
        print(f"A[{i:2d}] = {h(v)}")

    # --------------------------------------------------------
    # Radix-2 CT stages
    # --------------------------------------------------------
    stage = 1
    m = 2

    while m <= N:

        half = m // 2
        step = N // m

        print("\n================================================")
        print(f"STAGE {stage}")
        print("================================================")
        print(f"Span           = {m}")
        print(f"Half span       = {half}")
        print(f"Twiddle step    = {step}")

        for k in range(0, N, m):

            print(f"\nGroup Start = {k}")

            for j in range(half):

                idx1 = k + j
                idx2 = k + j + half

                tw_idx = j * step

                w = pow(omega, tw_idx, Q)
                w_mont = to_mont(w)

                a = vec[idx1]
                b = vec[idx2]

                top, bot = butterfly_ct(a, b, w_mont)

                vec[idx1] = top
                vec[idx2] = bot

                print(
                    f"BF ({idx1:2d},{idx2:2d}) | "
                    f"tw_idx={tw_idx:2d} | "
                    f"w={h(w)} | "
                    f"w_mont={h(w_mont)} | "
                    f"a={h(a)} | "
                    f"b={h(b)} -> "
                    f"top={h(top)} | "
                    f"bot={h(bot)}"
                )

        print("\nStage Output:")
        for i, val in enumerate(vec):
            print(f"A[{i:2d}] = {h(val)}")

        m *= 2
        stage += 1

    return vec


# ============================================================
# Main
# ============================================================
if __name__ == "__main__":

    # Example:
    x = list(range(N))

    # custom:
    # x = [0,0,0] + list(range(1, N-2))

    out = ntt_forward_ct_hex(x)

    print("\n================================================")
    print("FINAL OUTPUT (Montgomery HEX)")
    print("================================================")

    for i, val in enumerate(out):
        print(f"Y[{i:2d}] = {h(val)}")

    print("================================================")
    