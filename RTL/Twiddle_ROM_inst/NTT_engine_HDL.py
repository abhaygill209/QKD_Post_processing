import math
import os
import sys

# ================= USER CONFIG =================
if len(sys.argv) > 1:
    N = int(sys.argv[1])
else:
    N = 16  # default

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

    # ================= SAFETY =================
    if not is_power_of_two(N):
        raise ValueError("N must be a power of 2")

    stages = int(math.log2(N))

    lines = []

    # ================= MODULE HEADER =================
    lines.append("module NTT_engine #(")
    lines.append(f"    parameter N = 2**{stages},")
    lines.append("    parameter STAGES = $clog2(N),")
    lines.append("    parameter DATA_WIDTH = 32,")
    lines.append("    parameter ADDR_WIDTH = 32,")
    lines.append("    parameter Q = 12289,")
    lines.append("    parameter Q_WIDTH = 32,")
    lines.append("    parameter Q_INV = 12287")
    lines.append(") (")
    lines.append("    input  clk, rst,")
    lines.append("    input  valid_i,")
    lines.append("    input  stall_i,")
    lines.append("    input  [DATA_WIDTH-1:0] a_i, b_i,")
    lines.append("    output [DATA_WIDTH-1:0] a_o, b_o,")
    lines.append("    output valid_o")
    lines.append(");\n")

    # ================= INPUT BLOCK =================
    lines.append("    // Binary input")
    lines.append("    always @(*) begin")
    lines.append("        DU_BU_bus_a_D[0] = a_i;")
    lines.append("        DU_BU_bus_b_D[0] = b_i;")
    lines.append("        DU_BU_valid_D[0] = valid_i;")
    lines.append("    end\n")

    # ================= SIGNALS =================
    lines.append("    wire [DATA_WIDTH-1:0] BU_DU_bus_a   [0:STAGES-1];")
    lines.append("    wire [DATA_WIDTH-1:0] BU_DU_bus_b   [0:STAGES-1];\n")

    lines.append("    wire [DATA_WIDTH-1:0] DU_BU_bus_a   [1:STAGES-1];")
    lines.append("    wire [DATA_WIDTH-1:0] DU_BU_bus_b   [1:STAGES-1];\n")

    lines.append("    wire [DATA_WIDTH-1:0] tf_data       [0:STAGES-1];\n")

    lines.append("    reg BU_DU_valid   [0:STAGES-1];")
    lines.append("    reg DU_BU_valid   [1:STAGES-1];\n")

    lines.append("    reg                  DU_BU_valid_D [0:STAGES-1];")
    lines.append("    reg [DATA_WIDTH-1:0] DU_BU_bus_a_D [0:STAGES-1];")
    lines.append("    reg [DATA_WIDTH-1:0] DU_BU_bus_b_D [0:STAGES-1];\n")

    # ================= BUTTERFLY =================
    lines.append("    genvar i;")
    lines.append("    generate")
    lines.append("        for (i = 0; i < STAGES; i = i + 1) begin : butterfly_gen")
    lines.append("            butterfly_unit_CT #(")
    lines.append("                .DATA_WIDTH(DATA_WIDTH),")
    lines.append("                .Q(Q),")
    lines.append("                .Q_WIDTH(Q_WIDTH),")
    lines.append("                .Q_INV(Q_INV)")
    lines.append("            ) butterfly_inst (")
    lines.append("                .clk(clk),")
    lines.append("                .rst(rst),")
    lines.append("                .stall(stall_i),")
    lines.append("                .valid_i(DU_BU_valid_D[i]),")
    lines.append("                .valid_out(BU_DU_valid[i]),")
    lines.append("                .a_i(DU_BU_bus_a_D[i]),")
    lines.append("                .b_i(DU_BU_bus_b_D[i]),")
    lines.append("                .w(tf_data[i]),")
    lines.append("                .a_o(BU_DU_bus_a[i]),")
    lines.append("                .b_o(BU_DU_bus_b[i])")
    lines.append("            );")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= DELAY =================
    lines.append("    genvar g;")
    lines.append("    generate")
    lines.append("        for(g = 1; g < STAGES; g = g + 1) begin : delay")
    lines.append("            always @(posedge clk or posedge rst) begin")
    lines.append("                if (rst) begin")
    lines.append("                    DU_BU_valid_D[g] <= 1'b0;")
    lines.append("                    DU_BU_bus_a_D[g] <= 0;")
    lines.append("                    DU_BU_bus_b_D[g] <= 0;")
    lines.append("                end else begin")
    lines.append("                    DU_BU_valid_D[g] <= DU_BU_valid[g];")
    lines.append("                    DU_BU_bus_a_D[g] <= DU_BU_bus_a[g];")
    lines.append("                    DU_BU_bus_b_D[g] <= DU_BU_bus_b[g];")
    lines.append("                end")
    lines.append("            end")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= OUTPUT =================
    lines.append("    assign valid_o = BU_DU_valid[STAGES-1];")
    lines.append("    assign a_o     = BU_DU_bus_a[STAGES-1];")
    lines.append("    assign b_o     = BU_DU_bus_b[STAGES-1];\n")

    # ================= DELAY UNITS =================
    lines.append("    genvar j;")
    lines.append("    generate")
    lines.append("        for (j = 0; j < STAGES-1; j = j + 1) begin : delay_gen")
    lines.append("            Delay_Unit #(")
    lines.append("                .DATAWIDTH(DATA_WIDTH),")
    lines.append("                .DEPTH(2**(j+2))")
    lines.append("            ) Delay_inst (")
    lines.append("                .clk_i(clk),")
    lines.append("                .rst_i(rst),")
    lines.append("                .stall_i(stall_i),")
    lines.append("                .valid_i(BU_DU_valid[j]),")
    lines.append("                .valid_o(DU_BU_valid[j+1]),")
    lines.append("                .a_i(BU_DU_bus_a[j]),")
    lines.append("                .b_i(BU_DU_bus_b[j]),")
    lines.append("                .a_o(DU_BU_bus_a[j+1]),")
    lines.append("                .b_o(DU_BU_bus_b[j+1])")
    lines.append("            );")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= TWIDDLE ROM =================
    lines.append("    // Bram Instances for Twiddle factors")
    lines.append("    reg [ADDR_WIDTH-1:0] tf_addr [1:STAGES-1];\n")

    for stage in range(1, stages):
        lines.append("    TwiddleROM #(")
        lines.append(f"        .STAGE({stage}),")
        lines.append(f"        .INIT_FILE(\"../../RTL/TwiddleFactors/stage_{stage}.mem\")")
        lines.append(f"    ) t_rom_{stage} (")
        lines.append("        .clk(clk),")
        lines.append(f"        .dout(tf_data[{stage}]),")
        lines.append(f"        .addr(tf_addr[{stage}])")
        lines.append("    );\n")

    lines.append("    assign tf_data[0] = 32'h00000549;\n")

    # ================= ROM CTRL =================
    lines.append("    genvar k;")
    lines.append("    generate")
    lines.append("        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen")
    lines.append("            always @(posedge clk or posedge rst) begin")
    lines.append("                if (rst)")
    lines.append("                    tf_addr[k] <= 0;")
    lines.append("                else if (DU_BU_valid[k]) begin")
    lines.append("                    if (tf_addr[k] == (1 << k) - 1)")
    lines.append("                        tf_addr[k] <= 0;")
    lines.append("                    else")
    lines.append("                        tf_addr[k] <= tf_addr[k] + 1;")
    lines.append("                end")
    lines.append("            end")
    lines.append("        end")
    lines.append("    endgenerate\n")

    lines.append("endmodule\n")

    # ================= WRITE FILE =================
    print("Writing RTL to:", OUTPUT_FILE)

    with open(OUTPUT_FILE, "w") as f:
        f.write("\n".join(lines))

    print(f"Generated NTT_engine.v for N = {N}")


# ================= RUN =================
if __name__ == "__main__":
    generate_ntt_engine()