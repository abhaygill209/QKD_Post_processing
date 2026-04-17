//Twiddle ROM ordering

module NTT_engine #(
    parameter N = 2**3,
    parameter STAGES = $clog2(N),
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter Q = 12289,
    parameter Q_WIDTH = 14,
    parameter Q_INV = 12287,
    parameter R2_MOD_Q = 6829
) (
    input  clk, rst,
    input  valid_i,
    input  stall_i,
    input  [DATA_WIDTH-1:0] a_i, b_i,
    output [DATA_WIDTH-1:0] a_o, b_o,
    output valid_o
);

    wire [DATA_WIDTH-1:0] BU_DU_bus_a   [0:STAGES-1];
    wire [DATA_WIDTH-1:0] BU_DU_bus_b   [0:STAGES-1];

    wire [DATA_WIDTH-1:0] DU_BU_bus_a   [1:STAGES-1];
    wire [DATA_WIDTH-1:0] DU_BU_bus_b   [1:STAGES-1];

    wire [DATA_WIDTH-1:0] tf_data       [0:STAGES-1];

    wire BU_DU_valid   [0:STAGES-1];
    wire DU_BU_valid   [1:STAGES-1];

    reg [DATA_WIDTH-1:0] BU_DU_bus_a_R [0:STAGES-1];
    reg [DATA_WIDTH-1:0] BU_DU_bus_b_R [0:STAGES-1];
    reg                  BU_DU_valid_R [0:STAGES-1];

    reg                  DU_BU_valid_D [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_a_D [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_b_D [0:STAGES-1];

    wire [Q_WIDTH-1:0] a_mont, b_mont;
    wire valid_mont;

    ToMontgomeryConverter #(
        .Q(Q),
        .Q_WIDTH(Q_WIDTH),
        .Q_INV(Q_INV),
        .R2_MOD_Q(R2_MOD_Q)
    ) mont_conv_inst (
        .clk(clk),
        .rst(rst),
        .start(valid_i),
        .stall(stall_i),
        .a(a_i[Q_WIDTH-1:0]),
        .b(b_i[Q_WIDTH-1:0]),
        .a_bar(a_mont),
        .b_bar(b_mont),
        .valid_out(valid_mont)
    );

    // Binary input
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            DU_BU_valid_D[0] <= 0;
            DU_BU_bus_a_D[0] <= 0;
            DU_BU_bus_b_D[0] <= 0;
        end
        else if (!stall_i) begin
            DU_BU_valid_D[0] <= valid_mont;
            DU_BU_bus_a_D[0] <= a_mont;
            DU_BU_bus_b_D[0] <= b_mont;
        end
    end
    
    // ==========================================
// 2-cycle delay for butterfly inputs
// ==========================================

reg [DATA_WIDTH-1:0] a_d1 [0:STAGES-1];
reg [DATA_WIDTH-1:0] a_d2 [0:STAGES-1];

reg [DATA_WIDTH-1:0] b_d1 [0:STAGES-1];
reg [DATA_WIDTH-1:0] b_d2 [0:STAGES-1];

reg                  valid_d1 [0:STAGES-1];
reg                  valid_d2 [0:STAGES-1];

genvar d;
generate
    for (d = 0; d < STAGES; d = d + 1) begin : input_delay
        always @(posedge clk or posedge rst) begin
            if (rst) begin
                a_d1[d] <= 0;
                a_d2[d] <= 0;
                b_d1[d] <= 0;
                b_d2[d] <= 0;
                valid_d1[d] <= 0;
                valid_d2[d] <= 0;
            end
            else if (!stall_i) begin
                // stage-wise delay pipeline
                a_d1[d] <= DU_BU_bus_a_D[d];
                a_d2[d] <= a_d1[d];

                b_d1[d] <= DU_BU_bus_b_D[d];
                b_d2[d] <= b_d1[d];

                valid_d1[d] <= DU_BU_valid_D[d];
                valid_d2[d] <= valid_d1[d];
            end
        end
    end
endgenerate

    genvar i;
    generate
        for (i = 0; i < STAGES; i = i + 1) begin : butterfly_gen
            butterfly_unit_CT #(
                .DATA_WIDTH(DATA_WIDTH),
                .Q(Q),
                .Q_WIDTH(Q_WIDTH),
                .Q_INV(Q_INV)
            ) butterfly_inst (
                .clk(clk),
                .rst(rst),
                .stall(stall_i),
                .valid_out(BU_DU_valid[i]),
                .a_i(a_d2[i]),
                .b_i(b_d2[i]),
                .valid_i(valid_d2[i]),
                .w(tf_data[i]),
                .a_o(BU_DU_bus_a[i]),
                .b_o(BU_DU_bus_b[i])
            );
        end
    endgenerate

    genvar g;
    generate
        for(g = 1; g < STAGES; g = g + 1) begin : delay
            always @(posedge clk or posedge rst) begin
                if (rst) begin
                    DU_BU_valid_D[g] <= 1'b0;
                    DU_BU_bus_a_D[g] <= 0;
                    DU_BU_bus_b_D[g] <= 0;
                end
                else if (!stall_i) begin
                    DU_BU_valid_D[g] <= DU_BU_valid[g];
                    DU_BU_bus_a_D[g] <= DU_BU_bus_a[g];
                    DU_BU_bus_b_D[g] <= DU_BU_bus_b[g];
                end
            end
        end
    endgenerate

    assign valid_o = BU_DU_valid_R[STAGES-1];
    assign a_o     = BU_DU_bus_a_R[STAGES-1];
    assign b_o     = BU_DU_bus_b_R[STAGES-1];
   
    genvar p;
    generate
    for (p = 0; p < STAGES; p = p + 1) begin : bu_out_reg
        always @(posedge clk or posedge rst) begin
            if (rst) begin
                BU_DU_bus_a_R[p] <= 0;
                BU_DU_bus_b_R[p] <= 0;
                BU_DU_valid_R[p] <= 0;
            end
            else if (!stall_i) begin
                BU_DU_bus_a_R[p] <= BU_DU_bus_a[p];
                BU_DU_bus_b_R[p] <= BU_DU_bus_b[p];
                BU_DU_valid_R[p] <= BU_DU_valid[p];
            end
        end
    end
    endgenerate

    genvar j;
    generate
        for (j = 0; j < STAGES-1; j = j + 1) begin : delay_gen
            Delay_Unit #(
                .DATAWIDTH(DATA_WIDTH),
                .DEPTH(2**(j+2)),
                .LATENCY(j+2), 
                .N(N)
            ) Delay_inst (
                .clk_i(clk),
                .rst_i(rst),
                .stall_i(stall_i),
                .valid_i(BU_DU_valid_R[j]),
                .valid_o(DU_BU_valid[j+1]),
                .a_i(BU_DU_bus_a_R[j]),
                .b_i(BU_DU_bus_b_R[j]),
                .a_o(DU_BU_bus_a[j+1]),
                .b_o(DU_BU_bus_b[j+1])
            );
        end
    endgenerate

    // Bram Instances for Twiddle factors
    reg [ADDR_WIDTH-1:0] tf_addr [1:STAGES-1];

    TwiddleROM #(
        .STAGE(1),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_1.mem")
    ) t_rom_1 (
        .clk(clk),
        .dout(tf_data[1]),
        .addr(tf_addr[1])
    );

    TwiddleROM #(
        .STAGE(2),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_2.mem")
    ) t_rom_2 (
        .clk(clk),
        .dout(tf_data[2]),
        .addr(tf_addr[2])
    );

    assign tf_data[0] = 32'd4095;

    genvar k;
    generate
        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen
            always @(posedge clk or posedge rst) begin
                if (rst)
                    tf_addr[k] <= 0;
                else if (valid_d1[k]) begin
                    if (tf_addr[k] == (1 << k) - 1)
                        tf_addr[k] <= 0;
                    else
                        tf_addr[k] <= tf_addr[k] + 1;
                end
            end
        end
    endgenerate

endmodule
