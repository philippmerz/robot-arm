/*
 * robotarm_student_2021a_Ebox_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ebox".
 *
 * Model version              : 2.99
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Mar 27 14:09:59 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(void*),
  sizeof(action_T),
  2*sizeof(uint32_T),
  8,
  256,
  sizeof(codertarget_raspi_internal_SC_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "string",
  "char_T",
  "codertarget_raspi_internal_SC_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&robotarm_student_2021a_Ebox_B.ec_Ebox_o3_p[0]), 0, 0, 8 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.ManualSwitch1[0]), 15, 0, 256 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.SFunction), 0, 0, 186 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.RelationalOperator), 8, 0, 16 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime5.path), 0,
    0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime4.path), 0,
    0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime3.path), 0,
    0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.IfActionSubsystem5.In1), 0, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.IfActionSubsystem4.In1), 0, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.IfActionSubsystem6.In1), 0, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.IfActionSubsystem3.In1), 0, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.IfActionSubsystem2.In1), 0, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_B.IfActionSubsystem1.In1), 0, 0, 1 }
  ,

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE), 0,
    0, 37 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.Delay_DSTATE[0]), 15, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.PrevY), 0, 0, 98 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.Scope_PWORK.LoggedData[0]), 11, 0,
    6 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.sfEvent), 6, 0, 8 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb),
    7, 0, 10 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.temporalCounter_i1), 5, 0, 5 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.Subsystem3_SubsysRanBC), 2, 0, 6
  },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.is_active_c4_robotarm_student_2),
    3, 0, 9 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.doneDoubleBufferReInit), 8, 0, 4
  },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.SerialWrite.obj), 16, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.SerialWrite.objisempty), 8, 0, 1
  },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.SerialWrite1.obj), 16, 0, 1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_DW.SerialWrite1.objisempty), 8, 0, 1
  },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime5.previous_value_reference_start),
    0, 0, 3 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime5.path_array), 11,
    0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime5.path_array_not_empty),
    8, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime4.previous_value_reference_start),
    0, 0, 3 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime4.path_array), 11,
    0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime4.path_array_not_empty),
    8, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime3.previous_value_reference_start),
    0, 0, 3 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime3.path_array), 11,
    0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime3.path_array_not_empty),
    8, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.IfActionSubsystem5.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.IfActionSubsystem4.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.IfActionSubsystem6.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.IfActionSubsystem3.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.IfActionSubsystem2.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&robotarm_student_2021a_Ebox_DW.IfActionSubsystem1.IfActionSubsystem1_SubsysRanBC),
    2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  42U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&robotarm_student_2021a_Ebox_P.PIDController_D), 0, 0, 490 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.LEDRing_Y0[0]), 14, 0, 3072 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.ManualSwitch_CurrentSetting), 3, 0,
    6 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.IfActionSubsystem5.Out1_Y0), 0, 0,
    1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.IfActionSubsystem4.Out1_Y0), 0, 0,
    1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.IfActionSubsystem6.Out1_Y0), 0, 0,
    1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.IfActionSubsystem3.Out1_Y0), 0, 0,
    1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.IfActionSubsystem2.Out1_Y0), 0, 0,
    1 },

  { (char_T *)(&robotarm_student_2021a_Ebox_P.IfActionSubsystem1.Out1_Y0), 0, 0,
    1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  9U,
  rtPTransitions
};

/* [EOF] robotarm_student_2021a_Ebox_dt.h */
