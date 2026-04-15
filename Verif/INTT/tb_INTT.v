`timescale 1ns / 1ps

module tb_INTT;

    // ============================================================
    // Parameters
    // ============================================================
    parameter DATAWIDTH = 32;
    parameter DEPTH     = 8;
    parameter N         = 16;

    // ============================================================
    // DUT Signals
    // ============================================================
    reg clk_i;
    reg rst_i;
    reg valid_i;
    reg  [DATAWIDTH-1:0] a_i, b_i;
    wire [DATAWIDTH-1:0] a_o, b_o;
    wire valid_o;
    reg stall_i;

    // ============================================================
    // Instantiate DUT
    // ============================================================
    INTT_engine #(
        .DATAWIDTH(DATAWIDTH)
    ) dut (
        .clk(clk_i),
        .rst(rst_i),
        .stall_i(stall_i),
        .valid_i(valid_i),
        .valid_o(valid_o),
        .a_i(a_i),
        .b_i(b_i),
        .a_o(a_o),
        .b_o(b_o)
    );

    // ============================================================
    // Clock Generation (10ns period)
    // ============================================================
    always #5 clk_i = ~clk_i;

    // ============================================================
    // Stimulus
    // ============================================================
    integer i;

    initial begin
        // Init
        clk_i   = 0;
        rst_i   = 1;
        valid_i = 0;
        a_i     = 0;
        b_i     = 0;
        stall_i   = 0;

        // Reset
        #20;
        rst_i = 0;
        stall_i = 0;

        // Start streaming
        #10;
        valid_i = 1;

        // Apply data stream
        for (i = 0; i < 32; i = i + 1) begin
            @(posedge clk_i);
            a_i <= $urandom % 2;
            b_i <= $urandom % 2;
        end

        #100;
        // Stop input
        @(posedge clk_i);
        valid_i <= 0;

        // Wait some cycles
        repeat (10) @(posedge clk_i);

        $finish;
    end

    // ============================================================
    // Waveform Dump (GTKWave)
    // ============================================================
    initial begin
        $dumpfile("tb_INTT.vcd");
        $dumpvars(0, tb_INTT);
    end

endmodule