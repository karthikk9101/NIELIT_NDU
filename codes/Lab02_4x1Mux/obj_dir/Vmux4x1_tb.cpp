// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux4x1_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux4x1_tb::Vmux4x1_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vmux4x1_tb{_vcontextp__, _vcname__, true} {}

Vmux4x1_tb::Vmux4x1_tb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux4x1_tb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmux4x1_tb::Vmux4x1_tb(const char* _vcname__)
    : Vmux4x1_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux4x1_tb::~Vmux4x1_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux4x1_tb___024root___eval_debug_assertions(Vmux4x1_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_static(Vmux4x1_tb___024root* vlSelf);
void Vmux4x1_tb___024root___eval_initial(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD bool Vmux4x1_tb___024root___eval_stl(Vmux4x1_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vmux4x1_tb___024root___eval_sample(Vmux4x1_tb___024root* vlSelf);
bool Vmux4x1_tb___024root___eval_ico(Vmux4x1_tb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vmux4x1_tb___024root___eval_act(Vmux4x1_tb___024root* vlSelf);
bool Vmux4x1_tb___024root___eval_inact(Vmux4x1_tb___024root* vlSelf);
bool Vmux4x1_tb___024root___eval_nba(Vmux4x1_tb___024root* vlSelf);
bool Vmux4x1_tb___024root___eval_obs(Vmux4x1_tb___024root* vlSelf);
bool Vmux4x1_tb___024root___eval_react(Vmux4x1_tb___024root* vlSelf);
void Vmux4x1_tb___024root___eval_postponed(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_final(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__stl(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__ico(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__act(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__nba(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__obs(Vmux4x1_tb___024root* vlSelf);
VL_ATTR_COLD void Vmux4x1_tb___024root___eval_dump_triggers__react(Vmux4x1_tb___024root* vlSelf);

void Vmux4x1_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux4x1_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vmux4x1_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vmux4x1_tb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vmux4x1_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vmux4x1_tb::evalStatic() {
    Vmux4x1_tb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vmux4x1_tb::evalInitial() {
    Vmux4x1_tb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vmux4x1_tb::evalStl(bool firstIteration) {
    return Vmux4x1_tb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vmux4x1_tb::evalSample() {
    Vmux4x1_tb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vmux4x1_tb::evalIco(bool firstIteration) {
    return Vmux4x1_tb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vmux4x1_tb::evalAct() {
    return Vmux4x1_tb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vmux4x1_tb::evalInact() {
    return Vmux4x1_tb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vmux4x1_tb::evalNba() {
    return Vmux4x1_tb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vmux4x1_tb::evalObs() {
    return Vmux4x1_tb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vmux4x1_tb::evalReact() {
    return Vmux4x1_tb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vmux4x1_tb::evalPostponed() {
    Vmux4x1_tb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vmux4x1_tb::evalFinal() {
    Vmux4x1_tb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmux4x1_tb::dumpTriggersStl() {
    Vmux4x1_tb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmux4x1_tb::dumpTriggersIco() {
    Vmux4x1_tb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmux4x1_tb::dumpTriggersAct() {
    Vmux4x1_tb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmux4x1_tb::dumpTriggersNba() {
    Vmux4x1_tb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmux4x1_tb::dumpTriggersObs() {
    Vmux4x1_tb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vmux4x1_tb::dumpTriggersReact() {
    Vmux4x1_tb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vmux4x1_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vmux4x1_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vmux4x1_tb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vmux4x1_tb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmux4x1_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vmux4x1_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux4x1_tb::hierName() const { return vlSymsp->name(); }
const char* Vmux4x1_tb::modelName() const { return "Vmux4x1_tb"; }
unsigned Vmux4x1_tb::threads() const { return 1; }
void Vmux4x1_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmux4x1_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmux4x1_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vmux4x1_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmux4x1_tb___024root__trace_init_top(Vmux4x1_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux4x1_tb___024root*>(voidSelf);
    Vmux4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vmux4x1_tb___024root__trace_decl_types(tracep);
    Vmux4x1_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux4x1_tb___024root__trace_register(Vmux4x1_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux4x1_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux4x1_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 9);
    Vmux4x1_tb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
