// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xlinear_regression.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XLinear_regression_CfgInitialize(XLinear_regression *InstancePtr, XLinear_regression_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XLinear_regression_Start(XLinear_regression *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_AP_CTRL) & 0x80;
    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XLinear_regression_IsDone(XLinear_regression *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XLinear_regression_IsIdle(XLinear_regression *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XLinear_regression_IsReady(XLinear_regression *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XLinear_regression_EnableAutoRestart(XLinear_regression *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XLinear_regression_DisableAutoRestart(XLinear_regression *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_AP_CTRL, 0);
}

void XLinear_regression_Set_input_r(XLinear_regression *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_INPUT_R_DATA, Data);
}

u32 XLinear_regression_Get_input_r(XLinear_regression *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_INPUT_R_DATA);
    return Data;
}

void XLinear_regression_Set_output_r(XLinear_regression *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_OUTPUT_R_DATA, Data);
}

u32 XLinear_regression_Get_output_r(XLinear_regression *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_OUTPUT_R_DATA);
    return Data;
}

void XLinear_regression_InterruptGlobalEnable(XLinear_regression *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_GIE, 1);
}

void XLinear_regression_InterruptGlobalDisable(XLinear_regression *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_GIE, 0);
}

void XLinear_regression_InterruptEnable(XLinear_regression *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_IER);
    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_IER, Register | Mask);
}

void XLinear_regression_InterruptDisable(XLinear_regression *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_IER);
    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_IER, Register & (~Mask));
}

void XLinear_regression_InterruptClear(XLinear_regression *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XLinear_regression_WriteReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_ISR, Mask);
}

u32 XLinear_regression_InterruptGetEnabled(XLinear_regression *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_IER);
}

u32 XLinear_regression_InterruptGetStatus(XLinear_regression *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XLinear_regression_ReadReg(InstancePtr->Axilites_BaseAddress, XLINEAR_REGRESSION_AXILITES_ADDR_ISR);
}

