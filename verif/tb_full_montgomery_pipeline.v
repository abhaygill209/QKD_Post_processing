module tb_full_montgomery_pipeline;

    parameter Q = 12289;
    parameter Q_WIDTH = 14;
    parameter R = (1 << Q_WIDTH);
    parameter Q_INV = 97;
    //parameter R_INV = 9216;
    parameter R2_MOD_Q = 6829;

    reg clk;
    reg rst;
    reg start;
    reg stall;

    reg [Q_WIDTH-1:0] a, b;

    wire [Q_WIDTH-1:0] a_bar, b_bar;
    wire [Q_WIDTH-1:0] c_bar;
    wire [Q_WIDTH-1:0] c;

    // DUTs
    ToMontgomeryConverter form (
        .clk(clk),
        .rst(rst),
        .a(a),
        .b(b),
        .start(start),
        .stall(stall),
        .a_bar(a_bar),
        .b_bar(b_bar)
    );

    MontgomeryReductionUnit mult (
        .clk(clk),
        .rst(rst),
        .start(start),
        .stall(stall),
        .b_bar(a_bar),
        .w_bar(b_bar),
        .c_bar(c_bar)
    );

    FromMontgomeryConverter inv (
        .clk(clk),
        .rst(rst),
        .start(start),
        .stall(stall),
        .c_bar(c_bar),
        .c(c)
    );

    // Clock
    always #5 clk = ~clk;

    // Reference function
    function [Q_WIDTH-1:0] mod_mul;
        input [Q_WIDTH-1:0] x, y;
        reg [2*Q_WIDTH-1:0] temp;
        begin
            temp = x * y;
            mod_mul = temp % Q;
        end
    endfunction

    integer i, j;
    reg [Q_WIDTH-1:0] expected_q [0:9];
    reg [Q_WIDTH-1:0] a_q [0:9];
    reg [Q_WIDTH-1:0] b_q [0:9];

    initial begin
    $dumpfile("full_pipeline.vcd");
    $dumpvars(0, tb_full_montgomery_pipeline);

    clk = 0;
    rst = 1;
    start = 0;
    stall = 0;
    #20;
    rst = 0;
    start = 1;

    for (i = 0; i < 10; i = i + 1) begin
        @(posedge clk);
        a = $urandom % Q;
        b = $urandom % Q;
        expected_q[i] = mod_mul(a, b);
        a_q[i] = a;
        b_q[i] = b;
    end

    repeat (3) @(posedge clk);

    for (j = 0; j < 10; j = j + 1) begin
        if (expected_q[j] !== c) begin
            $display("FAIL: a=%d b=%d Expected=%d Got=%d",
                      a_q[j], b_q[j], expected_q[j], c);
        end else begin
            $display("time=%0t PASS: a=%d b=%d result=%d",
                      $time, a_q[j], b_q[j], c);
        end
        @(posedge clk);
    end

    #100;
    $finish;
    end

endmodule

