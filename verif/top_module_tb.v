`timescale 1ns/1ps

module top_module_tb;
    parameter N = 8;
    parameter DATA_WIDTH = 32;

    reg clk, rst, start;
    reg [DATA_WIDTH-1:0] data_i;
    wire [DATA_WIDTH-1:0] data_o;

    // Instantiate DUT
    top_module #(
        .N(N),
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .data_i(data_i),
        .data_o(data_o)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin
        $dumpfile("top_module.vcd");
        $dumpvars(0, top_module_tb);
        clk = 0;
        rst = 1;
        start = 0;
        data_i = 0;
        #20;
        rst = 0;
        #10;

        // Provide input data and assert start for one cycle
        data_i = 32'hA5A5A5A5;
        start = 1;
        #1000;
        start = 0;
        data_i = 0;

        // Wait for pipeline to propagate and observe outputs
        #200;
        $display("Output data_o = %h", data_o);
        #20;
        $finish;
    end
endmodule                   