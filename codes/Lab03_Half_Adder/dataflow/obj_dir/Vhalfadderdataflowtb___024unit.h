// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhalfadderdataflowtb.h for the primary calling header

#ifndef VERILATED_VHALFADDERDATAFLOWTB___024UNIT_H_
#define VERILATED_VHALFADDERDATAFLOWTB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhalfadderdataflowtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhalfadderdataflowtb___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vhalfadderdataflowtb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhalfadderdataflowtb___024unit(Vhalfadderdataflowtb__Syms* symsp, const char* namep);
    ~Vhalfadderdataflowtb___024unit();
    VL_UNCOPYABLE(Vhalfadderdataflowtb___024unit);
    VL_UNMOVABLE(Vhalfadderdataflowtb___024unit);

    // INTERNAL METHODS
};


#endif  // guard
