`timescale 1ns/1ps

module tb_NTT;

    // ============================================================
    // Parameters (match DUT)
    // ============================================================
    parameter integer N          = 2**3;
    parameter integer STAGES     = $clog2(N);
    parameter integer DATA_WIDTH = 32;
    parameter integer ADDR_WIDTH = 32;
    parameter integer Q          = 3329;
    parameter integer Q_WIDTH    = 32;
    parameter integer Q_INV      = 2488732927;

    // ============================================================
    // Montgomery Parameters
    // ============================================================
    localparam [63:0] R = 64'd1 << DATA_WIDTH;

    // ============================================================
    // DUT Signals
    // ============================================================
    reg                     clk_i;
    reg                     rst_i;
    reg                     valid_i;
    reg                     stall_i;
    reg  [DATA_WIDTH-1:0]   a_i, b_i;

    wire [DATA_WIDTH-1:0]   a_o, b_o;
    wire                    valid_o;

    // ============================================================
    // Testbench storage
    // ============================================================
    reg [DATA_WIDTH-1:0] in_a [0:N-1];

    integer i;
    integer pair_idx;

    // ============================================================
    // Function: convert normal -> Montgomery
    // x_bar = x * R mod Q
    // ============================================================
    function [DATA_WIDTH-1:0] to_mont;
        input integer x;
        reg [63:0] temp;
        begin
            temp = (x * R) % Q;
            to_mont = temp[DATA_WIDTH-1:0];
        end
    endfunction

    // ============================================================
    // DUT
    // ============================================================
    NTT_engine #(
        .N         (N),
        .STAGES    (STAGES),
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .Q         (Q),
        .Q_WIDTH   (Q_WIDTH),
        .Q_INV     (Q_INV)
    ) dut (
        .clk    (clk_i),
        .rst    (rst_i),
        .stall_i(stall_i),
        .valid_i(valid_i),
        .valid_o(valid_o),
        .a_i    (a_i),
        .b_i    (b_i),
        .a_o    (a_o),
        .b_o    (b_o)
    );

    // ============================================================
    // Clock Generation
    // ============================================================
    always #5 clk_i = ~clk_i;

    // ============================================================
    // Stimulus: continuously stream same vector in Montgomery form
    // ============================================================
    initial begin : TB_STIMULUS

        // Init
        clk_i    = 1'b0;
        rst_i    = 1'b1;
        valid_i  = 1'b0;
        stall_i  = 1'b0;
        a_i      = {DATA_WIDTH{1'b0}};
        b_i      = {DATA_WIDTH{1'b0}};

        // ----------------------------------------
        // Generate test vector in Montgomery form
        // x[n] = n converted to Montgomery domain
        // ----------------------------------------
        for (i = 0; i < N; i = i + 1) begin
            in_a[i] = to_mont(i);
        end

        // ----------------------------------------
        // Reset
        // ----------------------------------------
        repeat (5) @(posedge clk_i);
        rst_i <= 1'b0;

        repeat (2) @(posedge clk_i);

        // ----------------------------------------
        // Continuous vector streaming loop
        // folded CT pairs:
        // (0,1), (2,3), ...
        // ----------------------------------------
        forever begin

            for (pair_idx = 0; pair_idx < N; pair_idx = pair_idx + 2) begin

                // wait for DUT ready
                while (stall_i)
                    @(posedge clk_i);

                @(posedge clk_i);
                valid_i <= 1'b1;
                a_i     <= in_a[pair_idx];
                b_i     <= in_a[pair_idx+1];
            end

            // vector done -> deassert valid
            @(posedge clk_i);
            valid_i <= 1'b1;
            a_i     <= {DATA_WIDTH{1'b0}};
            b_i     <= {DATA_WIDTH{1'b0}};

            // wait gap before next vector
            repeat (50) @(posedge clk_i);

        end
    end

    // ============================================================
    // Timeout Protection
    // ============================================================
    initial begin
        #400;
        $finish;
    end

    // ============================================================
    // Waveform Dump
    // ============================================================
    initial begin
        $dumpfile("tb_NTT.vcd");
        $dumpvars(0, tb_NTT);
    end

endmodule