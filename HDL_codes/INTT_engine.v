module INTT_engine #(
    parameter N = 8,
    parameter STAGES = $clog2(N),
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32,
    parameter Q = 12289,
    parameter Q_WIDTH = 32,
    parameter Q_INV = 12287
) (
    input  clk, rst, start,
    input  [DATA_WIDTH-1:0] a_i, b_i,
    output [DATA_WIDTH-1:0] a_o, b_o
);

    // Binary input extended to DATA_WIDTH
    assign DU_BU_bus_a[0] = a_i; // connects First Butterfly unit a
    assign DU_BU_bus_b[0] = b_i; // connects First Butterfly unit b

    // Butterfly unit to buffer connections
    wire [DATA_WIDTH-1:0] BU_DU_bus_a   [0:STAGES-1];
    wire [DATA_WIDTH-1:0] BU_DU_bus_b   [0:STAGES-1];

    // buffer unit to butterfly connections
    wire [DATA_WIDTH-1:0] DU_BU_bus_a   [0:STAGES-1];
    wire [DATA_WIDTH-1:0] DU_BU_bus_b   [0:STAGES-1];

    // Twiddle factors
    wire [DATA_WIDTH-1:0] tf_data     [0:STAGES-1];

    // Butterfly Start Signal
    reg start_butterfly [0:STAGES-1];
    reg start_delay     [0:STAGES-1];
    
    // Butterfly Units Generation
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
                .start(start_butterfly[i]), // control signal for pipelining
                .a_i(DU_BU_bus_a[i]), // connect to buffer output
                .b_i(DU_BU_bus_b[i]), // connect to buffer output
                .w(tf_data[i]), // connect to twiddle ROM output
                .a_o(BU_DU_bus_a[i]), // connect to next buffer input
                .b_o(BU_DU_bus_b[i])  // connect to next buffer input
            );
        end
    endgenerate

    assign a_o = BU_DU_bus_a[STAGES-1]; // Output from the last butterfly unit
    assign b_o = BU_DU_bus_b[STAGES-1]; // Output from the last butterfly unit
    
    // Delay Unit Generation
    genvar j;
    generate
        for (j = 0; j < STAGES-1; j = j + 1) begin : delay_gen
            Delay_units #(
                .DATA_WIDTH(DATA_WIDTH),
                .stage(j+1),
                .B_depth(2**(STAGES-j))
            ) Delay_inst (
                .clk(clk),
                .rst(rst),
                .start(start_delay[j+1]), // control signal for pipelining
                .a_i(BU_DU_bus_a[j]), // connect to butterfly output
                .b_i(BU_DU_bus_b[j]), // connect to butterfly output
                .a_o(DU_BU_bus_a[j+1]), // connect to next butterfly input
                .b_o(DU_BU_bus_b[j+1])  // connect to next butterfly input
            );
        end
    endgenerate


    // Bram Instances for Twiddle factors
    reg [ADDR_WIDTH-1:0] tf_addr [1:STAGES-1];
    twiddle_rom #(
        .STAGE(1),
        .INIT_FILE("../HDL_codes/twiddle_mem/intt_stage_1.mem")
    ) t_rom_1 (
        .clk(clk),
        .dout(tf_data[1]),
        .addr(tf_addr[1])
    );
    twiddle_rom #(
        .STAGE(2),
        .INIT_FILE("../HDL_codes/twiddle_mem/intt_stage_2.mem")
    ) t_rom_2 (
        .clk(clk),
        .dout(tf_data[2]),
        .addr(tf_addr[2])
    );
    assign tf_data[0] = 32'h00000001; // hard coded

    // Counter
    integer counter;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            counter <= 0;
        end else if (start) begin
            counter <= counter + 1;
        end else begin
            counter <= 0;
        end
    end

    // Control signals for butterfly and delay units
    always @(*) begin
        start_butterfly[0] = start;
        start_delay[1] = (counter > 3);
        start_butterfly[1] = (counter > 7);
        start_delay[2] = (counter > 10);
        start_butterfly[2] = (counter > 13);
        // Add more control signals as needed for larger N
    end

    // Control signals for butterfly and delay units

    /*
    du_delay = stage + 2, stages + 1, ..... 
    du_delay_n = 3 + n for nth stage

    for nth butterfly unit
        delay_butterfly = 3 * (n - 1) + (n - 1)*(2*(STAGES + 2) - (n - 1)) / 2 
    
    for nth delay unit 
        delay_du = 3 * (n) + (n - 1)*(2*(STAGES + 2) - (n - 1)) / 2 
    */
    
    // ButterFly Unit Control Signals //
    // genvar a;
    // generate
    //     for (a = 2; a < STAGES+1; a = a + 1) begin : butterfly_delay_gen
    //         always @(*) begin
    //             if ((counter > 3 * (a - 1) + ((a - 1)*(2*(STAGES + 2) - (a - 1))) / 2) && start) begin
    //                 start_butterfly[a-1] <= 1; 
    //             end else begin
    //                 start_butterfly[a-1] <= 0;
    //             end
    //         end
    //     end
    // endgenerate
    // always @(*) begin
    //     start_butterfly[0] = start;
    // end

    // // Delay Unit Control Signals
    // genvar b;
    // generate
    //     for (b = 1; b < STAGES; b = b + 1) begin : delay_ctrl_gen
    //         always @(*) begin
    //              if ((counter > 3 * (b) + ((b - 1)*(2*(STAGES + 2) - (b - 1))) / 2) && start) begin
    //                 start_delay[b-1] <= 1; // Start delay after total delay
    //             end else begin
    //                 start_delay[b-1] <= 0;
    //             end
    //         end
    //     end
    // endgenerate

    // Controller for memory access // 
    reg mem_start [1:STAGES-1];
    genvar c;
    generate
        for (c = 2; c < STAGES+1; c = c + 1) begin : memory_ctrl_block
            always @(*) begin
                if (counter > ((3 * (c - 1) + (c - 1)*(2*(STAGES + 2) - (c - 1)) / 2) - 1) && start) begin
                    mem_start[c-1] <= 1; // Start butterfly after total delay
                end else begin
                    mem_start[c-1] <= 0;
                end
            end
        end
    endgenerate

    // control signals for twiddle factor ROMs
    genvar k;
    generate
        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen
            always @(posedge clk or posedge rst) begin
                if (rst) begin
                    tf_addr[k] <= 0;
                end else if (mem_start[k]) begin             
                    tf_addr[k] <= tf_addr[k] + 1; // Example increment, adjust as needed
                    if (tf_addr[k] == (1 << k) - 1) begin
                        tf_addr[k] <= 0; // Wrap around for stage k
                    end
                end
            end
        end
    endgenerate

    assign valid_o = (counter > 3 * (STAGES-1) + (STAGES-1)*(STAGES+4)/2 + 4) ? 1 : 0; // Valid output after total delay of all stages

endmodule
