module Delay_Unit #(
    parameter DATAWIDTH = 32,
    parameter DEPTH     = 4,
    parameter N         = 16
) (
    // generic inputs 
    input clk_i, rst_i,
    // input valid signal 
    input valid_i, stall_i,
    // output valid signal 
    output reg valid_o,
    // Input 
    input  [DATAWIDTH-1:0] a_i, b_i,
    output [DATAWIDTH-1:0] a_o, b_o
);

// State Machine 
localparam STAGE1 = 0, STAGE2 = 1, STAGE3 = 2;
// Counter Width 
localparam CWIDTH = $clog2(DEPTH + 1);

// Signal Declaration 
reg [DATAWIDTH-1:0] ReadBuffer;
reg [CWIDTH-1:0]     Counter;
reg [1:0]           State;

// Read and Write signals for Internal Buffers
reg wr_en_1, wr_en_2, read_en_1, read_en_2;
reg ctrl_1, ctrl_2, ctrl_3;

// Buffer Instanciation 
wire [DATAWIDTH-1:0] Buff_1_w, Buff_2_w;
wire [DATAWIDTH-1:0] Buff_1_r, Buff_2_r;
wire [DATAWIDTH-1:0] b_o_mux;

// Internal Buffers 
    buffer #(
        .WIDTH(DATAWIDTH),
        .DEPTH(DEPTH)
    ) buffer_1 (
        .clk(clk_i),
        .rst(rst_i),
        .wr_en(wr_en_1),
        .rd_en(read_en_1),
        .din(Buff_1_w),
        .dout(Buff_1_r)
    );

    buffer #(
        .WIDTH(DATAWIDTH),
        .DEPTH(DEPTH)
    ) buffer_2 (
        .clk(clk_i),
        .rst(rst_i),
        .wr_en(wr_en_2),
        .rd_en(read_en_2),
        .din(Buff_2_w),
        .dout(Buff_2_r)
    );

// Input to Buffer MUX
    mux2x1 mux1 (
        .a(a_i),
        .b(b_i),
        .sel(ctrl_1),
        .out(Buff_1_w)
    );

    mux2x1 mux2 (
        .a(b_i),
        .b(a_i),
        .sel(ctrl_1),
        .out(Buff_2_w)
    );

// Output from Buffer MUX
    mux2x1 mux3 (
        .a(Buff_1_r),
        .b(Buff_2_r),
        .sel(ctrl_2),
        .out(a_o)
    );

    mux2x1 mux4 (
        .a(Buff_2_r),
        .b(Buff_1_r),
        .sel(ctrl_2),
        .out(b_o_mux)
    );

    mux2x1 mux5 (
        .a(b_o_mux),
        .b(ReadBuffer),
        .sel(ctrl_3),
        .out(b_o)
    );

    // Logic controll 
    always @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin 
            Counter <= 1;
            State   <= STAGE1;
            ctrl_2  <= 0;
            ctrl_3  <= 0;
            valid_o <= 0;
        end else begin 
            // pipeline stall and latch
            if (!stall_i) begin 

            if (valid_i) begin 
                Counter <= Counter + 1;
                case (State)
                    STAGE1: begin
                        // Out Mux Config
                        ctrl_2 <= 0;
                        ctrl_3 <= 0;
                        // State Change Logic
                        if (ChangeState) begin 
                            State   <= STAGE2;
                            Counter <= 1;
                        end 
                    end 
                    STAGE2: begin
                        ctrl_2     <= 0;
                        ctrl_3     <= 1;
                        ReadBuffer <= a_i;
                        if (ChangeState) begin 
                            State   <= STAGE3;
                            Counter <= 1;
                        end 
                        // Valid Output 
                        valid_o <= 1;
                    end
                    STAGE3: begin 
                        ctrl_2 <= 1;
                        ctrl_3 <= 0;
                        if (ChangeState) begin 
                            State   <= STAGE2;
                            Counter <= 1;
                        end 
                        // Valid Output 
                        valid_o <= 1;
                    end 
                endcase
            end else 
                valid_o <= 0;
            // Everything else is to be latched unless reset 
            end else 
                valid_o <= 0;
        end  
    end

    // Combinational control logic
    always @(*) begin 
        if (valid_i && !stall_i) begin 
            case (State) 
                STAGE1: begin
                    wr_en_1 = 1;
                    wr_en_2 = 1;
                    ctrl_1  = 0;
                    read_en_1 = 0;
                    read_en_2 = 0;
                end 

                STAGE2: begin 
                    wr_en_1 = 1;
                    wr_en_2 = 0;
                    ctrl_1  = 1;
                    read_en_1 = 1;
                    read_en_2 = 0;
                end 

                STAGE3: begin
                    wr_en_1 = 1;
                    wr_en_2 = 1;
                    ctrl_1  = 0;
                    read_en_1 = 1;
                    read_en_2 = 1;
                end
            endcase
        end else begin 
                wr_en_1   = 0;
                wr_en_2   = 0;
                read_en_1 = 0;
                read_en_2 = 0;
                ctrl_1    = 0;
        end
    end 

    // State Change Flag 
    wire ChangeState = (Counter == DEPTH/4);
    
endmodule