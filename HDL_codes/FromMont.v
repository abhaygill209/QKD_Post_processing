
module FromMontgomeryConverter #(
    parameter Q_WIDTH = 14,
    parameter Q = 12289
)(
    input clk,
    input rst,
    input [Q_WIDTH-1:0] c_bar,
    input start,
    input stall,
    output wire [Q_WIDTH-1:0] c
);

    wire [Q_WIDTH-1:0] c_wire;

    MontgomeryReductionUnit #(
        .Q_WIDTH(Q_WIDTH),
        .Q(Q)
    ) mont_inv (
        .clk(clk),
        .rst(rst),
        .start(start),
        .stall(stall),
        .b_bar(c_bar),
        .w_bar({{Q_WIDTH-1{1'b0}},1'b1}),
        .c_bar(c_wire)
    );

    assign c = c_wire;

endmodule
