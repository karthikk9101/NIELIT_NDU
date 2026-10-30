// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_and_gate.h for the primary calling header

#ifndef VERILATED_VTB_AND_GATE___024UNIT_H_
#define VERILATED_VTB_AND_GATE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_and_gate__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_and_gate___024unit final {
  public:

    // TRIVIALLY CONSTRUCTIBLE STATE
    ::CData/*0:0*/ __VmonitorPending;
    ::CData/*0:0*/ __VmonitorOff;
    ::QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtb_and_gate__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_and_gate___024unit(Vtb_and_gate__Syms* symsp, const char* namep);
    ~Vtb_and_gate___024unit();
    VL_UNCOPYABLE(Vtb_and_gate___024unit);
    VL_UNMOVABLE(Vtb_and_gate___024unit);

    // INTERNAL METHODS
};


#endif  // guard
