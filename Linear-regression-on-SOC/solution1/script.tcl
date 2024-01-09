############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Linear-regression-on-SOC
set_top linear_regression
add_files Linear-regression-on-SOC/header.hpp
add_files Linear-regression-on-SOC/source.cpp
add_files -tb Linear-regression-on-SOC/test.cpp
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
set_clock_uncertainty 1.25
#source "./Linear-regression-on-SOC/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
