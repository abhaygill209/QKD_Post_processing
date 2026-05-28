// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__s_axis_tlast = vlSelfRef.s_axis_tlast;
    vlSelfRef.irq = vlSelfRef.NTT_axis_ip__DOT__irq;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__fifo_change 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__fifo_change 
        = (1U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__fifo_change 
        = (3U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__fifo_change 
        = (7U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__fifo_change 
        = (0x0fU == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__fifo_change 
        = (0x1fU == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__fifo_change 
        = (0x3fU == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_0;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_1 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__dout;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_2 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__dout;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_3 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__dout;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_4 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__dout;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_5 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__dout;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_6 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__dout;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_7 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__dout;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__s_axis_tvalid = vlSelfRef.s_axis_tvalid;
    vlSelfRef.NTT_axis_ip__DOT__s_axis_tdata = vlSelfRef.s_axis_tdata;
    vlSelfRef.NTT_axis_ip__DOT__rstn = vlSelfRef.rstn;
    if (vlSelfRef.NTT_axis_ip__DOT__self_valid) {
        vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast = 
            (vlSelfRef.NTT_axis_ip__DOT__in_data_count 
             == ((IData)(1U) + vlSelfRef.NTT_axis_ip__DOT__out_data_count));
        vlSelfRef.NTT_axis_ip__DOT__clk = vlSelfRef.clk;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[0U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[1U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[2U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[3U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[4U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[5U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[6U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[7U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[0U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[1U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[2U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[3U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[4U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[5U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[6U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[7U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[0U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[1U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[2U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[3U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[4U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[5U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[6U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[7U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__m_axis_tready = vlSelfRef.m_axis_tready;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_1;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_2;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_3;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_4;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_5;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_6;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_7;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__a_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__b_i = 0U;
    } else {
        vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast = 0U;
        vlSelfRef.NTT_axis_ip__DOT__clk = vlSelfRef.clk;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[0U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[1U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[2U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[3U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[4U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[5U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[6U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[7U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[0U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[1U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[2U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[3U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[4U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[5U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[6U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[7U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[0U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[1U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[2U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[3U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[4U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[5U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[6U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[7U] 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
        vlSelfRef.NTT_axis_ip__DOT__m_axis_tready = vlSelfRef.m_axis_tready;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_1;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_2;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_3;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_4;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_5;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_6;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__w 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_7;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_o 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_o;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_empty 
            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty;
        vlSelfRef.NTT_axis_ip__DOT__a_i = (0x0000ffffU 
                                           & vlSelfRef.NTT_axis_ip__DOT__s_axis_tdata);
        vlSelfRef.NTT_axis_ip__DOT__b_i = (vlSelfRef.NTT_axis_ip__DOT__s_axis_tdata 
                                           >> 0x00000010U);
    }
    vlSelfRef.m_axis_tlast = vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__s_axis_tready = ((~ (IData)(vlSelfRef.NTT_axis_ip__DOT__self_valid)) 
                                                 & (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready));
    vlSelfRef.NTT_axis_ip__DOT__stall_i = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__a_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__b_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__clk_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__clk_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__clk_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__clk_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__clk_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__clk_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__clk_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.NTT_axis_ip__DOT__a_o = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__b_o = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_o;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_i = 0U;
    }
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_i = 0U;
    }
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_i = 0U;
    }
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_i = 0U;
    }
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_i = 0U;
    }
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_i = 0U;
    }
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__valid_o = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_o;
    vlSelfRef.s_axis_tready = vlSelfRef.NTT_axis_ip__DOT__s_axis_tready;
    vlSelfRef.NTT_axis_ip__DOT__valid_i = ((IData)(vlSelfRef.NTT_axis_ip__DOT__self_valid) 
                                           | ((IData)(vlSelfRef.NTT_axis_ip__DOT__s_axis_tready) 
                                              & (IData)(vlSelfRef.NTT_axis_ip__DOT__s_axis_tvalid)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.NTT_axis_ip__DOT__m_axis_tdata = (((IData)(vlSelfRef.NTT_axis_ip__DOT__b_o) 
                                                 << 0x00000010U) 
                                                | (IData)(vlSelfRef.NTT_axis_ip__DOT__a_o));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ready_for_next_batch 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__valid_o) 
           & ((IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready) 
              & (((IData)(1U) + vlSelfRef.NTT_axis_ip__DOT__out_data_count) 
                 == vlSelfRef.NTT_axis_ip__DOT__in_data_count)));
    vlSelfRef.NTT_axis_ip__DOT__m_axis_tvalid = ((~ (IData)(vlSelfRef.NTT_axis_ip__DOT__stall_i)) 
                                                 & (IData)(vlSelfRef.NTT_axis_ip__DOT__valid_o));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__valid_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__stall_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__stall 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [7U];
    vlSelfRef.m_axis_tdata = vlSelfRef.NTT_axis_ip__DOT__m_axis_tdata;
    vlSelfRef.m_axis_tvalid = vlSelfRef.NTT_axis_ip__DOT__m_axis_tvalid;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst 
        = (1U & ((~ (IData)(vlSelfRef.NTT_axis_ip__DOT__rstn)) 
                 | ((IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast) 
                    & ((IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready) 
                       & (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tvalid)))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                         << 5U) 
                                                        | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                           << 4U)) 
                                                       | (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk__0)))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__clk__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__clk__0))))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__clk_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__clk_i__0))))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__clk_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__clk_i__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__clk_i__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__clk_i__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__clk_i) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__clk_i__0))))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__clk_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__clk_i__0))) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk__0))))) 
                                                               << 4U) 
                                                              | (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk__0))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__clk_i) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__clk_i__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__clk__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.NTT_axis_ip__DOT__clk) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__clk__0)))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__clk_i__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__clk_i__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__clk_i__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__clk_i__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__clk_i__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__clk_i__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__clk_i__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk__0 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter = 0;
    CData/*0:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state = 0U;
    } else {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__fifo_change) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__stall_i)))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter)));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__fifo_change) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state)));
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i))) 
           && (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_empty))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__fifo_change 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__counter));
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter = 0;
    CData/*0:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state = 0U;
    } else {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__fifo_change) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__stall_i)))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter)));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__fifo_change) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state)));
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i))) 
           && (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_empty))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__fifo_change 
        = (1U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__counter));
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter = 0;
    CData/*0:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state = 0U;
    } else {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__fifo_change) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__stall_i)))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter)));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__fifo_change) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state)));
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i))) 
           && (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_empty))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__fifo_change 
        = (3U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__counter));
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter = 0;
    CData/*0:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state = 0U;
    } else {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__fifo_change) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__stall_i)))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter)));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__fifo_change) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state)));
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i))) 
           && (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_empty))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__fifo_change 
        = (7U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__counter));
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter = 0;
    CData/*0:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state = 0U;
    } else {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__fifo_change) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__stall_i)))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter)));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__fifo_change) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state)));
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i))) 
           && (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_empty))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__fifo_change 
        = (0x0fU == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__counter));
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter = 0;
    CData/*0:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state = 0U;
    } else {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__fifo_change) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__stall_i)))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter)));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__fifo_change) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state)));
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i))) 
           && (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_empty))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__fifo_change 
        = (0x1fU == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__counter));
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter = 0;
    CData/*0:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state = 0U;
    } else {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__fifo_change) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter = 0U;
        } else if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i) 
                    & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__stall_i)))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter)));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__fifo_change) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state 
                = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state)));
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_o 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i))) 
           && (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_empty))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__fifo_change 
        = (0x3fU == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__counter));
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr = 0;
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy 
                = (0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_h8a7aa62c__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data);
            if ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_h8a7aa62c__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_hee33f2d9__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            if ((0x0bU >= (0x0000000fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000000cU))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_hee33f2d9__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1 
                    = (0x0000000fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000000cU)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr 
                = (0x0000000fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000000cU)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy 
                    = (0x0000001fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_h8a7aa62c__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data);
                    if ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_h8a7aa62c__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_hee33f2d9__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    if ((0x0bU >= (0x0000000fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000000cU))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT____Vlvbound_hee33f2d9__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3 
                            = (0x0000000fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000000cU)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr 
                        = (0x0000000fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000000cU)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_data 
                    = ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000000fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x0000000cU)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_data 
                    = ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000000fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x0000000cU)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_o;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr = 0;
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy 
                = (0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy)));
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr)));
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr 
                = (0x0000000fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy 
                    = (0x0000001fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))) {
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2 
                        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
                    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2 = 1U;
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr)));
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr 
                        = (0x0000000fU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v0;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v2;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_o;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr = 0;
    CData/*5:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy 
                = (0x0000003fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h90d4b78f__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data);
            if ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h90d4b78f__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h54553fc6__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            if ((0x1bU >= (0x0000001fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000001cU))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h54553fc6__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1 
                    = (0x0000001fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000001cU)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr 
                = (0x0000001fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000001cU)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy 
                    = (0x0000003fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h90d4b78f__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data);
                    if ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h90d4b78f__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h54553fc6__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    if ((0x1bU >= (0x0000001fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000001cU))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT____Vlvbound_h54553fc6__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3 
                            = (0x0000001fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000001cU)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr 
                        = (0x0000001fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x0000001cU)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_data 
                    = ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000001fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x0000001cU)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_data 
                    = ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000001fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x0000001cU)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_o;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr = 0;
    CData/*6:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy 
                = (0x0000007fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_he4b35351__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data);
            if ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_he4b35351__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_h1082318e__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            if ((0x33U >= (0x0000003fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000034U))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_h1082318e__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1 
                    = (0x0000003fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000034U)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr 
                = (0x0000003fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000034U)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy 
                    = (0x0000007fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_he4b35351__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data);
                    if ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_he4b35351__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_h1082318e__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    if ((0x33U >= (0x0000003fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000034U))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT____Vlvbound_h1082318e__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3 
                            = (0x0000003fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000034U)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr 
                        = (0x0000003fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000034U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_data 
                    = ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000003fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x00000034U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_data 
                    = ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000003fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x00000034U)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_o;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr = 0;
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy 
                = (0x000000ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h3187fd02__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data);
            if ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h3187fd02__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h6f7d556c__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            if ((0x63U >= (0x0000007fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000064U))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h6f7d556c__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1 
                    = (0x0000007fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000064U)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr 
                = (0x0000007fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000064U)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy 
                    = (0x000000ffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h3187fd02__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data);
                    if ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h3187fd02__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h6f7d556c__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    if ((0x63U >= (0x0000007fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000064U))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT____Vlvbound_h6f7d556c__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3 
                            = (0x0000007fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000064U)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr 
                        = (0x0000007fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x00000064U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_data 
                    = ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000007fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x00000064U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_data 
                    = ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr 
                    = (0x0000007fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x00000064U)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_o;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr = 0;
    SData/*8:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy 
                = (0x000001ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h04e46552__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data);
            if ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h04e46552__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h73b094e5__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            if ((0xc3U >= (0x000000ffU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x000000c4U))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h73b094e5__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1 
                    = (0x000000ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x000000c4U)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr 
                = (0x000000ffU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x000000c4U)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy 
                    = (0x000001ffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h04e46552__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data);
                    if ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h04e46552__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h73b094e5__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    if ((0xc3U >= (0x000000ffU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x000000c4U))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT____Vlvbound_h73b094e5__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3 
                            = (0x000000ffU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x000000c4U)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr 
                        = (0x000000ffU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr)), (IData)(0x000000c4U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_data 
                    = ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr 
                    = (0x000000ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x000000c4U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_data 
                    = ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr 
                    = (0x000000ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr)), (IData)(0x000000c4U)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_o;
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr = 0;
    SData/*8:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy 
                = (0x000001ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy)));
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data 
                   >> 0x10U);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr)));
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr 
                = (0x000000ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy 
                    = (0x000001ffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))) {
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2 
                        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
                    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2 = 1U;
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data 
                           >> 0x10U);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr)));
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr 
                        = (0x000000ffU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v0;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v2;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_o;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr = 0;
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy 
                = (0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy)));
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr)));
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr 
                = (0x0000000fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy 
                    = (0x0000001fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))) {
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2 
                        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
                    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2 = 1U;
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr)));
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr 
                        = (0x0000000fU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v0;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v2;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr = 0;
    SData/*8:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy 
                = (0x000001ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy)));
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr)));
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr 
                = (0x000000ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy 
                    = (0x000001ffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))) {
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2 
                        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
                    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2 = 1U;
                    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr)));
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr 
                        = (0x000000ffU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_data 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem
                    [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr];
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v0;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v2;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*3:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr = 0;
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*3:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy 
                = (0x0000001fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_h8a7aa62c__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data);
            if ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_h8a7aa62c__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_hee33f2d9__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            if ((0x0bU >= (0x0000000fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000000cU))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_hee33f2d9__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1 
                    = (0x0000000fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000000cU)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr 
                = (0x0000000fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000000cU)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy 
                    = (0x0000001fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_h8a7aa62c__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data);
                    if ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_h8a7aa62c__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_hee33f2d9__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    if ((0x0bU >= (0x0000000fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000000cU))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT____Vlvbound_hee33f2d9__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3 
                            = (0x0000000fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000000cU)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr 
                        = (0x0000000fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000000cU)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_data 
                    = ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000000fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x0000000cU)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_data 
                    = ((0x0bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000000fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x0000000cU)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr = 0;
    CData/*5:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*4:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy 
                = (0x0000003fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h90d4b78f__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data);
            if ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h90d4b78f__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h54553fc6__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            if ((0x1bU >= (0x0000001fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000001cU))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h54553fc6__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1 
                    = (0x0000001fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000001cU)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr 
                = (0x0000001fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000001cU)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy 
                    = (0x0000003fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h90d4b78f__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data);
                    if ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h90d4b78f__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h54553fc6__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    if ((0x1bU >= (0x0000001fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000001cU))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT____Vlvbound_h54553fc6__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3 
                            = (0x0000001fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000001cU)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr 
                        = (0x0000001fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x0000001cU)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_data 
                    = ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000001fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x0000001cU)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_data 
                    = ((0x1bU >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000001fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x0000001cU)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*5:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr = 0;
    CData/*6:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy 
                = (0x0000007fU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_he4b35351__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data);
            if ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_he4b35351__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_h1082318e__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            if ((0x33U >= (0x0000003fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000034U))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_h1082318e__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1 
                    = (0x0000003fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000034U)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr 
                = (0x0000003fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000034U)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy 
                    = (0x0000007fU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_he4b35351__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data);
                    if ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_he4b35351__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_h1082318e__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    if ((0x33U >= (0x0000003fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000034U))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT____Vlvbound_h1082318e__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3 
                            = (0x0000003fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000034U)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr 
                        = (0x0000003fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000034U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_data 
                    = ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000003fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x00000034U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_data 
                    = ((0x33U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000003fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x00000034U)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*6:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr = 0;
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*6:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy 
                = (0x000000ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h3187fd02__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data);
            if ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h3187fd02__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h6f7d556c__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            if ((0x63U >= (0x0000007fU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000064U))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h6f7d556c__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1 
                    = (0x0000007fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000064U)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr 
                = (0x0000007fU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000064U)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy 
                    = (0x000000ffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h3187fd02__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data);
                    if ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h3187fd02__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h6f7d556c__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    if ((0x63U >= (0x0000007fU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000064U))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT____Vlvbound_h6f7d556c__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3 
                            = (0x0000007fU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000064U)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr 
                        = (0x0000007fU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x00000064U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_data 
                    = ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000007fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x00000064U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_data 
                    = ((0x63U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr 
                    = (0x0000007fU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x00000064U)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr = 0;
    CData/*7:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr = 0;
    SData/*8:0*/ __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3;
    __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3 = 0;
    // Body
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy;
    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rst) {
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr = 0U;
        __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_data = 0U;
    } else {
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
              & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full))) 
             & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
                   & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))))) {
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy 
                = (0x000001ffU & ((IData)(2U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h04e46552__0 
                = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data);
            if ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h04e46552__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0 = 1U;
            }
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h73b094e5__0 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data 
                   >> 0x10U);
            if ((0xc3U >= (0x000000ffU & VL_MODDIV_III(32, 
                                                       ((IData)(1U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x000000c4U))))) {
                __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1 
                    = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h73b094e5__0;
                __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1 
                    = (0x000000ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x000000c4U)));
                __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1 = 1U;
            }
            __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr 
                = (0x000000ffU & VL_MODDIV_III(32, 
                                               ((IData)(2U) 
                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x000000c4U)));
        } else {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full)))))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy 
                    = (0x000001ffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy) 
                                      - (IData)(1U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))) {
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy)));
            }
            if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
                           & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty))) 
                          & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                                & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full)))))))) {
                if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full))) 
                      & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en)) 
                     & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))) {
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h04e46552__1 
                        = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data);
                    if ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h04e46552__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2 = 1U;
                    }
                    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h73b094e5__1 
                        = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data 
                           >> 0x10U);
                    if ((0xc3U >= (0x000000ffU & VL_MODDIV_III(32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x000000c4U))))) {
                        __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3 
                            = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT____Vlvbound_h73b094e5__1;
                        __VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3 
                            = (0x000000ffU & VL_MODDIV_III(32, 
                                                           ((IData)(1U) 
                                                            + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x000000c4U)));
                        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3 = 1U;
                    }
                    __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr 
                        = (0x000000ffU & VL_MODDIV_III(32, 
                                                       ((IData)(2U) 
                                                        + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr)), (IData)(0x000000c4U)));
                }
            }
        }
        if ((1U & (~ (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full))) 
                      & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
                            & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))))))) {
            if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en) 
                  & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty))) 
                 & (~ ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                       & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full)))))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_data 
                    = ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr 
                    = (0x000000ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x000000c4U)));
            } else if (((((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en) 
                          & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__full))) 
                         & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en)) 
                        & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty)))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_data 
                    = ((0xc3U >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr))
                        ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem
                       [vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr]
                        : 0U);
                __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr 
                    = (0x000000ffU & VL_MODDIV_III(32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr)), (IData)(0x000000c4U)));
            }
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_ptr;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr 
        = __Vdly__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_ptr;
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v0;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v2;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem[__VdlyDim0__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__mem__v3;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty 
        = (0U == (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__occupancy));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_data;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_empty 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__empty;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_rd_en 
        = (1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_empty)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_rd_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rd_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_rd_en;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v0 = 0;
    CData/*0:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v2 = 0;
    CData/*0:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v4;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v4 = 0;
    CData/*0:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v4;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v4 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v4;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v4 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v6;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v6 = 0;
    CData/*0:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v6;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v6 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v6;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v6 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v8;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v8 = 0;
    CData/*0:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v8;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v8 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v8;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v8 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v10;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v10 = 0;
    CData/*0:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v10;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v10 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v10;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v10 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v12;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v12 = 0;
    CData/*0:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v12;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v12 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v12;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v12 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v0;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v0 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v2;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v2 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v4;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v4 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v6;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v6 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v8;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v8 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v10;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v10 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v12;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v12 = 0;
    SData/*15:0*/ __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13;
    __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13 = 0;
    CData/*0:0*/ __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13 = 0;
    // Body
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v4 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v6 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v8 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v10 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v12 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v4 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v6 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v8 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v10 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v12 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v4 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v6 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v8 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v10 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v12 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v0 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v2 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v4 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v6 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v8 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v10 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v12 = 0U;
    __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13 = 0U;
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst) {
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v0 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v2 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v4 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v6 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v8 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v10 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v12 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v0 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v2 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v4 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v6 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v8 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v10 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v12 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v0 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v2 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v4 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v6 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v8 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v10 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v12 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v0 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v2 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v4 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v6 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v8 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v10 = 1U;
        __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v12 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a
                [0U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a
                [1U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a
                [2U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a
                [3U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a
                [4U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a
                [5U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a
                [6U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b
                [0U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b
                [1U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b
                [2U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b
                [3U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b
                [4U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b
                [5U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b
                [6U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
                [0U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
                [1U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
                [2U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
                [3U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
                [4U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
                [5U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11 = 1U;
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
                [6U];
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13 = 1U;
        }
        if ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
             [0U] & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1 
                = ((1U == vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                    [0U]) ? 0U : (0x0000ffffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                                                 [0U])));
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1 = 1U;
        }
        if ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
             [1U] & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3 
                = ((3U == vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                    [1U]) ? 0U : (0x0000ffffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                                                 [1U])));
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3 = 1U;
        }
        if ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
             [2U] & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5 
                = ((7U == vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                    [2U]) ? 0U : (0x0000ffffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                                                 [2U])));
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5 = 1U;
        }
        if ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
             [3U] & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7 
                = ((0x000fU == vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                    [3U]) ? 0U : (0x0000ffffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                                                 [3U])));
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7 = 1U;
        }
        if ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
             [4U] & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9 
                = ((0x001fU == vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                    [4U]) ? 0U : (0x0000ffffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                                                 [4U])));
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9 = 1U;
        }
        if ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
             [5U] & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11 
                = ((0x003fU == vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                    [5U]) ? 0U : (0x0000ffffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                                                 [5U])));
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11 = 1U;
        }
        if ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid
             [6U] & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__stall_i)))) {
            __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13 
                = ((0x007fU == vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                    [6U]) ? 0U : (0x0000ffffU & ((IData)(1U) 
                                                 + 
                                                 vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
                                                 [6U])));
            __VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13 = 1U;
        }
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[1U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[1U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[2U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[2U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v3;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v4) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[3U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[3U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v5;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v6) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[4U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[4U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v7;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v8) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[5U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[5U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v9;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v10) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[6U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[6U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v11;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v12) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[7U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[7U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D__v13;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[1U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[1U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[2U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[2U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v3;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v4) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[3U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[3U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v5;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v6) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[4U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[4U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v7;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v8) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[5U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[5U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v9;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v10) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[6U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[6U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v11;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v12) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[7U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[7U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D__v13;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[1U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[1U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[2U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[2U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v3;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v4) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[3U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[3U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v5;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v6) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[4U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[4U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v7;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v8) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[5U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[5U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v9;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v10) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[6U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[6U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v11;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v12) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[7U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[7U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D__v13;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v0) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[0U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[0U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v1;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v2) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[1U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[1U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v3;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v4) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[2U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[2U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v5;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v6) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[3U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[3U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v7;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v8) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[4U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[4U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v9;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v10) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[5U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[5U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v11;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v12) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[6U] = 0U;
    }
    if (__VdlySet__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr[6U] 
            = __VdlyVal__NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr__v13;
    }
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__rstn) {
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__valid_o) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready))) {
            vlSelfRef.NTT_axis_ip__DOT__out_data_count 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ready_for_next_batch)
                    ? 0U : ((IData)(1U) + vlSelfRef.NTT_axis_ip__DOT__out_data_count));
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__valid_i) 
             & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__self_valid)))) {
            vlSelfRef.NTT_axis_ip__DOT__in_data_count 
                = ((IData)(1U) + vlSelfRef.NTT_axis_ip__DOT__in_data_count);
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ready_for_next_batch) {
            vlSelfRef.NTT_axis_ip__DOT__in_data_count = 0U;
        }
        if (((IData)(vlSelfRef.NTT_axis_ip__DOT__valid_i) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__s_axis_tlast))) {
            vlSelfRef.NTT_axis_ip__DOT__self_valid = 1U;
        }
        if ((((IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast) 
              & (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready)) 
             & (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tvalid))) {
            vlSelfRef.NTT_axis_ip__DOT__self_valid = 0U;
        }
    } else {
        vlSelfRef.NTT_axis_ip__DOT__out_data_count = 0U;
        vlSelfRef.NTT_axis_ip__DOT__in_data_count = 0U;
        vlSelfRef.NTT_axis_ip__DOT__self_valid = 0U;
    }
    if (vlSelfRef.NTT_axis_ip__DOT__self_valid) {
        vlSelfRef.NTT_axis_ip__DOT__a_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__b_i = 0U;
    } else {
        vlSelfRef.NTT_axis_ip__DOT__a_i = (0x0000ffffU 
                                           & vlSelfRef.NTT_axis_ip__DOT__s_axis_tdata);
        vlSelfRef.NTT_axis_ip__DOT__b_i = (vlSelfRef.NTT_axis_ip__DOT__s_axis_tdata 
                                           >> 0x00000010U);
    }
    vlSelfRef.NTT_axis_ip__DOT__s_axis_tready = ((~ (IData)(vlSelfRef.NTT_axis_ip__DOT__self_valid)) 
                                                 & (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready));
    vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast = ((IData)(vlSelfRef.NTT_axis_ip__DOT__self_valid) 
                                                & (vlSelfRef.NTT_axis_ip__DOT__in_data_count 
                                                   == 
                                                   ((IData)(1U) 
                                                    + vlSelfRef.NTT_axis_ip__DOT__out_data_count)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__a_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__b_i;
    vlSelfRef.s_axis_tready = vlSelfRef.NTT_axis_ip__DOT__s_axis_tready;
    vlSelfRef.NTT_axis_ip__DOT__valid_i = ((IData)(vlSelfRef.NTT_axis_ip__DOT__self_valid) 
                                           | ((IData)(vlSelfRef.NTT_axis_ip__DOT__s_axis_tready) 
                                              & (IData)(vlSelfRef.NTT_axis_ip__DOT__s_axis_tvalid)));
    vlSelfRef.m_axis_tlast = vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__valid_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_i;
}

void Vtop___024root___nba_sequent__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__stall_i)))) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__dout 
            = ((2U > (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__addr))
                ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__mem
               [(1U & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__addr))]
                : 0U);
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_1 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__dout;
}

void Vtop___024root___nba_sequent__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__stall_i)))) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__dout 
            = ((4U > (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__addr))
                ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__mem
               [(3U & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__addr))]
                : 0U);
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_2 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__dout;
}

void Vtop___024root___nba_sequent__TOP__25(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__stall_i)))) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__dout 
            = ((8U > (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__addr))
                ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__mem
               [(7U & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__addr))]
                : 0U);
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_3 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__dout;
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__stall_i)))) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__dout 
            = ((0x0010U > (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__addr))
                ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__mem
               [(0x0000000fU & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__addr))]
                : 0U);
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_4 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__dout;
}

void Vtop___024root___nba_sequent__TOP__27(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__stall_i)))) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__dout 
            = ((0x0020U > (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__addr))
                ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__mem
               [(0x0000001fU & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__addr))]
                : 0U);
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_5 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__dout;
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__stall_i)))) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__dout 
            = ((0x0040U > (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__addr))
                ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__mem
               [(0x0000003fU & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__addr))]
                : 0U);
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_6 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__dout;
}

void Vtop___024root___nba_sequent__TOP__29(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__stall_i)))) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__dout 
            = ((0x0080U > (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__addr))
                ? vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__mem
               [(0x0000007fU & (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__addr))]
                : 0U);
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_7 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__dout;
}

void Vtop___024root___nba_sequent__TOP__30(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__33(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__35(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__36(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__37(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__rst) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s3 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s2 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s1 = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1 = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__stall)))) {
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp 
                = (0x0001ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4) 
                                  + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o 
                = (0x0000ffffU & ((0x00000d01U <= vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp)
                                   ? (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp 
                                      - (IData)(0x0d01U))
                                   : vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__add_temp));
            if (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4) 
                 >= (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4)));
            } else {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__sub_temp 
                    = (0x0001ffffU & (((IData)(0x00000d01U) 
                                       + (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4)) 
                                      - (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4)));
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o 
                    = (0x0000ffffU & vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__sub_temp);
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 
                   >> 0x00000010U);
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s4 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s3;
            if ((0x00000d01U <= VL_SHIFTR_III(32,32,32, vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3, 0x00000010U))) {
                vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__bw_s4 
                    = (0x0000ffffU & ((vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 
                                       >> 0x00000010U) 
                                      - (IData)(0x0d01U)));
            }
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s4 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__t_s3 
                = (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2 
                   + ((IData)(0x00000d01U) * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_s2)));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s3 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s2;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s3 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__m_s2 
                = (0x0000ffffU & ((IData)(0x00000cffU) 
                                  * vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1));
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s2 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s1;
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s2 = 0U;
        }
        if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_i) {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1 = 1U;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_s1 
                = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_i;
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__mult_s1 
                = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_i) 
                   * (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__w));
        } else {
            vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_s1 = 0U;
        }
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a[7U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b[7U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid[7U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_out;
}

void Vtop___024root___nba_sequent__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__39(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__42(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__42\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__43(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__43\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_o;
}

void Vtop___024root___nba_sequent__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__45\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_o;
}

void Vtop___024root___nba_sequent__TOP__46(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__46\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_o;
}

void Vtop___024root___nba_sequent__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__47\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_o;
}

void Vtop___024root___nba_sequent__TOP__48(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__48\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_o;
}

void Vtop___024root___nba_sequent__TOP__49(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__49\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_o;
}

void Vtop___024root___nba_sequent__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__50\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_o;
}

void Vtop___024root___nba_sequent__TOP__51(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__51\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_o;
}

void Vtop___024root___nba_sequent__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__52\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[0U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[1U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__54\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[2U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__55(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__55\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[3U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__56(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__56\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[4U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__57(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__57\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[5U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__58(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__58\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid[6U] 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_o;
}

void Vtop___024root___nba_sequent__TOP__59(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__59\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__addr 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_addr
        [6U];
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_a_D
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_bus_b_D
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__DU_BU_valid_D
        [7U];
}

void Vtop___024root___nba_sequent__TOP__60(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__60\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_1;
}

void Vtop___024root___nba_sequent__TOP__61(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__61\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_2;
}

void Vtop___024root___nba_sequent__TOP__62(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__62\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_3;
}

void Vtop___024root___nba_sequent__TOP__63(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__63\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_4;
}

void Vtop___024root___nba_sequent__TOP__64(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__64\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_5;
}

void Vtop___024root___nba_sequent__TOP__65(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__65\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_6;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_a
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_bus_b
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [0U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [1U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [2U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [3U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [4U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [5U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [6U];
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_o 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__BU_DU_valid
        [7U];
    vlSelfRef.NTT_axis_ip__DOT__a_o = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__a_o;
    vlSelfRef.NTT_axis_ip__DOT__b_o = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__b_o;
    vlSelfRef.NTT_axis_ip__DOT__valid_o = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__valid_o;
    vlSelfRef.NTT_axis_ip__DOT__m_axis_tdata = (((IData)(vlSelfRef.NTT_axis_ip__DOT__b_o) 
                                                 << 0x00000010U) 
                                                | (IData)(vlSelfRef.NTT_axis_ip__DOT__a_o));
    vlSelfRef.NTT_axis_ip__DOT__m_axis_tvalid = ((~ (IData)(vlSelfRef.NTT_axis_ip__DOT__stall_i)) 
                                                 & (IData)(vlSelfRef.NTT_axis_ip__DOT__valid_o));
    vlSelfRef.m_axis_tdata = vlSelfRef.NTT_axis_ip__DOT__m_axis_tdata;
    vlSelfRef.m_axis_tvalid = vlSelfRef.NTT_axis_ip__DOT__m_axis_tvalid;
}

void Vtop___024root___nba_sequent__TOP__66(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__66\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__w 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__tf_data_7;
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2_wr_en;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2_wr_en;
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2_wr_en;
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2_wr_en;
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2_wr_en;
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2_wr_en;
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state) {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_i = 0U;
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_i));
    } else {
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_i 
            = (((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__b_i) 
                << 0x00000010U) | (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__a_i));
        vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_i = 0U;
    }
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_wr_en 
        = ((1U & (~ (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state))) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_wr_en 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__state) 
           && (IData)(vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__valid_i));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_data 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_data_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1_wr_en;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__wr_en 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2_wr_en;
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.NTT_axis_ip__DOT__ready_for_next_batch 
        = ((IData)(vlSelfRef.NTT_axis_ip__DOT__valid_o) 
           & ((IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready) 
              & (((IData)(1U) + vlSelfRef.NTT_axis_ip__DOT__out_data_count) 
                 == vlSelfRef.NTT_axis_ip__DOT__in_data_count)));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst 
        = (1U & ((~ (IData)(vlSelfRef.NTT_axis_ip__DOT__rstn)) 
                 | ((IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tlast) 
                    & ((IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tready) 
                       & (IData)(vlSelfRef.NTT_axis_ip__DOT__m_axis_tvalid)))));
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__rst;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i;
    vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__rst 
        = vlSelfRef.NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__rst_i;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__27(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x0000000040000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x0000000080000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x0000000100000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__32(vlSelf);
    }
    if ((0x0000000200000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x0000000400000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x0000000800000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__35(vlSelf);
    }
    if ((0x0000001000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__36(vlSelf);
    }
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__37(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__38(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__39(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__41(vlSelf);
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__42(vlSelf);
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__43(vlSelf);
    }
    if ((0x0000000000200000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__44(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__45(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__46(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__47(vlSelf);
    }
    if ((0x0000000000002000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__48(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__49(vlSelf);
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__50(vlSelf);
    }
    if ((0x0000000000400000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__51(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__52(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__53(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__54(vlSelf);
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__55(vlSelf);
    }
    if ((0x0000000000004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((0x0000000000100000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__58(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__59(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__60(vlSelf);
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__61(vlSelf);
    }
    if ((0x0000000002000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__62(vlSelf);
    }
    if ((0x0000000004000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__63(vlSelf);
    }
    if ((0x0000000008000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__64(vlSelf);
    }
    if ((0x0000000010000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__65(vlSelf);
    }
    if ((0x0000003fc0000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000020000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__66(vlSelf);
    }
    if ((0x0000003fc0000004ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000003fc0000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000003fc0000100ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x0000003fc0000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x0000003fc0004000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000003fc0020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x0000003fc0100000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x0000003fc0000001ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/abhay/Hardware_security/QKD/Codes_0.1/Verif/coco_tb_NTT0.1/../../RTL/NTT_axis_ip.v", 3, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/abhay/Hardware_security/QKD/Codes_0.1/Verif/coco_tb_NTT0.1/../../RTL/NTT_axis_ip.v", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/abhay/Hardware_security/QKD/Codes_0.1/Verif/coco_tb_NTT0.1/../../RTL/NTT_axis_ip.v", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rstn & 0xfeU)))) {
        Verilated::overWidthError("rstn");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tvalid & 0xfeU)))) {
        Verilated::overWidthError("s_axis_tvalid");
    }
    if (VL_UNLIKELY(((vlSelfRef.s_axis_tlast & 0xfeU)))) {
        Verilated::overWidthError("s_axis_tlast");
    }
    if (VL_UNLIKELY(((vlSelfRef.m_axis_tready & 0xfeU)))) {
        Verilated::overWidthError("m_axis_tready");
    }
}
#endif  // VL_DEBUG
