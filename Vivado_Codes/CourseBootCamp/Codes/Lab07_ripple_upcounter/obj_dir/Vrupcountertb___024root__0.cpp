// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcountertb.h for the primary calling header

#include "Vrupcountertb__pch.h"

VlCoroutine Vrupcountertb___024root___eval_initial__TOP__Vtiming__0(Vrupcountertb___024root* vlSelf);
VlCoroutine Vrupcountertb___024root___eval_initial__TOP__Vtiming__1(Vrupcountertb___024root* vlSelf);

void Vrupcountertb___024root___eval_initial(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_initial\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("rupcountertb.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vrupcountertb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vrupcountertb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vrupcountertb___024root___eval_sample(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_sample\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrupcountertb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vrupcountertb___024root___eval_ico(Vrupcountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_ico\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrupcountertb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vrupcountertb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrupcountertb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vrupcountertb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vrupcountertb___024root___eval_act(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_act\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            (((((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                                 << 3U) 
                                                                | (((::IData)(vlSelfRef.rupcountertb__DOT__clk) 
                                                                    & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff0__DOT__q)) 
                                                                    & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__tff0__DOT__q__0)) 
                                                                   << 1U) 
                                                                  | ((~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff1__DOT__q)) 
                                                                     & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__tff1__DOT__q__0)))) 
                                                              << 4U) 
                                                             | (((((~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff2__DOT__q)) 
                                                                   & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__tff2__DOT__q__0)) 
                                                                  << 3U) 
                                                                 | (((::IData)(vlSelfRef.rupcountertb__DOT__reset) 
                                                                     & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__reset__0))) 
                                                                    << 2U)) 
                                                                | ((((::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__q) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__q__0)) 
                                                                    << 1U) 
                                                                   | ((::IData)(vlSelfRef.rupcountertb__DOT__reset) 
                                                                      != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__reset__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__reset__0 
            = vlSelfRef.rupcountertb__DOT__reset;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__q__0 
            = vlSelfRef.rupcountertb__DOT__uut__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__tff2__DOT__q__0 
            = vlSelfRef.rupcountertb__DOT__uut__DOT__tff2__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__tff1__DOT__q__0 
            = vlSelfRef.rupcountertb__DOT__uut__DOT__tff1__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__uut__DOT__tff0__DOT__q__0 
            = vlSelfRef.rupcountertb__DOT__uut__DOT__tff0__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcountertb__DOT__clk__0 
            = vlSelfRef.rupcountertb__DOT__clk;
    }
    Vrupcountertb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrupcountertb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vrupcountertb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vrupcountertb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
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

bool Vrupcountertb___024root___eval_inact(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_inact\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__Vnontrivs.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("rupcountertb.v", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vrupcountertb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vrupcountertb___024root___eval_nba(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_nba\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrupcountertb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.rupcountertb__DOT__uut__DOT__tff3__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcountertb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff3__DOT__q))));
                }
            }
            if ((((0x0000000000000014ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.rupcountertb__DOT__uut__DOT__tff2__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcountertb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff2__DOT__q))));
                }
            }
            if ((((0x0000000000000024ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.rupcountertb__DOT__uut__DOT__tff1__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcountertb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff1__DOT__q))));
                }
            }
            if ((((0x0000000000000044ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    vlSelfRef.rupcountertb__DOT__uut__DOT__tff0__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcountertb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff0__DOT__q))));
                }
            }
            if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__4
                    if ((1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum)) {
                        vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
                    }
                }
            }
        }
        Vrupcountertb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vrupcountertb___024root___eval_obs(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_obs\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vrupcountertb___024root___eval_react(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_react\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vrupcountertb___024root___eval_postponed(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_postponed\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_postponed__TOP
        if (VL_UNLIKELY((((::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorPending) 
                          & (1U == vlSymsp->vlInst.TOP____024unit.__VmonitorNum))))) {
            vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 0U;
            if (VL_UNLIKELY(((1U & (~ (::IData)(vlSymsp->vlInst.TOP____024unit.__VmonitorOff)))))) {
                VL_WRITEF_NX("%0t\t%b\t%b\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(::IData)(vlSelfRef.rupcountertb__DOT__reset)
                             , '#',4,vlSelfRef.rupcountertb__DOT__uut__DOT__q);
            }
        }
        vlSelfRef.rupcountertb__DOT__uut__DOT__q = 
            ((((::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff3__DOT__q) 
               << 3U) | ((::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff2__DOT__q) 
                         << 2U)) | (((::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff1__DOT__q) 
                                     << 1U) | (::IData)(vlSelfRef.rupcountertb__DOT__uut__DOT__tff0__DOT__q)));
    }
}

VlCoroutine Vrupcountertb___024root___eval_initial__TOP__Vtiming__0(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rupcountertb__DOT__clk = 0U;
    vlSelfRef.rupcountertb__DOT__reset = 1U;
    VL_WRITEF_NX("Time\tReset\tCount\n",0);
    vlSymsp->vlInst.TOP____024unit.__VmonitorNum = 1U;
    vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     28);
    vlSelfRef.rupcountertb__DOT__reset = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000030d40ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     31);
    vlSelfRef.rupcountertb__DOT__reset = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     35);
    vlSelfRef.rupcountertb__DOT__reset = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000186a0ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     38);
    VL_FINISH_MT("rupcountertb.v", 40, "");
    co_return;
}

VlCoroutine Vrupcountertb___024root___eval_initial__TOP__Vtiming__1(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "rupcountertb.v", 
                                                         17);
        vlSelfRef.rupcountertb__DOT__clk = (1U & (~ (::IData)(vlSelfRef.rupcountertb__DOT__clk)));
    }
    co_return;
}

bool Vrupcountertb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___trigger_anySet__ico\n"); );
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

bool Vrupcountertb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___trigger_anySet__act\n"); );
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

void Vrupcountertb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vrupcountertb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___trigger_clear__act\n"); );
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
void Vrupcountertb___024root___eval_debug_assertions(Vrupcountertb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcountertb___024root___eval_debug_assertions\n"); );
    Vrupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
