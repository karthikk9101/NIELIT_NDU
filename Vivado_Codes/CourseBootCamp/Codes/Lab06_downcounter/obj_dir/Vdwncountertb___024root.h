// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdwncountertb.h for the primary calling header

#ifndef VERILATED_VDWNCOUNTERTB___024ROOT_H_
#define VERILATED_VDWNCOUNTERTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdwncountertb___024unit;


class Vdwncountertb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdwncountertb___024root final {
  public:
    // CELLS
    Vdwncountertb___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ dwncountertb__DOT__clk;
    ::CData/*0:0*/ dwncountertb__DOT__reset;
    ::CData/*3:0*/ dwncountertb__DOT__uut__DOT__count;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__dwncountertb__DOT__reset__0;
    ::CData/*3:0*/ __Vtrigprevexpr___TOP__dwncountertb__DOT__uut__DOT__count__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__dwncountertb__DOT__clk__0;
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
    Vdwncountertb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdwncountertb___024root(Vdwncountertb__Syms* symsp, const char* namep);
    ~Vdwncountertb___024root();
    VL_UNCOPYABLE(Vdwncountertb___024root);
    VL_UNMOVABLE(Vdwncountertb___024root);

    // INTERNAL METHODS
};


#endif  // guard
