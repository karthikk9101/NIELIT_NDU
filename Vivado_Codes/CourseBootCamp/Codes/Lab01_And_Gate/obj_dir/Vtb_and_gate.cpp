// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_and_gate__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_and_gate::Vtb_and_gate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vtb_and_gate{_vcontextp__, _vcname__, true} {}

Vtb_and_gate::Vtb_and_gate(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_and_gate__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , __PVT____024unit{vlSymsp->vlInst.TOP.__PVT____024unit}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_and_gate::Vtb_and_gate(const char* _vcname__)
    : Vtb_and_gate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_and_gate::~Vtb_and_gate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_and_gate___024root___eval_debug_assertions(Vtb_and_gate___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_and_gate___024root___eval_static(Vtb_and_gate___024root* vlSelf);
void Vtb_and_gate___024root___eval_initial(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD bool Vtb_and_gate___024root___eval_stl(Vtb_and_gate___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vtb_and_gate___024root___eval_sample(Vtb_and_gate___024root* vlSelf);
bool Vtb_and_gate___024root___eval_ico(Vtb_and_gate___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vtb_and_gate___024root___eval_act(Vtb_and_gate___024root* vlSelf);
bool Vtb_and_gate___024root___eval_inact(Vtb_and_gate___024root* vlSelf);
bool Vtb_and_gate___024root___eval_nba(Vtb_and_gate___024root* vlSelf);
bool Vtb_and_gate___024root___eval_obs(Vtb_and_gate___024root* vlSelf);
bool Vtb_and_gate___024root___eval_react(Vtb_and_gate___024root* vlSelf);
void Vtb_and_gate___024root___eval_postponed(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD void Vtb_and_gate___024root___eval_final(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD void Vtb_and_gate___024root___eval_dump_triggers__stl(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD void Vtb_and_gate___024root___eval_dump_triggers__ico(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD void Vtb_and_gate___024root___eval_dump_triggers__act(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD void Vtb_and_gate___024root___eval_dump_triggers__nba(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD void Vtb_and_gate___024root___eval_dump_triggers__obs(Vtb_and_gate___024root* vlSelf);
VL_ATTR_COLD void Vtb_and_gate___024root___eval_dump_triggers__react(Vtb_and_gate___024root* vlSelf);

void Vtb_and_gate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_and_gate::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_and_gate::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_and_gate___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_and_gate::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.cleanupForevered();
}

void Vtb_and_gate::evalStatic() {
    Vtb_and_gate___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vtb_and_gate::evalInitial() {
    Vtb_and_gate___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vtb_and_gate::evalStl(bool firstIteration) {
    return Vtb_and_gate___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vtb_and_gate::evalSample() {
    Vtb_and_gate___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vtb_and_gate::evalIco(bool firstIteration) {
    return Vtb_and_gate___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vtb_and_gate::evalAct() {
    return Vtb_and_gate___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vtb_and_gate::evalInact() {
    return Vtb_and_gate___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vtb_and_gate::evalNba() {
    return Vtb_and_gate___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vtb_and_gate::evalObs() {
    return Vtb_and_gate___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vtb_and_gate::evalReact() {
    return Vtb_and_gate___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vtb_and_gate::evalPostponed() {
    Vtb_and_gate___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vtb_and_gate::evalFinal() {
    Vtb_and_gate___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_and_gate::dumpTriggersStl() {
    Vtb_and_gate___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_and_gate::dumpTriggersIco() {
    Vtb_and_gate___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_and_gate::dumpTriggersAct() {
    Vtb_and_gate___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_and_gate::dumpTriggersNba() {
    Vtb_and_gate___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_and_gate::dumpTriggersObs() {
    Vtb_and_gate___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vtb_and_gate::dumpTriggersReact() {
    Vtb_and_gate___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

void Vtb_and_gate::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_and_gate::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_and_gate::eventsPending() { return !vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_and_gate::nextTimeSlot() { return vlSymsp->vlInst.TOP.__Vnontrivs.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_and_gate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_and_gate::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_and_gate::hierName() const { return vlSymsp->name(); }
const char* Vtb_and_gate::modelName() const { return "Vtb_and_gate"; }
unsigned Vtb_and_gate::threads() const { return 1; }
void Vtb_and_gate::prepareClone() const { contextp()->prepareClone(); }
void Vtb_and_gate::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_and_gate::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb_and_gate___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_and_gate___024root__trace_init_top(Vtb_and_gate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_and_gate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_and_gate___024root*>(voidSelf);
    Vtb_and_gate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_and_gate___024root__trace_decl_types(tracep);
    Vtb_and_gate___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_and_gate___024root__trace_register(Vtb_and_gate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_and_gate::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_and_gate::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->vlInst.TOP), name(), false, 3);
    Vtb_and_gate___024root__trace_register(&(vlSymsp->vlInst.TOP), stfp->spTrace());
}
