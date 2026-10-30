// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vhalfadderbehatb__Syms.h"


VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_init_sub__TOP__0(Vhalfadderbehatb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root__trace_init_sub__TOP__0\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "halfadderbehatb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
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

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_init_top(Vhalfadderbehatb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root__trace_init_top\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhalfadderbehatb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhalfadderbehatb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhalfadderbehatb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_register(Vhalfadderbehatb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root__trace_register\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vhalfadderbehatb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vhalfadderbehatb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vhalfadderbehatb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vhalfadderbehatb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root__trace_const_0\n"); );
    // Body
    Vhalfadderbehatb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalfadderbehatb___024root*>(voidSelf);
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_full_0_sub_0(Vhalfadderbehatb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root__trace_full_0\n"); );
    // Body
    Vhalfadderbehatb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalfadderbehatb___024root*>(voidSelf);
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vhalfadderbehatb___024root__trace_full_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_full_0_sub_0(Vhalfadderbehatb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalfadderbehatb___024root__trace_full_0_sub_0\n"); );
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.halfadderbehatb__DOT__a));
    bufp->fullBit(oldp+1,(vlSelfRef.halfadderbehatb__DOT__b));
    bufp->fullBit(oldp+2,(vlSelfRef.halfadderbehatb__DOT__uut__DOT__sum));
    bufp->fullBit(oldp+3,(vlSelfRef.halfadderbehatb__DOT__uut__DOT__carry));
}
