// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_NTT_axis_ip;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_1__buffer_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_1__buffer_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_2__buffer_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_2__buffer_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_3;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_3__buffer_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_3__buffer_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_4;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_4__buffer_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_4__buffer_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_5;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_5__buffer_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_5__buffer_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_6;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_6__buffer_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_6__buffer_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_7;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_7__buffer_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__Delay_inst_7__buffer_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__0__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__0__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__1__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__1__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__2__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__2__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__3__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__3__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__4__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__4__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__5__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__5__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__6__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__6__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__7__KET__;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__butterfly_gen__BRA__7__KET____butterfly_inst;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__t_rom_1;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__t_rom_2;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__t_rom_3;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__t_rom_4;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__t_rom_5;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__t_rom_6;
    VerilatedScope __Vscope_NTT_axis_ip__ntt_inst__t_rom_7;
    VerilatedScope __Vscope_TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
