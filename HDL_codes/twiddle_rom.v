module twiddle_rom #(
    parameter DATA_WIDTH = 32,  // better for NTT
    parameter STAGE = 1,
    parameter DEPTH = (STAGE == 0) ? 1 : (1 << (STAGE)),
    parameter ADDR_WIDTH = 32,
    parameter INIT_FILE = ""
)(
    input  wire                     clk,
    input  wire [ADDR_WIDTH-1:0]    addr,
    output reg  [DATA_WIDTH-1:0]    dout
);

    // Force BRAM inference
    (* ram_style = "block", rom_style = "block" *)
    reg [DATA_WIDTH-1:0] mem [0:DEPTH-1];

    integer file;

    // Initialization with DEBUG
    initial begin
        $display("====================================");
        $display("TWIDDLE ROM INIT");
        $display("STAGE = %0d", STAGE);
        $display("DEPTH = %0d", DEPTH);
        $display("INIT_FILE = %s", INIT_FILE);

        if (INIT_FILE != "") begin

            file = $fopen(INIT_FILE, "r");

            if (file == 0) begin
                $display("ERROR: Cannot open file %s", INIT_FILE);
                $finish;
            end else begin
                $display("File opened successfully");
                $fclose(file);
            end

            $readmemh(INIT_FILE, mem);

            #1;
            $display("mem[0] = %h", mem[0]);

        end else begin
            $display(" ERROR: INIT_FILE is empty");
        end

        $display("====================================");
    end

    // Synchronous read (BRAM behavior)
    always @(posedge clk) begin
        dout <= mem[addr];
    end

endmodule