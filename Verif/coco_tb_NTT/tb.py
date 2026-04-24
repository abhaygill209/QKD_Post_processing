import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# =========================================================
# CONFIG
# =========================================================
N = 256  # 🔥 Change this to 8,16,32,...

INPUT_SEQUENCE = list(range(1, N + 1))

MOD = 3329
R = 1 << 16
R_INV = pow(R, -1, MOD)

# =========================================================
# MONTGOMERY HELPERS
# =========================================================
def to_mont(x):
    return (x * R) % MOD

def from_mont(x):
    return (x * R_INV) % MOD


# =========================================================
# AXI DRIVER
# =========================================================
async def axi_send_frame(dut, input_log):

    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value  = 0

    await RisingEdge(dut.clk)

    for i in range(0, N, 2):

        a_raw = INPUT_SEQUENCE[i]
        b_raw = INPUT_SEQUENCE[i + 1]

        # Convert to Montgomery
        a = to_mont(a_raw)
        b = to_mont(b_raw)

        data = (b << 32) | a

        # Drive data once
        dut.s_axis_tdata.value = data
        dut.s_axis_tlast.value = (i == N - 2)

        accepted = False

        while not accepted:
            await RisingEdge(dut.clk)
            #dut.s_axis_tvalid.value = 1
            # 🔥 RANDOM TVALID
            if random.random() < 0.7:
                dut.s_axis_tvalid.value = 1
            else:
                dut.s_axis_tvalid.value = 0

            # Handshake
            if dut.s_axis_tvalid.value and dut.s_axis_tready.value:
                input_log.append((a, b))

                dut._log.info(
                    f"📥 INPUT: "
                    f"A_raw={a_raw}, B_raw={b_raw} | "
                    f"A_mont=0x{a:08X}, B_mont=0x{b:08X}"
                )

                accepted = True

        # After acceptance, deassert valid for 1 cycle (optional but clean)
        dut.s_axis_tvalid.value = 0
        await RisingEdge(dut.clk)

    # Deassert at end
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value  = 0
    # Deassert
    await RisingEdge(dut.clk)
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value  = 0


# =========================================================
# OUTPUT MONITOR
# =========================================================
async def monitor_output(dut, output_log):

    while True:
        await RisingEdge(dut.clk)

        if dut.m_axis_tvalid.value and dut.m_axis_tready.value:

            data = dut.m_axis_tdata.value.integer

            a = data & 0xFFFFFFFF
            b = (data >> 32) & 0xFFFFFFFF

            a_norm = from_mont(a)
            b_norm = from_mont(b)

            output_log.append((a_norm, b_norm))

            dut._log.info(
                f"📤 OUTPUT: "
                f"A_mont=0x{a:08X}, B_mont=0x{b:08X} | "
                f"A={a_norm}, B={b_norm}, TLAST={int(dut.m_axis_tlast.value)}"
            )


# =========================================================
# MAIN TEST
# =========================================================
@cocotb.test()
async def ntt_test(dut):

    # Clock
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # Reset
    dut.rstn.value = 0
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tdata.value = 0
    dut.s_axis_tlast.value = 0
    # if random.random() < 0.7:
    #     dut.m_axis_tready.value = 1
    # else:
    #     dut.m_axis_tready.value = 0
    dut.m_axis_tready.value = 1

    await Timer(50, units="ns")
    dut.rstn.value = 1

    dut._log.info(f"🚀 Running NTT test with N = {N}")

    input_log = []
    output_log = []

    cocotb.start_soon(monitor_output(dut, output_log))

    # =====================================================
    # SEND INPUT
    # =====================================================
    await axi_send_frame(dut, input_log)

    # =====================================================
    # WAIT FOR OUTPUT
    # =====================================================
    expected_words = N // 2

    timeout = 5000
    for _ in range(timeout):
        await RisingEdge(dut.clk)
        if len(output_log) >= expected_words:
            break
    else:
        raise Exception("❌ Timeout waiting for output")

    # =====================================================
    # RESULTS
    # =====================================================
    dut._log.info(f"\n📥 INPUT LOG (Mont): {input_log}")
    dut._log.info(f"📤 OUTPUT LOG (Normal): {output_log}")

    dut._log.info("✅ TEST COMPLETED")
