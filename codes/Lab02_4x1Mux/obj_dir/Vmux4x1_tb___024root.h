// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux4x1_tb.h for the primary calling header

#ifndef VERILATED_VMUX4X1_TB___024ROOT_H_
#define VERILATED_VMUX4X1_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmux4x1_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux4x1_tb___024root final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*3:0*/ mux4x1_tb__DOT__in;
    ::CData/*1:0*/ mux4x1_tb__DOT__sel;
    ::CData/*0:0*/ mux4x1_tb__DOT__uut__DOT__and0;
    ::CData/*0:0*/ mux4x1_tb__DOT__uut__DOT__and1;
    ::CData/*0:0*/ mux4x1_tb__DOT__uut__DOT__and2;
    ::CData/*0:0*/ mux4x1_tb__DOT__uut__DOT__and3;
    ::IData/*31:0*/ __Vi;
    ::VlUnpacked<::QData/*63:0*/, 1> __VstlTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VicoTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggered;
    ::VlUnpacked<::QData/*63:0*/, 1> __VactTriggeredAcc;
    ::VlUnpacked<::QData/*63:0*/, 1> __VnbaTriggered;
    ::VlUnpacked<::CData/*0:0*/, 3> __VtraceActivity;

    // NOT TRIVIALLY CONSTRUCTIBLE STATE
    union {
        struct {
            ::VlDelayScheduler __VdlySched;
        } __Vnontrivs;
    };

    // INTERNAL VARIABLES
    Vmux4x1_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmux4x1_tb___024root(Vmux4x1_tb__Syms* symsp, const char* namep);
    ~Vmux4x1_tb___024root();
    VL_UNCOPYABLE(Vmux4x1_tb___024root);
    VL_UNMOVABLE(Vmux4x1_tb___024root);

    // INTERNAL METHODS
};


#endif  // guard
