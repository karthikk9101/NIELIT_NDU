// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHALFADDERBEHATB__SYMS_H_
#define VERILATED_VHALFADDERBEHATB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vhalfadderbehatb.h"

// INCLUDE MODULE CLASSES
#include "Vhalfadderbehatb___024root.h"
#include "Vhalfadderbehatb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vhalfadderbehatb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhalfadderbehatb* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vhalfadderbehatb___024root     TOP;
            Vhalfadderbehatb___024unit     TOP____024unit;
        } vlInst;
    };

    // CONSTRUCTORS
    Vhalfadderbehatb__Syms(VerilatedContext* contextp, Vhalfadderbehatb* modelp, const char* namep, bool isRoot);
    ~Vhalfadderbehatb__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
