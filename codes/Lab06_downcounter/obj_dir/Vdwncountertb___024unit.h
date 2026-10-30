// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdwncountertb.h for the primary calling header

#ifndef VERILATED_VDWNCOUNTERTB___024UNIT_H_
#define VERILATED_VDWNCOUNTERTB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdwncountertb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdwncountertb___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vdwncountertb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdwncountertb___024unit(Vdwncountertb__Syms* symsp, const char* namep);
    ~Vdwncountertb___024unit();
    VL_UNCOPYABLE(Vdwncountertb___024unit);
    VL_UNMOVABLE(Vdwncountertb___024unit);

    // INTERNAL METHODS
};


#endif  // guard
