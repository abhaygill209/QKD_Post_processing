module Delay_Unit #(
    parameter DATA_WIDTH = 16,
    parameter STAGE     = 1,
    parameter DEPTH     = 10,
    parameter N         = 16
) (
    // generic inputs 
    input clk_i, rst_i,
    // input valid signal 
    input valid_i, stall_i,
    // output valid signal 
    output reg valid_o,
    // Input data
    input  [DATA_WIDTH-1:0] a_i, b_i,
    // Output data
    output [DATA_WIDTH-1:0] a_o, b_o
);

    // valid_i implies write into FIFO - 32 bit write 
    // if Buffer_2 (!empty) read from Buffer_1 and Buffer_2
    // after every 2^stage-1 writes fill the other buffer 
    // Buffer Depth? - 
    // for Buffer_1 - if N point ntt then the cycle repeats itself every 
    // N / 2^stage writes, thus at max 
    // for continuity: 
    // for first cycle  - 2^stage writes and stage - 1 reads
    // subsequent cycle - 2^stage writes and 2^stage-1 reads 
    // thus for all N writes to happen we need N / (2^stage-1) cycles
    // and max buffer depth = N/2 - ((N / (2^stage+1)) - 1 )*(2^stage-1) - stage - 1

    reg buffer_1_wr_en, buffer_2_wr_en;
    reg buffer_1_rd_en, buffer_2_rd_en;
    reg [2*DATA_WIDTH-1:0] buffer_1_data_i, buffer_2_data_i;
    reg [DATA_WIDTH-1:0] buffer_1_data_o, buffer_2_data_o;
    reg buffer_1_empty, buffer_2_empty;
    reg state;
    reg [STAGE:0] counter;
    wire fifo_change;

    DU_FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_1 (
        .clk(clk_i),
        .rst(rst_i),
        .wr_en(buffer_1_wr_en),
        .wr_data(buffer_1_data_i),
        //.full(),
        .rd_en(buffer_1_rd_en),
        .rd_data(buffer_1_data_o),
        .empty(buffer_1_empty)
    );

    DU_FIFO #(
        .DATA_WIDTH(DATA_WIDTH),
        .DEPTH(DEPTH)
    ) buffer_2 (
        .clk(clk_i),
        .rst(rst_i),
        .wr_en(buffer_2_wr_en),
        .wr_data(buffer_2_data_i),
        //.full(),
        .rd_en(buffer_2_rd_en),
        .rd_data(buffer_2_data_o),
        .empty(buffer_2_empty)
    );
    
    assign fifo_change = (counter == 2**(STAGE-1) - 1);

    always @(posedge clk_i) begin 
        if (rst_i) begin 
            counter <= 0;
        end 
        else begin 
            if (fifo_change) begin 
                counter <= 0;
            end 
            else if (valid_i && !stall_i) begin 
                counter <= counter + 1;
            end
        end
    end

    // state machine 
    always @(posedge clk_i) begin 
        if (rst_i) begin 
            state <= 0;
        end 
        else begin 
            if (fifo_change && valid_i) begin 
                state <= ~state;
            end 
        end
    end

    // control logic for filling the buffers
    always @(*) begin 
        case (state)
            0: begin 
                buffer_1_data_i = {b_i, a_i};
                buffer_2_data_i = 0;
                buffer_1_wr_en = valid_i;
                buffer_2_wr_en = 0;
            end 
            1: begin 
                buffer_1_data_i = 0;
                buffer_2_data_i = {b_i, a_i};
                buffer_1_wr_en = 0;
                buffer_2_wr_en = valid_i;
            end 
            default: begin 
                buffer_1_wr_en = 0;
                buffer_2_wr_en = 0;
            end
        endcase
    end 
    // control logic for reading from buffers
    always @(*) begin
        buffer_1_rd_en = ~buffer_2_empty;
        buffer_2_rd_en = ~buffer_2_empty;
        a_o = buffer_1_data_o;
        b_o = buffer_2_data_o;
    end

    // for valid_o
    always @(posedge clk_i) begin
        if (rst_i) begin 
            valid_o <= 0;
        end 
        else begin 
            valid_o <= !buffer_2_empty;
        end
    end

endmodule

/*
    Buffer Module: 
    buffer 1 and buffer 2 
    buffer 1 stores 2^stage-1 inputs 
    buffer 2 stores next 2^stage-1 inputs
    as soon as buffer 2 recieves 1st data use it for output 
    continuity: repeat this every 2^stage-1 cycles
    and if buffer 2 has data then keep on giving valid out.
*/