/*
Ideology: 
How to start the process? 
    will give continuous inputs from fifo once the accelerator starts. 
    so if (start == 1) then the accelerator will start processing the data from the fifo.
    if (stall == 1) then the accelerator will pause the processing and wait for stall to be deasserted.
    pipeline to stop working depending on N

    => Capture STATE Machine 
        IDLE: so nth wait for start signal 
        BUSY: start capturing input data and process it through the pipeline.
        STALL: pause the pipeline and wait for stall to be deasserted.
        
    valid will be set high when the output is ready to be read - will be a continuous signal as well. 


*/

module polynomialMUL #(
    parameter DATA_WIDTH = 32,
    parameter N    = 8,
    parameter Q = 12289,
    parameter Q_WIDTH = 32,
    parameter Q_INV = 12287
) (
    input  clk, rst, start, stall,
    output reg valid,
    input  NTT_egn_1_a_i, NTT_egn_1_b_i, // A
    input  NTT_egn_2_a_i, NTT_egn_2_b_i, // B
    output NTT_egn_3_a_o, NTT_egn_3_b_o // C
);
    // Capture input FSM 
    reg [1:0] state;
    localparam IDLE = 2'b00, BUSY = 2'b01, STALL = 2'b10;
    
    wire [DATA_WIDTH-1:0] NTT_egn_1_a, NTT_egn_1_b; // A
    wire [DATA_WIDTH-1:0] NTT_egn_2_a, NTT_egn_2_b; // B
    wire NTT_1_valid, NTT_2_valid; 

    wire [DATA_WIDTH-1:0] NTT_1_modgom_a, NTT_1_modgom_b; // A to modgomery multiplication unit
    wire [DATA_WIDTH-1:0] NTT_2_modgom_a, NTT_2_modgom_b; // B to modgomery multiplication unit

    wire [DATA_WIDTH-1:0] modgom_INTT_a, modgom_INTT_b; // Mondgomry to INTT

    // Montgomery form conversion
    localparam R_MOD_N    = (1 << DATA_WIDTH) % Q;   // R mod N
    // Engine 1 Input
    assign NTT_egn_1_a = NTT_egn_1_a_i ? R_MOD_N : 0; 
    assign NTT_egn_1_b = NTT_egn_1_b_i ? R_MOD_N : 0; 
    // Engine 2 Input 
    assign NTT_egn_2_a = NTT_egn_2_a_i ? R_MOD_N : 0; 
    assign NTT_egn_2_b = NTT_egn_2_b_i ? R_MOD_N : 0; 


    // NTT engine 1
    NTT_engine #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .Q(Q),
        .Q_WIDTH(Q_WIDTH),
        .Q_INV(Q_INV)
    ) NTT_1 (
        .clk(clk),
        .rst(rst),
        .start(start),
        .valid_o(NTT_1_valid),
        .a_i(NTT_egn_1_a), // input polynomial A
        .b_i(NTT_egn_1_b), // input polynomial A
        .a_o(NTT_1_modgom_a), // output in NTT domain (to be connected to butterfly unit)
        .b_o(NTT_1_modgom_b)
    );

    // NTT engine 2
    NTT_engine #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .Q(Q),
        .Q_WIDTH(Q_WIDTH),
        .Q_INV(Q_INV)
    ) NTT_2 (
        .clk(clk),
        .rst(rst),
        .start(start),
        .valid_o(NTT_2_valid),
        .a_i(NTT_egn_2_a), // input polynomial B
        .b_i(NTT_egn_2_b), // input polynomial B
        .a_o(NTT_2_modgom_a), // output in NTT domain (to be connected to butterfly unit)
        .b_o(NTT_2_modgom_b)
    );

    // montgomery multiplication unit (point-wise multiplication in NTT domain).
    assign modgom_INTT_a = (NTT_1_modgom_a * NTT_2_modgom_a) % Q; // output of montgomery multiplication unit to INTT engine
    assign modgom_INTT_b = (NTT_1_modgom_b * NTT_2_modgom_b) % Q; // output of montgomery multiplication unit to INTT engine

    // NTT engine 3 - inverse NTT for polynomial C (after point-wise multiplication in NTT domain)
    wire [DATA_WIDTH-1:0] poly_C_modgom_a, poly_C_modgom_b;
    INTT_engine #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH),
        .Q(Q),
        .Q_WIDTH(Q_WIDTH),
        .Q_INV(Q_INV)
    ) INTT (
        .clk(clk),
        .rst(rst),
        .start(NTT_2_valid),
        .a_i(modgom_INTT_a), // input polynomial C
        .b_i(modgom_INTT_b), // input polynomial C
        .a_o(poly_C_modgom_a),
        .b_o(poly_C_modgom_b)
    );

    // Final result in c_o after inverse NTT // 
    // Need to change it // 
    assign NTT_egn_3_a_o = poly_C_modgom_a[0] ? 1 : 0;
    assign NTT_egn_3_b_o = poly_C_modgom_b[0] ? 1 : 0;

endmodule