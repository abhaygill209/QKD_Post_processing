# ============================================================
# Project Configuration
# ============================================================

RTL_DIR = ../../RTL

# ============================================================
# Cocotb Configuration
# ============================================================

TOPLEVEL_LANG = verilog
TOPLEVEL      = INTT_engine
MODULE        = test_intt
SIM          ?= verilator
WAVES         = 1

# ============================================================
# RTL Sources
# ============================================================

VERILOG_SOURCES = \
	$(RTL_DIR)/INTT_engine.v \
	$(RTL_DIR)/MontgomeryReductionUnit.v \
	$(RTL_DIR)/Delay_unit.v \
	$(RTL_DIR)/ButterflyUnitGS.v \
	$(RTL_DIR)/Buffer.v \
	$(RTL_DIR)/MUX2x1.v \
	$(RTL_DIR)/TwiddleRom.v

# ============================================================
# Optional extra compile flags
# ============================================================

COMPILE_ARGS += -g2012 -Wall

# ============================================================
# Include Cocotb simulator makefile
# ============================================================

include $(shell cocotb-config --makefiles)/Makefile.sim
