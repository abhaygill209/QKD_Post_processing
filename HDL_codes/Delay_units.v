// module Delay_units #(
//     parameter DATA_WIDTH = 32,
//     parameter B_depth = 4,
//     parameter N = 16,
//     parameter stage = 1
// ) (
//     input  clk, rst,
//     input  start,
//     input  [DATA_WIDTH-1:0] a_i, b_i,
//     output [DATA_WIDTH-1:0] a_o, b_o
// );
//     // signal declaration 
//     reg [DATA_WIDTH-1:0] read_buffer;
//     reg [DATA_WIDTH-1:0] counter; // counter for dispatching data to buffers
//     reg [1:0] State;
//     reg wr_en_1, wr_en_2, read_en_1, read_en_2, ctrl_1;
//     reg ctrl_2, ctrl_3; // output mux controls (registered)
//     reg ctrl_2_t, ctrl_3_t; // output mux controls (combinational)
//     wire [DATA_WIDTH-1:0] buff_1_i, buff_2_i;
//     wire [DATA_WIDTH-1:0] buff_1, buff_2;
//     wire [DATA_WIDTH-1:0] b_o_mux;

//     // FIFO instances
//     buffer #(
//         .WIDTH(DATA_WIDTH),
//         .DEPTH(B_depth)
//     ) buffer_1 (
//         .clk(clk),
//         .rst(rst),
//         .wr_en(wr_en_1),
//         .rd_en(read_en_1),
//         .din(buff_1_i),
//         .dout(buff_1)
//     );

//     buffer #(
//         .WIDTH(DATA_WIDTH),
//         .DEPTH(B_depth)
//     ) buffer_2 (
//         .clk(clk),
//         .rst(rst),
//         .wr_en(wr_en_2),
//         .rd_en(read_en_2),
//         .din(buff_2_i),
//         .dout(buff_2)
//     );

//     // input mux 
//     mux2x1 mux1 (
//         .a(a_i),
//         .b(b_i),
//         .sel(ctrl_1),
//         .out(buff_1_i)
//     );

//     mux2x1 mux2 (
//         .a(b_i),
//         .b(a_i),
//         .sel(ctrl_1),
//         .out(buff_2_i)
//     );

//     // output mux 
//     mux2x1 mux3 (
//         .a(buff_1),
//         .b(buff_2),
//         .sel(ctrl_2),
//         .out(a_o)
//     );

//     mux2x1 mux4 (
//         .a(buff_2),
//         .b(buff_1),
//         .sel(ctrl_2),
//         .out(b_o_mux)
//     );

//     mux2x1 mux5 (
//         .a(b_o_mux),
//         .b(read_buffer),
//         .sel(ctrl_3),
//         .out(b_o)
//     );

//     localparam STAGE_1 = 0, STAGE_2 = 1, STAGE_3 = 2, NULL = 3;

//     wire stage_change = counter == B_depth/4;

//     // Start sequence as soon as start signal is received
//     always @(posedge clk or posedge rst) begin
//         if (rst) begin 
//             counter <= 0;
//         end 
//         else begin 
//             if (start) begin 
//                 counter <= counter + 1;
//                 if (stage_change) begin 
//                     counter <= 1;
//                 end 
//             end 
//         end 
//     end

//     // write 
//     always @(*) begin 
//         case (State) 
//             STAGE_1: begin
//                 // write 
//                 wr_en_1 = 1;
//                 wr_en_2 = 1;
//                 ctrl_1 = 0; 
//                 // read 
//                 read_en_1 = 0;
//                 read_en_2 = 0;
//             end 
//             STAGE_2: begin 
//                 wr_en_1 = 1;
//                 wr_en_2 = 0; 
//                 // Mux Control
//                 ctrl_1 = 1;
//                 // read 
//                 read_en_1 = 1;
//                 read_en_2 = 0;
//             end 
//             STAGE_3: begin
//                 // write
//                 wr_en_1 = 1;
//                 wr_en_2 = 1;
//                 ctrl_1 = 0; 
//                 // read 
//                 read_en_1 = 1;
//                 read_en_2 = 1;
//             end
//             NULL: begin 
//                 wr_en_1 = 0;
//                 wr_en_2 = 0;
//                 read_en_1 = 0;
//                 read_en_2 = 0;
//                 ctrl_1 = 0;
//             end 
//         endcase
//     end

//     // read 
//     always @(posedge clk or posedge rst) begin 
//         if (rst) begin 
//             ctrl_2 <= 0;
//             ctrl_3 <= 0;
//             read_buffer <= 0;
//             State   <= NULL;
//         end 
//         else begin 
//             case (State) 
//                 STAGE_1: begin 
//                     // Mux control 
//                     ctrl_2 <= 0;
//                     ctrl_3 <= 0;
//                     if (stage_change) State <= STAGE_2;
//                 end 
//                 STAGE_2: begin 
//                     // Mux control 
//                     ctrl_2 <= 0;
//                     ctrl_3 <= 1;
//                     read_buffer <= a_i;
//                     if (stage_change) State <= STAGE_3; 
//                 end 
//                 STAGE_3: begin
//                     // Mux control 
//                     ctrl_2 <= 1;
//                     ctrl_3 <= 0;
//                     if (stage_change) State <= STAGE_2;
//                 end
//                 NULL: begin 
//                     ctrl_2 <= 0;
//                     ctrl_3 <= 0;
//                     if (start) State <= STAGE_1;
//                 end
//             endcase
//         end 
//     end 
 
    
// endmodule


// // Stage Algorithm 
// /*
//     1. data valid recieved: start counter 
//     2. after data valid and counter started: for factor/4 cycles store data 
//     3. after factor/4 to N/2 cycles: read and inversion that happens along with write to first buffer
//     4. between N/2 to 3factor/4: read and inversion happens but not write
// */

module Delay_units #(
    parameter DATA_WIDTH = 32,
    parameter B_depth = 4,
    parameter N = 16,
    parameter stage = 1
) (
    input  clk, rst,
    input  start,
    input  [DATA_WIDTH-1:0] a_i, b_i,
    output [DATA_WIDTH-1:0] a_o, b_o
);

    // Counter width
    localparam CNT_W = $clog2(B_depth + 1);

    // Signal declaration
    reg [DATA_WIDTH-1:0] read_buffer;
    reg [CNT_W-1:0] counter;
    reg [1:0] State;

    reg wr_en_1, wr_en_2, read_en_1, read_en_2;
    reg ctrl_1;
    reg ctrl_2, ctrl_3;

    wire [DATA_WIDTH-1:0] buff_1_i, buff_2_i;
    wire [DATA_WIDTH-1:0] buff_1, buff_2;
    wire [DATA_WIDTH-1:0] b_o_mux;

    // FIFO instances
    buffer #(
        .WIDTH(DATA_WIDTH),
        .DEPTH(B_depth)
    ) buffer_1 (
        .clk(clk),
        .rst(rst),
        .wr_en(wr_en_1),
        .rd_en(read_en_1),
        .din(buff_1_i),
        .dout(buff_1)
    );

    buffer #(
        .WIDTH(DATA_WIDTH),
        .DEPTH(B_depth)
    ) buffer_2 (
        .clk(clk),
        .rst(rst),
        .wr_en(wr_en_2),
        .rd_en(read_en_2),
        .din(buff_2_i),
        .dout(buff_2)
    );

    // Input mux
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

    // Output mux
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

    // FSM states
    localparam STAGE_1 = 2'd0,
               STAGE_2 = 2'd1,
               STAGE_3 = 2'd2,
               NULL    = 2'd3;

    // Stage change condition
    wire stage_change = (counter == (B_depth/4));

    // Counter logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin 
            counter <= 0;
        end 
        else begin 
            if (start) begin 
                if (stage_change)
                    counter <= 1;
                else
                    counter <= counter + 1;
            end 
        end 
    end

    // Combinational control logic
    always @(*) begin 
        // Default assignments (prevents latches)
        wr_en_1   = 0;
        wr_en_2   = 0;
        read_en_1 = 0;
        read_en_2 = 0;
        ctrl_1    = 0;

        case (State) 
            STAGE_1: begin
                wr_en_1 = 1;
                wr_en_2 = 1;
                ctrl_1  = 0;
                read_en_1 = 0;
                read_en_2 = 0;
            end 

            STAGE_2: begin 
                wr_en_1 = 1;
                wr_en_2 = 0;
                ctrl_1  = 1;
                read_en_1 = 1;
                read_en_2 = 0;
            end 

            STAGE_3: begin
                wr_en_1 = 1;
                wr_en_2 = 1;
                ctrl_1  = 0;
                read_en_1 = 1;
                read_en_2 = 1;
            end

            NULL: begin
                // defaults already applied
            end 
        endcase
    end

    // Sequential FSM
    always @(posedge clk or posedge rst) begin 
        if (rst) begin 
            ctrl_2 <= 0;
            ctrl_3 <= 0;
            read_buffer <= 0;
            State <= NULL;
        end 
        else begin 
            case (State) 
                STAGE_1: begin 
                    ctrl_2 <= 0;
                    ctrl_3 <= 0;
                    if (stage_change) State <= STAGE_2;
                    if (!start)       State <= NULL;
                end 

                STAGE_2: begin 
                    ctrl_2 <= 0;
                    ctrl_3 <= 1;
                    read_buffer <= a_i;
                    if (stage_change) State <= STAGE_3; 
                    if (!start)       State <= NULL;
                end 

                STAGE_3: begin
                    ctrl_2 <= 1;
                    ctrl_3 <= 0;
                    if (stage_change) State <= STAGE_2;
                    if (!start)       State <= NULL;
                end

                NULL: begin 
                    ctrl_2 <= 0;
                    ctrl_3 <= 0;
                    if (start) State <= STAGE_1;
                end
            endcase
        end 
    end 
 
endmodule