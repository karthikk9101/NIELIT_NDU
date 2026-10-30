// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vhalf_adder_tb__Syms.h"


VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_init_sub__TOP__0(Vhalf_adder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root__trace_init_sub__TOP__0\n"); );
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "half_adder_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_init_top(Vhalf_adder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root__trace_init_top\n"); );
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhalf_adder_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhalf_adder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhalf_adder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_register(Vhalf_adder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root__trace_register\n"); );
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhalf_adder_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vhalf_adder_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vhalf_adder_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vhalf_adder_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root__trace_const_0\n"); );
    // Body
    Vhalf_adder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalf_adder_tb___024root*>(voidSelf);
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_full_0_sub_0(Vhalf_adder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root__trace_full_0\n"); );
    // Body
    Vhalf_adder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalf_adder_tb___024root*>(voidSelf);
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhalf_adder_tb___024root__trace_full_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vhalf_adder_tb___024root__trace_full_0_sub_0(Vhalf_adder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root__trace_full_0_sub_0\n"); );
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.half_adder_tb__DOT__a));
    bufp->fullBit(oldp+1,(vlSelfRef.half_adder_tb__DOT__b));
    bufp->fullBit(oldp+2,(vlSelfRef.half_adder_tb__DOT__uut__DOT__sum));
    bufp->fullBit(oldp+3,(vlSelfRef.half_adder_tb__DOT__uut__DOT__carry));
}
