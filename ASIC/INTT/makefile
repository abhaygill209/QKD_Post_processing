# # # ============================================================
# # # ASIC Area Estimation Flow (Makefile + Yosys Script)
# # # ============================================================
# # # Usage:
# # #   1. Put your RTL in ./src/
# # #   2. Update TOP and RTL_SRC below
# # #   3. Run:
# # #        make area
# # #
# # # Output:
# # #   build/area_report.txt
# # # ============================================================

# # # -------------------------------
# # # Config
# # # -------------------------------
# # TOP       := INTT_engine
# # RTL_DIR   := /home/abhay/Hardware_security/QKD/Codes_0.1/RTL
# # BUILD_DIR := ./build

# # # -------------------------------
# # # RTL Sources
# # # Add all your Verilog files here
# # # -------------------------------
# # RTL_SRC = \
# # 	$(RTL_DIR)/INTT_engine.v \
# # 	$(RTL_DIR)/MontgomeryReductionUnit.v \
# # 	$(RTL_DIR)/Delay_unit.v \
# # 	$(RTL_DIR)/ButterflyUnitGS.v \
# # 	$(RTL_DIR)/Buffer.v \
# # 	$(RTL_DIR)/MUX2x1.v \
# # 	$(RTL_DIR)/TwiddleRom.v 

# # # -------------------------------
# # # SKY130 Liberty File
# # # -------------------------------
# # LIBERTY ?= $(RTL_DIR)/user_project_wrapper.lib

# # # -------------------------------
# # # Yosys Script Path
# # # -------------------------------
# # YOSYS_SCRIPT := $(BUILD_DIR)/synth.ys
# # REPORT       := $(BUILD_DIR)/area_report.txt

# # # ============================================================
# # # Default target
# # # ============================================================
# # all: area

# # # ============================================================
# # # Generate Yosys synthesis script
# # # ============================================================
# # $(YOSYS_SCRIPT): | $(BUILD_DIR)
# # 	@echo "Generating Yosys synthesis script..."
# # 	@echo "# Auto-generated Yosys script" > $(YOSYS_SCRIPT)
# # 	@echo "read_verilog $(RTL_SRC)" >> $(YOSYS_SCRIPT)
# # 	@echo "hierarchy -top $(TOP)" >> $(YOSYS_SCRIPT)
# # 	@echo "" >> $(YOSYS_SCRIPT)
# # 	@echo "# Generic synthesis" >> $(YOSYS_SCRIPT)
# # 	@echo "proc" >> $(YOSYS_SCRIPT)
# # 	@echo "opt" >> $(YOSYS_SCRIPT)
# # 	@echo "fsm" >> $(YOSYS_SCRIPT)
# # 	@echo "opt" >> $(YOSYS_SCRIPT)
# # 	@echo "memory" >> $(YOSYS_SCRIPT)
# # 	@echo "opt" >> $(YOSYS_SCRIPT)
# # 	@echo "techmap" >> $(YOSYS_SCRIPT)
# # 	@echo "opt" >> $(YOSYS_SCRIPT)
# # 	@echo "" >> $(YOSYS_SCRIPT)
# # 	@echo "# Map to SKY130 cells" >> $(YOSYS_SCRIPT)
# # 	@echo "abc -liberty $(LIBERTY)" >> $(YOSYS_SCRIPT)
# # 	@echo "clean" >> $(YOSYS_SCRIPT)
# # 	@echo "" >> $(YOSYS_SCRIPT)
# # 	@echo "# Print area report" >> $(YOSYS_SCRIPT)
# # 	@echo "stat -liberty $(LIBERTY)" >> $(YOSYS_SCRIPT)

# # # ============================================================
# # # Run area estimation
# # # ============================================================
# # area: $(YOSYS_SCRIPT)
# # 	@echo "=============================================="
# # 	@echo " Running ASIC Area Estimation using Yosys"
# # 	@echo " Top module : $(TOP)"
# # 	@echo " Liberty    : $(LIBERTY)"
# # 	@echo "=============================================="
# # 	yosys -s $(YOSYS_SCRIPT) | tee $(REPORT)
# # 	@echo ""
# # 	@echo "Done. Area report saved at: $(REPORT)"
# # 	@echo "Search for: 'Chip area for module'"

# # # ============================================================
# # # Build dir
# # # ============================================================
# # $(BUILD_DIR):
# # 	mkdir -p $(BUILD_DIR)

# # # ============================================================
# # # Clean
# # # ============================================================
# # clean:
# # 	rm -rf $(BUILD_DIR)

# # .PHONY: all area clean

# # ============================================================
# # ASIC Area Estimation Flow (Yosys + SKY130)
# # ============================================================
# # Usage:
# #   1. Update TOP and RTL_SRC
# #   2. Ensure SKY130 liberty path is correct
# #   3. Run:
# #        make area
# #
# # Output:
# #   build/area_report.txt
# # ============================================================

# # -------------------------------
# # Config
# # -------------------------------
# TOP       := INTT_engine
# RTL_DIR   := /home/abhay/Hardware_security/QKD/Codes_0.1/RTL
# BUILD_DIR := ./build

# # -------------------------------
# # RTL Sources
# # Add all your Verilog files here
# # -------------------------------
# RTL_SRC := \
# 	$(RTL_DIR)/INTT_engine.v \
# 	$(RTL_DIR)/MontgomeryReductionUnit.v \
# 	$(RTL_DIR)/Delay_unit.v \
# 	$(RTL_DIR)/ButterflyUnitGS.v \
# 	$(RTL_DIR)/Buffer.v \
# 	$(RTL_DIR)/MUX2x1.v \
# 	$(RTL_DIR)/TwiddleRom.v

# # -------------------------------
# # SKY130 Liberty File
# # -------------------------------
# LIBERTY ?= /home/abhay/openPQC/lib/user_project_wrapper.lib

# # -------------------------------
# # Output files
# # -------------------------------
# YOSYS_SCRIPT := $(BUILD_DIR)/synth.ys
# REPORT       := $(BUILD_DIR)/area_report.txt

# # ============================================================
# # Default target
# # ============================================================
# all: area

# # ============================================================
# # Generate Yosys synthesis script
# # ============================================================
# $(YOSYS_SCRIPT): | $(BUILD_DIR)
# 	@echo "Generating Yosys synthesis script..."
# 	@echo "# Auto-generated Yosys script" > $(YOSYS_SCRIPT)
# 	@for file in $(RTL_SRC); do \
# 		echo "read_verilog $$file" >> $(YOSYS_SCRIPT); \
# 	done
# 	@echo "" >> $(YOSYS_SCRIPT)
# 	@echo "hierarchy -check -top $(TOP)" >> $(YOSYS_SCRIPT)
# 	@echo "" >> $(YOSYS_SCRIPT)
# 	@echo "# Generic synthesis" >> $(YOSYS_SCRIPT)
# 	@echo "proc" >> $(YOSYS_SCRIPT)
# 	@echo "opt" >> $(YOSYS_SCRIPT)
# 	@echo "fsm" >> $(YOSYS_SCRIPT)
# 	@echo "opt" >> $(YOSYS_SCRIPT)
# 	@echo "memory" >> $(YOSYS_SCRIPT)
# 	@echo "opt" >> $(YOSYS_SCRIPT)
# 	@echo "techmap" >> $(YOSYS_SCRIPT)
# 	@echo "opt" >> $(YOSYS_SCRIPT)
# 	@echo "" >> $(YOSYS_SCRIPT)
# 	@echo "# Map to SKY130 standard cells" >> $(YOSYS_SCRIPT)
# 	@echo "abc -liberty $(LIBERTY)" >> $(YOSYS_SCRIPT)
# 	@echo "clean" >> $(YOSYS_SCRIPT)
# 	@echo "" >> $(YOSYS_SCRIPT)
# 	@echo "# Print area report" >> $(YOSYS_SCRIPT)
# 	@echo "stat -liberty $(LIBERTY)" >> $(YOSYS_SCRIPT)

# # ============================================================
# # Run area estimation
# # ============================================================
# area: $(YOSYS_SCRIPT)
# 	@echo "=============================================="
# 	@echo " Running ASIC Area Estimation using Yosys"
# 	@echo " Top module : $(TOP)"
# 	@echo " RTL dir    : $(RTL_DIR)"
# 	@echo " Liberty    : $(LIBERTY)"
# 	@echo "=============================================="
# 	yosys -s $(YOSYS_SCRIPT) | tee $(REPORT)
# 	@echo ""
# 	@echo "Done. Area report saved at: $(REPORT)"
# 	@echo "Search for: 'Chip area for module'"

# # ============================================================
# # Create build directory
# # ============================================================
# $(BUILD_DIR):
# 	mkdir -p $(BUILD_DIR)

# # ============================================================
# # Clean generated files
# # ============================================================
# clean:
# 	rm -rf $(BUILD_DIR)

# .PHONY: all area clean

# ============================================================
# ASIC Area Estimation Flow (Yosys + SKY130)
# ============================================================
# Usage:
#   1. Update TOP and RTL_SRC
#   2. Verify SKY130 liberty path
#   3. Run:
#        make area
#
# Output:
#   build/area_report.txt
# ============================================================

# -------------------------------
# Config
# -------------------------------
TOP       := INTT_engine
RTL_DIR   := /home/abhay/Hardware_security/QKD/Codes_0.1/RTL
BUILD_DIR := ./build

# -------------------------------
# RTL Sources
# -------------------------------
RTL_SRC := \
	$(RTL_DIR)/INTT_engine.v \
	$(RTL_DIR)/MontgomeryReductionUnit.v \
	$(RTL_DIR)/Delay_unit.v \
	$(RTL_DIR)/ButterflyUnitGS.v \
	$(RTL_DIR)/Buffer.v \
	$(RTL_DIR)/MUX2x1.v \
	$(RTL_DIR)/TwiddleRom.v

# -------------------------------
# SKY130 Liberty File
# -------------------------------
LIBERTY ?= /home/abhay/openPQC/lib/user_project_wrapper.lib
# -------------------------------
# Output files
# -------------------------------
YOSYS_SCRIPT := $(BUILD_DIR)/synth.ys
REPORT       := $(BUILD_DIR)/area_report.txt

# ============================================================
# Default target
# ============================================================
all: area

# ============================================================
# Generate Yosys synthesis script
# ============================================================
$(YOSYS_SCRIPT): | $(BUILD_DIR)
	@echo "Generating Yosys synthesis script..."
	@echo "# Auto-generated Yosys synthesis script" > $(YOSYS_SCRIPT)

	@for file in $(RTL_SRC); do \
		echo "read_verilog $$file" >> $(YOSYS_SCRIPT); \
	done

	@echo "" >> $(YOSYS_SCRIPT)
	@echo "# Set top module" >> $(YOSYS_SCRIPT)
	@echo "hierarchy -check -top $(TOP)" >> $(YOSYS_SCRIPT)

	@echo "" >> $(YOSYS_SCRIPT)
	@echo "# Full generic synthesis" >> $(YOSYS_SCRIPT)
	@echo "synth -top $(TOP)" >> $(YOSYS_SCRIPT)

	@echo "" >> $(YOSYS_SCRIPT)
	@echo "# Handle inferred memories" >> $(YOSYS_SCRIPT)
	@echo "memory_map" >> $(YOSYS_SCRIPT)

	@echo "" >> $(YOSYS_SCRIPT)
	@echo "# Map flip-flops to SKY130" >> $(YOSYS_SCRIPT)
	@echo "dfflibmap -liberty $(LIBERTY)" >> $(YOSYS_SCRIPT)

	@echo "" >> $(YOSYS_SCRIPT)
	@echo "# Map combinational logic to SKY130" >> $(YOSYS_SCRIPT)
	@echo "abc -liberty $(LIBERTY)" >> $(YOSYS_SCRIPT)

	@echo "" >> $(YOSYS_SCRIPT)
	@echo "# Cleanup" >> $(YOSYS_SCRIPT)
	@echo "clean" >> $(YOSYS_SCRIPT)

	@echo "" >> $(YOSYS_SCRIPT)
	@echo "# Print cell count and area" >> $(YOSYS_SCRIPT)
	@echo "stat -liberty $(LIBERTY)" >> $(YOSYS_SCRIPT)

# ============================================================
# Run area estimation
# ============================================================
area: $(YOSYS_SCRIPT)
	@echo "=============================================="
	@echo " Running ASIC Area Estimation using Yosys"
	@echo " Top module : $(TOP)"
	@echo " RTL dir    : $(RTL_DIR)"
	@echo " Liberty    : $(LIBERTY)"
	@echo "=============================================="
	yosys -s $(YOSYS_SCRIPT) | tee $(REPORT)
	@echo ""
	@echo "Done. Area report saved at: $(REPORT)"
	@echo "Look for:"
	@echo "  - Number of cells"
	@echo "  - Chip area for module"

# ============================================================
# Build directory
# ============================================================
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# ============================================================
# Clean generated files
# ============================================================
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all area clean