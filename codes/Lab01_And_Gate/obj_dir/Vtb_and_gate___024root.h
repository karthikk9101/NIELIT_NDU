// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_and_gate.h for the primary calling header

#ifndef VERILATED_VTB_AND_GATE___024ROOT_H_
#define VERILATED_VTB_AND_GATE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_and_gate___024unit;


class Vtb_and_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_and_gate___024root final {
  public:
    // CELLS
    Vtb_and_gate___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ tb_and_gate__DOT__A;
    ::CData/*0:0*/ tb_and_gate__DOT__B;
    ::CData/*0:0*/ tb_and_gate__DOT__uut__DOT__C;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_and_gate__DOT__A__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_and_gate__DOT__B__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__tb_and_gate__DOT__uut__DOT__C__0;
    ::IData/*31:0*/ __Vi;
    ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VicoTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggeredAcc;
    ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlDelayScheduler __VdlySched;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vtb_and_gate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_and_gate___024root(Vtb_and_gate__Syms* symsp, const char* namep);
    ~Vtb_and_gate___024root();
    VL_UNCOPYABLE(Vtb_and_gate___024root);
    VL_UNMOVABLE(Vtb_and_gate___024root);

    // INTERNAL METHODS
};


#endif  // guard
