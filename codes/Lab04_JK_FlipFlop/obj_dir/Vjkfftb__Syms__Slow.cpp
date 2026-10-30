// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vjkfftb__pch.h"


void Vjkfftb__Syms__ctor(Vjkfftb__Syms* vlSymsp, const char* namep) {
    // Setup top module instance
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP, vlSymsp, namep);
    // Check resources
    Verilated::stackCheck(21);
    // Setup names of the model and of its top module instances
    vlSymsp->__Vm_topNames[0] = vlSymsp->name();
    vlSymsp->__Vm_topNames[1] = vlSymsp->__Vm_isRoot ? Verilated::catName(vlSymsp->name(), "jkfftb") : vlSymsp->name();
    // Setup sub module instances
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP____024unit, vlSymsp, Verilated::catName(vlSymsp->__Vm_topNames[0].c_str(), "$unit"));
    // Configure time unit / time precision
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    vlSymsp->vlInst.TOP.__PVT____024unit = &vlSymsp->vlInst.TOP____024unit;
}

Vjkfftb__Syms::Vjkfftb__Syms(VerilatedContext* contextp, Vjkfftb* modelp, const char* namep, bool isRoot)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_isRoot{isRoot}
    , __Vm_didInit{modelp->m_didInit}
{
    Vjkfftb__Syms__ctor(this, namep);
}

void Vjkfftb__Syms__dtor(Vjkfftb__Syms* vlSymsp) {
    if (vlSymsp->__Vm_dumping) vlSymsp->_traceDumpClose();
    // Tear down scopes
    // Tear down sub module instances
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP____024unit);
    // Tear down top module instance
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP);
}

Vjkfftb__Syms::~Vjkfftb__Syms() {
    Vjkfftb__Syms__dtor(this);
}

void Vjkfftb__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vjkfftb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vjkfftb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
