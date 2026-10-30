// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhalfadderbehatb.h for the primary calling header

#ifndef VERILATED_VHALFADDERBEHATB___024UNIT_H_
#define VERILATED_VHALFADDERBEHATB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhalfadderbehatb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhalfadderbehatb___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vhalfadderbehatb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhalfadderbehatb___024unit(Vhalfadderbehatb__Syms* symsp, const char* namep);
    ~Vhalfadderbehatb___024unit();
    VL_UNCOPYABLE(Vhalfadderbehatb___024unit);
    VL_UNMOVABLE(Vhalfadderbehatb___024unit);

    // INTERNAL METHODS
};


#endif  // guard
