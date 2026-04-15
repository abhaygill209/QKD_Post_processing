# ============================================================
# Project Configuration
# ============================================================

RTL_DIR = ../../RTL

# ============================================================
# RTL Sources
# ============================================================

RTL_SRC = \
	$(RTL_DIR)/INTT_engine.v \
	$(RTL_DIR)/MontgomeryReductionUnit.v \
	$(RTL_DIR)/Delay_unit.v \
	$(RTL_DIR)/ButterflyUnitGS.v \
	$(RTL_DIR)/Buffer.v \
	$(RTL_DIR)/MUX2x1.v \
	$(RTL_DIR)/TwiddleRom.v 

# ============================================================
# Testbench
# ============================================================

TB_DELAY = tb_INTT.v

# ============================================================
# Tools
# ============================================================

IVERILOG = iverilog
VVP      = vvp
GTKWAVE  = gtkwave

FLAGS = -g2012 -Wall

# ============================================================
# Output Files
# ============================================================

TOP_DELAY = tb_INTT
OUT_DELAY = simv_INTT
VCD_DELAY = tb_INTT.vcd

# ============================================================
# Targets
# ============================================================

.PHONY: all compile run wave view clean

# Default target
all: run

# Compile
compile:
	@echo "Compiling..."
	$(IVERILOG) $(FLAGS) -s $(TOP_DELAY) -o $(OUT_DELAY) $(RTL_SRC) $(TB_DELAY)

# Run simulation
run: compile
	@echo "Running simulation..."
	$(VVP) $(OUT_DELAY)

# Open waveform
wave:
	@if [ -f $(VCD_DELAY) ]; then \
		echo "Opening GTKWave..."; \
		$(GTKWAVE) $(VCD_DELAY) & \
	else \
		echo "Error: VCD not found. Run 'make run' first."; \
	fi

# Run + open waveform (best for debug)
view: run
	$(GTKWAVE) $(VCD_DELAY) &

# Clean
clean:
	@echo "Cleaning..."
	rm -f $(OUT_DELAY) *.vcd *.mem