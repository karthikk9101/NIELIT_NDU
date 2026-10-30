// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux4x1_tb.h for the primary calling header

#include "Vmux4x1_tb__pch.h"

VlCoroutine Vmux4x1_tb___024root___eval_initial__TOP__Vtiming__0(Vmux4x1_tb___024root* vlSelf);

void Vmux4x1_tb___024root___eval_initial(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_initial\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("mux4x1.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.__VtraceActivity[1U] = 1U;
    Vmux4x1_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vmux4x1_tb___024root___eval_sample(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_sample\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vmux4x1_tb___024root___eval_ico(Vmux4x1_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_ico\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux4x1_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vmux4x1_tb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vmux4x1_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vmux4x1_tb___024root___eval_act(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_act\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime()));
    }
    Vmux4x1_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux4x1_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vmux4x1_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vmux4x1_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                vlSelfRef.__Vnontrivs.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_body__act
            if ((((1ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and0 
                        = (::IData)(((0U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & (::IData)(vlSelfRef.mux4x1_tb__DOT__in)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and1 
                        = (::IData)(((1U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 1U)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and2 
                        = (::IData)(((2U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 2U)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and3 
                        = (((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                            >> 3U) & (3U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)));
                }
            }
        }
    }
    return (__VactExecute);
}

bool Vmux4x1_tb___024root___eval_inact(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_inact\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("mux4x1_tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vmux4x1_tb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vmux4x1_tb___024root___eval_nba(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_nba\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vmux4x1_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((1ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and0 
                        = (::IData)(((0U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & (::IData)(vlSelfRef.mux4x1_tb__DOT__in)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and1 
                        = (::IData)(((1U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 1U)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and2 
                        = (::IData)(((2U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)) 
                                     & ((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                                        >> 2U)));
                    vlSelfRef.mux4x1_tb__DOT__uut__DOT__and3 
                        = (((::IData)(vlSelfRef.mux4x1_tb__DOT__in) 
                            >> 3U) & (3U == (::IData)(vlSelfRef.mux4x1_tb__DOT__sel)));
                }
            }
        }
        Vmux4x1_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vmux4x1_tb___024root___eval_obs(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_obs\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vmux4x1_tb___024root___eval_react(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_react\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vmux4x1_tb___024root___eval_postponed(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_postponed\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vmux4x1_tb___024root___eval_initial__TOP__Vtiming__0(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Gate Level Test\nSEL  |  IN    | OUT\n-------------------\n",0);
    vlSelfRef.mux4x1_tb__DOT__in = 0x0dU;
    vlSelfRef.mux4x1_tb__DOT__sel = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "mux4x1_tb.v", 
                                                     22);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    VL_WRITEF_NX("%b   |  %b  |  %b\n",3, '#',2,vlSelfRef.mux4x1_tb__DOT__sel
                 , '#',4,(::IData)(vlSelfRef.mux4x1_tb__DOT__in)
                 , '#',1,((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and0) 
                          | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and1) 
                             | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and3) 
                                | (::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and2)))));
    vlSelfRef.mux4x1_tb__DOT__sel = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "mux4x1_tb.v", 
                                                     23);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    VL_WRITEF_NX("%b   |  %b  |  %b\n",3, '#',2,vlSelfRef.mux4x1_tb__DOT__sel
                 , '#',4,(::IData)(vlSelfRef.mux4x1_tb__DOT__in)
                 , '#',1,((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and0) 
                          | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and1) 
                             | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and3) 
                                | (::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and2)))));
    vlSelfRef.mux4x1_tb__DOT__sel = 2U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "mux4x1_tb.v", 
                                                     24);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    VL_WRITEF_NX("%b   |  %b  |  %b\n",3, '#',2,vlSelfRef.mux4x1_tb__DOT__sel
                 , '#',4,(::IData)(vlSelfRef.mux4x1_tb__DOT__in)
                 , '#',1,((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and0) 
                          | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and1) 
                             | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and3) 
                                | (::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and2)))));
    vlSelfRef.mux4x1_tb__DOT__sel = 3U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "mux4x1_tb.v", 
                                                     25);
    vlSelfRef.__VtraceActivity[2U] = 1U;
    VL_WRITEF_NX("%b   |  %b  |  %b\n",3, '#',2,vlSelfRef.mux4x1_tb__DOT__sel
                 , '#',4,(::IData)(vlSelfRef.mux4x1_tb__DOT__in)
                 , '#',1,((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and0) 
                          | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and1) 
                             | ((::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and3) 
                                | (::IData)(vlSelfRef.mux4x1_tb__DOT__uut__DOT__and2)))));
    VL_FINISH_MT("mux4x1_tb.v", 27, "");
    vlSelfRef.__VtraceActivity[2U] = 1U;
    co_return;
}

bool Vmux4x1_tb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vmux4x1_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___trigger_anySet__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vmux4x1_tb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vmux4x1_tb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vmux4x1_tb___024root___eval_debug_assertions(Vmux4x1_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux4x1_tb___024root___eval_debug_assertions\n"); );
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
