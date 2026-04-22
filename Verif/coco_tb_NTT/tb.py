import cocotb
import random
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from collections import deque

# =========================================================
# INPUT DATA (1 → 8)
# =========================================================
INPUT_SEQUENCE = [1,2,3,4,5,6,7,8]


# =========================================================
# AXI DRIVER (DETERMINISTIC)
# =========================================================
async def axi_send_fft_frame(dut, input_log):

    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value  = 0

    await RisingEdge(dut.clk)

    # Pack as (1,2), (3,4), ...
    for i in range(0, len(INPUT_SEQUENCE), 2):

        a = INPUT_SEQUENCE[i]
        b = INPUT_SEQUENCE[i+1]

        # 16-bit packing
        data = (b << 32) | a

        dut.s_axis_tdata.value = data
        dut.s_axis_tvalid.value = 1
        dut.s_axis_tlast.value = (i == len(INPUT_SEQUENCE) - 2)

        # Wait for handshake
        while True:
            await RisingEdge(dut.clk)

            if int(dut.s_axis_tvalid.value) and int(dut.s_axis_tready.value):
                # ✅ Log input when handshake happens
                input_log.append((a, b))
                dut._log.info(f"📥 INPUT HANDSHAKE: A={a}, B={b}")
                break

    # Deassert
    await RisingEdge(dut.clk)
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tlast.value  = 0


# =========================================================
# OUTPUT MONITOR (HANDSHAKE-BASED)
# =========================================================
async def monitor_output(dut, output_log):

    while True:
        await RisingEdge(dut.clk)

        v = int(dut.m_axis_tvalid.value)
        r = int(dut.m_axis_tready.value)
        l = int(dut.m_axis_tlast.value)

        if v and r:
            data = dut.m_axis_tdata.value.integer

            # ✅ 32-bit unpacking
            a = data & 0xFFFFFFFF
            b = (data >> 32) & 0xFFFFFFFF

            output_log.append((a, b))

            dut._log.info(
                f"📤 OUTPUT HANDSHAKE: A=0x{a:08X}, B=0x{b:08X}, TLAST={l}"
            )


# =========================================================
# BACKPRESSURE
# =========================================================
async def random_backpressure(dut):
    while True:
        await RisingEdge(dut.clk)
        dut.m_axis_tready.value = 1 if random.random() < 0.7 else 0
        #dut.m_axis_tready.value = 1


# =========================================================
# MAIN TEST
# =========================================================
@cocotb.test()
async def fft_8point_test(dut):

    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    # Reset
    dut.rstn.value = 0
    dut.s_axis_tvalid.value = 0
    dut.s_axis_tdata.value = 0
    dut.s_axis_tlast.value = 0
    dut.m_axis_tready.value = 1

    await Timer(50, units="ns")
    dut.rstn.value = 1

    # Logs
    input_log = []
    output_log = []

    # Start monitor
    cocotb.start_soon(monitor_output(dut, output_log))
    cocotb.start_soon(random_backpressure(dut))

    # =====================================================
    # SEND FFT INPUT
    # =====================================================
    await axi_send_fft_frame(dut, input_log)

    # =====================================================
    # WAIT FOR OUTPUT COMPLETION
    # =====================================================
    expected_words = len(INPUT_SEQUENCE) // 2

    timeout = 2000
    for _ in range(timeout):
        await RisingEdge(dut.clk)
        if len(output_log) >= expected_words:
            break
    else:
        raise Exception("❌ Timeout waiting for FFT output")

    # =====================================================
    # PRINT RESULTS
    # =====================================================
    dut._log.info(f"\n📥 INPUT LOG: {input_log}")
    dut._log.info(f"📤 OUTPUT LOG: {output_log}")

    dut._log.info("✅ FFT TEST COMPLETED")