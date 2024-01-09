// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xlinear_regression.h"

extern XLinear_regression_Config XLinear_regression_ConfigTable[];

XLinear_regression_Config *XLinear_regression_LookupConfig(u16 DeviceId) {
	XLinear_regression_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XLINEAR_REGRESSION_NUM_INSTANCES; Index++) {
		if (XLinear_regression_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XLinear_regression_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XLinear_regression_Initialize(XLinear_regression *InstancePtr, u16 DeviceId) {
	XLinear_regression_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XLinear_regression_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XLinear_regression_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

