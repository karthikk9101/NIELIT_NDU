// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhalfadderdataflowtb.h for the primary calling header

#ifndef VERILATED_VHALFADDERDATAFLOWTB___024ROOT_H_
#define VERILATED_VHALFADDERDATAFLOWTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vhalfadderdataflowtb___024unit;


class Vhalfadderdataflowtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhalfadderdataflowtb___024root final {
  public:
    // CELLS
    Vhalfadderdataflowtb___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ halfadderdataflowtb__DOT__a;
    ::CData/*0:0*/ halfadderdataflowtb__DOT__b;
    ::CData/*0:0*/ halfadderdataflowtb__DOT__uut__DOT__sum;
    ::CData/*0:0*/ halfadderdataflowtb__DOT__uut__DOT__carry;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__a__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__b__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__uut__DOT__carry__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__halfadderdataflowtb__DOT__uut__DOT__sum__0;
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
    Vhalfadderdataflowtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhalfadderdataflowtb___024root(Vhalfadderdataflowtb__Syms* symsp, const char* namep);
    ~Vhalfadderdataflowtb___024root();
    VL_UNCOPYABLE(Vhalfadderdataflowtb___024root);
    VL_UNMOVABLE(Vhalfadderdataflowtb___024root);

    // INTERNAL METHODS
};


#endif  // guard
