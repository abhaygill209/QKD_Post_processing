/*
Improvements required:-
1.One space in FIFO is never filled



*/
module fifo_buffer #(
    parameter WIDTH = 32,
    parameter DEPTH = 8
)(
    input wire clk,
    input wire rst_n,
    input wire FIFO_WR_EN,
    input wire FIFO_RD_EN,
    input wire [WIDTH-1:0] FIFO_DATA_IN,
    output reg [WIDTH-1:0] FIFO_DATA_OUT,
    output wire FIFO_FULL,
    output wire FIFO_EMPTY
);

    // Memory Array
    reg [WIDTH-1:0] memory [0:DEPTH-1];

    // Write and Read Pointers
    reg [\$clog2(DEPTH)-1:0] WR_PTR;
    reg [\$clog2(DEPTH)-1:0] RD_PTR;

    // FIFO Status Signals
    assign FIFO_FULL = (WR_PTR == RD_PTR - 1) || (WR_PTR == 4'b1111 && RD_PTR == 4'b0000);
    assign FIFO_EMPTY = (WR_PTR == RD_PTR);

    // Write Operation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            WR_PTR <= 4'b0000;
        end else if (FIFO_WR_EN && !FIFO_FULL) begin
            memory[WR_PTR] <= FIFO_DATA_IN;
            WR_PTR <= WR_PTR + 1;
        end
    end

    // Read Operation
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            RD_PTR <= 4'b0000;
        end else if (FIFO_RD_EN && !FIFO_EMPTY) begin
            FIFO_DATA_OUT <= memory[RD_PTR];
            RD_PTR <= RD_PTR + 1;
        end
    end

endmodule