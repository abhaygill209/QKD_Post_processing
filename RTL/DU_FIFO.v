module DU_FIFO #(
    parameter DEPTH = 16,  // Number of 32-bit write locations
    parameter DATA_WIDTH = 16
)(
    input               clk,
    input               rst,

    // Write side (32-bit)
    input               wr_en,
    input      [2*DATA_WIDTH-1:0]   wr_data,
    output              full,

    // Read side (16-bit)
    input               rd_en,
    output reg [DATA_WIDTH-1:0]   rd_data,
    output              empty
);

    localparam MEM_DEPTH = 2*DEPTH;
    localparam PTR_W     = $clog2(MEM_DEPTH);

    // Memory organized as 16-bit entries
    reg [DATA_WIDTH-1:0] mem [0:MEM_DEPTH-1];

    reg [PTR_W-1:0] wr_ptr;
    reg [PTR_W-1:0] rd_ptr;

    // Number of valid 16-bit words in FIFO
    reg [PTR_W:0] occupancy;

    assign empty = (occupancy == 0);

    

    integer i;

    always @(posedge clk) begin
        if (rst) begin
            wr_ptr    <= 0;
            rd_ptr    <= 0;
            occupancy <= 0;
            rd_data   <= 0;
        end
        else begin

            //----------------------------------------
            // Write only
            //----------------------------------------
            if (wr_en && !full && !(rd_en && !empty)) begin
                mem[wr_ptr] <= wr_data[DATA_WIDTH-1:0];
                mem[(wr_ptr + 1) % MEM_DEPTH] <= wr_data[2*DATA_WIDTH-1:DATA_WIDTH];

                wr_ptr    <= (wr_ptr + 2) % MEM_DEPTH;
                occupancy <= occupancy + 2;
            end

            //----------------------------------------
            // Read only
            //----------------------------------------
            else if (rd_en && !empty && !(wr_en && !full)) begin
                rd_data <= mem[rd_ptr];

                rd_ptr    <= (rd_ptr + 1) % MEM_DEPTH;
                occupancy <= occupancy - 1;
            end

            //----------------------------------------
            // Simultaneous read and write
            //----------------------------------------
            else if (wr_en && !full && rd_en && !empty) begin
                // write
                mem[wr_ptr] <= wr_data[DATA_WIDTH-1:0];
                mem[(wr_ptr + 1) % MEM_DEPTH] <= wr_data[2*DATA_WIDTH-1:DATA_WIDTH];

                // read
                rd_data <= mem[rd_ptr];

                wr_ptr <= (wr_ptr + 2) % MEM_DEPTH;
                rd_ptr <= (rd_ptr + 1) % MEM_DEPTH;

                // occupancy increases by 1 net
                occupancy <= occupancy + 1;
            end
        end
    end

endmodule