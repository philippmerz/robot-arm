/*
 * robotarm_student_2021a_Ebox_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ebox".
 *
 * Model version              : 2.144
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Mar 31 12:28:34 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_robotarm_student_2021a_Ebox_types_h_
#define RTW_HEADER_robotarm_student_2021a_Ebox_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /* struct_emxArray_real_T */

#ifndef typedef_emxArray_real_T_robotarm_stud_T
#define typedef_emxArray_real_T_robotarm_stud_T

typedef struct emxArray_real_T emxArray_real_T_robotarm_stud_T;

#endif                             /* typedef_emxArray_real_T_robotarm_stud_T */

/* Custom Type definition for MATLABSystem: '<S192>/Serial Write1' */
#include "MW_SVD.h"
#ifndef struct_tag_vB8gURpcbTUBlHcczw228B
#define struct_tag_vB8gURpcbTUBlHcczw228B

struct tag_vB8gURpcbTUBlHcczw228B
{
  int32_T __dummy;
};

#endif                                 /* struct_tag_vB8gURpcbTUBlHcczw228B */

#ifndef typedef_e_codertarget_raspi_internal__T
#define typedef_e_codertarget_raspi_internal__T

typedef struct tag_vB8gURpcbTUBlHcczw228B e_codertarget_raspi_internal__T;

#endif                             /* typedef_e_codertarget_raspi_internal__T */

#ifndef struct_tag_QY5kIkagyBWqman9TieI9D
#define struct_tag_QY5kIkagyBWqman9TieI9D

struct tag_QY5kIkagyBWqman9TieI9D
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_codertarget_raspi_internal__T Hw;
  MW_Handle_Type MW_SCIHANDLE;
};

#endif                                 /* struct_tag_QY5kIkagyBWqman9TieI9D */

#ifndef typedef_codertarget_raspi_internal_SC_T
#define typedef_codertarget_raspi_internal_SC_T

typedef struct tag_QY5kIkagyBWqman9TieI9D codertarget_raspi_internal_SC_T;

#endif                             /* typedef_codertarget_raspi_internal_SC_T */

/* Parameters for system: '<S166>/If Action Subsystem1' */
typedef struct P_IfActionSubsystem1_robotarm_T_ P_IfActionSubsystem1_robotarm_T;

/* Parameters (default storage) */
typedef struct P_robotarm_student_2021a_Ebox_T_ P_robotarm_student_2021a_Ebox_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_robotarm_student_2021a_Ebox_T
  RT_MODEL_robotarm_student_2021a_Ebox_T;

#endif                     /* RTW_HEADER_robotarm_student_2021a_Ebox_types_h_ */
