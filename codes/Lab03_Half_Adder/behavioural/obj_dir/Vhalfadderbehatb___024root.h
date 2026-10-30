// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhalfadderbehatb.h for the primary calling header

#ifndef VERILATED_VHALFADDERBEHATB___024ROOT_H_
#define VERILATED_VHALFADDERBEHATB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vhalfadderbehatb___024unit;


class Vhalfadderbehatb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhalfadderbehatb___024root final {
  public:
    // CELLS
    Vhalfadderbehatb___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ halfadderbehatb__DOT__a;
    ::CData/*0:0*/ halfadderbehatb__DOT__b;
    ::CData/*0:0*/ halfadderbehatb__DOT__uut__DOT__sum;
    ::CData/*0:0*/ halfadderbehatb__DOT__uut__DOT__carry;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderbehatb__DOT__a__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderbehatb__DOT__b__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderbehatb__DOT__uut__DOT__carry__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderbehatb__DOT__uut__DOT__sum__0;
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
    Vhalfadderbehatb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhalfadderbehatb___024root(Vhalfadderbehatb__Syms* symsp, const char* namep);
    ~Vhalfadderbehatb___024root();
    VL_UNCOPYABLE(Vhalfadderbehatb___024root);
    VL_UNMOVABLE(Vhalfadderbehatb___024root);

    // INTERNAL METHODS
};


#endif  // guard
