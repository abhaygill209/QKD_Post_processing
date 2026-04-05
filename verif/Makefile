# ============================================================
# Project Configuration
# ============================================================

RTL_DIR = ../HDL_codes

# ============================================================
# RTL Sources (common for all TBs)
# ============================================================

RTL_SRC = $(RTL_DIR)/polynomialMUL.v \
          $(RTL_DIR)/Delay_units.v \
          $(RTL_DIR)/buffer.v \
          $(RTL_DIR)/mux.v \
          $(RTL_DIR)/mux4x1.v \
          $(RTL_DIR)/butterfly_unit_GS.v \
          $(RTL_DIR)/butterfly_unit_CS.v \
          $(RTL_DIR)/twiddle_rom.v \
          $(RTL_DIR)/NTT_engine.v \
          $(RTL_DIR)/INTT_engine.v \
          $(RTL_DIR)/MontgomeryReductionUnit.v

# ============================================================
# Testbenches
# ============================================================

TB_MUL   = polynomialMUL_tb.v
TB_DELAY = tb_delay_units.v
TB_NTT   = tb_ntt.v
TB_INTT  = tb_intt.v

# ============================================================
# Memory Files
# ============================================================

MEM_DIR = $(RTL_DIR)/twiddle_mem

MEM_FILES = $(MEM_DIR)/stage_1.mem \
            $(MEM_DIR)/stage_2.mem \
            $(MEM_DIR)/intt_stage_1.mem \
            $(MEM_DIR)/intt_stage_2.mem

# ============================================================
# Compiler Settings
# ============================================================

IVERILOG = iverilog
VVP      = vvp

FLAGS = -g2012 -Wall

# ============================================================
# Default Target
# ============================================================

all: run_mul

# ============================================================
# Polynomial MUL Test
# ============================================================

TOP_MUL = tb_polynomialMUL
OUT_MUL = simv_mul
VCD_MUL = polynomialMUL.vcd

compile_mul:
	$(IVERILOG) $(FLAGS) -s $(TOP_MUL) -o $(OUT_MUL) $(RTL_SRC) $(TB_MUL)

run_mul: compile_mul
	@echo "Running Polynomial MUL simulation..."
	cp -f $(MEM_FILES) .
	$(VVP) $(OUT_MUL)

wave_mul:
	@if [ -f $(VCD_MUL) ]; then \
		gtkwave $(VCD_MUL); \
	else \
		echo "Run simulation first: make run_mul"; \
	fi

# ============================================================
# Delay Unit Test
# ============================================================

TOP_DELAY = tb_delay_units
OUT_DELAY = simv_delay
VCD_DELAY = tb_delay_units.vcd

compile_delay:
	$(IVERILOG) $(FLAGS) -s $(TOP_DELAY) -o $(OUT_DELAY) $(RTL_SRC) $(TB_DELAY)

run_delay: compile_delay
	@echo "Running Delay Unit simulation..."
	$(VVP) $(OUT_DELAY)

wave_delay:
	@if [ -f $(VCD_DELAY) ]; then \
		gtkwave $(VCD_DELAY); \
	else \
		echo "Run simulation first: make run_delay"; \
	fi

# ============================================================
# NTT Test
# ============================================================

TOP_NTT = tb_ntt
OUT_NTT = simv_ntt
VCD_NTT = tb_ntt.vcd

compile_ntt:
	$(IVERILOG) $(FLAGS) -s $(TOP_NTT) -o $(OUT_NTT) $(RTL_SRC) $(TB_NTT)

run_ntt: compile_ntt
	@echo "Running NTT simulation..."
	cp -f $(MEM_FILES) .
	$(VVP) $(OUT_NTT)

wave_ntt:
	@if [ -f $(VCD_NTT) ]; then \
		gtkwave $(VCD_NTT); \
	else \
		echo "Run simulation first: make run_ntt"; \
	fi

# ============================================================
# INTT Test
# ============================================================

TOP_INTT = tb_intt
OUT_INTT = simv_intt
VCD_INTT = tb_intt.vcd

compile_intt:
	$(IVERILOG) $(FLAGS) -s $(TOP_INTT) -o $(OUT_INTT) $(RTL_SRC) $(TB_INTT)

run_intt: compile_intt
	@echo "Running INTT simulation..."
	cp -f $(MEM_FILES) .
	$(VVP) $(OUT_INTT)

wave_intt:
	@if [ -f $(VCD_INTT) ]; then \
		gtkwave $(VCD_INTT); \
	else \
		echo "Run simulation first: make run_intt"; \
	fi

# ============================================================
# Clean
# ============================================================

clean:
	rm -f simv_* *.vcd *.mem