module top_module #(
    parameter N = 8 
) (
    input clk, rst, start, in_valid,
    input [N-1:0] data_i,
    output [31:0] data_o_1, data_o_2
);

    // capture data 
    // store it in a buffer 
    // pass it into the BUF and buffers 
    // control the activation of different buffers 

    reg [N-1:0] data;
    // capture data 
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            data <= 0; // Reset data
        end else begin
            if (in_valid) begin
                data <= data_i; // Capture input data
            end
        end
    end

    reg [1:0] mux_ctrl; // for controlling input muxes 
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            mux_ctrl <= 0;
        end else begin
            if (start) begin
                mux_ctrl <= mux_ctrl + 1;;
            end
        end
    end

    wire i_2_BUF_a, i_2_BUF_b; // outputs from the MUXes to butterfly Units 

    // MUX instantiation
    mux4x1 #(.WIDTH(1)) mux_inst (
        .a(data[0]),
        .b(data[2]),
        .c(data[4]),
        .d(data[6]),
        .sel(mux_ctrl),
        .out(i_2_BUF_a)
    );
    mux4x1 #(.WIDTH(1)) mux_inst2 (
        .a(data[1]),
        .b(data[3]),
        .c(data[5]),
        .d(data[7]),
        .sel(mux_ctrl),
        .out(i_2_BUF_b)
    );

    wire [31:0] BUF1_a_DU1_a, BUF1_b_DU1_b;

    // montgomery form conversion unit 


    // first butterfly unit 
    butterfly_unit_GS #(
        .IN_Width(1),
        .OUT_Width(32),
        .DATA_Width(32)
    ) butterfly_inst (
        .clk(clk),
        .rst(rst),
        .a_i(i_2_BUF_a),
        .b_i(i_2_BUF_b),
        .w(32'h00000549), // example twiddle factor
        .a_o(BUF1_a_DU1_a),
        .b_o(BUF1_b_DU1_b)  
    );

    wire [31:0] DU1_a_BUF2_a, DU1_b_BUF2_b; 

    // 1st DU
    buffer_units #(
        .IN_Width(32),
        .OUT_Width(32),
        .DATA_Width(32),
        .stage(1)
    ) buffer_inst (
        .clk(clk),
        .rst(rst),
        .start(start_DU1),
        .a_i(BUF1_a_DU1_a),
        .b_i(BUF1_b_DU1_b),
        .a_o(DU1_a_BUF2_a), 
        .b_o(DU1_b_BUF2_b)  
    );

    wire [31:0] BUF2_a_DU2_a, BUF2_b_DU2_b;

    // 2nd BUF
    butterfly_unit_GS #(
        .IN_Width(32),
        .OUT_Width(32),
        .DATA_Width(32)
    ) butterfly_inst_1 (
        .clk(clk),
        .rst(rst),
        .a_i(DU1_a_BUF2_a),
        .b_i(DU1_b_BUF2_b),
        .w(tf_1_data), // example twiddle factor
        .a_o(BUF2_a_DU2_a),
        .b_o(BUF2_b_DU2_b)
    );

    wire [31:0] DU2_a_BUF3_a, DU2_b_BUF3_b;

    // 2nd DU 
    buffer_units #(
        .IN_Width(32),
        .OUT_Width(32),
        .DATA_Width(32),
        .stage(2)
    ) buffer_inst_2 (
        .clk(clk),
        .rst(rst),
        .start(start_DU2),
        .a_i(BUF2_a_DU2_a),
        .b_i(BUF2_b_DU2_b),
        .a_o(DU2_a_BUF3_a),
        .b_o(DU2_b_BUF3_b)
    );
    
    // 3rd BUF
    butterfly_unit_GS #(
        .IN_Width(32),
        .OUT_Width(32),
        .DATA_Width(32)
    ) butterfly_inst_3 (
        .clk(clk),
        .rst(rst),
        .a_i(DU2_a_BUF3_a),
        .b_i(DU2_b_BUF3_b),
        .w(tf_2_data), // example twiddle factor
        .a_o(data_o_1), 
        .b_o(data_o_2) 
    );

    // inverse montgomery form conversion unit 

    // how do i read it again ??

    // syncronus counter // 
    integer counter;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            counter <= 0;
        end else begin
            if (start) begin
                counter <= counter + 1;
            end
        end
    end

    reg start_DU1, start_DU2;

    // start signals for different stages 
    // can be porametrized 
    // this goes into controller block later
    always @(*) begin
        start_DU1 = (start);
        start_DU2 = (counter > 1);
    end

    wire [31:0] tf_1_data, tf_2_data;
    reg tf_1_addr;
    reg [1:0] tf_2_addr;

    // twiddle factor block // 
    twiddle_rom #(
        .STAGE(1),
        .INIT_FILE("../HDL_codes/twiddle_mem/stage_1.mem")
    ) t_rom_1 (
        .clk(clk),
        .dout(tf_1_data),
        .addr(tf_1_addr)
    );
    twiddle_rom #(
        .STAGE(2),
        .INIT_FILE("../HDL_codes/twiddle_mem/stage_2.mem")
    ) t_rom_2 (
        .clk(clk),
        .dout(tf_2_data),
        .addr(tf_2_addr)
    );

    // this goes into controller block later
    wire start_TW_ROM_1 = (counter >= 1);
    wire start_TW_ROM_2 = (counter >= 4);

    // twiddle factor controller // 
    always @(posedge clk or rst) begin
        if (rst) begin
            tf_1_addr <= 0;
            tf_2_addr <= 0;
        end else begin
            
            if (start_TW_ROM_1) begin
                tf_1_addr <= tf_1_addr + 1;
            end else begin 
                tf_1_addr <= 0;
            end

            if (start_TW_ROM_2) begin 
                tf_2_addr <= tf_2_addr + 1;
            end else begin 
                tf_2_addr <= 0;
            end
        end 
    end
endmodule
// Buffers working fine 
// TO DO LIST:
/*
    1. Twiddle factor integration 
    2. Montgomery Multiplication stuff
    3. Start signal for all the fft stuff 
    4. make a parent parameter file and then use modules from there.
*/