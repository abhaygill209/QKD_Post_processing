`timescale 1ns/1ps

module tb_polynomialMUL;

// Parameters
parameter DATA_WIDTH = 32;
parameter N = 8;
parameter Q = 3329;

// DUT signals
reg clk;
reg rst;
reg start;

reg NTT_egn_1_a_i, NTT_egn_1_b_i;
reg NTT_egn_2_a_i, NTT_egn_2_b_i;

wire valid;
wire NTT_egn_3_a_o, NTT_egn_3_b_o;

// Tie off stall (unused for now)
wire stall = 1'b0;

// Instantiate DUT
polynomialMUL #(
.DATA_WIDTH(DATA_WIDTH),
.N(N),
.Q(Q)
) dut (
.clk(clk),
.rst(rst),
.start(start),
.stall(stall),
.valid(valid),
.NTT_egn_1_a_i(NTT_egn_1_a_i),
.NTT_egn_1_b_i(NTT_egn_1_b_i),
.NTT_egn_2_a_i(NTT_egn_2_a_i),
.NTT_egn_2_b_i(NTT_egn_2_b_i),
.NTT_egn_3_a_o(NTT_egn_3_a_o),
.NTT_egn_3_b_o(NTT_egn_3_b_o)
);

// Clock generation
always #5 clk = ~clk;

integer i;

initial begin
// 🔽 VCD dump
$dumpfile("polynomialMUL.vcd");
$dumpvars(0, tb_polynomialMUL);

// Init
clk = 0;
rst = 1;
start = 0;

NTT_egn_1_a_i = 0;
NTT_egn_1_b_i = 0;
NTT_egn_2_a_i = 0;
NTT_egn_2_b_i = 0;

// Reset
#20;
rst = 0;

// Start
@(posedge clk);
start = 1;
// Continuous streaming input
for (i = 0; i < 16; i = i + 1) begin
    NTT_egn_1_a_i = $random % 2;
    NTT_egn_1_b_i = $random % 2;
    NTT_egn_2_a_i = $random % 2;
    NTT_egn_2_b_i = $random % 2;
    @(posedge clk);
end

#500
// Stop feeding
@(posedge clk);
start = 0;

// Let pipeline drain
repeat (40) @(posedge clk);

$finish;

end

// Monitor
initial begin
$display("Time\tstart\tA1\tB1\tA2\tB2\t| OUT_A OUT_B valid");
$monitor("%0t\t%b\t%b\t%b\t%b\t%b\t| %b %b %b",
$time,
start,
NTT_egn_1_a_i,
NTT_egn_1_b_i,
NTT_egn_2_a_i,
NTT_egn_2_b_i,
NTT_egn_3_a_o,
NTT_egn_3_b_o,
valid
);
end

endmodule
