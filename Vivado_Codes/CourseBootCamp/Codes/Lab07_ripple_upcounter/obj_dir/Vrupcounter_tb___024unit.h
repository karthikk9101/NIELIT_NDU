// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrupcounter_tb.h for the primary calling header

#ifndef VERILATED_VRUPCOUNTER_TB___024UNIT_H_
#define VERILATED_VRUPCOUNTER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrupcounter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrupcounter_tb___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vrupcounter_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrupcounter_tb___024unit(Vrupcounter_tb__Syms* symsp, const char* namep);
    ~Vrupcounter_tb___024unit();
    VL_UNCOPYABLE(Vrupcounter_tb___024unit);
    VL_UNMOVABLE(Vrupcounter_tb___024unit);

    // INTERNAL METHODS
};


#endif  // guard
