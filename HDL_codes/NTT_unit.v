module top_module #(
    parameter N = 8,
    STAGES = $clog2(N),
    DATA_WIDTH = 32,
    ADDR_WIDTH = 32
) (
    input clk, rst, start,
    input [DATA_WIDTH-1:0]      a_i, b_i,
    output reg [DATA_WIDTH-1:0] a_o, b_o
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
    reg start_delay     [1:STAGES-1];
    
    // Butterfly Units Generation
    genvar i;
    generate
        for (i = 0; i < STAGES; i = i + 1) begin : butterfly_gen
            butterfly_unit_GS #(
                .DATA_WIDTH(DATA_WIDTH)
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
                .B_depth(2**(j+1))
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
        .INIT_FILE("../HDL_codes/twiddle_mem/stage_1.mem")
    ) t_rom_1 (
        .clk(clk),
        .dout(tf_data[1]),
        .addr(tf_addr[1])
    );
    twiddle_rom #(
        .STAGE(2),
        .INIT_FILE("../HDL_codes/twiddle_mem/stage_2.mem")
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
        end
    end

    // Control signals for butterfly and delay units
    always @(*) begin
        start_butterfly[0] = (counter >= 0);
        start_delay[1] = (counter > 2);
        start_butterfly[1] = (counter > 3);
        start_delay[2] = (counter > 4);
        start_butterfly[2] = (counter > 5);
        // Add more control signals as needed for larger N
    end

    // //control signals for twiddle factor ROMs
    // always @(posedge clk or posedge rst) begin
    //     if (rst) begin
    //         tf_addr[1] <= 0;
    //         tf_addr[2] <= 0;
    //     end else if (start) begin
    //         tf_addr[1] <= tf_addr[1] + 1; // Example increment, adjust as needed
    //         tf_addr[2] <= tf_addr[2] + 1; // Example increment, adjust as needed
    //         if (tf_addr[1] == (1 << 1) - 1) begin
    //             tf_addr[1] <= 0; // Wrap around for stage 1
    //         end
    //         if (tf_addr[2] == (1 << 2) - 1) begin
    //             tf_addr[2] <= 0; // Wrap around for stage 2
    //         end
    //     end
    // end

    // control signals for twiddle factor ROMs
    genvar k;
    generate
        for (k = 1; k < STAGES; k = k + 1) begin : tf_rom_ctrl_gen
            always @(posedge clk or posedge rst) begin
                if (rst) begin
                    tf_addr[k] <= 0;
                end else if (start) begin             
                    tf_addr[k] <= tf_addr[k] + 1; // Example increment, adjust as needed
                    if (tf_addr[k] == (1 << k) - 1) begin
                        tf_addr[k] <= 0; // Wrap around for stage k
                    end
                end
            end
        end
    endgenerate

endmodule
