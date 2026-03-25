module ToMontgomeryConverter #(
    parameter Q_WIDTH = 14,
    parameter Q = 12289,
  parameter R2_MOD_Q = 6829   // R^2 mod q
)(
    input clk,
    input rst_n,
    input [Q_WIDTH-1:0] a,
    input [Q_WIDTH-1:0] b,
    input valid_in,
    output wire valid_out,
    output wire [Q_WIDTH-1:0] a_bar,
    output wire [Q_WIDTH-1:0] b_bar
);

    // Wires for Montgomery outputs
    wire [Q_WIDTH-1:0] a_bar_wire;
    wire [Q_WIDTH-1:0] b_bar_wire;
    wire valid_out1;
    wire valid_out2;

    // Instantiate Montgomery Reduction Units
    MontgomeryReductionUnit #(
        .Q_WIDTH(Q_WIDTH),
        .Q(Q)
    ) mont_a (
        .clk(clk),
        .rst_n(rst_n),
        .valid_in(valid_in),
        .b_bar(a),
        .w_bar(R2_MOD_Q[Q_WIDTH-1:0]),
      .valid_out(valid_out1),
        .c_bar(a_bar_wire)
    );

    MontgomeryReductionUnit #(
        .Q_WIDTH(Q_WIDTH),
        .Q(Q)
    ) mont_b (
        .clk(clk),
        .rst_n(rst_n),
        .valid_in(valid_in),
        .b_bar(b),
        .w_bar(R2_MOD_Q[Q_WIDTH-1:0]),
      .valid_out(valid_out2),
        .c_bar(b_bar_wire)
    );
  
    assign a_bar = a_bar_wire;
    assign b_bar = b_bar_wire;
    assign valid_out=valid_out1&&valid_out2;
endmodule
