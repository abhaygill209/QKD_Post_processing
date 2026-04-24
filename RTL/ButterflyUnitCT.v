module butterfly_unit_CT #(
   parameter DATA_WIDTH= 32,
   parameter Q = 12289,
   parameter Q_WIDTH = 14,
   parameter Q_INV = 12287
) (
    input                       clk,
    input                       rst,
    input                       valid_i,
    input                       stall,
    input  [DATA_WIDTH-1:0]     a_i, b_i,
    input  [DATA_WIDTH-1:0]     w,
    output reg                  valid_out,
    output reg [DATA_WIDTH-1:0] a_o, b_o
);

    localparam R_MASK = (1 << Q_WIDTH) - 1;

    // ---------------- Stage 1 ----------------
    reg [2*Q_WIDTH-1:0] x_s1;
    reg [Q_WIDTH-1:0]   a_s1;
    reg valid_s1;

    // ---------------- Stage 2 ----------------
    reg [Q_WIDTH-1:0] s_s2;
    reg [2*Q_WIDTH-1:0] x_s2;
    reg [Q_WIDTH-1:0] a_s2;
    reg valid_s2;

    // ---------------- Stage 3 ----------------
    reg [2*Q_WIDTH-1:0] t_s3;
    reg [Q_WIDTH-1:0] a_s3;
    reg valid_s3;

    // ---------------- Stage 4 ----------------
    reg [Q_WIDTH-1:0] bw_s4;
    reg [Q_WIDTH-1:0] a_s4;
    reg valid_s4;

    always @(posedge clk) begin
        if (rst) begin
            valid_s1 <= 0;
            valid_s2 <= 0;
            valid_s3 <= 0;
            valid_s4 <= 0;
            valid_out <= 0;

            x_s1 <= 0;
            x_s2 <= 0;
            s_s2 <= 0;
            t_s3 <= 0;

            a_s1 <= 0;
            a_s2 <= 0;
            a_s3 <= 0;
            a_s4 <= 0;

            bw_s4 <= 0;
            a_o <= 0;
            b_o <= 0;
        end 
        else if (!stall) begin

            // -------- Stage 1 --------
            valid_s1 <= valid_i;
            if (valid_i) begin
                x_s1 <= b_i[Q_WIDTH-1:0] * w[Q_WIDTH-1:0];
                a_s1 <= a_i[Q_WIDTH-1:0];
            end

            // -------- Stage 2 --------
            valid_s2 <= valid_s1;
            if (valid_s1) begin
                s_s2 <= (x_s1 * Q_INV) & R_MASK;
                x_s2 <= x_s1;
                a_s2 <= a_s1;
            end

            // -------- Stage 3 --------
            valid_s3 <= valid_s2;
            if (valid_s2) begin
                t_s3 <= x_s2 + s_s2 * Q;
                a_s3 <= a_s2;
            end

            // -------- Stage 4 --------
            valid_s4 <= valid_s3;
            if (valid_s3) begin
                // Montgomery reduction result
                if ((t_s3 >> Q_WIDTH) >= Q)
                    bw_s4 <= (t_s3 >> Q_WIDTH) - Q;
                else
                    bw_s4 <= (t_s3 >> Q_WIDTH);

                a_s4 <= a_s3;
            end

            // -------- Output Stage --------
            valid_out <= valid_s4;
            if (valid_s4) begin
                // Butterfly
                if (a_s4 + bw_s4 >= Q)
                    a_o <= a_s4 + bw_s4 - Q;
                else
                    a_o <= a_s4 + bw_s4;

                if (a_s4 >= bw_s4)
                    b_o <= a_s4 - bw_s4;
                else
                    b_o <= a_s4 + Q - bw_s4;
            end
        end
    end

endmodule