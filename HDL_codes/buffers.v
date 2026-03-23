module buffer_units #(
    parameter IN_Width = 32,
    parameter OUT_Width = 32,
    parameter DATA_Width = 32,
    parameter B_depth = 4,
    parameter N = 16,
    parameter stage = 1
) (
    input  clk, rst,
    input  start,
    input  [IN_Width-1:0] a_i, b_i,
    output [OUT_Width-1:0] a_o, b_o 
);
    // signal declaration 
    reg [DATA_Width-1:0] read_buffer;
    reg [DATA_Width-1:0] counter; // counter for dispatching data to buffers
    reg State;
    reg wr_en_1, wr_en_2, read_en_1, read_en_2, ctrl_1;
    reg ctrl_2, ctrl_3; // output mux controls (registered)
    reg ctrl_2_t, ctrl_3_t; // output mux controls (combinational)
    wire [DATA_Width-1:0] buff_1_i, buff_2_i;
    wire [DATA_Width-1:0] buff_1, buff_2;
    wire [DATA_Width-1:0] b_o_mux;

    // FIFO instances
    fifo #(
        .WIDTH(DATA_Width),
        .DEPTH(B_depth)
    ) buffer_1 (
        .clk(clk),
        .rst(rst),
        .wr_en(wr_en_1),
        .rd_en(read_en_1),
        .din(buff_1_i),
        .dout(buff_1)
    );

    fifo #(
        .WIDTH(DATA_Width),
        .DEPTH(B_depth)
    ) buffer_2 (
        .clk(clk),
        .rst(rst),
        .wr_en(wr_en_2),
        .rd_en(read_en_2),
        .din(buff_2_i),
        .dout(buff_2)
    );

    // input mux 
    mux2x1 mux1 (
        .a(a_i),
        .b(b_i),
        .sel(ctrl_1),
        .out(buff_1_i)
    );

    mux2x1 mux2 (
        .a(b_i),
        .b(a_i),
        .sel(ctrl_1),
        .out(buff_2_i)
    );

    // output mux 
    mux2x1 mux3 (
        .a(buff_1),
        .b(buff_2),
        .sel(ctrl_2),
        .out(a_o)
    );

    mux2x1 mux4 (
        .a(buff_2),
        .b(buff_1),
        .sel(ctrl_2),
        .out(b_o_mux)
    );

    mux2x1 mux5 (
        .a(b_o_mux),
        .b(read_buffer),
        .sel(ctrl_3),
        .out(b_o)
    );

    localparam factor = 2**(stage+1);
    localparam STAGE_1 = 0, STAGE_2 = 1;

    // Start sequence as soon as start signal is received
    always @(posedge clk or posedge rst) begin
        if (rst) begin 
            State   <= STAGE_1;
            counter <= 1;
        end 
        else begin 
            if (start) begin 
                counter <= counter + 1;
                if (counter == factor/4) begin 
                    counter <= 1;
                    State   <= !State;
                end 
            end else begin 
                State   <= STAGE_1;
                counter <= 1;
            end 
        end 
        
    end

    // write 
    always @(*) begin 
        case (State) 
            STAGE_1: begin
                // write 
                wr_en_1 = 1;
                wr_en_2 = 1;
                ctrl_1 = 0; 
                // read 
                read_en_1 = 1;
                read_en_2 = 1;
            end 
            STAGE_2: begin 
                wr_en_1 = 1;
                wr_en_2 = 0; 
                // Mux Control
                ctrl_1 = 1;
                // read 
                read_en_1 = 1;
                read_en_2 = 0;
            end 
        endcase
    end

    // read 
    always @(posedge clk or posedge rst) begin 
        if (rst) begin 
            ctrl_2 <= 0;
            ctrl_3 <= 0;
            read_buffer <= 0;
        end 
        else begin 
            case (State) 
                STAGE_1: begin 
                    // Mux control 
                    ctrl_2 <= 1;
                    ctrl_3 <= 0;
                end 
                STAGE_2: begin 
                    // Mux control 
                    ctrl_2 <= 0;
                    ctrl_3 <= 1;
                    read_buffer <= a_i; 
                end 
            endcase
        end 
    end 
 
    
endmodule


// Stage Algorithm 
/*
    1. data valid recieved: start counter 
    2. after data valid and counter started: for factor/4 cycles store data 
    3. after factor/4 to N/2 cycles: read and inversion that happens along with write to first buffer
    4. between N/2 to 3factor/4: read and inversion happens but not write
*/