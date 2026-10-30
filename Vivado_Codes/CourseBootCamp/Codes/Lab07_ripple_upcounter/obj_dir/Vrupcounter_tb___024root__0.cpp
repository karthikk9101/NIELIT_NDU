// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrupcounter_tb.h for the primary calling header

#include "Vrupcounter_tb__pch.h"

VlCoroutine Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__0(Vrupcounter_tb___024root* vlSelf);
VlCoroutine Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__1(Vrupcounter_tb___024root* vlSelf);

void Vrupcounter_tb___024root___eval_initial(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_initial\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("rupcountertb.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vrupcounter_tb___024root___eval_sample(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_sample\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrupcounter_tb___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

bool Vrupcounter_tb___024root___eval_ico(Vrupcounter_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_ico\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrupcounter_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vrupcounter_tb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrupcounter_tb___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vrupcounter_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vrupcounter_tb___024root___eval_act(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_act\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            (((((vlSelfRef.__Vnontrivs.__VdlySched.awaitingCurrentTime() 
                                                                 << 3U) 
                                                                | (((::IData)(vlSelfRef.rupcounter_tb__DOT__clk) 
                                                                    & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff0__DOT__q)) 
                                                                    & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff0__DOT__q__0)) 
                                                                   << 1U) 
                                                                  | ((~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff1__DOT__q)) 
                                                                     & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff1__DOT__q__0)))) 
                                                              << 4U) 
                                                             | (((((~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff2__DOT__q)) 
                                                                   & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff2__DOT__q__0)) 
                                                                  << 3U) 
                                                                 | (((::IData)(vlSelfRef.rupcounter_tb__DOT__reset) 
                                                                     & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__reset__0))) 
                                                                    << 2U)) 
                                                                | ((((::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__q) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__q__0)) 
                                                                    << 1U) 
                                                                   | ((::IData)(vlSelfRef.rupcounter_tb__DOT__reset) 
                                                                      != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__reset__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__reset__0 
            = vlSelfRef.rupcounter_tb__DOT__reset;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__q__0 
            = vlSelfRef.rupcounter_tb__DOT__uut__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff2__DOT__q__0 
            = vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff2__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff1__DOT__q__0 
            = vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff1__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__uut__DOT__tff0__DOT__q__0 
            = vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff0__DOT__q;
        vlSelfRef.__Vtrigprevexpr___TOP__rupcounter_tb__DOT__clk__0 
            = vlSelfRef.rupcounter_tb__DOT__clk;
    }
    Vrupcounter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrupcounter_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vrupcounter_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vrupcounter_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
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

bool Vrupcounter_tb___024root___eval_inact(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_inact\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vrupcounter_tb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vrupcounter_tb___024root___eval_nba(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_nba\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrupcounter_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff3__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcounter_tb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff3__DOT__q))));
                }
            }
            if ((((0x0000000000000014ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff2__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcounter_tb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff2__DOT__q))));
                }
            }
            if ((((0x0000000000000024ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff1__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcounter_tb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff1__DOT__q))));
                }
            }
            if ((((0x0000000000000044ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff0__DOT__q 
                        = (1U & ((~ (::IData)(vlSelfRef.rupcounter_tb__DOT__reset)) 
                                 & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff0__DOT__q))));
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
        Vrupcounter_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vrupcounter_tb___024root___eval_obs(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_obs\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vrupcounter_tb___024root___eval_react(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_react\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vrupcounter_tb___024root___eval_postponed(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_postponed\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
                             , '#',1,(::IData)(vlSelfRef.rupcounter_tb__DOT__reset)
                             , '#',4,vlSelfRef.rupcounter_tb__DOT__uut__DOT__q);
            }
        }
        vlSelfRef.rupcounter_tb__DOT__uut__DOT__q = 
            ((((::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff3__DOT__q) 
               << 3U) | ((::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff2__DOT__q) 
                         << 2U)) | (((::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff1__DOT__q) 
                                     << 1U) | (::IData)(vlSelfRef.rupcounter_tb__DOT__uut__DOT__tff0__DOT__q)));
    }
}

VlCoroutine Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__0(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rupcounter_tb__DOT__clk = 0U;
    vlSelfRef.rupcounter_tb__DOT__reset = 1U;
    VL_WRITEF_NX("Time\tReset\tCount\n",0);
    vlSymsp->vlInst.TOP____024unit.__VmonitorNum = 1U;
    vlSymsp->vlInst.TOP____024unit.__VmonitorPending = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     28);
    vlSelfRef.rupcounter_tb__DOT__reset = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000030d40ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     31);
    vlSelfRef.rupcounter_tb__DOT__reset = 1U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000002710ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     35);
    vlSelfRef.rupcounter_tb__DOT__reset = 0U;
    co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x00000000000186a0ULL, 
                                                     nullptr, 
                                                     "rupcountertb.v", 
                                                     38);
    VL_FINISH_MT("rupcountertb.v", 40, "");
    co_return;
}

VlCoroutine Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__1(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__Vnontrivs.__VdlySched.delay(0x0000000000001388ULL, 
                                                         nullptr, 
                                                         "rupcountertb.v", 
                                                         17);
        vlSelfRef.rupcounter_tb__DOT__clk = (1U & (~ (::IData)(vlSelfRef.rupcounter_tb__DOT__clk)));
    }
    co_return;
}

bool Vrupcounter_tb___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___trigger_anySet__ico\n"); );
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

bool Vrupcounter_tb___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___trigger_anySet__act\n"); );
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

void Vrupcounter_tb___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vrupcounter_tb___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___trigger_clear__act\n"); );
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
void Vrupcounter_tb___024root___eval_debug_assertions(Vrupcounter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrupcounter_tb___024root___eval_debug_assertions\n"); );
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
