TOPLEVEL_LANG = verilog
SIM = icarus

TOPLEVEL = NTT_engine
MODULE = NTT_tb

VERILOG_SOURCES = \
../../RTL/Twiddle_ROM_inst/NTT_engine.v \
../../RTL/ButterflyUnitCT.v \
../../RTL/Delay_unit.v \
../../RTL/MontgomeryReductionUnit.v \
../../RTL/TwiddleRom.v \
../../RTL/MUX2x1.v \
../../RTL/Buffer.v \
../../RTL/ToMont.v \
../../RTL/FromMont.v

COMPILE_ARGS += -g2012

WAVES = 1

export COCOTB_REDUCED_LOG_FMT=1

include $(shell cocotb-config --makefiles)/Makefile.sim





# # ============================================================
# # Project Configuration
# # ============================================================

# RTL_DIR = ../../RTL

# # ============================================================
# # RTL Sources
# # ============================================================

# RTL_SRC = \
# 	$(RTL_DIR)/Twiddle_ROM_inst/NTT_engine.v \
# 	$(RTL_DIR)/MontgomeryReductionUnit.v \
# 	$(RTL_DIR)/ToMont.v \
# 	$(RTL_DIR)/Delay_unit.v \
# 	$(RTL_DIR)/ButterflyUnitCT.v \
# 	$(RTL_DIR)/Buffer.v \
# 	$(RTL_DIR)/MUX2x1.v \
# 	$(RTL_DIR)/TwiddleRom.v 

# # ============================================================
# # Testbench
# # ============================================================

# TB_DELAY = NTT_tb.v

# # ============================================================
# # Tools
# # ============================================================

# IVERILOG = iverilog
# VVP      = vvp
# GTKWAVE  = gtkwave

# FLAGS = -g2012 -Wall

# # ============================================================
# # Output Files
# # ============================================================

# TOP_DELAY = tb_NTT
# OUT_DELAY = simv_NTT
# VCD_DELAY = tb_NTT.vcd

# # ============================================================
# # Targets
# # ============================================================

# .PHONY: all compile run wave view clean

# # Default target
# all: run

# # Compile
# compile:
# 	@echo "Compiling..."
# 	$(IVERILOG) $(FLAGS) -s $(TOP_DELAY) -o $(OUT_DELAY) $(RTL_SRC) $(TB_DELAY)

# # Run simulation
# run: compile
# 	@echo "Running simulation..."
# 	$(VVP) $(OUT_DELAY)

# # Open waveform
# wave:
# 	@if [ -f $(VCD_DELAY) ]; then \
# 		echo "Opening GTKWave..."; \
# 		$(GTKWAVE) $(VCD_DELAY) & \
# 	else \
# 		echo "Error: VCD not found. Run 'make run' first."; \
# 	fi

# # Run + open waveform (best for debug)
# view: run
# 	$(GTKWAVE) $(VCD_DELAY) &

# # Clean
# clean:
# 	@echo "Cleaning..."
# 	rm -f $(OUT_DELAY) *.vcd *.mem