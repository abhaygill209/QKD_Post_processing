module NTT_engine #(
    parameter N = 2**4,
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
    output reg valid_o
);

    // Binary input
    always @(*) begin  
        DU_BU_bus_a_D[0] = a_i; // connects First Butterfly unit a
        DU_BU_bus_b_D[0] = b_i; // connects First Butterfly unit b
        DU_BU_valid_D[0] = valid_i;
    end

    // Butterfly unit to buffer connections
    wire [DATA_WIDTH-1:0] BU_DU_bus_a   [0:STAGES-1];
    wire [DATA_WIDTH-1:0] BU_DU_bus_b   [0:STAGES-1];

    // buffer unit to butterfly connections
    wire [DATA_WIDTH-1:0] DU_BU_bus_a   [1:STAGES-1];
    wire [DATA_WIDTH-1:0] DU_BU_bus_b   [1:STAGES-1];

    // Twiddle factors
    wire [DATA_WIDTH-1:0] tf_data       [0:STAGES-1];

    // Butterfly Start Signal
    reg BU_DU_valid   [0:STAGES-1];
    reg DU_BU_valid   [1:STAGES-1];

    // 1-Cycle Delay to BU for mem sync
    reg                  DU_BU_valid_D [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_a_D [0:STAGES-1];
    reg [DATA_WIDTH-1:0] DU_BU_bus_b_D [0:STAGES-1];

     

    // Butterfly Units Generation
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
                .start(DU_BU_valid_D[i]), 
                .valid_out(BU_DU_valid[i]),
                .a_i(DU_BU_bus_a_D[i]), // connect to buffer output
                .b_i(DU_BU_bus_b_D[i]), // connect to buffer output
                .w(tf_data[i]), // connect to twiddle ROM output
                .a_o(BU_DU_bus_a[i]), // connect to next buffer input
                .b_o(BU_DU_bus_b[i])  // connect to next buffer input
            );
        end
    endgenerate

    // 1-Cycle Delay for data from DU to BU
    genvar g;
    generate 
        for(g = 1; g < STAGES; g = g + 1) begin : delay
            always @(posedge clk or posedge rst) begin
                if (rst) begin 
                    DU_BU_valid_D[g] <= 1'b0;
                    DU_BU_bus_a_D[g] <= 0;
                    DU_BU_bus_b_D[g] <= 0;
                end else begin 
                    DU_BU_valid_D[g] <= DU_BU_valid[g];
                    DU_BU_bus_a_D[g] <= DU_BU_bus_a[g];
                    DU_BU_bus_b_D[g] <= DU_BU_bus_b[g];
                end
            end
        end
    endgenerate

    assign valid_o = BU_DU_valid[STAGES-1]; // Valid output from BU
    assign a_o     = BU_DU_bus_a[STAGES-1]; // Output from the last butterfly unit
    assign b_o     = BU_DU_bus_b[STAGES-1]; // Output from the last butterfly unit
    
    // Delay Unit Generation
    genvar j;
    generate
        for (j = 0; j < STAGES-1; j = j + 1) begin : delay_gen
            Delay_Unit #(
                .DATAWIDTH(DATA_WIDTH),
                .DEPTH(2**(j+2))
            ) Delay_inst (
                .clk_i(clk),
                .rst_i(rst),
                .stall_i(stall_i),
                .valid_i(BU_DU_valid[j]),
                .valid_o(DU_BU_valid[j+1]),
                .a_i(BU_DU_bus_a[j]), // connect to butterfly output
                .b_i(BU_DU_bus_b[j]), // connect to butterfly output
                .a_o(DU_BU_bus_a[j+1]), // connect to next butterfly input
                .b_o(DU_BU_bus_b[j+1])  // connect to next butterfly input
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

    assign tf_data[0] = 32'h00000549; // hard coded

    // ROM Address Controll Unit
    genvar k;
    generate
        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen
            always @(posedge clk or posedge rst) begin
                if (rst) begin
                    tf_addr[k] <= 0;
                end else if (DU_BU_valid[k]) begin             
                    tf_addr[k] <= tf_addr[k] + 1; 
                    if (tf_addr[k] == (1 << k) - 1) begin
                        tf_addr[k] <= 0;
                    end
                end
            end
        end
    endgenerate

endmodule

