`timescale 1ns/1ps

module top_module_tb;
    parameter N = 8;

    reg clk, rst, start, in_valid;
    reg [N-1:0] data_i;
    wire [31:0] data_o_1, data_o_2;

    // Instantiate DUT
    top_module #(
        .N(N)
    ) dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .in_valid(in_valid),
        .data_i(data_i),
        .data_o_1(data_o_1),
        .data_o_2(data_o_2)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin
        $dumpfile("top_module.vcd");
        $dumpvars(0, top_module_tb);
        clk = 0;
        rst = 1;
        start = 0;
        in_valid = 0;
        data_i = 0;
        #20;
        rst = 0;
        #10;

        // Provide input data and assert in_valid for one cycle
        data_i = 8'b11010101;
        in_valid = 1;
        #10;
        in_valid = 0;
        data_i = 0;

        // Start the pipeline (assert start for several cycles)
        repeat (10) begin
            start = 1;
            #10;
        end
        start = 0;

        // Wait for pipeline to propagate and observe outputs
        #100;
        $display("Output data_o_1 = %h, data_o_2 = %h", data_o_1, data_o_2);
        #20;
        $finish;
    end
endmodule
