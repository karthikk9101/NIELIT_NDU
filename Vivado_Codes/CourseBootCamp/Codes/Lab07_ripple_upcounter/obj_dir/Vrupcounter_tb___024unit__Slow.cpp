// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcounter_tb.h for the primary calling header

#include "Vrupcounter_tb__pch.h"

void Vrupcounter_tb___024unit___ctor_var_reset(Vrupcounter_tb___024unit* vlSelf);

void Vrupcounter_tb___024unit__ctor(Vrupcounter_tb___024unit* vlSelf, Vrupcounter_tb__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vrupcounter_tb___024unit___ctor_var_reset(vlSelf);
}

Vrupcounter_tb___024unit::Vrupcounter_tb___024unit(Vrupcounter_tb__Syms* symsp, const char* namep) {
    Vrupcounter_tb___024unit__ctor(this, symsp, namep);
}

void Vrupcounter_tb___024unit__dtor(Vrupcounter_tb___024unit* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vrupcounter_tb___024unit::~Vrupcounter_tb___024unit() {
    Vrupcounter_tb___024unit__dtor(this);
}
