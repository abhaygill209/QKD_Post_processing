module tb_full_montgomery_pipeline;

    parameter Q = 12289;
    parameter Q_WIDTH = 14;
    parameter R = (1 << Q_WIDTH);
    parameter Q_INV = 97;
    //parameter R_INV = 9216;
    parameter R2_MOD_Q = 6829;

   reg clk;
    reg rst;
    reg valid_in;

    reg [Q_WIDTH-1:0] a, b;

    wire [Q_WIDTH-1:0] a_bar, b_bar;
    wire [Q_WIDTH-1:0] c_bar;
    wire [Q_WIDTH-1:0] c;

    wire valid_out;
    wire valid_out1;
    wire valid_out2;

    // DUTs
    ToMontgomeryConverter form (
        .clk(clk),
        .rst(rst),
        .a(a),
        .b(b),
        .valid_in(valid_in),
        .valid_out(valid_out1),
        .a_bar(a_bar),
        .b_bar(b_bar)
    );

    MontgomeryReductionUnit mult (
        .clk(clk),
        .rst(rst),
        .valid_in(valid_out1),
        .b_bar(a_bar),
        .w_bar(b_bar),
        .valid_out(valid_out2),
        .c_bar(c_bar)
    );

    FromMontgomeryConverter inv (
        .clk(clk),
        .rst(rst),
        .valid_in(valid_out2),
        .valid_out(valid_out),
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
        $dumpvars(0,clk,rst_n,a,b,valid_in,a_bar,b_bar,c_bar,c,valid_out);

        clk = 0;
        rst= 1;
        valid_in=0;
        #20;
        rst= 0;
        valid_in=1;

      for (i = 0; i < 10; i = i + 1) begin
        @(posedge clk);
            a = $urandom % Q;
            b = $urandom % Q;
            expected_q[i] = mod_mul(a, b);
            a_q[i] = a;
            b_q[i] = b;
      end

        // Check outputs
        j = 0;
        while (j < 10) begin
            @(posedge clk);
            if (valid_out == 1'b1) begin
                if (expected_q[j] !== c) begin
                    $display("FAIL:");
                    $display("a=%d b=%d", a_q[j], b_q[j]);
                    $display("time=%0t, Expected=%d Got=%d",
                              $time, expected_q[j], c);
                end 
                else begin
                    $display("time=%0t, PASS: a=%d b=%d result=%d",
                              $time, a_q[j], b_q[j], c);
                end
                j = j + 1;
            end
        end

        #100;
        $finish;
    end

endmodule

