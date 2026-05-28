import math
import os
import sys

# ================= USER CONFIG =================
if len(sys.argv) > 1:
    N = int(sys.argv[1])
else:
    N = 256

# ================= PATH =================
try:
    BASE_DIR = os.path.dirname(os.path.abspath(__file__))
except NameError:
    BASE_DIR = os.getcwd()

OUTPUT_FILE = os.path.join(BASE_DIR, "NTT_engine.v")


def is_power_of_two(n):
    return (n & (n - 1)) == 0 and n != 0


def generate_ntt_engine():

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

    # ================= INPUT =================
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

    # Twiddle wires
    for i in range(stages):
        lines.append(f"    wire [DATA_WIDTH-1:0] tf_data_{i};")
    lines.append("")

    lines.append("    wire BU_DU_valid   [0:STAGES-1];")
    lines.append("    wire DU_BU_valid   [1:STAGES-1];\n")

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

    # Twiddle mux (scalable)
    lines.append("                .w(")
    for k in range(stages):
        if k < stages - 1:
            lines.append(f"                    (i=={k}) ? tf_data_{k} :")
        else:
            lines.append(f"                    tf_data_{k}")
    lines.append("                ),")

    lines.append("                .a_o(BU_DU_bus_a[i]),")
    lines.append("                .b_o(BU_DU_bus_b[i])")
    lines.append("            );")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= PIPELINE =================
    lines.append("    genvar g;")
    lines.append("    generate")
    lines.append("        for(g = 1; g < STAGES; g = g + 1) begin : delay")
    lines.append("            always @(posedge clk) begin")
    lines.append("                if (rst) begin")
    lines.append("                    DU_BU_valid_D[g] <= 1'b0;")
    lines.append("                    DU_BU_bus_a_D[g] <= 0;")
    lines.append("                    DU_BU_bus_b_D[g] <= 0;")
    lines.append("                end else begin")
    lines.append("                    if (!stall_i) begin")
    lines.append("                        DU_BU_valid_D[g] <= DU_BU_valid[g];")
    lines.append("                        DU_BU_bus_a_D[g] <= DU_BU_bus_a[g];")
    lines.append("                        DU_BU_bus_b_D[g] <= DU_BU_bus_b[g];")
    lines.append("                    end")
    lines.append("                end")
    lines.append("            end")
    lines.append("        end")
    lines.append("    endgenerate\n")

    # ================= OUTPUT =================
    lines.append("    assign valid_o = BU_DU_valid[STAGES-1];")
    lines.append("    assign a_o     = BU_DU_bus_a[STAGES-1];")
    lines.append("    assign b_o     = BU_DU_bus_b[STAGES-1];\n")

    # ================= DELAY UNITS =================
    depths = [6, 8, 14, 26, 50, 98, 128]

    for stage in range(1, stages):

        lines.append(f"    Delay_Unit #(")
        lines.append(f"        .DATA_WIDTH(DATA_WIDTH),")
        lines.append(f"        .STAGE({stage}),")
        lines.append(f"        .DEPTH({depths[stage-1]})")
        lines.append(f"    ) Delay_inst_{stage} (")
        lines.append(f"        .clk_i(clk),")
        lines.append(f"        .rst_i(rst),")
        lines.append(f"        .stall_i(stall_i),")
        lines.append(f"        .valid_i(BU_DU_valid[{stage-1}]),")
        lines.append(f"        .valid_o(DU_BU_valid[{stage}]),")
        lines.append(f"        .a_i(BU_DU_bus_a[{stage-1}]),")
        lines.append(f"        .b_i(BU_DU_bus_b[{stage-1}]),")
        lines.append(f"        .a_o(DU_BU_bus_a[{stage}]),")
        lines.append(f"        .b_o(DU_BU_bus_b[{stage}])")
        lines.append(f"    );\n")

    # ================= TWIDDLE ROM =================
    lines.append("    // Twiddle ROM")
    lines.append("    reg [ADDR_WIDTH-1:0] tf_addr [1:STAGES-1];\n")

    for stage in range(1, stages):
        lines.append("    TwiddleROM #(")
        lines.append(f"        .STAGE({stage}),")
        lines.append("        .DATA_WIDTH(DATA_WIDTH),")
        lines.append("        .ADDR_WIDTH(ADDR_WIDTH),")
        lines.append(f"        .INIT_FILE(\"../../RTL/TwiddleFactors/stage_{stage}.mem\")")
        lines.append(f"    ) t_rom_{stage} (")
        lines.append("        .clk(clk),")
        lines.append("        .stall_i(stall_i),")
        lines.append(f"        .dout(tf_data_{stage}),")
        lines.append(f"        .addr(tf_addr[{stage}])")
        lines.append("    );\n")

    lines.append("    assign tf_data_0 = 16'h08ED;\n")

    # ================= ADDR CONTROL =================
    lines.append("    genvar k;")
    lines.append("    generate")
    lines.append("        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen")
    lines.append("            always @(posedge clk) begin")
    lines.append("                if (rst)")
    lines.append("                    tf_addr[k] <= 0;")
    lines.append("                else if (DU_BU_valid[k] && !stall_i) begin")
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

    print(f"✅ FINAL CLEAN RTL GENERATED for N = {N}")


if __name__ == "__main__":
    generate_ntt_engine()