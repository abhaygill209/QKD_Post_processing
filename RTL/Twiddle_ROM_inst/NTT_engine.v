module NTT_engine #(
    parameter N = 2**8,
    parameter STAGES = $clog2(N),
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter Q = 12289,
    parameter Q_WIDTH = 32,
    parameter Q_INV = 12287
) (
    input  clk, rst,
    input  valid_i,
    input  stall_i,
    input  [DATA_WIDTH-1:0] a_i, b_i,
    output [DATA_WIDTH-1:0] a_o, b_o,
    output valid_o
);

    // Binary input
    always @(*) begin
        DU_BU_bus_a_D[0] = a_i;
        DU_BU_bus_b_D[0] = b_i;
        DU_BU_valid_D[0] = valid_i;
    end

    wire [DATA_WIDTH-1:0] BU_DU_bus_a   [0:STAGES-1];
    wire [DATA_WIDTH-1:0] BU_DU_bus_b   [0:STAGES-1];

    wire [DATA_WIDTH-1:0] DU_BU_bus_a   [1:STAGES-1];
    wire [DATA_WIDTH-1:0] DU_BU_bus_b   [1:STAGES-1];

    wire [DATA_WIDTH-1:0] tf_data_0;
    wire [DATA_WIDTH-1:0] tf_data_1;
    wire [DATA_WIDTH-1:0] tf_data_2;
    wire [DATA_WIDTH-1:0] tf_data_3;
    wire [DATA_WIDTH-1:0] tf_data_4;
    wire [DATA_WIDTH-1:0] tf_data_5;
    wire [DATA_WIDTH-1:0] tf_data_6;
    wire [DATA_WIDTH-1:0] tf_data_7;

    wire BU_DU_valid   [0:STAGES-1];
    wire DU_BU_valid   [1:STAGES-1];

    reg                  DU_BU_valid_D [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_a_D [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_b_D [0:STAGES-1];

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
                .valid_i(DU_BU_valid_D[i]),
                .valid_out(BU_DU_valid[i]),
                .a_i(DU_BU_bus_a_D[i]),
                .b_i(DU_BU_bus_b_D[i]),
                .w(
                    (i==0) ? tf_data_0 :
                    (i==1) ? tf_data_1 :
                    (i==2) ? tf_data_2 :
                    (i==3) ? tf_data_3 :
                    (i==4) ? tf_data_4 :
                    (i==5) ? tf_data_5 :
                    (i==6) ? tf_data_6 :
                    tf_data_7
                ),
                .a_o(BU_DU_bus_a[i]),
                .b_o(BU_DU_bus_b[i])
            );
        end
    endgenerate

    genvar g;
    generate
        for(g = 1; g < STAGES; g = g + 1) begin : delay
            always @(posedge clk) begin
                if (rst) begin
                    DU_BU_valid_D[g] <= 1'b0;
                    DU_BU_bus_a_D[g] <= 0;
                    DU_BU_bus_b_D[g] <= 0;
                end else begin
                    if (!stall_i) begin
                        DU_BU_valid_D[g] <= DU_BU_valid[g];
                        DU_BU_bus_a_D[g] <= DU_BU_bus_a[g];
                        DU_BU_bus_b_D[g] <= DU_BU_bus_b[g];
                    end
                end
            end
        end
    endgenerate

    assign valid_o = BU_DU_valid[STAGES-1];
    assign a_o     = BU_DU_bus_a[STAGES-1];
    assign b_o     = BU_DU_bus_b[STAGES-1];

    Delay_Unit #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGE(1),
        .DEPTH(6)
    ) Delay_inst_1 (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall_i),
        .valid_i(BU_DU_valid[0]),
        .valid_o(DU_BU_valid[1]),
        .a_i(BU_DU_bus_a[0]),
        .b_i(BU_DU_bus_b[0]),
        .a_o(DU_BU_bus_a[1]),
        .b_o(DU_BU_bus_b[1])
    );

    Delay_Unit #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGE(2),
        .DEPTH(8)
    ) Delay_inst_2 (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall_i),
        .valid_i(BU_DU_valid[1]),
        .valid_o(DU_BU_valid[2]),
        .a_i(BU_DU_bus_a[1]),
        .b_i(BU_DU_bus_b[1]),
        .a_o(DU_BU_bus_a[2]),
        .b_o(DU_BU_bus_b[2])
    );

    Delay_Unit #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGE(3),
        .DEPTH(14)
    ) Delay_inst_3 (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall_i),
        .valid_i(BU_DU_valid[2]),
        .valid_o(DU_BU_valid[3]),
        .a_i(BU_DU_bus_a[2]),
        .b_i(BU_DU_bus_b[2]),
        .a_o(DU_BU_bus_a[3]),
        .b_o(DU_BU_bus_b[3])
    );

    Delay_Unit #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGE(4),
        .DEPTH(26)
    ) Delay_inst_4 (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall_i),
        .valid_i(BU_DU_valid[3]),
        .valid_o(DU_BU_valid[4]),
        .a_i(BU_DU_bus_a[3]),
        .b_i(BU_DU_bus_b[3]),
        .a_o(DU_BU_bus_a[4]),
        .b_o(DU_BU_bus_b[4])
    );

    Delay_Unit #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGE(5),
        .DEPTH(50)
    ) Delay_inst_5 (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall_i),
        .valid_i(BU_DU_valid[4]),
        .valid_o(DU_BU_valid[5]),
        .a_i(BU_DU_bus_a[4]),
        .b_i(BU_DU_bus_b[4]),
        .a_o(DU_BU_bus_a[5]),
        .b_o(DU_BU_bus_b[5])
    );

    Delay_Unit #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGE(6),
        .DEPTH(98)
    ) Delay_inst_6 (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall_i),
        .valid_i(BU_DU_valid[5]),
        .valid_o(DU_BU_valid[6]),
        .a_i(BU_DU_bus_a[5]),
        .b_i(BU_DU_bus_b[5]),
        .a_o(DU_BU_bus_a[6]),
        .b_o(DU_BU_bus_b[6])
    );

    Delay_Unit #(
        .DATA_WIDTH(DATA_WIDTH),
        .STAGE(7),
        .DEPTH(128)
    ) Delay_inst_7 (
        .clk_i(clk),
        .rst_i(rst),
        .stall_i(stall_i),
        .valid_i(BU_DU_valid[6]),
        .valid_o(DU_BU_valid[7]),
        .a_i(BU_DU_bus_a[6]),
        .b_i(BU_DU_bus_b[6]),
        .a_o(DU_BU_bus_a[7]),
        .b_o(DU_BU_bus_b[7])
    );

    // Twiddle ROM
    reg [ADDR_WIDTH-1:0] tf_addr [1:STAGES-1];

    TwiddleROM #(
        .STAGE(1),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_1.mem")
    ) t_rom_1 (
        .clk(clk),
        .stall_i(stall_i),
        .dout(tf_data_1),
        .addr(tf_addr[1])
    );

    TwiddleROM #(
        .STAGE(2),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_2.mem")
    ) t_rom_2 (
        .clk(clk),
        .stall_i(stall_i),
        .dout(tf_data_2),
        .addr(tf_addr[2])
    );

    TwiddleROM #(
        .STAGE(3),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_3.mem")
    ) t_rom_3 (
        .clk(clk),
        .stall_i(stall_i),
        .dout(tf_data_3),
        .addr(tf_addr[3])
    );

    TwiddleROM #(
        .STAGE(4),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_4.mem")
    ) t_rom_4 (
        .clk(clk),
        .stall_i(stall_i),
        .dout(tf_data_4),
        .addr(tf_addr[4])
    );

    TwiddleROM #(
        .STAGE(5),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_5.mem")
    ) t_rom_5 (
        .clk(clk),
        .stall_i(stall_i),
        .dout(tf_data_5),
        .addr(tf_addr[5])
    );

    TwiddleROM #(
        .STAGE(6),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_6.mem")
    ) t_rom_6 (
        .clk(clk),
        .stall_i(stall_i),
        .dout(tf_data_6),
        .addr(tf_addr[6])
    );

    TwiddleROM #(
        .STAGE(7),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .INIT_FILE("../../RTL/TwiddleFactors/stage_7.mem")
    ) t_rom_7 (
        .clk(clk),
        .stall_i(stall_i),
        .dout(tf_data_7),
        .addr(tf_addr[7])
    );

    assign tf_data_0 = 16'h08ED;

    genvar k;
    generate
        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen
            always @(posedge clk) begin
                if (rst)
                    tf_addr[k] <= 0;
                else if (DU_BU_valid[k] && !stall_i) begin
                    if (tf_addr[k] == (1 << k) - 1)
                        tf_addr[k] <= 0;
                    else
                        tf_addr[k] <= tf_addr[k] + 1;
                end
            end
        end
    endgenerate

endmodule
