/*
 * robotarm_student_2021a_Ipos.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ipos".
 *
 * Model version              : 2.126
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Mar 13 12:22:30 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_robotarm_student_2021a_Ipos_h_
#define RTW_HEADER_robotarm_student_2021a_Ipos_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
#ifndef robotarm_student_2021a_Ipos_COMMON_INCLUDES_
#define robotarm_student_2021a_Ipos_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_SCI.h"
#endif                        /* robotarm_student_2021a_Ipos_COMMON_INCLUDES_ */

#include "robotarm_student_2021a_Ipos_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block states (default storage) for system '<S77>/Serial Write1' */
typedef struct {
  codertarget_raspi_internal_SC_T obj; /* '<S77>/Serial Write1' */
  boolean_T objisempty;                /* '<S77>/Serial Write1' */
} DW_SerialWrite1_robotarm_stud_T;

/* Block signals (default storage) */
typedef struct {
  real_T A[36];
  char_T rtb_StringConcatenate_m[256];
  char_T HomingRunningSwitch[256];     /* '<S69>/Homing Running Switch' */
  real_T B[6];
  uint8_T MatrixConcatenate1[32];      /* '<S77>/Matrix Concatenate1' */
  uint8_T MatrixConcatenate[32];       /* '<S78>/Matrix Concatenate' */
  char_T cv[31];
  boolean_T FixPtRelationalOperator[12];/* '<S12>/FixPt Relational Operator' */
  char_T ManualSwitch1[256];           /* '<S1>/Manual Switch1' */
  real_T SFunction;                    /* '<S3>/S-Function' */
  real_T ec_Ipos_o1;                   /* '<S65>/ec_Ipos' */
  real_T ec_Ipos_o2;                   /* '<S65>/ec_Ipos' */
  real_T ec_Ipos_o3;                   /* '<S65>/ec_Ipos' */
  real_T ec_Ipos_o4;                   /* '<S65>/ec_Ipos' */
  real_T ec_Ipos_o5;                   /* '<S65>/ec_Ipos' */
  real_T Gain;                         /* '<S63>/Gain' */
  real_T Constant1;                    /* '<S82>/Constant1' */
  real_T DiscreteTimeIntegrator;       /* '<S82>/Discrete-Time Integrator' */
  real_T Sum;                          /* '<S70>/Sum' */
  real_T Sum2;                         /* '<S70>/Sum2' */
  real_T Gain1;                        /* '<S63>/Gain1' */
  real_T Constant1_e;                  /* '<S88>/Constant1' */
  real_T DiscreteTimeIntegrator_e;     /* '<S88>/Discrete-Time Integrator' */
  real_T Sum_p;                        /* '<S71>/Sum' */
  real_T Sum2_a;                       /* '<S71>/Sum2' */
  real_T Gain2;                        /* '<S63>/Gain2' */
  real_T Constant1_f;                  /* '<S98>/Constant1' */
  real_T DiscreteTimeIntegrator_p;     /* '<S98>/Discrete-Time Integrator' */
  real_T Sum_o;                        /* '<S72>/Sum' */
  real_T Sum2_e;                       /* '<S72>/Sum2' */
  real_T set_robot_calibration_r;      /* '<S64>/set_robot_calibration_r' */
  real_T set_robot_calibration_x;      /* '<S64>/set_robot_calibration_x' */
  real_T set_robot_calibration_z;      /* '<S64>/set_robot_calibration_z' */
  real_T Add1;                         /* '<S68>/Add1' */
  real_T Gain3;                        /* '<S63>/Gain3' */
  real_T Gain5;                        /* '<S63>/Gain5' */
  real_T Gain_h;                       /* '<S79>/Gain' */
  real_T Dctintegrator;                /* '<S79>/Dctintegrator' */
  real_T Dctleadlag;                   /* '<S79>/Dctleadlag' */
  real_T Dct1lowpass;                  /* '<S79>/Dct1lowpass' */
  real_T Product;                      /* '<S70>/Product' */
  real_T Gain_p;                       /* '<S80>/Gain' */
  real_T Dctleadlag_l;                 /* '<S80>/Dctleadlag' */
  real_T Dct1lowpass_i;                /* '<S80>/Dct1lowpass' */
  real_T Saturation1;                  /* '<S70>/Saturation1' */
  real_T Gain1_p;                      /* '<S86>/Gain1' */
  real_T Dctintegrator_g;              /* '<S86>/Dctintegrator' */
  real_T Dctleadlag_h;                 /* '<S86>/Dctleadlag' */
  real_T Dct1lowpass_k;                /* '<S86>/Dct1lowpass' */
  real_T Product_e;                    /* '<S71>/Product' */
  real_T Gain1_o;                      /* '<S87>/Gain1' */
  real_T Dctleadlag_b;                 /* '<S87>/Dctleadlag' */
  real_T Dct1lowpass_j;                /* '<S87>/Dct1lowpass' */
  real_T Saturation1_n;                /* '<S71>/Saturation1' */
  real_T Gain_i;                       /* '<S95>/Gain' */
  real_T Dctintegrator_i;              /* '<S95>/Dctintegrator' */
  real_T Dctleadlag_m;                 /* '<S95>/Dctleadlag' */
  real_T Dct1lowpass_p;                /* '<S95>/Dct1lowpass' */
  real_T Product_n;                    /* '<S72>/Product' */
  real_T Gain_f;                       /* '<S96>/Gain' */
  real_T Dctleadlag_e;                 /* '<S96>/Dctleadlag' */
  real_T Dct1lowpass_a;                /* '<S96>/Dct1lowpass' */
  real_T Saturation1_a;                /* '<S72>/Saturation1' */
  real_T DiscreteTimeIntegrator_i;     /* '<S73>/Discrete-Time Integrator' */
  real_T Gain1_a;                      /* '<S105>/Gain1' */
  real_T Dctintegrator3;               /* '<S105>/Dctintegrator3' */
  real_T Dct1lowpass_g;                /* '<S105>/Dct1lowpass' */
  real_T Dctleadlag_k;                 /* '<S105>/Dctleadlag' */
  real_T Saturation1_d;                /* '<S73>/Saturation1' */
  real_T jogSpeed;                     /* '<S73>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S73>/Supervisor' */
  real_T resetEnc;                     /* '<S73>/Supervisor' */
  real_T homingBusy;                   /* '<S73>/Supervisor' */
  real_T Ready;                        /* '<S73>/Supervisor' */
  real_T StopSim;                      /* '<S73>/Supervisor' */
  real_T jogSpeed_i;                   /* '<S72>/Supervisor' */
  real_T toPoint;                      /* '<S72>/Supervisor' */
  real_T homeControllerEnabled_b;      /* '<S72>/Supervisor' */
  real_T resetEnc_g;                   /* '<S72>/Supervisor' */
  real_T homingBusy_n;                 /* '<S72>/Supervisor' */
  real_T airBagEnabled;                /* '<S72>/Supervisor' */
  real_T airBagRef;                    /* '<S72>/Supervisor' */
  real_T controlEnabled;               /* '<S72>/Supervisor' */
  real_T Ready_n;                      /* '<S72>/Supervisor' */
  real_T StopSim_n;                    /* '<S72>/Supervisor' */
  real_T y;                            /* '<S72>/Angle2Z' */
  real_T jogSpeed_c;                   /* '<S71>/Supervisor2' */
  real_T toPoint_e;                    /* '<S71>/Supervisor2' */
  real_T homeControllerEnabled_k;      /* '<S71>/Supervisor2' */
  real_T resetEnc_c;                   /* '<S71>/Supervisor2' */
  real_T homingBusy_j;                 /* '<S71>/Supervisor2' */
  real_T airBagEnabled_o;              /* '<S71>/Supervisor2' */
  real_T airBagRef_a;                  /* '<S71>/Supervisor2' */
  real_T controlEnabled_a;             /* '<S71>/Supervisor2' */
  real_T Ready_i;                      /* '<S71>/Supervisor2' */
  real_T StopSim_o;                    /* '<S71>/Supervisor2' */
  real_T jogSpeed_o;                   /* '<S70>/Supervisor' */
  real_T toPoint_b;                    /* '<S70>/Supervisor' */
  real_T homeControllerEnabled_o;      /* '<S70>/Supervisor' */
  real_T resetEnc_k;                   /* '<S70>/Supervisor' */
  real_T freddy_k;                     /* '<S70>/Supervisor' */
  real_T homingBusy_l;                 /* '<S70>/Supervisor' */
  real_T airBagEnabled_f;              /* '<S70>/Supervisor' */
  real_T airBagRef_g;                  /* '<S70>/Supervisor' */
  real_T controlEnabled_l;             /* '<S70>/Supervisor' */
  real_T Ready_a;                      /* '<S70>/Supervisor' */
  real_T StopSim_j;                    /* '<S70>/Supervisor' */
  real_T y_b;                          /* '<S70>/Angle2Z' */
  real_T Selector2[9];                 /* '<S4>/Selector2' */
  real_T Selector[3];                  /* '<S4>/Selector' */
  real_T Conveyorreferencemm;          /* '<S1>/Discrete  integrator' */
  real_T Gain1_g;                      /* '<S5>/Gain1' */
  real_T Dctintegrator3_n;             /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_ab;               /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_d;                 /* '<S5>/Dctleadlag' */
  real_T SFunctionBuilder;             /* '<S4>/S-Function Builder' */
  real_T Sum_m;                        /* '<S4>/Sum' */
  real_T SignalConversion2;            /* '<S1>/Signal Conversion2' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T robot;                        /* '<S1>/Signal Conversion1' */
  real_T FilterCoefficient;            /* '<S49>/Filter Coefficient' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T IntegralGain;                 /* '<S43>/Integral Gain' */
  real_T SignalConversion;             /* '<S1>/Signal Conversion' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T Gain1_o1;                     /* '<S7>/Gain1' */
  real_T Doubleclickswitch;            /* '<S1>/Manual Switch' */
  real_T Object;                       /* '<S1>/Object' */
  real_T Plot;                         /* '<S1>/Plot' */
  real_T Stop;                         /* '<S1>/Stop' */
  real_T path;                         /* '<S1>/quintic trajectory time' */
  real_T In1;                          /* '<S13>/In1' */
  real_T d12;
  real_T d13;
  real_T smax;
  real_T ndbl;
  real_T cdiff;
  real_T ManualSwitch2;                /* '<S1>/Manual Switch2' */
  real_T y_b_tmp;
  real_T LimitAcceleration_h;          /* '<S82>/Limit Acceleration' */
  real_T TSamp;                        /* '<S104>/TSamp' */
  real_T TSamp_d;                      /* '<S94>/TSamp' */
  real_T TSamp_k;                      /* '<S85>/TSamp' */
  real_T LimitAcceleration;            /* '<S98>/Limit Acceleration' */
  real_T LimitAcceleration_b;          /* '<S88>/Limit Acceleration' */
  real_T Add2;                         /* '<S64>/Add2' */
  real_T Add;                          /* '<S64>/Add' */
  real_T Saturation;                   /* '<S1>/Saturation ' */
  real_T d;
  real_T d1;
  int8_T ipiv[6];
  int32_T kAcol;
  int32_T ix;
  int32_T c_k;
  int32_T jA;
  int32_T c_ix;
  int32_T d_c;
  int32_T ijA;
  int32_T i;
  int32_T newNumel;
  int32_T i_k;
  int32_T i_c;
  boolean_T RelationalOperator;        /* '<S70>/Relational Operator' */
  boolean_T RelationalOperator_f;      /* '<S71>/Relational Operator' */
  boolean_T RelationalOperator_k;      /* '<S72>/Relational Operator' */
  boolean_T Compare;                   /* '<S67>/Compare' */
  boolean_T Compare_j;                 /* '<S66>/Compare' */
  boolean_T LogicalOperator1;          /* '<S70>/Logical Operator1' */
  boolean_T LogicalOperator1_p;        /* '<S71>/Logical Operator1' */
  boolean_T LogicalOperator1_i;        /* '<S72>/Logical Operator1' */
} B_robotarm_student_2021a_Ipos_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S82>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_g;/* '<S70>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S71>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_o;/* '<S88>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_a;/* '<S72>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_j;/* '<S98>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S64>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S64>/Unit Delay1' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S73>/Discrete-Time Integrator' */
  real_T UD_DSTATE;                    /* '<S104>/UD' */
  real_T UD_DSTATE_c;                  /* '<S94>/UD' */
  real_T UD_DSTATE_cc;                 /* '<S85>/UD' */
  real_T DelayInput1_DSTATE[12];       /* '<S12>/Delay Input1' */
  real_T Discreteintegrator_DSTATE;    /* '<S1>/Discrete  integrator' */
  char_T Delay_DSTATE[256];            /* '<S75>/Delay' */
  real_T PrevY;                        /* '<S98>/Limit Speed' */
  real_T PrevY_j;                      /* '<S98>/Limit Acceleration' */
  real_T PrevY_d;                      /* '<S88>/Limit Speed' */
  real_T PrevY_f;                      /* '<S88>/Limit Acceleration' */
  real_T PrevY_i;                      /* '<S82>/Limit Speed' */
  real_T PrevY_k;                      /* '<S82>/Limit Acceleration' */
  real_T currentcarPos;                /* '<S72>/Supervisor' */
  real_T currentcarPos_d;              /* '<S71>/Supervisor2' */
  real_T currentcarPos_l;              /* '<S70>/Supervisor' */
  real_T previous_value_reference_start;/* '<S1>/quintic trajectory time' */
  real_T previous_value_reference_end; /* '<S1>/quintic trajectory time' */
  real_T index;                        /* '<S1>/quintic trajectory time' */
  real_T Dctintegrator_RWORK[2];       /* '<S79>/Dctintegrator' */
  real_T Dctleadlag_RWORK[2];          /* '<S79>/Dctleadlag' */
  real_T Dct1lowpass_RWORK[2];         /* '<S79>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_k[2];        /* '<S80>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_a[2];       /* '<S80>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_m[2];     /* '<S86>/Dctintegrator' */
  real_T Dctleadlag_RWORK_g[2];        /* '<S86>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_n[2];       /* '<S86>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_j[2];        /* '<S87>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_k[2];       /* '<S87>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_i[2];     /* '<S95>/Dctintegrator' */
  real_T Dctleadlag_RWORK_n[2];        /* '<S95>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_g[2];       /* '<S95>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_i[2];        /* '<S96>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_h[2];       /* '<S96>/Dct1lowpass' */
  real_T Dctintegrator3_RWORK[2];      /* '<S105>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_ay[2];      /* '<S105>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_o[2];        /* '<S105>/Dctleadlag' */
  real_T Dctintegrator3_RWORK_g[2];    /* '<S5>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_c[2];       /* '<S5>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_gp[2];       /* '<S5>/Dctleadlag' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S72>/Scope' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S70>/Scope9' */

  struct {
    void *LoggedData;
  } Scope_PWORK_p;                     /* '<S83>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK_pg;                    /* '<S1>/Scope' */

  emxArray_real_T_robotarm_stud_T* path_array;/* '<S1>/quintic trajectory time' */
  int32_T sfEvent;                     /* '<S73>/Supervisor' */
  int32_T sfEvent_n;                   /* '<S72>/Supervisor' */
  int32_T sfEvent_h;                   /* '<S71>/Supervisor2' */
  int32_T sfEvent_k;                   /* '<S70>/Supervisor' */
  int32_T sfEvent_c;                   /* '<S1>/Stateflow ' */
  uint32_T is_c1_robotarm_student_2021a_Ip;/* '<S73>/Supervisor' */
  uint32_T is_c18_robotarm_student_2021a_I;/* '<S72>/Supervisor' */
  uint32_T is_c16_robotarm_student_2021a_I;/* '<S71>/Supervisor2' */
  uint32_T is_c12_robotarm_student_2021a_I;/* '<S70>/Supervisor' */
  uint32_T is_Object_Detection;        /* '<S1>/Stateflow ' */
  uint32_T is_Belt;                    /* '<S1>/Stateflow ' */
  uint32_T is_Robot_Arm;               /* '<S1>/Stateflow ' */
  uint32_T is_Vacuum;                  /* '<S1>/Stateflow ' */
  uint16_T temporalCounter_i1;         /* '<S73>/Supervisor' */
  uint16_T temporalCounter_i1_m;       /* '<S72>/Supervisor' */
  uint16_T temporalCounter_i1_me;      /* '<S71>/Supervisor2' */
  uint16_T temporalCounter_i1_c;       /* '<S70>/Supervisor' */
  int8_T Subsystem3_SubsysRanBC;       /* '<S74>/Subsystem3' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S76>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S76>/If Action Subsystem' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S4>/Enabled Subsystem' */
  uint8_T is_active_c1_robotarm_student_2;/* '<S73>/Supervisor' */
  uint8_T is_active_c18_robotarm_student_;/* '<S72>/Supervisor' */
  uint8_T is_active_c16_robotarm_student_;/* '<S71>/Supervisor2' */
  uint8_T is_active_c12_robotarm_student_;/* '<S70>/Supervisor' */
  uint8_T is_active_c3_robotarm_student_2;/* '<S1>/Stateflow ' */
  uint8_T is_active_Object_Detection;  /* '<S1>/Stateflow ' */
  uint8_T is_active_Belt;              /* '<S1>/Stateflow ' */
  uint8_T is_active_Robot_Arm;         /* '<S1>/Stateflow ' */
  uint8_T is_active_Vacuum;            /* '<S1>/Stateflow ' */
  boolean_T path_array_not_empty;      /* '<S1>/quintic trajectory time' */
  boolean_T doneDoubleBufferReInit;    /* '<S1>/Stateflow ' */
  boolean_T Controller_MODE;           /* '<Root>/Controller' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite;/* '<S77>/Serial Write1' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite1;/* '<S77>/Serial Write1' */
} DW_robotarm_student_2021a_Ipos_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Filter_CSTATE;                /* '<S41>/Filter' */
  real_T Integrator_CSTATE;            /* '<S46>/Integrator' */
} X_robotarm_student_2021a_Ipos_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Filter_CSTATE;                /* '<S41>/Filter' */
  real_T Integrator_CSTATE;            /* '<S46>/Integrator' */
} XDot_robotarm_student_2021a_Ipos_T;

/* State disabled  */
typedef struct {
  boolean_T Filter_CSTATE;             /* '<S41>/Filter' */
  boolean_T Integrator_CSTATE;         /* '<S46>/Integrator' */
} XDis_robotarm_student_2021a_Ipos_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Parameters (default storage) */
struct P_robotarm_student_2021a_Ipos_T_ {
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S40>/Derivative Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S43>/Integral Gain'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S104>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_e;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                               * Referenced by: '<S94>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_h;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
                               * Referenced by: '<S85>/UD'
                               */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S41>/Filter'
                               */
  real_T PIDController_InitialConditio_e;
                              /* Mask Parameter: PIDController_InitialConditio_e
                               * Referenced by: '<S46>/Integrator'
                               */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S49>/Filter Coefficient'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S51>/Proportional Gain'
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S66>/Constant'
                                       */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S12>/Delay Input1'
                                        */
  uint8_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S67>/Constant'
                                      */
  real_T Delays_Y0;                    /* Computed Parameter: Delays_Y0
                                        * Referenced by: '<S13>/Delay [s]'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0.4
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Suck_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Suck'
                                        */
  real_T Blow_Value;                   /* Expression: 1
                                        * Referenced by: '<S1>/ Blow'
                                        */
  real_T RobotV_Y0;                    /* Computed Parameter: RobotV_Y0
                                        * Referenced by: '<S1>/Robot [V]'
                                        */
  real_T ConveyorV_Y0;                 /* Computed Parameter: ConveyorV_Y0
                                        * Referenced by: '<S1>/Conveyor [V] '
                                        */
  real_T VacuumV_Y0;                   /* Computed Parameter: VacuumV_Y0
                                        * Referenced by: '<S1>/Vacuum [V] '
                                        */
  real_T Blowsuck_Y0;                  /* Computed Parameter: Blowsuck_Y0
                                        * Referenced by: '<S1>/Blow//suck [-]'
                                        */
  real_T Objectdetectionmatrix_Value[12];
  /* Expression: [0                    0                    0      1709314849.7653;0  0  0  0;0  0  0  0]
   * Referenced by: '<S4>/Object detection matrix'
   */
  real_T Discreteintegrator_gainval;
                               /* Computed Parameter: Discreteintegrator_gainval
                                * Referenced by: '<S1>/Discrete  integrator'
                                */
  real_T Discreteintegrator_IC;        /* Expression: 0
                                        * Referenced by: '<S1>/Discrete  integrator'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.05
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size[2];/* Computed Parameter: Dctintegrator3_P1_Size
                                    * Referenced by: '<S5>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P1;            /* Expression: f_num
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size[2];/* Computed Parameter: Dctintegrator3_P2_Size
                                    * Referenced by: '<S5>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P2;            /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size[2];      /* Computed Parameter: Dct1lowpass_P1_Size
                                       * Referenced by: '<S5>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P1;               /* Expression: f_den
                                        * Referenced by: '<S5>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size[2];      /* Computed Parameter: Dct1lowpass_P2_Size
                                       * Referenced by: '<S5>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P2;               /* Expression: 0.001
                                        * Referenced by: '<S5>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size[2];        /* Computed Parameter: Dctleadlag_P1_Size
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P1;                /* Expression: f_num
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size[2];        /* Computed Parameter: Dctleadlag_P2_Size
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2;                /* Expression: f_den
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size[2];        /* Computed Parameter: Dctleadlag_P3_Size
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3;                /* Expression: 0.001
                                        * Referenced by: '<S5>/Dctleadlag'
                                        */
  real_T ReferenceRrad_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/Reference R [rad]'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T FeedfowardRV_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward R [V]'
                                        */
  real_T Constant_Value;               /* Expression: 0.5
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T FeedfowardXV_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward X [V]'
                                        */
  real_T ReferenceZrad_Value;          /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z [rad]'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 5
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T FeedfowardZV_Value;           /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward Z [V]'
                                        */
  real_T Conveyorspeedmms_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/Conveyor speed [mm//s]'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T Saturation_LowerSat;          /* Expression: -100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T ReferenceVacuumbar_Value;     /* Expression: 0.2
                                        * Referenced by: '<S1>/Reference Vacuum [bar]'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: -100
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T Object_Value;                 /* Expression: 1
                                        * Referenced by: '<S1>/Object'
                                        */
  real_T Plot_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Plot'
                                        */
  real_T Stop_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Stop'
                                        */
  real_T HomingRunningSwitch2_Threshold;/* Expression: 50
                                         * Referenced by: '<S69>/Homing Running Switch2'
                                         */
  real_T HomingRunningSwitch1_Threshold;/* Expression: 2.5
                                         * Referenced by: '<S69>/Homing Running Switch1'
                                         */
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S70>/Homing Running Switch'
                                        */
  real_T HomingRunningSwitch_Threshold_j;/* Expression: 0.5
                                          * Referenced by: '<S71>/Homing Running Switch'
                                          */
  real_T HomingRunningSwitch_Threshold_d;/* Expression: 0.5
                                          * Referenced by: '<S72>/Homing Running Switch'
                                          */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: portid
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T SFunction_P2;                 /* Expression: ectimeout
                                        * Referenced by: '<S3>/S-Function'
                                        */
  real_T ec_Ipos_P1_Size[2];           /* Computed Parameter: ec_Ipos_P1_Size
                                        * Referenced by: '<S65>/ec_Ipos'
                                        */
  real_T ec_Ipos_P1;                   /* Expression: link_id
                                        * Referenced by: '<S65>/ec_Ipos'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 1/16000*9/150*2*pi
                                        * Referenced by: '<S63>/Gain'
                                        */
  real_T Constant1_Value_b;            /* Expression: 0
                                        * Referenced by: '<S82>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S82>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_gainva_i;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                           * Referenced by: '<S70>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S70>/Discrete-Time Integrator'
                                        */
  real_T Constant_Value_i;             /* Expression: -0.05
                                        * Referenced by: '<S70>/Constant'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S63>/Gain1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_h;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
                           * Referenced by: '<S71>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_c;  /* Expression: 0
                                        * Referenced by: '<S71>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S88>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_j;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
                           * Referenced by: '<S88>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_f;             /* Expression: -0.1
                                        * Referenced by: '<S71>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/16000*9/100*2*pi
                                        * Referenced by: '<S63>/Gain2'
                                        */
  real_T DiscreteTimeIntegrator_gainva_o;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
                           * Referenced by: '<S72>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_o;  /* Expression: 0
                                        * Referenced by: '<S72>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S98>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                           * Referenced by: '<S98>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_o;             /* Expression: 0.05
                                        * Referenced by: '<S72>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S64>/Unit Delay'
                                        */
  real_T set_robot_calibration_r_Value;/* Expression: 1.2299
                                        * Referenced by: '<S64>/set_robot_calibration_r'
                                        */
  real_T set_robot_calibration_x_Value;/* Expression: 0.63386
                                        * Referenced by: '<S64>/set_robot_calibration_x'
                                        */
  real_T set_robot_calibration_z_Value;/* Expression: -0.34972
                                        * Referenced by: '<S64>/set_robot_calibration_z'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 3
                                        * Referenced by: '<S64>/Gain'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S68>/Constant'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1/16000*2*pi*2.05*10
                                        * Referenced by: '<S63>/Gain3'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/65535
                                        * Referenced by: '<S63>/Gain4'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1/2
                                        * Referenced by: '<S63>/Gain5'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S64>/Unit Delay1'
                                        */
  real_T HomingRunningSwitch_Threshold_l;/* Expression: 0.5
                                          * Referenced by: '<S69>/Homing Running Switch'
                                          */
  real_T ResetEncoderR_P1_Size[2];  /* Computed Parameter: ResetEncoderR_P1_Size
                                     * Referenced by: '<S70>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P1;             /* Expression: ipos_id
                                        * Referenced by: '<S70>/Reset EncoderR'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 25
                                        * Referenced by: '<S79>/Gain'
                                        */
  real_T Dctintegrator_P1_Size[2];  /* Computed Parameter: Dctintegrator_P1_Size
                                     * Referenced by: '<S79>/Dctintegrator'
                                     */
  real_T Dctintegrator_P1;             /* Expression: f_num
                                        * Referenced by: '<S79>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size[2];  /* Computed Parameter: Dctintegrator_P2_Size
                                     * Referenced by: '<S79>/Dctintegrator'
                                     */
  real_T Dctintegrator_P2;             /* Expression: 0.001
                                        * Referenced by: '<S79>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_m[2];    /* Computed Parameter: Dctleadlag_P1_Size_m
                                      * Referenced by: '<S79>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_g;              /* Expression: f_num
                                        * Referenced by: '<S79>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_p[2];    /* Computed Parameter: Dctleadlag_P2_Size_p
                                      * Referenced by: '<S79>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_g;              /* Expression: f_den
                                        * Referenced by: '<S79>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_h[2];    /* Computed Parameter: Dctleadlag_P3_Size_h
                                      * Referenced by: '<S79>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_e;              /* Expression: 0.001
                                        * Referenced by: '<S79>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m[2];  /* Computed Parameter: Dct1lowpass_P1_Size_m
                                     * Referenced by: '<S79>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_e;             /* Expression: f_den
                                        * Referenced by: '<S79>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_o[2];  /* Computed Parameter: Dct1lowpass_P2_Size_o
                                     * Referenced by: '<S79>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_a;             /* Expression: 0.001
                                        * Referenced by: '<S79>/Dct1lowpass'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 25
                                        * Referenced by: '<S80>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_c[2];    /* Computed Parameter: Dctleadlag_P1_Size_c
                                      * Referenced by: '<S80>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_e;              /* Expression: f_num
                                        * Referenced by: '<S80>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_k[2];    /* Computed Parameter: Dctleadlag_P2_Size_k
                                      * Referenced by: '<S80>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_b;              /* Expression: f_den
                                        * Referenced by: '<S80>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_hn[2];  /* Computed Parameter: Dctleadlag_P3_Size_hn
                                     * Referenced by: '<S80>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_g;              /* Expression: 0.001
                                        * Referenced by: '<S80>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_a[2];  /* Computed Parameter: Dct1lowpass_P1_Size_a
                                     * Referenced by: '<S80>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_g;             /* Expression: f_den
                                        * Referenced by: '<S80>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_l[2];  /* Computed Parameter: Dct1lowpass_P2_Size_l
                                     * Referenced by: '<S80>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_i;             /* Expression: 0.001
                                        * Referenced by: '<S80>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 32
                                        * Referenced by: '<S70>/Gain1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 127
                                        * Referenced by: '<S70>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -127
                                        * Referenced by: '<S70>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size[2];/* Computed Parameter: ResetEncoderR1_P1_Size
                                    * Referenced by: '<S71>/Reset EncoderR1'
                                    */
  real_T ResetEncoderR1_P1;            /* Expression: ipos_id
                                        * Referenced by: '<S71>/Reset EncoderR1'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 20
                                        * Referenced by: '<S86>/Gain1'
                                        */
  real_T Dctintegrator_P1_Size_i[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_i
                                   * Referenced by: '<S86>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_j;           /* Expression: f_num
                                        * Referenced by: '<S86>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_p
                                   * Referenced by: '<S86>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_n;           /* Expression: 0.001
                                        * Referenced by: '<S86>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_d[2];    /* Computed Parameter: Dctleadlag_P1_Size_d
                                      * Referenced by: '<S86>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m;              /* Expression: f_num
                                        * Referenced by: '<S86>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_g[2];    /* Computed Parameter: Dctleadlag_P2_Size_g
                                      * Referenced by: '<S86>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_p;              /* Expression: f_den
                                        * Referenced by: '<S86>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_o[2];    /* Computed Parameter: Dctleadlag_P3_Size_o
                                      * Referenced by: '<S86>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_ge;             /* Expression: 0.001
                                        * Referenced by: '<S86>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m3[2];/* Computed Parameter: Dct1lowpass_P1_Size_m3
                                    * Referenced by: '<S86>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_f;             /* Expression: f_den
                                        * Referenced by: '<S86>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_b[2];  /* Computed Parameter: Dct1lowpass_P2_Size_b
                                     * Referenced by: '<S86>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_k;             /* Expression: 0.001
                                        * Referenced by: '<S86>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 20
                                        * Referenced by: '<S87>/Gain1'
                                        */
  real_T Dctleadlag_P1_Size_b[2];    /* Computed Parameter: Dctleadlag_P1_Size_b
                                      * Referenced by: '<S87>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_p;              /* Expression: f_num
                                        * Referenced by: '<S87>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_m[2];    /* Computed Parameter: Dctleadlag_P2_Size_m
                                      * Referenced by: '<S87>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_a;              /* Expression: f_den
                                        * Referenced by: '<S87>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_p[2];    /* Computed Parameter: Dctleadlag_P3_Size_p
                                      * Referenced by: '<S87>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_c;              /* Expression: 0.001
                                        * Referenced by: '<S87>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_n[2];  /* Computed Parameter: Dct1lowpass_P1_Size_n
                                     * Referenced by: '<S87>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_h;             /* Expression: f_den
                                        * Referenced by: '<S87>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_g[2];  /* Computed Parameter: Dct1lowpass_P2_Size_g
                                     * Referenced by: '<S87>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_b;             /* Expression: 0.001
                                        * Referenced by: '<S87>/Dct1lowpass'
                                        */
  real_T Gain_Gain_cj;                 /* Expression: 32
                                        * Referenced by: '<S71>/Gain'
                                        */
  real_T Saturation1_UpperSat_e;       /* Expression: 127
                                        * Referenced by: '<S71>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_p;       /* Expression: -127
                                        * Referenced by: '<S71>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_d[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_d
                                  * Referenced by: '<S72>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_d;          /* Expression: ipos_id
                                        * Referenced by: '<S72>/Reset EncoderR1'
                                        */
  real_T Gain_Gain_cr;                 /* Expression: 20
                                        * Referenced by: '<S95>/Gain'
                                        */
  real_T Dctintegrator_P1_Size_p[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_p
                                   * Referenced by: '<S95>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_k;           /* Expression: f_num
                                        * Referenced by: '<S95>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_o[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_o
                                   * Referenced by: '<S95>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_m;           /* Expression: 0.001
                                        * Referenced by: '<S95>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_ch[2];  /* Computed Parameter: Dctleadlag_P1_Size_ch
                                     * Referenced by: '<S95>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_h;              /* Expression: f_num
                                        * Referenced by: '<S95>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_h[2];    /* Computed Parameter: Dctleadlag_P2_Size_h
                                      * Referenced by: '<S95>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_l;              /* Expression: f_den
                                        * Referenced by: '<S95>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_f[2];    /* Computed Parameter: Dctleadlag_P3_Size_f
                                      * Referenced by: '<S95>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_a;              /* Expression: 0.001
                                        * Referenced by: '<S95>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_ni[2];/* Computed Parameter: Dct1lowpass_P1_Size_ni
                                    * Referenced by: '<S95>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_j;             /* Expression: f_den
                                        * Referenced by: '<S95>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_a[2];  /* Computed Parameter: Dct1lowpass_P2_Size_a
                                     * Referenced by: '<S95>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_j;             /* Expression: 0.001
                                        * Referenced by: '<S95>/Dct1lowpass'
                                        */
  real_T Gain_Gain_ly;                 /* Expression: 30
                                        * Referenced by: '<S96>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_by[2];  /* Computed Parameter: Dctleadlag_P1_Size_by
                                     * Referenced by: '<S96>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_i;              /* Expression: f_num
                                        * Referenced by: '<S96>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_j[2];    /* Computed Parameter: Dctleadlag_P2_Size_j
                                      * Referenced by: '<S96>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_o;              /* Expression: f_den
                                        * Referenced by: '<S96>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_oi[2];  /* Computed Parameter: Dctleadlag_P3_Size_oi
                                     * Referenced by: '<S96>/Dctleadlag'
                                     */
  real_T Dctleadlag_P3_aa;             /* Expression: 0.001
                                        * Referenced by: '<S96>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_p[2];  /* Computed Parameter: Dct1lowpass_P1_Size_p
                                     * Referenced by: '<S96>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_j3;            /* Expression: f_den
                                        * Referenced by: '<S96>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_j[2];  /* Computed Parameter: Dct1lowpass_P2_Size_j
                                     * Referenced by: '<S96>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_c;             /* Expression: 0.001
                                        * Referenced by: '<S96>/Dct1lowpass'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 32
                                        * Referenced by: '<S72>/Gain'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 127
                                        * Referenced by: '<S72>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: -127
                                        * Referenced by: '<S72>/Saturation1'
                                        */
  real_T ResetEncoderR1_P1_Size_b[2];
                                 /* Computed Parameter: ResetEncoderR1_P1_Size_b
                                  * Referenced by: '<S73>/Reset EncoderR1'
                                  */
  real_T ResetEncoderR1_P1_l;          /* Expression: ipos_id
                                        * Referenced by: '<S73>/Reset EncoderR1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                           * Referenced by: '<S73>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_co; /* Expression: 0
                                        * Referenced by: '<S73>/Discrete-Time Integrator'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 10*2.5/500
                                        * Referenced by: '<S105>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size_m[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_m
                                  * Referenced by: '<S105>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_j;          /* Expression: f_num
                                        * Referenced by: '<S105>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_b[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_b
                                  * Referenced by: '<S105>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_j;          /* Expression: 0.001
                                        * Referenced by: '<S105>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size_j[2];  /* Computed Parameter: Dct1lowpass_P1_Size_j
                                     * Referenced by: '<S105>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_ez;            /* Expression: f_den
                                        * Referenced by: '<S105>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_aj[2];/* Computed Parameter: Dct1lowpass_P2_Size_aj
                                    * Referenced by: '<S105>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_n;             /* Expression: 0.001
                                        * Referenced by: '<S105>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size_l[2];    /* Computed Parameter: Dctleadlag_P1_Size_l
                                      * Referenced by: '<S105>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_m0;             /* Expression: f_num
                                        * Referenced by: '<S105>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_n[2];    /* Computed Parameter: Dctleadlag_P2_Size_n
                                      * Referenced by: '<S105>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_f;              /* Expression: f_den
                                        * Referenced by: '<S105>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_d[2];    /* Computed Parameter: Dctleadlag_P3_Size_d
                                      * Referenced by: '<S105>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_i;              /* Expression: 0.001
                                        * Referenced by: '<S105>/Dctleadlag'
                                        */
  real_T HomingRunningSwitch_Threshol_lq;/* Expression: 0.5
                                          * Referenced by: '<S73>/Homing Running Switch'
                                          */
  real_T Gain_Gain_j;                  /* Expression: 32
                                        * Referenced by: '<S73>/Gain'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 127
                                        * Referenced by: '<S73>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_g;       /* Expression: -127
                                        * Referenced by: '<S73>/Saturation1'
                                        */
  real_T LimitSpeed_RisingLim;         /* Expression: 0.2
                                        * Referenced by: '<S98>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Expression: -0.2
                                        * Referenced by: '<S98>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S98>/Limit Speed'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S104>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Expression: 0.5
                                        * Referenced by: '<S98>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Expression: -0.5
                                        * Referenced by: '<S98>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S98>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_i;       /* Expression: 0.4
                                        * Referenced by: '<S88>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_k;      /* Expression: -0.4
                                        * Referenced by: '<S88>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_a;              /* Expression: 0
                                        * Referenced by: '<S88>/Limit Speed'
                                        */
  real_T TSamp_WtEt_d;                 /* Computed Parameter: TSamp_WtEt_d
                                        * Referenced by: '<S94>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_k;/* Expression: 0.5
                                        * Referenced by: '<S88>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_m;/* Expression: -0.5
                                         * Referenced by: '<S88>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_k;       /* Expression: 0
                                        * Referenced by: '<S88>/Limit Acceleration'
                                        */
  real_T LimitSpeed_RisingLim_iu;      /* Expression: 0.6
                                        * Referenced by: '<S82>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_j;      /* Expression: -0.6
                                        * Referenced by: '<S82>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_e;              /* Expression: 0
                                        * Referenced by: '<S82>/Limit Speed'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S85>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_m;/* Expression: 0.8
                                        * Referenced by: '<S82>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_k;/* Expression: -0.8
                                         * Referenced by: '<S82>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_i;       /* Expression: 0
                                        * Referenced by: '<S82>/Limit Acceleration'
                                        */
  char_T LEDRing_Y0[256];              /* Computed Parameter: LEDRing_Y0
                                        * Referenced by: '<S1>/LED Ring [-]'
                                        */
  char_T Colorsetwithstringblackorwhite_[256];
                          /* Computed Parameter: Colorsetwithstringblackorwhite_
                           * Referenced by: '<S1>/Color; set with string; black or white'
                           */
  char_T Colorspecifiedin6hexdigitsrrggb[256];
                          /* Computed Parameter: Colorspecifiedin6hexdigitsrrggb
                           * Referenced by: '<S1>/Color; specified in 6 hex digits, rrggbb'
                           */
  char_T StringConstant3_String[256];
                                   /* Computed Parameter: StringConstant3_String
                                    * Referenced by: '<S78>/String Constant3'
                                    */
  char_T StringConstant1_String[256];
                                   /* Computed Parameter: StringConstant1_String
                                    * Referenced by: '<S78>/String Constant1'
                                    */
  char_T StringConstant4_String[256];
                                   /* Computed Parameter: StringConstant4_String
                                    * Referenced by: '<S76>/String Constant4'
                                    */
  char_T ReadyGreen_String[256];       /* Computed Parameter: ReadyGreen_String
                                        * Referenced by: '<S64>/Ready Green'
                                        */
  char_T AirbagRed_String[256];        /* Computed Parameter: AirbagRed_String
                                        * Referenced by: '<S64>/Airbag Red'
                                        */
  char_T HomingOrange_String[256];    /* Computed Parameter: HomingOrange_String
                                       * Referenced by: '<S64>/Homing Orange'
                                       */
  char_T Delay_InitialCondition[256];
                                   /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S75>/Delay'
                                    */
  uint8_T ManualSwitch2_CurrentSetting;
                             /* Computed Parameter: ManualSwitch2_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch2'
                              */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S1>/Manual Switch'
                               */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch1'
                              */
  uint8_T Constant1_Value_j;           /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S77>/Constant1'
                                        */
  uint8_T Constant_Value_d;            /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S78>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_robotarm_student_2021a_Ipos_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[27];
    SimStruct *childSFunctionPtrs[27];
    struct _ssBlkInfo2 blkInfo2[27];
    struct _ssSFcnModelMethods2 methods2[27];
    struct _ssSFcnModelMethods3 methods3[27];
    struct _ssSFcnModelMethods4 methods4[27];
    struct _ssStatesInfo2 statesInfo2[27];
    ssPeriodicStatesInfo periodicStatesInfo[27];
    struct _ssPortInfo2 inputOutputPortInfo2[27];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[6];
      struct _ssInPortUnit inputPortUnits[6];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[6];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      real_T const *UPtrs2[1];
      real_T const *UPtrs3[1];
      real_T const *UPtrs4[1];
      real_T const *UPtrs5[1];
      struct _ssPortOutputs outputPortInfo[5];
      struct _ssOutPortUnit outputPortUnits[5];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[5];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;
  } NonInlinedSFcns;

  X_robotarm_student_2021a_Ipos_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[2];
  real_T odeF[4][2];
  ODE4_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_P;

/* Block signals (default storage) */
extern B_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_B;

/* Continuous states (default storage) */
extern X_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_X;

/* Block states (default storage) */
extern DW_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_DW;

/* Model entry point functions */
extern void robotarm_student_2021a_Ipos_initialize(void);
extern void robotarm_student_2021a_Ipos_step(void);
extern void robotarm_student_2021a_Ipos_terminate(void);

/* Real-time Model object */
extern RT_MODEL_robotarm_student_2021a_Ipos_T *const
  robotarm_student_2021a_Ipos_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Reference X [rad]' : Unused code path elimination
 * Block '<S65>/Saturation' : Unused code path elimination
 * Block '<S85>/Data Type Duplicate' : Unused code path elimination
 * Block '<S94>/Data Type Duplicate' : Unused code path elimination
 * Block '<S104>/Data Type Duplicate' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'robotarm_student_2021a_Ipos'
 * '<S1>'   : 'robotarm_student_2021a_Ipos/Controller'
 * '<S2>'   : 'robotarm_student_2021a_Ipos/RobotArm'
 * '<S3>'   : 'robotarm_student_2021a_Ipos/Supervisor2'
 * '<S4>'   : 'robotarm_student_2021a_Ipos/Controller/Camera'
 * '<S5>'   : 'robotarm_student_2021a_Ipos/Controller/Controller Conveyor'
 * '<S6>'   : 'robotarm_student_2021a_Ipos/Controller/Controller R'
 * '<S7>'   : 'robotarm_student_2021a_Ipos/Controller/Controller Vacuum'
 * '<S8>'   : 'robotarm_student_2021a_Ipos/Controller/Controller X'
 * '<S9>'   : 'robotarm_student_2021a_Ipos/Controller/Controller Z'
 * '<S10>'  : 'robotarm_student_2021a_Ipos/Controller/Stateflow '
 * '<S11>'  : 'robotarm_student_2021a_Ipos/Controller/quintic trajectory time'
 * '<S12>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Detect Change'
 * '<S13>'  : 'robotarm_student_2021a_Ipos/Controller/Camera/Enabled Subsystem'
 * '<S14>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller'
 * '<S15>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Anti-windup'
 * '<S16>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/D Gain'
 * '<S17>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Filter'
 * '<S18>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Filter ICs'
 * '<S19>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/I Gain'
 * '<S20>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Ideal P Gain'
 * '<S21>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Ideal P Gain Fdbk'
 * '<S22>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Integrator'
 * '<S23>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Integrator ICs'
 * '<S24>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/N Copy'
 * '<S25>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/N Gain'
 * '<S26>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/P Copy'
 * '<S27>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Parallel P Gain'
 * '<S28>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Reset Signal'
 * '<S29>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Saturation'
 * '<S30>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Saturation Fdbk'
 * '<S31>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Sum'
 * '<S32>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Sum Fdbk'
 * '<S33>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tracking Mode'
 * '<S34>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tracking Mode Sum'
 * '<S35>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tsamp - Integral'
 * '<S36>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tsamp - Ngain'
 * '<S37>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/postSat Signal'
 * '<S38>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/preSat Signal'
 * '<S39>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Anti-windup/Passthrough'
 * '<S40>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/D Gain/Internal Parameters'
 * '<S41>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Filter/Cont. Filter'
 * '<S42>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S43>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/I Gain/Internal Parameters'
 * '<S44>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Ideal P Gain/Passthrough'
 * '<S45>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S46>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Integrator/Continuous'
 * '<S47>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Integrator ICs/Internal IC'
 * '<S48>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/N Copy/Disabled'
 * '<S49>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/N Gain/Internal Parameters'
 * '<S50>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/P Copy/Disabled'
 * '<S51>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S52>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Reset Signal/Disabled'
 * '<S53>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Saturation/Passthrough'
 * '<S54>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Saturation Fdbk/Disabled'
 * '<S55>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Sum/Sum_PID'
 * '<S56>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Sum Fdbk/Disabled'
 * '<S57>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tracking Mode/Disabled'
 * '<S58>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S59>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tsamp - Integral/Passthrough'
 * '<S60>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S61>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/postSat Signal/Forward_Path'
 * '<S62>'  : 'robotarm_student_2021a_Ipos/Controller/Controller X/PID Controller/preSat Signal/Forward_Path'
 * '<S63>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem'
 * '<S64>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor'
 * '<S65>'  : 'robotarm_student_2021a_Ipos/RobotArm/Subsystem/Ipos'
 * '<S66>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant'
 * '<S67>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Compare To Constant1'
 * '<S68>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/HomingBusyCheck'
 * '<S69>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem'
 * '<S70>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R'
 * '<S71>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X'
 * '<S72>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z'
 * '<S73>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1'
 * '<S74>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring'
 * '<S75>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem'
 * '<S76>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3'
 * '<S77>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem'
 * '<S78>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem1'
 * '<S79>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/ '
 * '<S80>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/   '
 * '<S81>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Angle2Z'
 * '<S82>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S83>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Selector1'
 * '<S84>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S85>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S86>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1'
 * '<S87>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2'
 * '<S88>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S89>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector'
 * '<S90>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector1'
 * '<S91>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector2'
 * '<S92>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Selector3'
 * '<S93>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Supervisor2'
 * '<S94>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S95>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    '
 * '<S96>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     '
 * '<S97>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S98>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S99>'  : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector'
 * '<S100>' : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S101>' : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S102>' : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S103>' : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S104>' : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 * '<S105>' : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor'
 * '<S106>' : 'robotarm_student_2021a_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Supervisor'
 */
#endif                           /* RTW_HEADER_robotarm_student_2021a_Ipos_h_ */
