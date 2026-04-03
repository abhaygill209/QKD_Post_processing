
module butterfly_unit_GS #(
   parameter DATA_WIDTH= 32,
   parameter Q = 12289,
   parameter Q_WIDTH = 14,
   parameter Q_INV = 12287
) (
    input                       clk,
    input                       rst,
    input                       start,
    input                       stall,
    input  [DATA_WIDTH-1:0]     a_i, b_i,
    input  [DATA_WIDTH-1:0]     w,
    output wire [DATA_WIDTH-1:0] a_o, b_o
);

    wire [Q_WIDTH-1:0] bw;
    localparam L = 5; // 1 (diff reg) + 4 (MRU latency)
    reg [DATA_WIDTH-1:0] sum_pipe [0:L-1];
    reg [Q_WIDTH-1:0]  diff;
    integer i;

    assign a_o = sum_pipe[L-1];
    assign b_o = {{(DATA_WIDTH-Q_WIDTH){1'b0}}, bw};

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < L; i = i + 1)
                sum_pipe[i] <= 0;
            diff <= 0;
        end
        else if(start && !stall) begin
            // mod Q addition
            sum_pipe[0] <= (a_i + b_i >= Q) ? a_i + b_i - Q : a_i + b_i;
            // mod Q subtraction
            diff <= (a_i >= b_i) ? a_i - b_i : a_i + Q - b_i;

            for (i = 1; i < L; i = i + 1)
                sum_pipe[i] <= sum_pipe[i-1];
        end
    end

    MontgomeryReductionUnit #(
        .Q_WIDTH(Q_WIDTH),
        .Q(Q),
        .Q_INV(Q_INV)
    ) montgomery_reduction (
        .clk(clk),
        .rst(rst),
        .start(start),
        .stall(stall),
        .b_bar(diff),
        .w_bar(w[Q_WIDTH-1:0]),
        .c_bar(bw)
    );

endmodule
