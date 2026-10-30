// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vupcountertb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vupcountertb::Vupcountertb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vupcountertb{_vcontextp__, _vcname__, true} {}

Vupcountertb::Vupcountertb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vupcountertb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vupcountertb::Vupcountertb(const char* _vcname__)
    : Vupcountertb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vupcountertb::~Vupcountertb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vupcountertb___024root___eval_debug_assertions(Vupcountertb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vupcountertb___024root___eval_static(Vupcountertb___024root* vlSelf);
void Vupcountertb___024root___eval_initial(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD bool Vupcountertb___024root___eval_stl(Vupcountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vupcountertb___024root___eval_sample(Vupcountertb___024root* vlSelf);
bool Vupcountertb___024root___eval_ico(Vupcountertb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vupcountertb___024root___eval_act(Vupcountertb___024root* vlSelf);
bool Vupcountertb___024root___eval_inact(Vupcountertb___024root* vlSelf);
bool Vupcountertb___024root___eval_nba(Vupcountertb___024root* vlSelf);
bool Vupcountertb___024root___eval_obs(Vupcountertb___024root* vlSelf);
bool Vupcountertb___024root___eval_react(Vupcountertb___024root* vlSelf);
void Vupcountertb___024root___eval_postponed(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vupcountertb___024root___eval_final(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__stl(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__ico(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__act(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__nba(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__obs(Vupcountertb___024root* vlSelf);
VL_ATTR_COLD void Vupcountertb___024root___eval_dump_triggers__react(Vupcountertb___024root* vlSelf);

void Vupcountertb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vupcountertb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vupcountertb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vupcountertb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vupcountertb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vupcountertb::evalStatic() {
    Vupcountertb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vupcountertb::evalInitial() {
    Vupcountertb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vupcountertb::evalStl(bool firstIteration) {
    return Vupcountertb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vupcountertb::evalSample() {
    Vupcountertb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vupcountertb::evalIco(bool firstIteration) {
    return Vupcountertb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vupcountertb::evalAct() {
    return Vupcountertb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vupcountertb::evalInact() {
    return Vupcountertb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vupcountertb::evalNba() {
    return Vupcountertb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vupcountertb::evalObs() {
    return Vupcountertb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vupcountertb::evalReact() {
    return Vupcountertb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vupcountertb::evalPostponed() {
    Vupcountertb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vupcountertb::evalFinal() {
    Vupcountertb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vupcountertb::dumpTriggersStl() {
    Vupcountertb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vupcountertb::dumpTriggersIco() {
    Vupcountertb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vupcountertb::dumpTriggersAct() {
    Vupcountertb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vupcountertb::dumpTriggersNba() {
    Vupcountertb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vupcountertb::dumpTriggersObs() {
    Vupcountertb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vupcountertb::dumpTriggersReact() {
    Vupcountertb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vupcountertb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vupcountertb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vupcountertb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vupcountertb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vupcountertb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vupcountertb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vupcountertb::hierName() const { return vlSymsp->name(); }
const char* Vupcountertb::modelName() const { return "Vupcountertb"; }
unsigned Vupcountertb::threads() const { return 1; }
void Vupcountertb::prepareClone() const { contextp()->prepareClone(); }
void Vupcountertb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vupcountertb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vupcountertb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vupcountertb___024root__trace_init_top(Vupcountertb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vupcountertb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vupcountertb___024root*>(voidSelf);
    Vupcountertb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vupcountertb___024root__trace_decl_types(tracep);
    Vupcountertb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vupcountertb___024root__trace_register(Vupcountertb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vupcountertb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vupcountertb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 3);
    Vupcountertb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
