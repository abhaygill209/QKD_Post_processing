import cocotb
import math
from cocotb.triggers import RisingEdge
from cocotb.clock import Clock

Q = 12289
N = 8

def modinv(a, q):
    return pow(a, -1, q)

R = 1 << 14
R_inv = modinv(R, Q)

def mont_to_normal(x):
    return (x * R_inv) % Q

def get_nth_root_of_unity(n, q):
    g = 11
    return pow(g, (q - 1) // n, q)

ROOT = get_nth_root_of_unity(N, Q)

def ntt_ref(a):
    res = [0] * N
    for k in range(N):
        for n in range(N):
            res[k] += a[n] * pow(ROOT, k * n, Q)
        res[k] %= Q
    return res

async def reset_dut(dut):
    dut.rst.value = 1
    dut.valid_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    dut.stall_i.value = 0
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.rst.value = 0

async def driver(dut, data):
    dut.valid_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0
    await RisingEdge(dut.clk)
    for i in range(0, len(data), 2):
        await RisingEdge(dut.clk)
        dut.valid_i.value = 1
        dut.a_i.value = data[i]
        dut.b_i.value = data[i + 1]
    await RisingEdge(dut.clk)
    dut.valid_i.value = 0
    dut.a_i.value = 0
    dut.b_i.value = 0

async def monitor(dut, output_list):
    while True:
        await RisingEdge(dut.clk)
        if dut.valid_o.value == 1:
            a = mont_to_normal(int(dut.a_o.value))
            b = mont_to_normal(int(dut.b_o.value))
            output_list.append(a)
            output_list.append(b)
            print(f"OUT: {a}, {b}")


# @cocotb.test()
# async def test_latency(dut):
#     cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
#     await reset_dut(dut)

#     # send exactly one valid pulse: a=1, b=0
#     await RisingEdge(dut.clk)
#     dut.valid_i.value = 1
#     dut.a_i.value = 1
#     dut.b_i.value = 0
#     await RisingEdge(dut.clk)
#     dut.valid_i.value = 0
#     dut.a_i.value = 0
#     dut.b_i.value = 0

#     # count cycles until valid_o goes high
#     cycles = 0
#     for _ in range(100):
#         await RisingEdge(dut.clk)
#         cycles += 1
#         if dut.valid_o.value == 1:
#             a = mont_to_normal(int(dut.a_o.value))
#             b = mont_to_normal(int(dut.b_o.value))
#             print(f"PIPELINE LATENCY: {cycles} cycles")
#             print(f"a_o = {a}")
#             print(f"b_o = {b}")
#             break
#     else:
#         print("ERROR: valid_o never went high in 100 cycles")


@cocotb.test()
async def test_ntt_streaming(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    await reset_dut(dut)
    print("Nth root of unity:", ROOT)

    input_data1 = [1,2,3,4,5,6,7,8] #normal order
    input_data2 = [1,5,3,7,2,6,4,8] #bit-reverse of input_data1

    expected1 = ntt_ref(input_data1)
    expected2 = ntt_ref(input_data2)
    print("INPUT 1:", input_data1)
    print("INPUT 2:", input_data2)
    print("EXPECTED 1:", expected1)
    print("EXPECTED 2:", expected2)

    outputs = []
    cocotb.start_soon(monitor(dut, outputs))

    # Drive both vectors back-to-back with no gap
    await driver(dut, input_data1 + input_data2)

    for _ in range(100):
        await RisingEdge(dut.clk)

    print("DUT 1:", outputs[:N])
    print("DUT 2:", outputs[N:2*N])

    assert outputs[:N] == expected1, f"NTT MISMATCH (input 1)\nGot:      {outputs[:N]}\nExpected: {expected1}"
    assert outputs[N:2*N] == expected2, f"NTT MISMATCH (input 2)\nGot:      {outputs[N:2*N]}\nExpected: {expected2}"

    print("PASS")
# import random

# def bit_reverse_order(data):
#     """Return data reordered by bit-reversed indices."""
#     n = len(data)
#     bits = int(math.log2(n))
#     return [data[int(bin(i)[2:].zfill(bits)[::-1], 2)] for i in range(n)]

# @cocotb.test()
# async def test_ntt_streaming(dut):
#     cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
#     await reset_dut(dut)
#     print("Nth root of unity:", ROOT)

#     # 10 edge case input vectors
#     test_inputs = [
#         [0] * N,                                         # 1. All zeros
#         [1] * N,                                         # 2. All ones
#         [Q- 1] * N,                                      # 3. All max (mod-1)
#         list(range(1, N + 1)),                           # 4. Sequential 1..N
#         list(range(N, 0, -1)),                           # 5. Reverse sequential
#         [1] + [0] * (N - 1),                             # 6. Impulse at index 0
#         [0] * (N - 1) + [1],                             # 7. Impulse at last index
#         [1, 0] * (N // 2),                               # 8. Alternating 1,0
#         [random.randint(0, Q - 1) for _ in range(N)],    # 9. Random
#         [Q - 1, 0] * (N // 2),                           # 10. Alternating max,0
#     ]

#     input_names = [
#         "All zeros",
#         "All ones",
#         "All max (MODULUS-1)",
#         "Sequential 1..N",
#         "Reverse sequential",
#         "Impulse at index 0",
#         "Impulse at last index",
#         "Alternating 1,0",
#         "Random",
#         "Alternating max,0",
#     ]

#     # Build paired list: (normal, bit_reversed) for each input
#     pairs = [(inp, bit_reverse_order(inp)) for inp in test_inputs]

#     # Flatten all inputs into one continuous stream: normal then bit-reversed interleaved
#     flat_stream = []
#     for normal, brv in pairs:
#         flat_stream += normal + brv

#     outputs = []
#     cocotb.start_soon(monitor(dut, outputs))

#     # Drive entire stream with no gaps
#     await driver(dut, flat_stream)

#     # Wait enough cycles for all outputs to flush
#     for _ in range(200):
#         await RisingEdge(dut.clk)

#     print(f"\nTotal outputs captured: {len(outputs)}")

#     all_passed = True
#     for i, ((normal, brv), name) in enumerate(zip(pairs, input_names)):
#         base = i * 2 * N
#         got_normal = outputs[base       : base +     N]
#         got_brv    = outputs[base + N   : base + 2 * N]

#         expected_normal = ntt_ref(normal)
#         expected_brv    = ntt_ref(brv)

#         ok_normal = got_normal == expected_normal
#         ok_brv    = got_brv    == expected_brv

#         status_n = "PASS" if ok_normal else "FAIL"
#         status_b = "PASS" if ok_brv    else "FAIL"

#         print(f"\n[{i+1:02d}] {name}")
#         print(f"  Normal   [{status_n}]  Input:    {normal}")
#         print(f"            Got:      {got_normal}")
#         print(f"            Expected: {expected_normal}")
#         print(f"  Bit-Rev  [{status_b}]  Input:    {brv}")
#         print(f"            Got:      {got_brv}")
#         print(f"            Expected: {expected_brv}")

#         if not ok_normal or not ok_brv:
#             all_passed = False

#     assert all_passed, "One or more NTT test cases FAILED — see log above"
#     print("\nAll 20 test cases (10 normal + 10 bit-reversed) PASSED")