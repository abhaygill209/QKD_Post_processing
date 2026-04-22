`timescale 1 ns / 1 ps

module NTT_axis_ip #(
    parameter integer DATA_WIDTH = 32,
    parameter integer C_AXIS_TDATA_WIDTH = 64
)(
    input wire clk,
    input wire rstn,

    // AXI STREAM INPUT
    input wire [C_AXIS_TDATA_WIDTH-1:0] s_axis_tdata,
    input wire s_axis_tvalid,
    output wire s_axis_tready,
    input wire s_axis_tlast,

    // AXI STREAM OUTPUT
    output wire [C_AXIS_TDATA_WIDTH-1:0] m_axis_tdata,
    output wire m_axis_tvalid,
    input  wire m_axis_tready,
    output wire m_axis_tlast,

    output wire irq
);

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, NTT_axis_ip);
    end

    // =====================================================
    // AXI Control
    // =====================================================
    reg  self_valid;

    wire valid_i = self_valid ? 1 : s_axis_tvalid && s_axis_tready;
    wire valid_o;

    assign s_axis_tready = m_axis_tready && !self_valid;
    assign m_axis_tvalid = valid_o && !stall_i;

    wire stall_i = !m_axis_tready;
    wire ready_for_next_batch = valid_o && m_axis_tready &&
                (out_data_count + 1 == in_data_count);

    // =====================================================
    // Data Packing
    // =====================================================
    wire [DATA_WIDTH-1:0] a_i, b_i, a_o, b_o;

    assign a_i = self_valid ? 0 : s_axis_tdata[DATA_WIDTH-1:0];
    assign b_i = self_valid ? 0 : s_axis_tdata[2*DATA_WIDTH-1:DATA_WIDTH];

    assign m_axis_tdata = {b_o, a_o};

    // =====================================================
    // NTT Core
    // =====================================================
    NTT_engine #(
        .N(256),
        .DATA_WIDTH(32),
        .ADDR_WIDTH(32),
        .Q(3329),
        .Q_WIDTH(16),
        .Q_INV(3327)
    )  ntt_inst (
        .clk(clk),
        .rst(~rstn || (m_axis_tlast && m_axis_tready && m_axis_tvalid)),

        .valid_i(valid_i),
        .stall_i(stall_i),

        .a_i(a_i),
        .b_i(b_i),

        .a_o(a_o),
        .b_o(b_o),
        .valid_o(valid_o)
    );

    // =====================================================
    // Counters
    // =====================================================
    integer in_data_count;
    integer out_data_count;

    // INPUT COUNTER
    always @(posedge clk) begin 
        if (!rstn) begin 
            in_data_count <= 0;
        end else begin
            if (valid_i && !self_valid)
                in_data_count <= in_data_count + 1;

            // reset condition (aligned with output completion)
            if (ready_for_next_batch) begin
                in_data_count <= 0;
            end
        end 
    end

    // OUTPUT COUNTER (FIXED RACE)
    always @(posedge clk) begin 
        if (!rstn) begin 
            out_data_count <= 0;
        end else begin
            if (valid_o && m_axis_tready) begin
                if (ready_for_next_batch)
                    out_data_count <= 0;
                else
                    out_data_count <= out_data_count + 1;
            end
        end 
    end 

    // =====================================================
    // SELF VALID CONTROL (FIXED TIMING)
    // =====================================================
    always @(posedge clk) begin 
        if (!rstn) begin 
            self_valid <= 0;
        end else begin
            // latch frame end
            if (valid_i && s_axis_tlast)
                self_valid <= 1;

            // clear after full output frame
            if (m_axis_tlast && m_axis_tready && m_axis_tvalid) begin
                self_valid <= 0;
            end
        end
    end

    // =====================================================
    // TLAST GENERATION (HANDSHAKE ALIGNED)
    // =====================================================
    assign m_axis_tlast = self_valid && (in_data_count == out_data_count + 1);

    // =====================================================
    assign irq = 0;

endmodule