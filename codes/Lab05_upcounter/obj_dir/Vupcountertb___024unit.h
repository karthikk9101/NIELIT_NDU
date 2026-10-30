// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vupcountertb.h for the primary calling header

#ifndef VERILATED_VUPCOUNTERTB___024UNIT_H_
#define VERILATED_VUPCOUNTERTB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vupcountertb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vupcountertb___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vupcountertb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vupcountertb___024unit(Vupcountertb__Syms* symsp, const char* namep);
    ~Vupcountertb___024unit();
    VL_UNCOPYABLE(Vupcountertb___024unit);
    VL_UNMOVABLE(Vupcountertb___024unit);

    // INTERNAL METHODS
};


#endif  // guard
