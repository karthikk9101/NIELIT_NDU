// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vupcountertb.h for the primary calling header

#ifndef VERILATED_VUPCOUNTERTB___024ROOT_H_
#define VERILATED_VUPCOUNTERTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vupcountertb___024unit;


class Vupcountertb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vupcountertb___024root final {
  public:
    // CELLS
    Vupcountertb___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ upcountertb__DOT__clk;
    ::CData/*0:0*/ upcountertb__DOT__reset;
    ::CData/*3:0*/ upcountertb__DOT__uut__DOT__count;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__upcountertb__DOT__reset__0;
    ::CData/*3:0*/ __Vtrigprevexpr___TOP__upcountertb__DOT__uut__DOT__count__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__upcountertb__DOT__clk__0;
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
    Vupcountertb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vupcountertb___024root(Vupcountertb__Syms* symsp, const char* namep);
    ~Vupcountertb___024root();
    VL_UNCOPYABLE(Vupcountertb___024root);
    VL_UNMOVABLE(Vupcountertb___024root);

    // INTERNAL METHODS
};


#endif  // guard
