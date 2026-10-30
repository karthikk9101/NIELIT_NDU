// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vmux4x1_tb__Syms.h"


void Vmux4x1_tb___024root__trace_chg_0_sub_0(Vmux4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux4x1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_chg_0\n"); );
    // Body
    Vmux4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_tb___024root*>(voidSelf);
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vmux4x1_tb___024root__trace_chg_0_sub_0((&vlSymsp->vlInst.TOP), bufp);
}

void Vmux4x1_tb___024root__trace_chg_0_sub_0(Vmux4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_chg_0_sub_0\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__VtraceActivity[1U] 
                      | vlSelfRef.__VtraceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.mux4x1_tb__DOT__in),4);
        bufp->chgCData(oldp+1,(vlSelfRef.mux4x1_tb__DOT__sel),2);
        bufp->chgBit(oldp+2,((1U & ((::IData)(((0U 
                                                == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                               & (::IData)(vlSelfRef.mux4x1_tb__DOT__in))) 
                                    | ((::IData)(((1U 
                                                   == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                                  & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                                     >> 1U))) 
                                       | ((((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                            >> 3U) 
                                           & (3U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel))) 
                                          | (::IData)(
                                                      ((2U 
                                                        == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                                       & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                                          >> 2U)))))))));
        bufp->chgBit(oldp+3,((1U & (~ (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)))));
        bufp->chgBit(oldp+4,((1U & (~ ((::IData)(vlSelfRef.mux4x1_tb__DOT__sel) 
                                       >> 1U)))));
        bufp->chgBit(oldp+5,((::IData)(((0U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                        & (::IData)(vlSelfRef.mux4x1_tb__DOT__in)))));
        bufp->chgBit(oldp+6,((::IData)(((1U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                        & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                           >> 1U)))));
        bufp->chgBit(oldp+7,((::IData)(((2U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                        & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                           >> 2U)))));
        bufp->chgBit(oldp+8,((((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                               >> 3U) & (3U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)))));
    }
}

void Vmux4x1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root__trace_cleanup\n"); );
    // Body
    Vmux4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_tb___024root*>(voidSelf);
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->vlInst.TOP.__VtraceActivity[0U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[1U] = 0U;
    vlSymsp->vlInst.TOP.__VtraceActivity[2U] = 0U;
}
