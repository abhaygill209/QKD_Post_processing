
module butterfly_unit_CS #(
   parameter DATA_WIDTH= 32,
   parameter Q = 12289,
   parameter Q_WIDTH = 14,
   parameter Q_INV = 12287
) (
    input                       clk,
    input                       rst,
    input                       start,
    input  [DATA_WIDTH-1:0]     a_i, b_i,
    input  [DATA_WIDTH-1:0]     w,
    output wire                 valid_out,
    output wire [DATA_WIDTH-1:0] a_o, b_o
);
    wire [Q_WIDTH-1:0]  sum;
    wire[Q_WIDTH-1:0]  diff;
    wire [Q_WIDTH-1:0] bw;
    localparam L = 5; // 1 (diff reg) + 4 (MRU latency)
    reg [DATA_WIDTH-1:0] a_pipe [0:L-1];
    integer i;
    
    assign sum = (a_pipe[L-1] + bw >= Q) ? a_pipe[L-1] + bw - Q : a_pipe[L-1] + bw;
    assign diff = (a_pipe[L-1] >= bw) ? a_pipe[L-1] - bw : a_pipe[L-1] + Q - bw;
    assign a_o = {{(DATA_WIDTH-Q_WIDTH){1'b0}}, sum};
    assign b_o = {{(DATA_WIDTH-Q_WIDTH){1'b0}}, diff};

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < L; i = i + 1)
                a_pipe[i] <= 0;
        end 
        else begin
            a_pipe[0] <= a_i; 
            for (i = 1; i < L; i = i + 1)
                a_pipe[i] <= a_pipe[i-1];

        end
    end

    MontgomeryReductionUnit #(
        .Q_WIDTH(Q_WIDTH),
        .Q(Q),
        .Q_INV(Q_INV)
    ) montgomery_reduction (
        .clk(clk),
        .rst(rst),
        .valid_in(start),
        .b_bar(b_i[Q_WIDTH-1:0]),
        .w_bar(w[Q_WIDTH-1:0]),
        .valid_out(valid_out),
        .c_bar(bw)
    );

endmodule
