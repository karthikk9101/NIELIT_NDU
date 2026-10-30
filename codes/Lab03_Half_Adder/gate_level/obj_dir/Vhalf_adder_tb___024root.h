// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhalf_adder_tb.h for the primary calling header

#ifndef VERILATED_VHALF_ADDER_TB___024ROOT_H_
#define VERILATED_VHALF_ADDER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vhalf_adder_tb___024unit;


class Vhalf_adder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhalf_adder_tb___024root final {
  public:
    // CELLS
    Vhalf_adder_tb___024unit* __PVT____024unit;

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ half_adder_tb__DOT__a;
    ::CData/*0:0*/ half_adder_tb__DOT__b;
    ::CData/*0:0*/ half_adder_tb__DOT__uut__DOT__sum;
    ::CData/*0:0*/ half_adder_tb__DOT__uut__DOT__carry;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__a__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__b__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__uut__DOT__carry__0;
    ::CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__uut__DOT__sum__0;
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
    Vhalf_adder_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhalf_adder_tb___024root(Vhalf_adder_tb__Syms* symsp, const char* namep);
    ~Vhalf_adder_tb___024root();
    VL_UNCOPYABLE(Vhalf_adder_tb___024root);
    VL_UNMOVABLE(Vhalf_adder_tb___024root);

    // INTERNAL METHODS
};


#endif  // guard
