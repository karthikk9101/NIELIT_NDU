// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrupcountertb.h for the primary calling header

#ifndef VERILATED_VRUPCOUNTERTB___024UNIT_H_
#define VERILATED_VRUPCOUNTERTB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrupcountertb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrupcountertb___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vrupcountertb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrupcountertb___024unit(Vrupcountertb__Syms* symsp, const char* namep);
    ~Vrupcountertb___024unit();
    VL_UNCOPYABLE(Vrupcountertb___024unit);
    VL_UNMOVABLE(Vrupcountertb___024unit);

    // INTERNAL METHODS
};


#endif  // guard
