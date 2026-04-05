module controller #(
    parameter DATA_WIDTH = 32,
    parameter N = 8,
    parameter STAGES = $clog2(N)
) (
    input clk, rst,
    input start, 
    output reg  [N*DATA_WIDTH-1:0] tw_rom_addr,
    output reg  [STAGES-1:0] buff_ctrl
);
    reg [STAGES-1:0] tw_rom_ctrl;

    // counter 
    integer counter;
    always @(posedge clk or posedge rst) begin
        if (rst) begin 
            counter <= 0;
        end else begin 
            counter <= counter + 1;
        end
    end
    
    // progression to generate tw_rom_ctrl // lateron will write it using some python script
    
    // tw rom ctrl logic goes here
    integer i;
    always @(posedge clk or posedge rst) begin 
        if (rst) begin 
            tw_rom_ctrl <= 0;
            i <= 0;
        end 
        else begin 
            if (start) begin 
                if (counter == value[i]) begin 
                    tw_rom_ctrl <= 1 << i;
                    i <= i + 1;
                end 
            end 
        end 
    end 

    // handling the address generation
    genvar j;
    generate
        for (j = 0; j < STAGES; j = j + 1) begin : GEN_COUNTERS
            always @(posedge clk or posedge rst) begin
               if (rst) begin
                    tw_rom_addr[j*DATA_WIDTH +: DATA_WIDTH] <= {DATA_WIDTH{1'b0}};
                end 
                else if (tw_rom_ctrl[j]) begin
                    tw_rom_addr[j*DATA_WIDTH +: DATA_WIDTH] 
                        <= tw_rom_addr[j*DATA_WIDTH +: DATA_WIDTH] + 1'b1;
                end
            end
        end
    endgenerate

endmodule