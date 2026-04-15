// module INTT_engine #(
//     parameter N = 2**6,
//     parameter STAGES = $clog2(N),
//     parameter DATA_WIDTH = 32,
//     parameter ADDR_WIDTH = 32,
//     parameter Q = 12289,
//     parameter Q_WIDTH = 32,
//     parameter Q_INV = 12287
// ) (
//     input  clk, rst,
//     input  valid_i,
//     input  stall_i,
//     input  [DATA_WIDTH-1:0] a_i, b_i,
//     output [DATA_WIDTH-1:0] a_o, b_o,
//     output valid_o
// );

//     // Binary input
//     always @(*) begin
//         DU_BU_bus_a_D[0] = a_i;
//         DU_BU_bus_b_D[0] = b_i;
//         DU_BU_valid_D[0] = valid_i;
//     end

//     wire [DATA_WIDTH-1:0] BU_DU_bus_a   [0:STAGES-1];
//     wire [DATA_WIDTH-1:0] BU_DU_bus_b   [0:STAGES-1];

//     wire [DATA_WIDTH-1:0] DU_BU_bus_a   [1:STAGES-1];
//     wire [DATA_WIDTH-1:0] DU_BU_bus_b   [1:STAGES-1];

//     wire [DATA_WIDTH-1:0] tf_data       [0:STAGES-1];

//     reg BU_DU_valid   [0:STAGES-1];
//     reg DU_BU_valid   [1:STAGES-1];

//     reg                  DU_BU_valid_D [0:STAGES-1];
//     reg [DATA_WIDTH-1:0] DU_BU_bus_a_D [0:STAGES-1];
//     reg [DATA_WIDTH-1:0] DU_BU_bus_b_D [0:STAGES-1];

//     genvar i;
//     generate
//         for (i = 0; i < STAGES; i = i + 1) begin : butterfly_gen
//             butterfly_unit_GS #(
//                 .DATA_WIDTH(DATA_WIDTH),
//                 .Q(Q),
//                 .Q_WIDTH(Q_WIDTH),
//                 .Q_INV(Q_INV)
//             ) butterfly_inst (
//                 .clk(clk),
//                 .rst(rst),
//                 .start(DU_BU_valid_D[i]),
//                 .valid_out(BU_DU_valid[i]),
//                 .a_i(DU_BU_bus_a_D[i]),
//                 .b_i(DU_BU_bus_b_D[i]),
//                 .w(tf_data[i]),
//                 .a_o(BU_DU_bus_a[i]),
//                 .b_o(BU_DU_bus_b[i])
//             );
//         end
//     endgenerate

//     genvar g;
//     generate
//         for(g = 1; g < STAGES; g = g + 1) begin : delay
//             always @(posedge clk or posedge rst) begin
//                 if (rst) begin
//                     DU_BU_valid_D[g] <= 1'b0;
//                     DU_BU_bus_a_D[g] <= 0;
//                     DU_BU_bus_b_D[g] <= 0;
//                 end else begin
//                     DU_BU_valid_D[g] <= DU_BU_valid[g];
//                     DU_BU_bus_a_D[g] <= DU_BU_bus_a[g];
//                     DU_BU_bus_b_D[g] <= DU_BU_bus_b[g];
//                 end
//             end
//         end
//     endgenerate

//     assign valid_o = BU_DU_valid[STAGES-1];
//     assign a_o     = BU_DU_bus_a[STAGES-1];
//     assign b_o     = BU_DU_bus_b[STAGES-1];

//     genvar j;
//     generate
//         for (j = 0; j < STAGES-1; j = j + 1) begin : delay_gen
//             Delay_Unit #(
//                 .DATAWIDTH(DATA_WIDTH),
//                 .DEPTH(2**(STAGES-j+1))
//             ) Delay_inst (
//                 .clk_i(clk),
//                 .rst_i(rst),
//                 .stall_i(stall_i),
//                 .valid_i(BU_DU_valid[j]),
//                 .valid_o(DU_BU_valid[j+1]),
//                 .a_i(BU_DU_bus_a[j]),
//                 .b_i(BU_DU_bus_b[j]),
//                 .a_o(DU_BU_bus_a[j+1]),
//                 .b_o(DU_BU_bus_b[j+1])
//             );
//         end
//     endgenerate

//     // Bram Instances for Twiddle factors
//     reg [ADDR_WIDTH-1:0] tf_addr [1:STAGES-1];

//     TwiddleROM #(
//         .STAGE(5),
//         .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_5.mem")
//     ) t_rom_1 (
//         .clk(clk),
//         .dout(tf_data[0]),
//         .addr(tf_addr[0])
//     );

//     TwiddleROM #(
//         .STAGE(4),
//         .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_4.mem")
//     ) t_rom_2 (
//         .clk(clk),
//         .dout(tf_data[1]),
//         .addr(tf_addr[1])
//     );

//     TwiddleROM #(
//         .STAGE(3),
//         .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_3.mem")
//     ) t_rom_3 (
//         .clk(clk),
//         .dout(tf_data[2]),
//         .addr(tf_addr[2])
//     );

//     TwiddleROM #(
//         .STAGE(2),
//         .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_2.mem")
//     ) t_rom_4 (
//         .clk(clk),
//         .dout(tf_data[3]),
//         .addr(tf_addr[3])
//     );

//     TwiddleROM #(
//         .STAGE(1),
//         .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_1.mem")
//     ) t_rom_5 (
//         .clk(clk),
//         .dout(tf_data[4]),
//         .addr(tf_addr[4])
//     );

//     assign tf_data[STAGES - 1] = 32'h00000549;

//     genvar k;
//     generate
//         for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen
//             always @(posedge clk or posedge rst) begin
//                 if (rst)
//                     tf_addr[k] <= 0;
//                 else if (DU_BU_valid[k]) begin
//                     if (tf_addr[k] == (1 << k) - 1)
//                         tf_addr[k] <= 0;
//                     else
//                         tf_addr[k] <= tf_addr[k] + 1;
//                 end
//             end
//         end
//     endgenerate

// endmodule

module INTT_engine #(
    parameter N = 64,
    parameter STAGES = $clog2(N),
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter Q = 12289,
    parameter Q_WIDTH = 32,
    parameter Q_INV = 12287
) (
    input  wire                    clk,
    input  wire                    rst,
    input  wire                    valid_i,
    input  wire                    stall_i,
    input  wire [DATA_WIDTH-1:0]   a_i,
    input  wire [DATA_WIDTH-1:0]   b_i,
    output wire [DATA_WIDTH-1:0]   a_o,
    output wire [DATA_WIDTH-1:0]   b_o,
    output wire                    valid_o
);

    wire [DATA_WIDTH-1:0] BU_DU_bus_a [0:STAGES-1];
    wire [DATA_WIDTH-1:0] BU_DU_bus_b [0:STAGES-1];
    wire [DATA_WIDTH-1:0] DU_BU_bus_a [1:STAGES-1];
    wire [DATA_WIDTH-1:0] DU_BU_bus_b [1:STAGES-1];
    wire [DATA_WIDTH-1:0] tf_data     [0:STAGES-1];

    wire BU_DU_valid [0:STAGES-1];
    wire DU_BU_valid [1:STAGES-1];

    reg                  DU_BU_valid_D [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_a_D  [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_b_D  [0:STAGES-1];

    reg [ADDR_WIDTH-1:0] tf_addr [0:STAGES-1];

    integer m;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            DU_BU_valid_D[0] <= 1'b0;
            DU_BU_bus_a_D[0] <= '0;
            DU_BU_bus_b_D[0] <= '0;
        end else if (!stall_i) begin
            DU_BU_valid_D[0] <= valid_i;
            DU_BU_bus_a_D[0] <= a_i;
            DU_BU_bus_b_D[0] <= b_i;
        end
    end

    genvar i;
    generate
        for (i = 0; i < STAGES; i = i + 1) begin : butterfly_gen
            butterfly_unit_GS #(
                .DATA_WIDTH(DATA_WIDTH),
                .Q(Q),
                .Q_WIDTH(Q_WIDTH),
                .Q_INV(Q_INV)
            ) butterfly_inst (
                .clk(clk),
                .rst(rst),
                .start(DU_BU_valid_D[i] && !stall_i),
                .valid_out(BU_DU_valid[i]),
                .a_i(DU_BU_bus_a_D[i]),
                .b_i(DU_BU_bus_b_D[i]),
                .w(tf_data[i]),
                .a_o(BU_DU_bus_a[i]),
                .b_o(BU_DU_bus_b[i])
            );
        end
    endgenerate

    genvar g;
    generate
        for (g = 1; g < STAGES; g = g + 1) begin : pipe_reg
            always @(posedge clk or posedge rst) begin
                if (rst) begin
                    DU_BU_valid_D[g] <= 1'b0;
                    DU_BU_bus_a_D[g] <= '0;
                    DU_BU_bus_b_D[g] <= '0;
                end else if (!stall_i) begin
                    DU_BU_valid_D[g] <= DU_BU_valid[g];
                    DU_BU_bus_a_D[g] <= DU_BU_bus_a[g];
                    DU_BU_bus_b_D[g] <= DU_BU_bus_b[g];
                end
            end
        end
    endgenerate

    genvar j;
    generate
        for (j = 0; j < STAGES-1; j = j + 1) begin : delay_gen
            Delay_Unit #(
                .DATAWIDTH(DATA_WIDTH),
                .DEPTH(N >> (j + 1))
            ) Delay_inst (
                .clk_i(clk),
                .rst_i(rst),
                .stall_i(stall_i),
                .valid_i(BU_DU_valid[j]),
                .valid_o(DU_BU_valid[j+1]),
                .a_i(BU_DU_bus_a[j]),
                .b_i(BU_DU_bus_b[j]),
                .a_o(DU_BU_bus_a[j+1]),
                .b_o(DU_BU_bus_b[j+1])
            );
        end
    endgenerate

    TwiddleROM #(.STAGE(5), .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_5.mem")) t_rom_0 (
        .clk(clk), .dout(tf_data[0]), .addr(tf_addr[0])
    );
    TwiddleROM #(.STAGE(4), .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_4.mem")) t_rom_1 (
        .clk(clk), .dout(tf_data[1]), .addr(tf_addr[1])
    );
    TwiddleROM #(.STAGE(3), .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_3.mem")) t_rom_2 (
        .clk(clk), .dout(tf_data[2]), .addr(tf_addr[2])
    );
    TwiddleROM #(.STAGE(2), .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_2.mem")) t_rom_3 (
        .clk(clk), .dout(tf_data[3]), .addr(tf_addr[3])
    );
    TwiddleROM #(.STAGE(1), .INIT_FILE("../../RTL/TwiddleFactors/intt_stage_1.mem")) t_rom_4 (
        .clk(clk), .dout(tf_data[4]), .addr(tf_addr[4])
    );

    assign tf_data[STAGES-1] = 32'h00000549;

    genvar k;
    generate
        for (k = 0; k < STAGES-1; k = k + 1) begin : tf_rom_ctrl
            always @(posedge clk or posedge rst) begin
                if (rst) begin
                    tf_addr[k] <= '0;
                end else if (!stall_i && DU_BU_valid_D[k]) begin
                    if (tf_addr[k] == ((1 << (STAGES-k-1)) - 1))
                        tf_addr[k] <= '0;
                    else
                        tf_addr[k] <= tf_addr[k] + 1'b1;
                end
            end
        end
    endgenerate

    assign valid_o = BU_DU_valid[STAGES-1];
    assign a_o     = BU_DU_bus_a[STAGES-1];
    assign b_o     = BU_DU_bus_b[STAGES-1];

endmodule