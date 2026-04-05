module MontgomeryReductionUnit #(
    parameter Q_WIDTH = 14,
    parameter Q = 12289,
    parameter Q_INV = 12287
)(
    input clk,
    input rst,

    input valid_in,
    input [Q_WIDTH-1:0] b_bar,
    input [Q_WIDTH-1:0] w_bar,

    output reg valid_out,
    output reg [Q_WIDTH-1:0] c_bar
);

    localparam R_MASK = (1 << Q_WIDTH) - 1;

    // Stage 1: Multiply
    reg [2*Q_WIDTH-1:0] x_s1;
    reg valid_s1;

    // Stage 2: Compute s
    reg [Q_WIDTH-1:0] s_s2;
    reg [2*Q_WIDTH-1:0] x_s2;
    reg valid_s2;

    // Stage 3: Compute t
    reg [2*Q_WIDTH-1:0] t_s3;
    reg valid_s3;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            valid_s1 <= 0;
            valid_s2 <= 0;
            valid_s3 <= 0;
            valid_out <= 0;
        end else begin

            // Stage 1
            valid_s1 <= valid_in;
            if (valid_in)
                x_s1 <= b_bar * w_bar;

            // Stage 2
            valid_s2 <= valid_s1;
            if (valid_s1) begin
                s_s2 <= (x_s1 * Q_INV) & R_MASK;
                x_s2 <= x_s1;  // forward x
            end

            // Stage 3
            valid_s3 <= valid_s2;
            if (valid_s2)
                t_s3 <= x_s2 + s_s2 * Q;

            // Stage 4
            valid_out <= valid_s3;
            if (valid_s3) begin
                // shift + subtract
                if ((t_s3 >> Q_WIDTH) >= Q)
                    c_bar <= (t_s3 >> Q_WIDTH) - Q;
                else
                    c_bar <= (t_s3 >> Q_WIDTH);
            end

        end
    end

endmodule