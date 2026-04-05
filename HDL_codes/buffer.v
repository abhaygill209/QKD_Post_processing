module buffer #(
    parameter WIDTH = 32,
    parameter DEPTH = 8
) (
    input clk,
    input rst,
    input wr_en,
    input rd_en,
    input [WIDTH-1:0] din,
    output reg [WIDTH-1:0] dout
);

    reg [WIDTH-1:0] mem [0:DEPTH-1];
    reg [$clog2(DEPTH)-1:0] wr_ptr, rd_ptr;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            dout   <= 0;
        end else begin
            if (wr_en) begin
                mem[wr_ptr] <= din;
                wr_ptr <= wr_ptr + 1;
            end

            if (rd_en) begin
                dout <= mem[rd_ptr];
                rd_ptr <= rd_ptr + 1;
            end
        end
    end
endmodule