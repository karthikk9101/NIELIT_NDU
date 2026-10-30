// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhalfadderbehatb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhalfadderbehatb::Vhalfadderbehatb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vhalfadderbehatb{_vcontextp__, _vcname__, true} {}

Vhalfadderbehatb::Vhalfadderbehatb(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhalfadderbehatb__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhalfadderbehatb::Vhalfadderbehatb(const char* _vcname__)
    : Vhalfadderbehatb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhalfadderbehatb::~Vhalfadderbehatb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhalfadderbehatb___024root___eval_debug_assertions(Vhalfadderbehatb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_static(Vhalfadderbehatb___024root* vlSelf);
void Vhalfadderbehatb___024root___eval_initial(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD bool Vhalfadderbehatb___024root___eval_stl(Vhalfadderbehatb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vhalfadderbehatb___024root___eval_sample(Vhalfadderbehatb___024root* vlSelf);
bool Vhalfadderbehatb___024root___eval_ico(Vhalfadderbehatb___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vhalfadderbehatb___024root___eval_act(Vhalfadderbehatb___024root* vlSelf);
bool Vhalfadderbehatb___024root___eval_inact(Vhalfadderbehatb___024root* vlSelf);
bool Vhalfadderbehatb___024root___eval_nba(Vhalfadderbehatb___024root* vlSelf);
bool Vhalfadderbehatb___024root___eval_obs(Vhalfadderbehatb___024root* vlSelf);
bool Vhalfadderbehatb___024root___eval_react(Vhalfadderbehatb___024root* vlSelf);
void Vhalfadderbehatb___024root___eval_postponed(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_final(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_dump_triggers__stl(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_dump_triggers__ico(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_dump_triggers__act(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_dump_triggers__nba(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_dump_triggers__obs(Vhalfadderbehatb___024root* vlSelf);
VL_ATTR_COLD void Vhalfadderbehatb___024root___eval_dump_triggers__react(Vhalfadderbehatb___024root* vlSelf);

void Vhalfadderbehatb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhalfadderbehatb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vhalfadderbehatb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vhalfadderbehatb___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vhalfadderbehatb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vhalfadderbehatb::evalStatic() {
    Vhalfadderbehatb___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderbehatb::evalInitial() {
    Vhalfadderbehatb___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderbehatb::evalStl(bool firstIteration) {
    return Vhalfadderbehatb___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vhalfadderbehatb::evalSample() {
    Vhalfadderbehatb___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderbehatb::evalIco(bool firstIteration) {
    return Vhalfadderbehatb___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vhalfadderbehatb::evalAct() {
    return Vhalfadderbehatb___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderbehatb::evalInact() {
    return Vhalfadderbehatb___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderbehatb::evalNba() {
    return Vhalfadderbehatb___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderbehatb::evalObs() {
    return Vhalfadderbehatb___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vhalfadderbehatb::evalReact() {
    return Vhalfadderbehatb___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderbehatb::evalPostponed() {
    Vhalfadderbehatb___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderbehatb::evalFinal() {
    Vhalfadderbehatb___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderbehatb::dumpTriggersStl() {
    Vhalfadderbehatb___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderbehatb::dumpTriggersIco() {
    Vhalfadderbehatb___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderbehatb::dumpTriggersAct() {
    Vhalfadderbehatb___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderbehatb::dumpTriggersNba() {
    Vhalfadderbehatb___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderbehatb::dumpTriggersObs() {
    Vhalfadderbehatb___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vhalfadderbehatb::dumpTriggersReact() {
    Vhalfadderbehatb___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vhalfadderbehatb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhalfadderbehatb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhalfadderbehatb::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vhalfadderbehatb::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhalfadderbehatb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vhalfadderbehatb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhalfadderbehatb::hierName() const { return vlSymsp->name(); }
const char* Vhalfadderbehatb::modelName() const { return "Vhalfadderbehatb"; }
unsigned Vhalfadderbehatb::threads() const { return 1; }
void Vhalfadderbehatb::prepareClone() const { contextp()->prepareClone(); }
void Vhalfadderbehatb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhalfadderbehatb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vhalfadderbehatb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhalfadderbehatb___024root__trace_init_top(Vhalfadderbehatb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhalfadderbehatb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalfadderbehatb___024root*>(voidSelf);
    Vhalfadderbehatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vhalfadderbehatb___024root__trace_decl_types(tracep);
    Vhalfadderbehatb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhalfadderbehatb___024root__trace_register(Vhalfadderbehatb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhalfadderbehatb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhalfadderbehatb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 4);
    Vhalfadderbehatb___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
