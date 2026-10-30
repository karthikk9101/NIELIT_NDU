// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmux4x1_tb__Syms.h"


VL_ATTR_COLD void Vmux4x1_tb___024root__trace_init_sub__TOP__0(Vmux4x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_init_sub__TOP__0\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "mux4x1_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "uut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"nots0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"nots1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"and0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"and1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"and2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"and3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_init_top(Vmux4x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_init_top\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmux4x1_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmux4x1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux4x1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux4x1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_register(Vmux4x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_register\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmux4x1_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vmux4x1_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vmux4x1_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vmux4x1_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_const_0\n"); );
    // Body
    Vmux4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_tb___024root*>(voidSelf);
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_full_0_sub_0(Vmux4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_full_0\n"); );
    // Body
    Vmux4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_tb___024root*>(voidSelf);
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vmux4x1_tb___024root__trace_full_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_full_0_sub_0(Vmux4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_full_0_sub_0\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.mux4x1_tb__DOT__in),4);
    bufp->fullCData(oldp+1,(vlSelfRef.mux4x1_tb__DOT__sel),2);
    bufp->fullBit(oldp+2,((1U & ((::IData)(((0U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                            & (::IData)(vlSelfRef.mux4x1_tb__DOT__in))) 
                                 | ((::IData)(((1U 
                                                == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                               & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                                  >> 1U))) 
                                    | ((((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                         >> 3U) & (3U 
                                                   == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel))) 
                                       | (::IData)(
                                                   ((2U 
                                                     == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                                    & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                                       >> 2U)))))))));
    bufp->fullBit(oldp+3,((1U & (~ (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)))));
    bufp->fullBit(oldp+4,((1U & (~ ((::IData)(vlSelfRef.mux4x1_tb__DOT__sel) 
                                    >> 1U)))));
    bufp->fullBit(oldp+5,((::IData)(((0U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & (::IData)(vlSelfRef.mux4x1_tb__DOT__in)))));
    bufp->fullBit(oldp+6,((::IData)(((1U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 1U)))));
    bufp->fullBit(oldp+7,((::IData)(((2U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 2U)))));
    bufp->fullBit(oldp+8,((((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                            >> 3U) & (3U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)))));
}
