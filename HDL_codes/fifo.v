// module fifo #(
//     parameter WIDTH = 32,
//     parameter DEPTH = 8
// ) (
//     input clk,
//     input rst,
//     input wr_en,
//     input rd_en,
//     input [WIDTH-1:0] din,
//     output reg [WIDTH-1:0] dout
// );

//     reg [WIDTH-1:0] mem [0:DEPTH-1];
//     reg [$clog2(DEPTH):0] wr_ptr, rd_ptr, count;

//     always @(posedge clk or posedge rst) begin
//         if (rst) begin
//             wr_ptr <= 1;
//             rd_ptr <= 0;
//             count  <= 0;
//             dout   <= 0;
//         end else begin
//             // Write
//             if (wr_en) begin
//                 mem[wr_ptr] <= din;
//                 wr_ptr <= wr_ptr + 1;
//                 count  <= count + 1;
//             end
//             // Synchronous Read
//             if (rd_en) begin
//                 dout <= mem[rd_ptr];
//                 rd_ptr <= rd_ptr + 1;
//                 count  <= count - 1;
//             end
//         end
//     end
// endmodule

module fifo #(
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
    reg [$clog2(DEPTH):0] count;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr <= 1;
            rd_ptr <= 0;
            count  <= 1;
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

            case ({wr_en, rd_en})
                2'b10: count <= count + 1;
                2'b01: count <= count - 1;
            endcase
        end
    end
endmodule