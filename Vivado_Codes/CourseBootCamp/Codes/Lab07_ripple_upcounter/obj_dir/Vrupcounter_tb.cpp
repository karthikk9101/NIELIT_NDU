// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrupcounter_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrupcounter_tb::Vrupcounter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vrupcounter_tb{_vcontextp__, _vcname__, true} {}

Vrupcounter_tb::Vrupcounter_tb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrupcounter_tb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrupcounter_tb::Vrupcounter_tb(const char* _vcname__)
    : Vrupcounter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrupcounter_tb::~Vrupcounter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrupcounter_tb___024root___eval_debug_assertions(Vrupcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_static(Vrupcounter_tb___024root* vlSelf);
void Vrupcounter_tb___024root___eval_initial(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD bool Vrupcounter_tb___024root___eval_stl(Vrupcounter_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vrupcounter_tb___024root___eval_sample(Vrupcounter_tb___024root* vlSelf);
bool Vrupcounter_tb___024root___eval_ico(Vrupcounter_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vrupcounter_tb___024root___eval_act(Vrupcounter_tb___024root* vlSelf);
bool Vrupcounter_tb___024root___eval_inact(Vrupcounter_tb___024root* vlSelf);
bool Vrupcounter_tb___024root___eval_nba(Vrupcounter_tb___024root* vlSelf);
bool Vrupcounter_tb___024root___eval_obs(Vrupcounter_tb___024root* vlSelf);
bool Vrupcounter_tb___024root___eval_react(Vrupcounter_tb___024root* vlSelf);
void Vrupcounter_tb___024root___eval_postponed(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_final(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_dump_triggers__stl(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_dump_triggers__ico(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_dump_triggers__act(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_dump_triggers__nba(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_dump_triggers__obs(Vrupcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vrupcounter_tb___024root___eval_dump_triggers__react(Vrupcounter_tb___024root* vlSelf);

void Vrupcounter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrupcounter_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vrupcounter_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vrupcounter_tb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vrupcounter_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vrupcounter_tb::evalStatic() {
    Vrupcounter_tb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vrupcounter_tb::evalInitial() {
    Vrupcounter_tb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vrupcounter_tb::evalStl(bool firstIteration) {
    return Vrupcounter_tb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vrupcounter_tb::evalSample() {
    Vrupcounter_tb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vrupcounter_tb::evalIco(bool firstIteration) {
    return Vrupcounter_tb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vrupcounter_tb::evalAct() {
    return Vrupcounter_tb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vrupcounter_tb::evalInact() {
    return Vrupcounter_tb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vrupcounter_tb::evalNba() {
    return Vrupcounter_tb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vrupcounter_tb::evalObs() {
    return Vrupcounter_tb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vrupcounter_tb::evalReact() {
    return Vrupcounter_tb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vrupcounter_tb::evalPostponed() {
    Vrupcounter_tb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vrupcounter_tb::evalFinal() {
    Vrupcounter_tb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcounter_tb::dumpTriggersStl() {
    Vrupcounter_tb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcounter_tb::dumpTriggersIco() {
    Vrupcounter_tb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcounter_tb::dumpTriggersAct() {
    Vrupcounter_tb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcounter_tb::dumpTriggersNba() {
    Vrupcounter_tb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcounter_tb::dumpTriggersObs() {
    Vrupcounter_tb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vrupcounter_tb::dumpTriggersReact() {
    Vrupcounter_tb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vrupcounter_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vrupcounter_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vrupcounter_tb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vrupcounter_tb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrupcounter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vrupcounter_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrupcounter_tb::hierName() const { return vlSymsp->name(); }
const char* Vrupcounter_tb::modelName() const { return "Vrupcounter_tb"; }
unsigned Vrupcounter_tb::threads() const { return 1; }
void Vrupcounter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vrupcounter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrupcounter_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vrupcounter_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrupcounter_tb___024root__trace_init_top(Vrupcounter_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrupcounter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrupcounter_tb___024root*>(voidSelf);
    Vrupcounter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vrupcounter_tb___024root__trace_decl_types(tracep);
    Vrupcounter_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrupcounter_tb___024root__trace_register(Vrupcounter_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrupcounter_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrupcounter_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 10);
    Vrupcounter_tb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
