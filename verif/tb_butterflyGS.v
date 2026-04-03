`timescale 1ns/1ps

module tb_butterfly_GS;

parameter W = 32;
parameter Q = 12289;
parameter DEPTH = 32; // queue size

// DUT signals
reg clk, rst, start,stall;
reg [W-1:0] a_i, b_i, w;
wire [W-1:0] a_o, b_o;

// Internal
reg [W-1:0] a_mont, b_mont, w_mont;
reg [W-1:0] a_out_norm, b_out_norm;

localparam Q_WIDTH = 14; 
localparam R = 1 << Q_WIDTH;
localparam Rinv_mod_q = 9216;

// Queue for expected outputs
reg [W-1:0] exp_u [0:DEPTH-1];
reg [W-1:0] exp_v [0:DEPTH-1];

integer wr_ptr = 0;
integer rd_ptr = 0;

// Instantiate DUT
butterfly_unit_GS dut (
    .clk(clk),
    .rst(rst),
    .start(start),
    .stall(stall),
    .a_i(a_mont),
    .b_i(b_mont),
    .w(w_mont),
    .a_o(a_o),
    .b_o(b_o)
);

// Clock
always #5 clk = ~clk;

/////////////////////////////
// Reference Model
/////////////////////////////

function [W-1:0] mod_add;
    input [W-1:0] x, y;
    mod_add = (x + y) % Q;
endfunction

function [W-1:0] mod_sub;
    input [W-1:0] x, y;
    mod_sub = (x + Q - y) % Q;
endfunction

function [W-1:0] mod_mul;
    input [W-1:0] x, y;
    mod_mul = (x * y) % Q;
endfunction

/////////////////////////////
// INPUT DRIVER (STREAMING)
/////////////////////////////

integer i,j;

initial begin
    clk = 0;
    rst = 1;
    start = 0;
    stall = 0;
    #20 rst = 0;
    start = 1;
    for (i = 0; i < 20; i = i + 1) begin
        @(posedge clk);
        // Generate random inputs
        a_i = $urandom % Q;
        b_i = $urandom % Q;
        w   = $urandom % Q;

        // Convert to Montgomery
        a_mont = (a_i * R) % Q;
        b_mont = (b_i * R) % Q;
        w_mont = (w   * R) % Q;

        // Compute reference
        exp_u[wr_ptr] = mod_add(a_i, b_i);
        exp_v[wr_ptr] = mod_mul(mod_sub(a_i, b_i), w);

        wr_ptr = wr_ptr + 1;
    end
end

/////////////////////////////
// OUTPUT CHECKER
/////////////////////////////

initial begin
    repeat (7) @(posedge clk); // wait for pipeline latency
    for (j = 0; j < 20; j = j + 1) begin
        @(posedge clk);
        // Convert back from Montgomery
        a_out_norm = (a_o * Rinv_mod_q) % Q;
        b_out_norm = (b_o * Rinv_mod_q) % Q;

        if (a_out_norm !== exp_u[rd_ptr]) begin
            $display("ERROR U @%0d: exp=%d got=%d",
                     rd_ptr, exp_u[rd_ptr], a_out_norm);
        end

        if (b_out_norm !== exp_v[rd_ptr]) begin
            $display("ERROR V @%0d: exp=%d got=%d",
                     rd_ptr, exp_v[rd_ptr], b_out_norm);
        end

        else begin
            $display("PASS @%0d: u=%d v=%d",
                     rd_ptr, a_out_norm, b_out_norm);
        end
        rd_ptr = rd_ptr + 1;
    end
end

/////////////////////////////
// DUMP
/////////////////////////////

initial begin
    $dumpfile("butterfly.vcd");
    $dumpvars(0, tb_butterfly_GS);
end

/////////////////////////////
// FINISH
/////////////////////////////

initial begin
    #2000;
    $finish;
end

endmodule
