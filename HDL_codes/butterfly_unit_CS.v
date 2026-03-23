module butterfly_unit_CS #(
   parameter IN_Width = 32,
   parameter OUT_Width = 32,
   parameter DATA_Width = 32
) (
    input                   clk,
    input                   rst,
    input                   data_valid,
    input  [IN_Width-1:0]   a_i, b_i,
    input  [DATA_Width-1:0] w,
    output reg              data_ready,
    output reg [OUT_Width-1:0]  a_o, b_o 
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            a_o <= 0;
            b_o <= 0;
            data_ready <= 0;
        end else begin
            if (data_valid) begin
                a_o <= a_i + (w * b_i);
                b_o <= a_i - (w * b_i);
                data_ready <= 1;
            end else begin
                data_ready <= 0;
            end
        end
    end

endmodule