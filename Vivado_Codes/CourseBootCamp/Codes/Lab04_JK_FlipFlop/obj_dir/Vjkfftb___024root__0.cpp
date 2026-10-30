// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjkfftb.h for the primary calling header

#include "Vjkfftb__pch.h"

VlCoroutine Vjkfftb___024root___eval_initial__TOP__Vtiming__0(Vjkfftb___024root* vlSelf);
VlCoroutine Vjkfftb___024root___eval_initial__TOP__Vtiming__1(Vjkfftb___024root* vlSelf);

void Vjkfftb___024root___eval_initial(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_initial\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vjkfftb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vjkfftb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vjkfftb___024root___eval_sample(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_sample\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vjkfftb___024root___eval_ico(Vjkfftb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_ico\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjkfftb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vjkfftb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjkfftb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vjkfftb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vjkfftb___024root___eval_act(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_act\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            (((((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                                 << 3U) 
                                                                | (((::IData)(vlSelfRef.jkfftb__DOT__preset) 
                                                                    & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__preset__0))) 
                                                                   << 2U)) 
                                                               | ((((::IData)(vlSelfRef.jkfftb__DOT__clk) 
                                                                    & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((::IData)(vlSelfRef.jkfftb__DOT__uut__DOT__q) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__uut__DOT__q__0)))) 
                                                              << 4U) 
                                                             | (((((::IData)(vlSelfRef.jkfftb__DOT__preset) 
                                                                   != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__preset__0)) 
                                                                  << 3U) 
                                                                 | (((::IData)(vlSelfRef.jkfftb__DOT__k) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__k__0)) 
                                                                    << 2U)) 
                                                                | ((((::IData)(vlSelfRef.jkfftb__DOT__j) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__j__0)) 
                                                                    << 1U) 
                                                                   | ((::IData)(vlSelfRef.jkfftb__DOT__clk) 
                                                                      != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__clk__0 
            = vlSelfRef.jkfftb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__j__0 
            = vlSelfRef.jkfftb__DOT__j;
        vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__k__0 
            = vlSelfRef.jkfftb__DOT__k;
        vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__preset__0 
            = vlSelfRef.jkfftb__DOT__preset;
        vlSelfRef.__Vtrigprevexpr___TOP__jkfftb__DOT__uut__DOT__q__0 
            = vlSelfRef.jkfftb__DOT__uut__DOT__q;
    }
    Vjkfftb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjkfftb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vjkfftb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vjkfftb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((((0x0000000000000080ULL & vlSelfRef.__VactTriggered[0U])) != 0ULL)) {
                vlSelfRef.__Vnontrivs.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vjkfftb___024root___eval_inact(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_inact\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("jkfftb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vjkfftb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vjkfftb___024root___eval_nba(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_nba\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vjkfftb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.jkfftb__DOT__uut__DOT__q 
                        = ((::IData)(vlSelfRef.jkfftb__DOT__preset) 
                           || ((::IData)(vlSelfRef.jkfftb__DOT__j)
                                ? ((1U & (~ (::IData)(vlSelfRef.jkfftb__DOT__k))) 
                                   || (1U & (~ (::IData)(vlSelfRef.jkfftb__DOT__uut__DOT__q))))
                                : ((1U & (~ (::IData)(vlSelfRef.jkfftb__DOT__k))) 
                                   && (::IData)(vlSelfRef.jkfftb__DOT__uut__DOT__q))));
                }
            }
            if ((((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if ((1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum)) {
                        vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
                    }
                }
            }
        }
        Vjkfftb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vjkfftb___024root___eval_obs(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_obs\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vjkfftb___024root___eval_react(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_react\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vjkfftb___024root___eval_postponed(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_postponed\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_postponed__TOP
        if (VL_UNLIKELY((((::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorPending) 
                          & (1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum))))) {
            vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 0U;
            if (VL_UNLIKELY(((1U & (~ (::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorOff)))))) {
                VL_WRITEF_NX("%4t    %b     %b   %b %b | %b %b\n",8, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(::IData)(vlSelfRef.jkfftb__DOT__preset)
                             , '#',1,vlSelfRef.jkfftb__DOT__clk
                             , '#',1,(::IData)(vlSelfRef.jkfftb__DOT__j)
                             , '#',1,vlSelfRef.jkfftb__DOT__k
                             , '#',1,(::IData)(vlSelfRef.jkfftb__DOT__uut__DOT__q)
                             , '#',1,(1U & (~ (::IData)(vlSelfRef.jkfftb__DOT__uut__DOT__q))));
            }
        }
    }
}

VlCoroutine Vjkfftb___024root___eval_initial__TOP__Vtiming__0(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("jkff.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Time  PRESET CLK J K | Q QN\n",0);
    vlSymsp->vlInst.TOP____024unit.__VmonitorNum = 1U;
    vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
    vlSelfRef.jkfftb__DOT__clk = 0U;
    vlSelfRef.jkfftb__DOT__preset = 0U;
    vlSelfRef.jkfftb__DOT__j = 0U;
    vlSelfRef.jkfftb__DOT__k = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000007d0ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     35);
    vlSelfRef.jkfftb__DOT__preset = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000000bb8ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     36);
    vlSelfRef.jkfftb__DOT__preset = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     39);
    vlSelfRef.jkfftb__DOT__j = 0U;
    vlSelfRef.jkfftb__DOT__k = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     42);
    vlSelfRef.jkfftb__DOT__j = 0U;
    vlSelfRef.jkfftb__DOT__k = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     45);
    vlSelfRef.jkfftb__DOT__j = 1U;
    vlSelfRef.jkfftb__DOT__k = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     48);
    vlSelfRef.jkfftb__DOT__j = 1U;
    vlSelfRef.jkfftb__DOT__k = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     51);
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000007d0ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     54);
    vlSelfRef.jkfftb__DOT__preset = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000007d0ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     55);
    vlSelfRef.jkfftb__DOT__preset = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "jkfftb.v", 
                                                     57);
    VL_FINISH_MT("jkfftb.v", 58, "");
    co_return;
}

VlCoroutine Vjkfftb___024root___eval_initial__TOP__Vtiming__1(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "jkfftb.v", 
                                                         18);
        vlSelfRef.jkfftb__DOT__clk = (1U & (~ (::IData)(vlSelfRef.jkfftb__DOT__clk)));
    }
    co_return;
}

bool Vjkfftb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___trigger_anySet__ico\n"); );
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

bool Vjkfftb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___trigger_anySet__act\n"); );
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

void Vjkfftb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vjkfftb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___trigger_clear__act\n"); );
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
void Vjkfftb___024root___eval_debug_assertions(Vjkfftb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkfftb___024root___eval_debug_assertions\n"); );
    Vjkfftb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
