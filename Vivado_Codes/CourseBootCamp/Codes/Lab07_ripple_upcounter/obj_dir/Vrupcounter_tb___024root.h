// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrupcounter_tb.h for the primary calling header

#ifndef VERILATED_VRUPCOUNTER_TB___024ROOT_H_
#define VERILATED_VRUPCOUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vrupcounter_tb___024unit;


class Vrupcounter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrupcounter_tb___024root final {
  public:
    // CELLS
    Vrupcounter_tb___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ rupcounter_tb__DOT__clk;
    ::CData/*0:0*/ rupcounter_tb__DOT__reset;
    ::CData/*3:0*/ rupcounter_tb__DOT__uut__DOT__q;
    ::CData/*0:0*/ rupcounter_tb__DOT__uut__DOT__tff3__DOT__q;
    ::CData/*0:0*/ rupcounter_tb__DOT__uut__DOT__tff2__DOT__q;
    ::CData/*0:0*/ rupcounter_tb__DOT__uut__DOT__tff1__DOT__q;
    ::CData/*0:0*/ rupcounter_tb__DOT__uut__DOT__tff0__DOT__q;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__rupcounter_tb__DOT__reset__0;
    ::CData/*3:0*/ __Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__q__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff2__DOT__q__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff1__DOT__q__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff0__DOT__q__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__rupcounter_tb__DOT__clk__0;
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
    Vrupcounter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrupcounter_tb___024root(Vrupcounter_tb__Syms* symsp, const char* namep);
    ~Vrupcounter_tb___024root();
    VL_UNCOPYABLE(Vrupcounter_tb___024root);
    VL_UNMOVABLE(Vrupcounter_tb___024root);

    // INTERNAL METHODS
};


#endif  // guard
