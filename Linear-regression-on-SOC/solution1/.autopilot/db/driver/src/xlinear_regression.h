// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XLINEAR_REGRESSION_H
#define XLINEAR_REGRESSION_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xlinear_regression_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XLinear_regression_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XLinear_regression;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XLinear_regression_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XLinear_regression_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XLinear_regression_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XLinear_regression_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XLinear_regression_Initialize(XLinear_regression *InstancePtr, u16 DeviceId);
XLinear_regression_Config* XLinear_regression_LookupConfig(u16 DeviceId);
int XLinear_regression_CfgInitialize(XLinear_regression *InstancePtr, XLinear_regression_Config *ConfigPtr);
#else
int XLinear_regression_Initialize(XLinear_regression *InstancePtr, const char* InstanceName);
int XLinear_regression_Release(XLinear_regression *InstancePtr);
#endif

void XLinear_regression_Start(XLinear_regression *InstancePtr);
u32 XLinear_regression_IsDone(XLinear_regression *InstancePtr);
u32 XLinear_regression_IsIdle(XLinear_regression *InstancePtr);
u32 XLinear_regression_IsReady(XLinear_regression *InstancePtr);
void XLinear_regression_EnableAutoRestart(XLinear_regression *InstancePtr);
void XLinear_regression_DisableAutoRestart(XLinear_regression *InstancePtr);

void XLinear_regression_Set_input_r(XLinear_regression *InstancePtr, u32 Data);
u32 XLinear_regression_Get_input_r(XLinear_regression *InstancePtr);
void XLinear_regression_Set_output_r(XLinear_regression *InstancePtr, u32 Data);
u32 XLinear_regression_Get_output_r(XLinear_regression *InstancePtr);

void XLinear_regression_InterruptGlobalEnable(XLinear_regression *InstancePtr);
void XLinear_regression_InterruptGlobalDisable(XLinear_regression *InstancePtr);
void XLinear_regression_InterruptEnable(XLinear_regression *InstancePtr, u32 Mask);
void XLinear_regression_InterruptDisable(XLinear_regression *InstancePtr, u32 Mask);
void XLinear_regression_InterruptClear(XLinear_regression *InstancePtr, u32 Mask);
u32 XLinear_regression_InterruptGetEnabled(XLinear_regression *InstancePtr);
u32 XLinear_regression_InterruptGetStatus(XLinear_regression *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
