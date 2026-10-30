// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjkfftb.h for the primary calling header

#ifndef VERILATED_VJKFFTB___024ROOT_H_
#define VERILATED_VJKFFTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vjkfftb___024unit;


class Vjkfftb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vjkfftb___024root final {
  public:
    // CELLS
    Vjkfftb___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ jkfftb__DOT__preset;
    ::CData/*0:0*/ jkfftb__DOT__clk;
    ::CData/*0:0*/ jkfftb__DOT__j;
    ::CData/*0:0*/ jkfftb__DOT__k;
    ::CData/*0:0*/ jkfftb__DOT__uut__DOT__q;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__jkfftb__DOT__clk__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__jkfftb__DOT__j__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__jkfftb__DOT__k__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__jkfftb__DOT__preset__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__jkfftb__DOT__uut__DOT__q__0;
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
    Vjkfftb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vjkfftb___024root(Vjkfftb__Syms* symsp, const char* namep);
    ~Vjkfftb___024root();
    VL_UNCOPYABLE(Vjkfftb___024root);
    VL_UNMOVABLE(Vjkfftb___024root);

    // INTERNAL METHODS
};


#endif  // guard
