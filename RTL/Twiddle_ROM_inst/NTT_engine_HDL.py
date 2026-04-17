import math
import os
import sys

# ================= USER CONFIG =================
if len(sys.argv) > 1:
    N = int(sys.argv[1])
else:
    N = 16

# ================= PATH FIX =================
try:
    BASE_DIR = os.path.dirname(os.path.abspath(__file__))
except NameError:
    BASE_DIR = os.getcwd()

OUTPUT_FILE = os.path.join(BASE_DIR, "NTT_engine.v")


# =================================================

def is_power_of_two(n):
    return (n & (n - 1)) == 0 and n != 0


def generate_ntt_engine():

    if not is_power_of_two(N):
        raise ValueError("N must be power of 2")

    stages = int(math.log2(N))

    print(f"[INFO] Generating NTT Engine for N={N}, STAGES={stages}")

    lines = []

    # ================= MODULE HEADER =================
    lines.append("module NTT_engine #(")
    lines.append(f"    parameter N = 2**{stages},")
    lines.append("    parameter STAGES = $clog2(N),")
    lines.append("    parameter DATA_WIDTH = 32,")
    lines.append("    parameter ADDR_WIDTH = 32,")
    lines.append("    parameter Q = 12289,")
    lines.append("    parameter Q_WIDTH = 14,")
    lines.append("    parameter Q_INV = 12287,")
    lines.append("    parameter R2_MOD_Q = 6829")
    lines.append(") (")
    lines.append("    input  clk, rst,")
    lines.append("    input  valid_i,")
    lines.append("    input  stall_i,")
    lines.append("    input  [DATA_WIDTH-1:0] a_i, b_i,")
    lines.append("    output [DATA_WIDTH-1:0] a_o, b_o,")
    lines.append("    output valid_o")
    lines.append(");\n")

    # ================= SIGNALS =================
    lines.append("    wire [DATA_WIDTH-1:0] BU_DU_bus_a   [0:STAGES-1];")
    lines.append("    wire [DATA_WIDTH-1:0] BU_DU_bus_b   [0:STAGES-1];\n")

    lines.append("    wire [DATA_WIDTH-1:0] DU_BU_bus_a   [1:STAGES-1];")
    lines.append("    wire [DATA_WIDTH-1:0] DU_BU_bus_b   [1:STAGES-1];\n")

    lines.append("    wire [DATA_WIDTH-1:0] tf_data       [0:STAGES-1];\n")

    lines.append("    wire BU_DU_valid   [0:STAGES-1];")
    lines.append("    wire DU_BU_valid   [1:STAGES-1];\n")

    # NEW REG PIPELINE
    lines.append("    reg [DATA_WIDTH-1:0] BU_DU_bus_a_R [0:STAGES-1];")
    lines.append("    reg [DATA_WIDTH-1:0] BU_DU_bus_b_R [0:STAGES-1];")
    lines.append("    reg                  BU_DU_valid_R [0:STAGES-1];\n")

    lines.append("    reg                  DU_BU_valid_D [0:STAGES-1];")
    lines.append("    reg [DATA_WIDTH-1:0] DU_BU_bus_a_D [0:STAGES-1];")
    lines.append("    reg [DATA_WIDTH-1:0] DU_BU_bus_b_D [0:STAGES-1];\n")

    # ================= INPUT DELAY =================
    lines.append("    // 2-cycle delay for butterfly inputs\n")

    lines.append("    reg [DATA_WIDTH-1:0] a_d1 [0:STAGES-1];")
    lines.append("    reg [DATA_WIDTH-1:0] a_d2 [0:STAGES-1];")

    lines.append("    reg [DATA_WIDTH-1:0] b_d1 [0:STAGES-1];")
    lines.append("    reg [DATA_WIDTH-1:0] b_d2 [0:STAGES-1];")

    lines.append("    reg valid_d1 [0:STAGES-1];")
    lines.append("    reg valid_d2 [0:STAGES-1];\n")

    lines.append("    genvar d;")
    lines.append("    generate")
    lines.append("        for (d = 0; d < STAGES; d = d + 1) begin : input_delay")
    lines.append("            always @(posedge clk or posedge rst) begin")
    lines.append("                if (rst) begin")
    lines.append("                    a_d1[d] <= 0; a_d2[d] <= 0;")
    lines.append("                    b_d1[d] <= 0; b_d2[d] <= 0;")
    lines.append("                    valid_d1[d] <= 0; valid_d2[d] <= 0;")
    lines.append("                end")
    lines.append("                else if (!stall_i) begin")
    lines.append("                    a_d1[d] <= DU_BU_bus_a_D[d];")
    lines.append("                    a_d2[d] <= a_d1[d];")
    lines.append("                    b_d1[d] <= DU_BU_bus_b_D[d];")
    lines.append("                    b_d2[d] <= b_d1[d];")
    lines.append("                    valid_d1[d] <= DU_BU_valid_D[d];")
    lines.append("                    valid_d2[d] <= valid_d1[d];")
    lines.append("                end")
    lines.append("            end")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= BUTTERFLY =================
    lines.append("    genvar i;")
    lines.append("    generate")
    lines.append("        for (i = 0; i < STAGES; i = i + 1) begin : butterfly_gen")
    lines.append("            butterfly_unit_CT butterfly_inst (")
    lines.append("                .clk(clk),")
    lines.append("                .rst(rst),")
    lines.append("                .stall(stall_i),")
    lines.append("                .valid_out(BU_DU_valid[i]),")
    lines.append("                .a_i(a_d2[i]),")
    lines.append("                .b_i(b_d2[i]),")
    lines.append("                .valid_i(valid_d2[i]),")
    lines.append("                .w(tf_data[i]),")
    lines.append("                .a_o(BU_DU_bus_a[i]),")
    lines.append("                .b_o(BU_DU_bus_b[i])")
    lines.append("            );")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= OUTPUT REG =================
    lines.append("    genvar p;")
    lines.append("    generate")
    lines.append("        for (p = 0; p < STAGES; p = p + 1) begin : bu_out_reg")
    lines.append("            always @(posedge clk or posedge rst) begin")
    lines.append("                if (rst) begin")
    lines.append("                    BU_DU_bus_a_R[p] <= 0;")
    lines.append("                    BU_DU_bus_b_R[p] <= 0;")
    lines.append("                    BU_DU_valid_R[p] <= 0;")
    lines.append("                end")
    lines.append("                else if (!stall_i) begin")
    lines.append("                    BU_DU_bus_a_R[p] <= BU_DU_bus_a[p];")
    lines.append("                    BU_DU_bus_b_R[p] <= BU_DU_bus_b[p];")
    lines.append("                    BU_DU_valid_R[p] <= BU_DU_valid[p];")
    lines.append("                end")
    lines.append("            end")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= OUTPUT =================
    lines.append("    assign valid_o = BU_DU_valid_R[STAGES-1];")
    lines.append("    assign a_o     = BU_DU_bus_a_R[STAGES-1];")
    lines.append("    assign b_o     = BU_DU_bus_b_R[STAGES-1];\n")

    # ================= DELAY UNITS =================
    lines.append("    genvar j;")
    lines.append("    generate")
    lines.append("        for (j = 0; j < STAGES-1; j = j + 1) begin : delay_gen")
    lines.append("            Delay_Unit #(")
    lines.append("                .DATAWIDTH(DATA_WIDTH),")
    lines.append("                .DEPTH(2**(j+2)),")
    lines.append("                .LATENCY(j+2),")
    lines.append("                .N(N)")
    lines.append("            ) Delay_inst (")
    lines.append("                .clk_i(clk),")
    lines.append("                .rst_i(rst),")
    lines.append("                .stall_i(stall_i),")
    lines.append("                .valid_i(BU_DU_valid_R[j]),")
    lines.append("                .valid_o(DU_BU_valid[j+1]),")
    lines.append("                .a_i(BU_DU_bus_a_R[j]),")
    lines.append("                .b_i(BU_DU_bus_b_R[j]),")
    lines.append("                .a_o(DU_BU_bus_a[j+1]),")
    lines.append("                .b_o(DU_BU_bus_b[j+1])")
    lines.append("            );")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= ROM CTRL =================
    lines.append("    genvar k;")
    lines.append("    generate")
    lines.append("        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen")
    lines.append("            always @(posedge clk or posedge rst) begin")
    lines.append("                if (rst)")
    lines.append("                    tf_addr[k] <= 0;")
    lines.append("                else if (valid_d1[k]) begin")
    lines.append("                    if (tf_addr[k] == (1 << k) - 1)")
    lines.append("                        tf_addr[k] <= 0;")
    lines.append("                    else")
    lines.append("                        tf_addr[k] <= tf_addr[k] + 1;")
    lines.append("                end")
    lines.append("            end")
    lines.append("        end")
    lines.append("    endgenerate\n")

    lines.append("endmodule\n")

    # ================= WRITE =================
    print(f"[INFO] Writing RTL to {OUTPUT_FILE}")

    with open(OUTPUT_FILE, "w") as f:
        f.write("\n".join(lines))

    print("[SUCCESS] RTL generation complete!")


if __name__ == "__main__":
    generate_ntt_engine()