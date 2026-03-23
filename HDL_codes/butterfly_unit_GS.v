module butterfly_unit_GS #(
   parameter IN_Width = 32,
   parameter OUT_Width = 32,
   parameter DATA_Width = 32
) (
    input                   clk,
    input                   rst,
    input                   start,
    input  [IN_Width-1:0]   a_i, b_i,
    input  [DATA_Width-1:0] w,
    output reg [OUT_Width-1:0] a_o, b_o 
);

    always @(*) begin
        a_o =  w * (a_i + b_i);
        b_o =  w * (a_i - b_i);
    end

    /*
        make it pipelined using reduction 
        start signal 
    */

endmodule