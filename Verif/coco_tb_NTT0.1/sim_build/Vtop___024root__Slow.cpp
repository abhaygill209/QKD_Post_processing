// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__C_AXIS_TDATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__STAGES;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_1__DOT__buffer_2__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_2__DOT__buffer_2__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_3__DOT__buffer_2__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_4__DOT__buffer_2__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_5__DOT__buffer_2__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_6__DOT__buffer_2__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_1__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__Delay_inst_7__DOT__buffer_2__DOT__PTR_W;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__ADDR_WIDTH;
constexpr VlWide<9>/*287:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_1__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__ADDR_WIDTH;
constexpr VlWide<9>/*287:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_2__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__ADDR_WIDTH;
constexpr VlWide<9>/*287:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_3__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__ADDR_WIDTH;
constexpr VlWide<9>/*287:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_4__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__ADDR_WIDTH;
constexpr VlWide<9>/*287:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_5__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__ADDR_WIDTH;
constexpr VlWide<9>/*287:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_6__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__STAGE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__ADDR_WIDTH;
constexpr VlWide<9>/*287:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__t_rom_7__DOT__INIT_FILE;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__0__KET____DOT__butterfly_inst__DOT__R_MASK;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__1__KET____DOT__butterfly_inst__DOT__R_MASK;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__2__KET____DOT__butterfly_inst__DOT__R_MASK;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__3__KET____DOT__butterfly_inst__DOT__R_MASK;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__4__KET____DOT__butterfly_inst__DOT__R_MASK;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__5__KET____DOT__butterfly_inst__DOT__R_MASK;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__6__KET____DOT__butterfly_inst__DOT__R_MASK;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__Q;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__Q_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__Q_INV;
constexpr IData/*31:0*/ Vtop___024root::NTT_axis_ip__DOT__ntt_inst__DOT__butterfly_gen__BRA__7__KET____DOT__butterfly_inst__DOT__R_MASK;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
