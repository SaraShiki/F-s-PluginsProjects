#pragma once


PF_Boolean FLT_Enabled[PARAMSET_COUNT] = { FALSE,FALSE, FALSE, FALSE };

A_long FLT_EXTRACT_MODE[PARAMSET_COUNT] = { 1, 1, 1, 1 };

PF_FpLong FLT_BORDER_HI[PARAMSET_COUNT] = { 70,70,70,70 };
PF_FpLong FLT_SOFTNESS_HI[PARAMSET_COUNT] = { 20,20,20,20 };
PF_FpLong FLT_BORDER_LO[PARAMSET_COUNT] = { 30,30,30,30 };
PF_FpLong FLT_SOFTNESS_LO[PARAMSET_COUNT] = { 20,20,20,20 };
PF_FpLong FLT_BRIGHTNESS[PARAMSET_COUNT] = { 0,0,0,0 };


A_long FLT_MINMAX[PARAMSET_COUNT] = { 0, 0, 0, 0 };
A_long FLT_MAX[PARAMSET_COUNT] = { 0, 0, 0, 0 };
A_long FLT_BLUR[PARAMSET_COUNT] = { 0, 0, 0, 0 };

PF_FpLong FLT_OPACITY[PARAMSET_COUNT] = { 50,50,50,50 };

A_long FLT_BLEND_MODE[PARAMSET_COUNT] = { 1, 1, 1, 1 };
