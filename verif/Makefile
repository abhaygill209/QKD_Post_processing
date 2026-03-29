# Top module (testbench)
TOP = top_module_tb

# RTL sources (relative to verification folder)
RTL_DIR = ../HDL_codes

SRC = $(RTL_DIR)/top_module.v \
      $(RTL_DIR)/buffers.v \
      $(RTL_DIR)/fifo.v \
      $(RTL_DIR)/mux.v \
      $(RTL_DIR)/butterfly_unit_GS.v \
      $(RTL_DIR)/butterfly_unit_CS.v \
      $(RTL_DIR)/mux4x1.v \
      $(RTL_DIR)/twiddle_rom.v \
      top_module_tb.v

# Twiddle memory files
MEM_DIR = $(RTL_DIR)/twiddle_mem
MEM_FILES = $(MEM_DIR)/stage_1.mem \
            $(MEM_DIR)/stage_2.mem

# Output
OUT = simv
VCD = top_module.vcd

# Default target
all: run

# Compile (ONLY Verilog files)
compile:
	iverilog -o $(OUT) $(SRC)

# Run simulation (copy mem files before running)
run: compile
	cp $(MEM_FILES) .
	vvp $(OUT)
      

# Open waveform
wave: run
	gtkwave $(VCD)

# Clean
clean:
	rm -f $(OUT) *.vcd *.mem