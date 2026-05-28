module butterfly_unit_CT #(
    parameter DATA_WIDTH = 16,
    parameter Q          = 3329,
    parameter Q_WIDTH    = 16,
    parameter Q_INV      = 3327
)(
    input                           clk,
    input                           rst,
    input                           valid_i,
    input                           stall,

    input      [DATA_WIDTH-1:0]     a_i,
    input      [DATA_WIDTH-1:0]     b_i,
    input      [DATA_WIDTH-1:0]     w,

    output reg                      valid_out,
    output reg [DATA_WIDTH-1:0]     a_o,
    output reg [DATA_WIDTH-1:0]     b_o
);

    // =====================================================
    // Montgomery Constants
    // =====================================================

    localparam R_MASK = (1 << Q_WIDTH) - 1;

    // =====================================================
    // Pipeline Registers
    // =====================================================

    reg [31:0] mult_s1;
    reg [15:0] a_s1;
    reg        valid_s1;

    reg [15:0] m_s2;
    reg [31:0] mult_s2;
    reg [15:0] a_s2;
    reg        valid_s2;

    reg [31:0] t_s3;
    reg [15:0] a_s3;
    reg        valid_s3;

    reg [15:0] bw_s4;
    reg [15:0] a_s4;
    reg        valid_s4;

    // temp variables
    reg [16:0] add_temp;
    reg [16:0] sub_temp;

    // =====================================================
    // Pipeline
    // =====================================================

    always @(posedge clk) begin

        if (rst) begin

            valid_s1  <= 0;
            valid_s2  <= 0;
            valid_s3  <= 0;
            valid_s4  <= 0;
            valid_out <= 0;

            mult_s1 <= 0;
            mult_s2 <= 0;
            m_s2    <= 0;
            t_s3    <= 0;

            a_s1 <= 0;
            a_s2 <= 0;
            a_s3 <= 0;
            a_s4 <= 0;

            bw_s4 <= 0;

            a_o <= 0;
            b_o <= 0;

        end
        else if (!stall) begin

            // =================================================
            // Stage 1
            // Multiply
            // =================================================

            valid_s1 <= valid_i;

            if (valid_i) begin

                mult_s1 <= b_i * w;

                a_s1 <= a_i;

            end

            // =================================================
            // Stage 2
            // m = (T * qinv) mod R
            // =================================================

            valid_s2 <= valid_s1;

            if (valid_s1) begin

                m_s2 <= (mult_s1 * Q_INV) & R_MASK;

                mult_s2 <= mult_s1;

                a_s2 <= a_s1;

            end

            // =================================================
            // Stage 3
            // t = (T + m*q)
            // =================================================

            valid_s3 <= valid_s2;

            if (valid_s2) begin

                t_s3 <= mult_s2 + (m_s2 * Q);

                a_s3 <= a_s2;

            end

            // =================================================
            // Stage 4
            // bw = t / R
            // =================================================

            valid_s4 <= valid_s3;

            if (valid_s3) begin

                bw_s4 <= (t_s3 >> Q_WIDTH);

                if ((t_s3 >> Q_WIDTH) >= Q)
                    bw_s4 <= (t_s3 >> Q_WIDTH) - Q;

                a_s4 <= a_s3;

            end

            // =================================================
            // Output Butterfly
            // =================================================

            valid_out <= valid_s4;

            if (valid_s4) begin

                // A' = A + BW mod Q

                add_temp = a_s4 + bw_s4;

                if (add_temp >= Q)
                    a_o <= add_temp - Q;
                else
                    a_o <= add_temp;

                // B' = A - BW mod Q

                if (a_s4 >= bw_s4)
                    b_o <= a_s4 - bw_s4;
                else begin

                    sub_temp = a_s4 + Q - bw_s4;

                    b_o <= sub_temp;

                end

            end

        end

    end

endmodule
