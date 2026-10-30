// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjkfftb.h for the primary calling header

#ifndef VERILATED_VJKFFTB___024UNIT_H_
#define VERILATED_VJKFFTB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vjkfftb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vjkfftb___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vjkfftb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vjkfftb___024unit(Vjkfftb__Syms* symsp, const char* namep);
    ~Vjkfftb___024unit();
    VL_UNCOPYABLE(Vjkfftb___024unit);
    VL_UNMOVABLE(Vjkfftb___024unit);

    // INTERNAL METHODS
};


#endif  // guard
