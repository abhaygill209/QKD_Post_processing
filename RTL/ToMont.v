module ToMontgomeryConverter #(
    parameter Q_WIDTH = 14,
    parameter Q = 12289,
    parameter Q_INV = 12287,
  parameter R2_MOD_Q = 6829   // R^2 mod q
)(
    input clk,
    input rst,
    input [Q_WIDTH-1:0] a,
    input [Q_WIDTH-1:0] b,
    input start,
    input stall,
    output wire valid_out,
    output wire [Q_WIDTH-1:0] a_bar,
    output wire [Q_WIDTH-1:0] b_bar
);

    // Wires for Montgomery outputs
    wire [Q_WIDTH-1:0] a_bar_wire;
    wire [Q_WIDTH-1:0] b_bar_wire;

    // Instantiate Montgomery Reduction Units
    MontgomeryReductionUnit #(
        .Q_WIDTH(Q_WIDTH),
        .Q(Q),
        .Q_INV(Q_INV)
    ) mont_a (
        .clk(clk),
        .rst(rst),
        .valid_in(start),
        .stall(stall),
        .b_bar(a),
        .w_bar(R2_MOD_Q[Q_WIDTH-1:0]),
        .valid_out(valid_out),
        .c_bar(a_bar_wire)
    );

    MontgomeryReductionUnit #(
        .Q_WIDTH(Q_WIDTH),
        .Q(Q),
        .Q_INV(Q_INV)
    ) mont_b (
        .clk(clk),
        .rst(rst),
        .valid_in(start),
        .stall(stall),
        .b_bar(b),
        .w_bar(R2_MOD_Q[Q_WIDTH-1:0]),
        .valid_out(valid_out),
        .c_bar(b_bar_wire)
    );
  
    assign a_bar = a_bar_wire;
    assign b_bar = b_bar_wire;
endmodule