/*
 * robotarm_student_2021a_Ebox.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ebox".
 *
 * Model version              : 2.83
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Mar 27 12:19:57 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_robotarm_student_2021a_Ebox_h_
#define RTW_HEADER_robotarm_student_2021a_Ebox_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
#ifndef robotarm_student_2021a_Ebox_COMMON_INCLUDES_
#define robotarm_student_2021a_Ebox_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_SCI.h"
#endif                        /* robotarm_student_2021a_Ebox_COMMON_INCLUDES_ */

#include "robotarm_student_2021a_Ebox_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
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

/* Block signals for system '<S166>/If Action Subsystem' */
typedef struct {
  real_T In1;                          /* '<S169>/In1' */
} B_IfActionSubsystem_robotarm__T;

/* Block states (default storage) for system '<S166>/If Action Subsystem' */
typedef struct {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S166>/If Action Subsystem' */
} DW_IfActionSubsystem_robotarm_T;

/* Block signals for system '<S1>/quintic trajectory time3' */
typedef struct {
  real_T A[36];
  real_T B[6];
  real_T path;                         /* '<S1>/quintic trajectory time3' */
  real_T smax;
  real_T ndbl;
  real_T cdiff;
  real_T B_m;
  real_T B_c;
  real_T B_k;
  real_T d;
  real_T d1;
  int8_T ipiv[6];
  int32_T j;
  int32_T kAcol;
  int32_T ix;
  int32_T c_k;
} B_quintictrajectorytime3_robo_T;

/* Block states (default storage) for system '<S1>/quintic trajectory time3' */
typedef struct {
  real_T previous_value_reference_start;/* '<S1>/quintic trajectory time3' */
  real_T previous_value_reference_end; /* '<S1>/quintic trajectory time3' */
  real_T index;                        /* '<S1>/quintic trajectory time3' */
  emxArray_real_T_robotarm_stud_T* path_array;/* '<S1>/quintic trajectory time3' */
  boolean_T path_array_not_empty;      /* '<S1>/quintic trajectory time3' */
} DW_quintictrajectorytime3_rob_T;

/* Block states (default storage) for system '<S192>/Serial Write1' */
typedef struct {
  codertarget_raspi_internal_SC_T obj; /* '<S192>/Serial Write1' */
  boolean_T objisempty;                /* '<S192>/Serial Write1' */
} DW_SerialWrite1_robotarm_stud_T;

/* Block signals (default storage) */
typedef struct {
  char_T rtb_StringConcatenate_m[256];
  char_T HomingRunningSwitch_c[256];   /* '<S184>/Homing Running Switch' */
  real_T ec_Ebox_o3_p[8];              /* '<S179>/ec_Ebox' */
  uint8_T MatrixConcatenate1[32];      /* '<S192>/Matrix Concatenate1' */
  uint8_T MatrixConcatenate[32];       /* '<S193>/Matrix Concatenate' */
  char_T cv[31];
  char_T ManualSwitch1[256];           /* '<S15>/Manual Switch1' */
  real_T SFunction;                    /* '<S181>/S-Function' */
  real_T ec_Ebox_o1[2];                /* '<S178>/ec_Ebox' */
  real_T ec_Ebox_o2[2];                /* '<S178>/ec_Ebox' */
  real_T ec_Ebox_o3[8];                /* '<S178>/ec_Ebox' */
  real_T ec_Ebox_o1_h[2];              /* '<S179>/ec_Ebox' */
  real_T ec_Ebox_o2_o[2];              /* '<S179>/ec_Ebox' */
  real_T ec_Ebox_o1_o[2];              /* '<S180>/ec_Ebox' */
  real_T ec_Ebox_o2_p[2];              /* '<S180>/ec_Ebox' */
  real_T ec_Ebox_o3_j[8];              /* '<S180>/ec_Ebox' */
  real_T HomingRunningSwitch[3];       /* '<S176>/Homing Running Switch' */
  real_T Gain3;                        /* '<S176>/Gain3' */
  real_T Gain6;                        /* '<S176>/Gain6' */
  real_T Constant1;                    /* '<S197>/Constant1' */
  real_T set_robot_calibration_r;      /* '<S177>/set_robot_calibration_r' */
  real_T Constant1_c;                  /* '<S203>/Constant1' */
  real_T set_robot_calibration_x;      /* '<S177>/set_robot_calibration_x' */
  real_T Constant1_k;                  /* '<S213>/Constant1' */
  real_T set_robot_calibration_z;      /* '<S177>/set_robot_calibration_z' */
  real_T Add1;                         /* '<S183>/Add1' */
  real_T Assignment[8];                /* '<S176>/Assignment' */
  real_T Gain[2];                      /* '<S178>/Gain' */
  real_T Gain_c;                       /* '<S194>/Gain' */
  real_T Dctintegrator;                /* '<S194>/Dctintegrator' */
  real_T Dctleadlag;                   /* '<S194>/Dctleadlag' */
  real_T Dct1lowpass;                  /* '<S194>/Dct1lowpass' */
  real_T Gain_f;                       /* '<S195>/Gain' */
  real_T Dctleadlag_j;                 /* '<S195>/Dctleadlag' */
  real_T Dct1lowpass_n;                /* '<S195>/Dct1lowpass' */
  real_T Gain1;                        /* '<S201>/Gain1' */
  real_T Dctintegrator_i;              /* '<S201>/Dctintegrator' */
  real_T Dctleadlag_n;                 /* '<S201>/Dctleadlag' */
  real_T Dct1lowpass_f;                /* '<S201>/Dct1lowpass' */
  real_T Gain1_p;                      /* '<S202>/Gain1' */
  real_T Dctleadlag_e;                 /* '<S202>/Dctleadlag' */
  real_T Dct1lowpass_o;                /* '<S202>/Dct1lowpass' */
  real_T Saturation[2];                /* '<S178>/Saturation' */
  real_T Gain_j[2];                    /* '<S179>/Gain' */
  real_T Gain_e;                       /* '<S210>/Gain' */
  real_T Dctintegrator_g;              /* '<S210>/Dctintegrator' */
  real_T Dctleadlag_eg;                /* '<S210>/Dctleadlag' */
  real_T Dct1lowpass_ft;               /* '<S210>/Dct1lowpass' */
  real_T Gain_i;                       /* '<S211>/Gain' */
  real_T Dctleadlag_i;                 /* '<S211>/Dctleadlag' */
  real_T Dct1lowpass_a;                /* '<S211>/Dct1lowpass' */
  real_T Gain1_n;                      /* '<S220>/Gain1' */
  real_T Dctintegrator3;               /* '<S220>/Dctintegrator3' */
  real_T Dct1lowpass_p;                /* '<S220>/Dct1lowpass' */
  real_T Dctleadlag_f;                 /* '<S220>/Dctleadlag' */
  real_T Saturation_f[2];              /* '<S179>/Saturation' */
  real_T Gain_n[2];                    /* '<S180>/Gain' */
  real_T Saturation_h[2];              /* '<S180>/Saturation' */
  real_T jogSpeed;                     /* '<S188>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S188>/Supervisor' */
  real_T resetEnc;                     /* '<S188>/Supervisor' */
  real_T homingBusy;                   /* '<S188>/Supervisor' */
  real_T Ready;                        /* '<S188>/Supervisor' */
  real_T StopSim;                      /* '<S188>/Supervisor' */
  real_T jogSpeed_f;                   /* '<S187>/Supervisor' */
  real_T toPoint;                      /* '<S187>/Supervisor' */
  real_T homeControllerEnabled_j;      /* '<S187>/Supervisor' */
  real_T resetEnc_j;                   /* '<S187>/Supervisor' */
  real_T homingBusy_j;                 /* '<S187>/Supervisor' */
  real_T airBagEnabled;                /* '<S187>/Supervisor' */
  real_T airBagRef;                    /* '<S187>/Supervisor' */
  real_T controlEnabled;               /* '<S187>/Supervisor' */
  real_T Ready_c;                      /* '<S187>/Supervisor' */
  real_T StopSim_n;                    /* '<S187>/Supervisor' */
  real_T y;                            /* '<S187>/Angle2Z' */
  real_T jogSpeed_o;                   /* '<S186>/Supervisor' */
  real_T toPoint_h;                    /* '<S186>/Supervisor' */
  real_T homeControllerEnabled_f;      /* '<S186>/Supervisor' */
  real_T resetEnc_n;                   /* '<S186>/Supervisor' */
  real_T homingBusy_d;                 /* '<S186>/Supervisor' */
  real_T airBagEnabled_a;              /* '<S186>/Supervisor' */
  real_T airBagRef_p;                  /* '<S186>/Supervisor' */
  real_T controlEnabled_b;             /* '<S186>/Supervisor' */
  real_T Ready_l;                      /* '<S186>/Supervisor' */
  real_T StopSim_p;                    /* '<S186>/Supervisor' */
  real_T jogSpeed_p;                   /* '<S185>/Supervisor' */
  real_T toPoint_i;                    /* '<S185>/Supervisor' */
  real_T homeControllerEnabled_i;      /* '<S185>/Supervisor' */
  real_T resetEnc_l;                   /* '<S185>/Supervisor' */
  real_T homingBusy_n;                 /* '<S185>/Supervisor' */
  real_T airBagEnabled_ab;             /* '<S185>/Supervisor' */
  real_T airBagRef_pn;                 /* '<S185>/Supervisor' */
  real_T controlEnabled_e;             /* '<S185>/Supervisor' */
  real_T Ready_n;                      /* '<S185>/Supervisor' */
  real_T StopSim_np;                   /* '<S185>/Supervisor' */
  real_T y_j;                          /* '<S185>/Angle2Z' */
  real_T SFunctionBuilder;             /* '<S166>/S-Function Builder' */
  real_T Selector2[9];                 /* '<S166>/Selector2' */
  real_T Selector[3];                  /* '<S166>/Selector' */
  real_T Switch1;                      /* '<S166>/Switch1' */
  real_T Switch;                       /* '<S166>/Switch' */
  real_T Switch2;                      /* '<S166>/Switch2' */
  real_T Switch5;                      /* '<S166>/Switch5' */
  real_T Switch3;                      /* '<S166>/Switch3' */
  real_T Switch4;                      /* '<S166>/Switch4' */
  real_T Switch6;                      /* '<S166>/Switch6' */
  real_T Add;                          /* '<S166>/Add' */
  real_T Selector3;                    /* '<S166>/Selector3' */
  real_T Sum;                          /* '<S166>/Sum' */
  real_T Constant;                     /* '<S1>/Constant' */
  real_T SignalConversion2;            /* '<S1>/Signal Conversion2' */
  real_T Gain1_g;                      /* '<S3>/Gain1' */
  real_T Dctintegrator3_n;             /* '<S3>/Dctintegrator3' */
  real_T Dct1lowpass_ab;               /* '<S3>/Dct1lowpass' */
  real_T Dctleadlag_d;                 /* '<S3>/Dctleadlag' */
  real_T Sum2;                         /* '<S1>/Sum2' */
  real_T Dctpd;                        /* '<S4>/Dctpd' */
  real_T Dctintegrator_o;              /* '<S4>/Dctintegrator' */
  real_T Sum_b;                        /* '<S60>/Sum' */
  real_T Dctnotch;                     /* '<S4>/Dctnotch' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T SignalConversion1;            /* '<S1>/Signal Conversion1' */
  real_T Sum1;                         /* '<S1>/Sum1' */
  real_T Dctpd_j;                      /* '<S6>/Dctpd' */
  real_T Dctintegrator_or;             /* '<S6>/Dctintegrator' */
  real_T Sum_n;                        /* '<S109>/Sum' */
  real_T Dctnotch_p;                   /* '<S6>/Dctnotch' */
  real_T SignalConversion;             /* '<S1>/Signal Conversion' */
  real_T Sum7;                         /* '<S1>/Sum7' */
  real_T Dctpd_d;                      /* '<S7>/Dctpd' */
  real_T Dctintegrator_f;              /* '<S7>/Dctintegrator' */
  real_T Sum_m;                        /* '<S158>/Sum' */
  real_T Dctnotch_d;                   /* '<S7>/Dctnotch' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T Gain1_o;                      /* '<S5>/Gain1' */
  real_T AddConstant;                  /* '<S15>/Add Constant' */
  real_T Plot;                         /* '<S15>/Plot' */
  real_T Stop;                         /* '<S15>/Stop' */
  real_T In1;                          /* '<S168>/In1' */
  real_T Pump;                         /* '<S1>/Stateflow ' */
  real_T Blow_suck;                    /* '<S1>/Stateflow ' */
  real_T Conveyor;                     /* '<S1>/Stateflow ' */
  real_T t;                            /* '<S1>/Stateflow ' */
  real_T X;                            /* '<S1>/Stateflow ' */
  real_T Z;                            /* '<S1>/Stateflow ' */
  real_T R;                            /* '<S1>/Stateflow ' */
  real_T d12;
  real_T Sum2_k;                       /* '<S185>/Sum2' */
  real_T Sum4_c;                       /* '<S176>/Sum4' */
  real_T Sum1_k;                       /* '<S176>/Sum1' */
  real_T Diff_h;                       /* '<S219>/Diff' */
  real_T Object1;                      /* '<S15>/Object1' */
  real_T fy2_tmp;
  real_T d12_tmp;
  real_T d13_tmp;
  real_T TSamp;                        /* '<S200>/TSamp' */
  real_T TSamp_m;                      /* '<S209>/TSamp' */
  real_T TSamp_j;                      /* '<S219>/TSamp' */
  real_T TSamp_l;                      /* '<S9>/TSamp' */
  real_T TSamp_i;                      /* '<S8>/TSamp' */
  real_T FilterCoefficient;            /* '<S54>/Filter Coefficient' */
  real_T FilterCoefficient_n;          /* '<S103>/Filter Coefficient' */
  real_T FilterCoefficient_n4;         /* '<S152>/Filter Coefficient' */
  real_T TSamp_p;                      /* '<S12>/TSamp' */
  real_T TSamp_d;                      /* '<S13>/TSamp' */
  real_T IntegralGain;                 /* '<S146>/Integral Gain' */
  real_T TSamp_n;                      /* '<S10>/TSamp' */
  real_T TSamp_mq;                     /* '<S11>/TSamp' */
  real_T IntegralGain_m;               /* '<S97>/Integral Gain' */
  real_T IntegralGain_m2;              /* '<S48>/Integral Gain' */
  real_T LimitAcceleration;            /* '<S197>/Limit Acceleration' */
  real_T LimitAcceleration_c;          /* '<S203>/Limit Acceleration' */
  real_T LimitAcceleration_b;          /* '<S213>/Limit Acceleration' */
  real_T Add_b;                        /* '<S177>/Add' */
  real_T Add1_p;                       /* '<S177>/Add1' */
  real_T Saturation_m;                 /* '<S1>/Saturation ' */
  real_T Y;
  real_T X_c;
  real_T R_f;
  real_T L_DB;
  real_T H_CDB;
  real_T L_DF;
  real_T a;
  int32_T i;
  int32_T Selector2_tmp;
  int32_T u0;
  int32_T u1;
  boolean_T RelationalOperator;        /* '<S185>/Relational Operator' */
  boolean_T Compare;                   /* '<S182>/Compare' */
  boolean_T RelationalOperator_o;      /* '<S186>/Relational Operator' */
  boolean_T RelationalOperator_n;      /* '<S187>/Relational Operator' */
  boolean_T FixPtRelationalOperator[12];/* '<S167>/FixPt Relational Operator' */
  B_quintictrajectorytime3_robo_T sf_quintictrajectorytime5;/* '<S1>/quintic trajectory time5' */
  B_quintictrajectorytime3_robo_T sf_quintictrajectorytime4;/* '<S1>/quintic trajectory time4' */
  B_quintictrajectorytime3_robo_T sf_quintictrajectorytime3;/* '<S1>/quintic trajectory time3' */
  B_IfActionSubsystem_robotarm__T IfActionSubsystem5;/* '<S166>/If Action Subsystem5' */
  B_IfActionSubsystem_robotarm__T IfActionSubsystem4;/* '<S166>/If Action Subsystem4' */
  B_IfActionSubsystem_robotarm__T IfActionSubsystem6;/* '<S166>/If Action Subsystem6' */
  B_IfActionSubsystem_robotarm__T IfActionSubsystem3;/* '<S166>/If Action Subsystem3' */
  B_IfActionSubsystem_robotarm__T IfActionSubsystem2;/* '<S166>/If Action Subsystem2' */
  B_IfActionSubsystem_robotarm__T IfActionSubsystem1;/* '<S166>/If Action Subsystem1' */
  B_IfActionSubsystem_robotarm__T IfActionSubsystem;/* '<S166>/If Action Subsystem' */
} B_robotarm_student_2021a_Ebox_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S185>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S197>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S177>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_p;/* '<S186>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_pn;/* '<S203>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S187>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S213>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S188>/Discrete-Time Integrator' */
  real_T UnitDelay1_DSTATE;            /* '<S177>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S200>/UD' */
  real_T UD_DSTATE_n;                  /* '<S209>/UD' */
  real_T UD_DSTATE_e;                  /* '<S219>/UD' */
  real_T DelayInput1_DSTATE[12];       /* '<S167>/Delay Input1' */
  real_T UD_DSTATE_g;                  /* '<S9>/UD' */
  real_T UD_DSTATE_c;                  /* '<S8>/UD' */
  real_T Discreteintegrator_DSTATE;    /* '<S1>/Discrete  integrator' */
  real_T Integrator_DSTATE;            /* '<S51>/Integrator' */
  real_T Filter_DSTATE;                /* '<S46>/Filter' */
  real_T Integrator_DSTATE_f;          /* '<S100>/Integrator' */
  real_T Filter_DSTATE_f;              /* '<S95>/Filter' */
  real_T Integrator_DSTATE_c;          /* '<S149>/Integrator' */
  real_T Filter_DSTATE_l;              /* '<S144>/Filter' */
  real_T UD_DSTATE_d;                  /* '<S12>/UD' */
  real_T UD_DSTATE_a;                  /* '<S13>/UD' */
  real_T UD_DSTATE_m;                  /* '<S10>/UD' */
  real_T UD_DSTATE_m3;                 /* '<S11>/UD' */
  char_T Delay_DSTATE[256];            /* '<S190>/Delay' */
  real_T PrevY;                        /* '<S197>/Limit Speed' */
  real_T PrevY_n;                      /* '<S197>/Limit Acceleration' */
  real_T PrevY_h;                      /* '<S203>/Limit Speed' */
  real_T PrevY_m;                      /* '<S203>/Limit Acceleration' */
  real_T PrevY_c;                      /* '<S213>/Limit Speed' */
  real_T PrevY_mz;                     /* '<S213>/Limit Acceleration' */
  real_T currentcarPos;                /* '<S187>/Supervisor' */
  real_T currentcarPos_f;              /* '<S186>/Supervisor' */
  real_T currentcarPos_k;              /* '<S185>/Supervisor' */
  real_T z;                            /* '<S1>/Stateflow ' */
  real_T y;                            /* '<S1>/Stateflow ' */
  real_T x;                            /* '<S1>/Stateflow ' */
  real_T BUFFER_Z;                     /* '<S1>/Stateflow ' */
  real_T objectCoordinate1[3];         /* '<S1>/Stateflow ' */
  real_T X_in;                         /* '<S1>/Stateflow ' */
  real_T Y_in;                         /* '<S1>/Stateflow ' */
  real_T objectCoordinate2[3];         /* '<S1>/Stateflow ' */
  real_T objectCoordinate3[3];         /* '<S1>/Stateflow ' */
  real_T area[3];                      /* '<S1>/Stateflow ' */
  real_T Z_in;                         /* '<S1>/Stateflow ' */
  real_T Buffer_Z;                     /* '<S1>/Stateflow ' */
  real_T label_picker;                 /* '<S1>/Stateflow ' */
  real_T item_tracker;                 /* '<S1>/Stateflow ' */
  real_T block_delay;                  /* '<S1>/Stateflow ' */
  real_T Dctintegrator_RWORK[2];       /* '<S194>/Dctintegrator' */
  real_T Dctleadlag_RWORK[2];          /* '<S194>/Dctleadlag' */
  real_T Dct1lowpass_RWORK[2];         /* '<S194>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_b[2];        /* '<S195>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_g[2];       /* '<S195>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_b[2];     /* '<S201>/Dctintegrator' */
  real_T Dctleadlag_RWORK_a[2];        /* '<S201>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_m[2];       /* '<S201>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_f[2];        /* '<S202>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_k[2];       /* '<S202>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_m[2];     /* '<S210>/Dctintegrator' */
  real_T Dctleadlag_RWORK_p[2];        /* '<S210>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_p[2];       /* '<S210>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_o[2];        /* '<S211>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_gb[2];      /* '<S211>/Dct1lowpass' */
  real_T Dctintegrator3_RWORK[2];      /* '<S220>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_n[2];       /* '<S220>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_l[2];        /* '<S220>/Dctleadlag' */
  real_T Dctintegrator3_RWORK_g[2];    /* '<S3>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_c[2];       /* '<S3>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_g[2];        /* '<S3>/Dctleadlag' */
  real_T Dctpd_RWORK[2];               /* '<S4>/Dctpd' */
  real_T Dctintegrator_RWORK_e[2];     /* '<S4>/Dctintegrator' */
  real_T Dctnotch_RWORK[4];            /* '<S4>/Dctnotch' */
  real_T Dctpd_RWORK_h[2];             /* '<S6>/Dctpd' */
  real_T Dctintegrator_RWORK_l[2];     /* '<S6>/Dctintegrator' */
  real_T Dctnotch_RWORK_a[4];          /* '<S6>/Dctnotch' */
  real_T Dctpd_RWORK_j[2];             /* '<S7>/Dctpd' */
  real_T Dctintegrator_RWORK_ln[2];    /* '<S7>/Dctintegrator' */
  real_T Dctnotch_RWORK_k[4];          /* '<S7>/Dctnotch' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<S1>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope2_PWORK;                      /* '<S1>/Scope2' */

  struct {
    void *LoggedData[2];
  } Scope1_PWORK;                      /* '<S1>/Scope1' */

  int32_T sfEvent;                     /* '<S188>/Supervisor' */
  int32_T sfEvent_j;                   /* '<S187>/Supervisor' */
  int32_T sfEvent_jk;                  /* '<S186>/Supervisor' */
  int32_T sfEvent_f;                   /* '<S185>/Supervisor' */
  int32_T clockTickCounter;            /* '<S166>/Pulse Generator1' */
  int32_T clockTickCounter_k;          /* '<S166>/Pulse Generator' */
  int32_T clockTickCounter_j;          /* '<S15>/Object1' */
  int32_T sfEvent_b;                   /* '<S1>/Stateflow ' */
  uint32_T is_c4_robotarm_student_2021a_Eb;/* '<S188>/Supervisor' */
  uint32_T is_c7_robotarm_student_2021a_Eb;/* '<S187>/Supervisor' */
  uint32_T is_c6_robotarm_student_2021a_Eb;/* '<S186>/Supervisor' */
  uint32_T is_c5_robotarm_student_2021a_Eb;/* '<S185>/Supervisor' */
  uint32_T is_Vacuum;                  /* '<S1>/Stateflow ' */
  uint32_T is_Robot_Arm;               /* '<S1>/Stateflow ' */
  uint32_T is_Belt;                    /* '<S1>/Stateflow ' */
  uint32_T is_Object_Detection;        /* '<S1>/Stateflow ' */
  uint32_T temporalCounter_i2;         /* '<S1>/Stateflow ' */
  uint32_T temporalCounter_i3;         /* '<S1>/Stateflow ' */
  uint16_T temporalCounter_i1;         /* '<S188>/Supervisor' */
  uint16_T temporalCounter_i1_k;       /* '<S187>/Supervisor' */
  uint16_T temporalCounter_i1_a;       /* '<S186>/Supervisor' */
  uint16_T temporalCounter_i1_p;       /* '<S185>/Supervisor' */
  uint16_T temporalCounter_i1_ac;      /* '<S1>/Stateflow ' */
  int8_T Subsystem3_SubsysRanBC;       /* '<S189>/Subsystem3' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S191>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S191>/If Action Subsystem' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S166>/Enabled Subsystem' */
  uint8_T is_active_c4_robotarm_student_2;/* '<S188>/Supervisor' */
  uint8_T is_active_c7_robotarm_student_2;/* '<S187>/Supervisor' */
  uint8_T is_active_c6_robotarm_student_2;/* '<S186>/Supervisor' */
  uint8_T is_active_c5_robotarm_student_2;/* '<S185>/Supervisor' */
  uint8_T is_active_c3_robotarm_student_2;/* '<S1>/Stateflow ' */
  uint8_T is_active_dataAssign;        /* '<S1>/Stateflow ' */
  uint8_T is_active_Vacuum;            /* '<S1>/Stateflow ' */
  uint8_T is_active_Robot_Arm;         /* '<S1>/Stateflow ' */
  uint8_T is_active_Belt;              /* '<S1>/Stateflow ' */
  uint8_T is_active_Object_Detection;  /* '<S1>/Stateflow ' */
  boolean_T doneDoubleBufferReInit;    /* '<S1>/Stateflow ' */
  boolean_T isNotInit;                 /* '<S1>/Stateflow ' */
  boolean_T Controller_MODE;           /* '<Root>/Controller' */
  boolean_T EnabledSubsystem_MODE;     /* '<S166>/Enabled Subsystem' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite;/* '<S192>/Serial Write1' */
  DW_SerialWrite1_robotarm_stud_T SerialWrite1;/* '<S192>/Serial Write1' */
  DW_quintictrajectorytime3_rob_T sf_quintictrajectorytime5;/* '<S1>/quintic trajectory time5' */
  DW_quintictrajectorytime3_rob_T sf_quintictrajectorytime4;/* '<S1>/quintic trajectory time4' */
  DW_quintictrajectorytime3_rob_T sf_quintictrajectorytime3;/* '<S1>/quintic trajectory time3' */
  DW_IfActionSubsystem_robotarm_T IfActionSubsystem5;/* '<S166>/If Action Subsystem5' */
  DW_IfActionSubsystem_robotarm_T IfActionSubsystem4;/* '<S166>/If Action Subsystem4' */
  DW_IfActionSubsystem_robotarm_T IfActionSubsystem6;/* '<S166>/If Action Subsystem6' */
  DW_IfActionSubsystem_robotarm_T IfActionSubsystem3;/* '<S166>/If Action Subsystem3' */
  DW_IfActionSubsystem_robotarm_T IfActionSubsystem2;/* '<S166>/If Action Subsystem2' */
  DW_IfActionSubsystem_robotarm_T IfActionSubsystem1;/* '<S166>/If Action Subsystem1' */
  DW_IfActionSubsystem_robotarm_T IfActionSubsystem;/* '<S166>/If Action Subsystem' */
} DW_robotarm_student_2021a_Ebox_T;

/* Parameters for system: '<S166>/If Action Subsystem' */
struct P_IfActionSubsystem_robotarm__T_ {
  real_T Out1_Y0;                      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S169>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_robotarm_student_2021a_Ebox_T_ {
  real_T PIDController_D;              /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S45>/Derivative Gain'
                                        */
  real_T PIDController1_D;             /* Mask Parameter: PIDController1_D
                                        * Referenced by: '<S94>/Derivative Gain'
                                        */
  real_T PIDController_D_l;            /* Mask Parameter: PIDController_D_l
                                        * Referenced by: '<S143>/Derivative Gain'
                                        */
  real_T PIDController_I;              /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S146>/Integral Gain'
                                        */
  real_T PIDController1_I;             /* Mask Parameter: PIDController1_I
                                        * Referenced by: '<S97>/Integral Gain'
                                        */
  real_T PIDController_I_a;            /* Mask Parameter: PIDController_I_a
                                        * Referenced by: '<S48>/Integral Gain'
                                        */
  real_T DiscreteDerivative1_ICPrevScale;
                              /* Mask Parameter: DiscreteDerivative1_ICPrevScale
                               * Referenced by: '<S9>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S8>/UD'
                               */
  real_T DiscreteDerivative4_ICPrevScale;
                              /* Mask Parameter: DiscreteDerivative4_ICPrevScale
                               * Referenced by: '<S12>/UD'
                               */
  real_T DiscreteDerivative5_ICPrevScale;
                              /* Mask Parameter: DiscreteDerivative5_ICPrevScale
                               * Referenced by: '<S13>/UD'
                               */
  real_T DiscreteDerivative2_ICPrevScale;
                              /* Mask Parameter: DiscreteDerivative2_ICPrevScale
                               * Referenced by: '<S10>/UD'
                               */
  real_T DiscreteDerivative3_ICPrevScale;
                              /* Mask Parameter: DiscreteDerivative3_ICPrevScale
                               * Referenced by: '<S11>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_p;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_p
                               * Referenced by: '<S200>/UD'
                               */
  real_T DiscreteDerivative_ICPrevSca_pl;
                              /* Mask Parameter: DiscreteDerivative_ICPrevSca_pl
                               * Referenced by: '<S209>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_i;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_i
                               * Referenced by: '<S219>/UD'
                               */
  real_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S46>/Filter'
                               */
  real_T PIDController1_InitialCondition;
                              /* Mask Parameter: PIDController1_InitialCondition
                               * Referenced by: '<S95>/Filter'
                               */
  real_T PIDController_InitialConditio_b;
                              /* Mask Parameter: PIDController_InitialConditio_b
                               * Referenced by: '<S144>/Filter'
                               */
  real_T PIDController_InitialConditi_b4;
                              /* Mask Parameter: PIDController_InitialConditi_b4
                               * Referenced by: '<S51>/Integrator'
                               */
  real_T PIDController1_InitialConditi_l;
                              /* Mask Parameter: PIDController1_InitialConditi_l
                               * Referenced by: '<S100>/Integrator'
                               */
  real_T PIDController_InitialConditio_c;
                              /* Mask Parameter: PIDController_InitialConditio_c
                               * Referenced by: '<S149>/Integrator'
                               */
  real_T PIDController_N;              /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S54>/Filter Coefficient'
                                        */
  real_T PIDController1_N;             /* Mask Parameter: PIDController1_N
                                        * Referenced by: '<S103>/Filter Coefficient'
                                        */
  real_T PIDController_N_a;            /* Mask Parameter: PIDController_N_a
                                        * Referenced by: '<S152>/Filter Coefficient'
                                        */
  real_T PIDController_P;              /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S56>/Proportional Gain'
                                        */
  real_T PIDController1_P;             /* Mask Parameter: PIDController1_P
                                        * Referenced by: '<S105>/Proportional Gain'
                                        */
  real_T PIDController_P_d;            /* Mask Parameter: PIDController_P_d
                                        * Referenced by: '<S154>/Proportional Gain'
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S182>/Constant'
                                       */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S167>/Delay Input1'
                                        */
  real_T Delays_Y0;                    /* Computed Parameter: Delays_Y0
                                        * Referenced by: '<S168>/Delay [s]'
                                        */
  real_T Constant3_Value;              /* Expression: 100
                                        * Referenced by: '<S166>/Constant3'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S166>/Constant1'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S166>/Constant5'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S166>/Constant4'
                                        */
  real_T Constant7_Value;              /* Expression: 2
                                        * Referenced by: '<S166>/Constant7'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S166>/Constant6'
                                        */
  real_T Constant9_Value;              /* Expression: 3
                                        * Referenced by: '<S166>/Constant9'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S166>/Constant8'
                                        */
  real_T Constant11_Value;             /* Expression: 4
                                        * Referenced by: '<S166>/Constant11'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S166>/Constant10'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S166>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 100
                                        * Referenced by: '<S166>/Constant2'
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
  real_T Objectdetectionmatrix_Value[12];
  /* Expression: [0                    0                    0      1737870510.8683;0  0  0  0;0  0  0  0]
   * Referenced by: '<S166>/Object detection matrix'
   */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<S166>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;   /* Computed Parameter: PulseGenerator1_Period
                                    * Referenced by: '<S166>/Pulse Generator1'
                                    */
  real_T PulseGenerator1_Duty;       /* Computed Parameter: PulseGenerator1_Duty
                                      * Referenced by: '<S166>/Pulse Generator1'
                                      */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<S166>/Pulse Generator1'
                                        */
  real_T Constant13_Value;             /* Expression: 1
                                        * Referenced by: '<S166>/Constant13'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S166>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S166>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S166>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S166>/Pulse Generator'
                                        */
  real_T Constant12_Value;             /* Expression: 1
                                        * Referenced by: '<S166>/Constant12'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S166>/Switch1'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S166>/Switch'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S166>/Switch2'
                                        */
  real_T Constant18_Value;             /* Expression: 100
                                        * Referenced by: '<S166>/Constant18'
                                        */
  real_T Constant15_Value;             /* Expression: 1
                                        * Referenced by: '<S166>/Constant15'
                                        */
  real_T Constant14_Value;             /* Expression: 1
                                        * Referenced by: '<S166>/Constant14'
                                        */
  real_T Constant17_Value;             /* Expression: 1
                                        * Referenced by: '<S166>/Constant17'
                                        */
  real_T Constant16_Value;             /* Expression: 1
                                        * Referenced by: '<S166>/Constant16'
                                        */
  real_T Switch5_Threshold;            /* Expression: 0
                                        * Referenced by: '<S166>/Switch5'
                                        */
  real_T Switch3_Threshold;            /* Expression: 0
                                        * Referenced by: '<S166>/Switch3'
                                        */
  real_T Switch4_Threshold;            /* Expression: 0
                                        * Referenced by: '<S166>/Switch4'
                                        */
  real_T Switch6_Threshold;            /* Expression: 0
                                        * Referenced by: '<S166>/Switch6'
                                        */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S9>/TSamp'
                                        */
  real_T Gain2_Gain;                   /* Expression: .2
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Gain_Gain;                    /* Expression: .01
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T TSamp_WtEt_n;                 /* Computed Parameter: TSamp_WtEt_n
                                        * Referenced by: '<S8>/TSamp'
                                        */
  real_T Gain1_Gain;                   /* Expression: .009
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Discreteintegrator_gainval;
                               /* Computed Parameter: Discreteintegrator_gainval
                                * Referenced by: '<S1>/Discrete  integrator'
                                */
  real_T Discreteintegrator_IC;        /* Expression: 0
                                        * Referenced by: '<S1>/Discrete  integrator'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 10*2.5/500
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size[2];/* Computed Parameter: Dctintegrator3_P1_Size
                                    * Referenced by: '<S3>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P1;            /* Expression: f_num
                                        * Referenced by: '<S3>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size[2];/* Computed Parameter: Dctintegrator3_P2_Size
                                    * Referenced by: '<S3>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P2;            /* Expression: 0.001
                                        * Referenced by: '<S3>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size[2];      /* Computed Parameter: Dct1lowpass_P1_Size
                                       * Referenced by: '<S3>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P1;               /* Expression: f_den
                                        * Referenced by: '<S3>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size[2];      /* Computed Parameter: Dct1lowpass_P2_Size
                                       * Referenced by: '<S3>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P2;               /* Expression: 0.001
                                        * Referenced by: '<S3>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size[2];        /* Computed Parameter: Dctleadlag_P1_Size
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */
  real_T Dctleadlag_P1;                /* Expression: f_num
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size[2];        /* Computed Parameter: Dctleadlag_P2_Size
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2;                /* Expression: f_den
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size[2];        /* Computed Parameter: Dctleadlag_P3_Size
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3;                /* Expression: 0.001
                                        * Referenced by: '<S3>/Dctleadlag'
                                        */
  real_T Dctpd_P1_Size[2];             /* Computed Parameter: Dctpd_P1_Size
                                        * Referenced by: '<S4>/Dctpd'
                                        */
  real_T Dctpd_P1;                     /* Expression: kp
                                        * Referenced by: '<S4>/Dctpd'
                                        */
  real_T Dctpd_P2_Size[2];             /* Computed Parameter: Dctpd_P2_Size
                                        * Referenced by: '<S4>/Dctpd'
                                        */
  real_T Dctpd_P2;                     /* Expression: kv
                                        * Referenced by: '<S4>/Dctpd'
                                        */
  real_T Dctpd_P3_Size[2];             /* Computed Parameter: Dctpd_P3_Size
                                        * Referenced by: '<S4>/Dctpd'
                                        */
  real_T Dctpd_P3;                     /* Expression: 0.001
                                        * Referenced by: '<S4>/Dctpd'
                                        */
  real_T Dctintegrator_P1_Size[2];  /* Computed Parameter: Dctintegrator_P1_Size
                                     * Referenced by: '<S4>/Dctintegrator'
                                     */
  real_T Dctintegrator_P1;             /* Expression: f_num
                                        * Referenced by: '<S4>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size[2];  /* Computed Parameter: Dctintegrator_P2_Size
                                     * Referenced by: '<S4>/Dctintegrator'
                                     */
  real_T Dctintegrator_P2;             /* Expression: 0.001
                                        * Referenced by: '<S4>/Dctintegrator'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S51>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S46>/Filter'
                                        */
  real_T Dctnotch_P1_Size[2];          /* Computed Parameter: Dctnotch_P1_Size
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P1;                  /* Expression: f_num
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P2_Size[2];          /* Computed Parameter: Dctnotch_P2_Size
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P2;                  /* Expression: b_num
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P3_Size[2];          /* Computed Parameter: Dctnotch_P3_Size
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P3;                  /* Expression: f_den
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P4_Size[2];          /* Computed Parameter: Dctnotch_P4_Size
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P4;                  /* Expression: b_den
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P5_Size[2];          /* Computed Parameter: Dctnotch_P5_Size
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctnotch_P5;                  /* Expression: 0.001
                                        * Referenced by: '<S4>/Dctnotch'
                                        */
  real_T Dctpd_P1_Size_n[2];           /* Computed Parameter: Dctpd_P1_Size_n
                                        * Referenced by: '<S6>/Dctpd'
                                        */
  real_T Dctpd_P1_k;                   /* Expression: kp
                                        * Referenced by: '<S6>/Dctpd'
                                        */
  real_T Dctpd_P2_Size_c[2];           /* Computed Parameter: Dctpd_P2_Size_c
                                        * Referenced by: '<S6>/Dctpd'
                                        */
  real_T Dctpd_P2_o;                   /* Expression: kv
                                        * Referenced by: '<S6>/Dctpd'
                                        */
  real_T Dctpd_P3_Size_o[2];           /* Computed Parameter: Dctpd_P3_Size_o
                                        * Referenced by: '<S6>/Dctpd'
                                        */
  real_T Dctpd_P3_d;                   /* Expression: 0.001
                                        * Referenced by: '<S6>/Dctpd'
                                        */
  real_T Dctintegrator_P1_Size_b[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_b
                                   * Referenced by: '<S6>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_p;           /* Expression: f_num
                                        * Referenced by: '<S6>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_k[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_k
                                   * Referenced by: '<S6>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_a;           /* Expression: 0.001
                                        * Referenced by: '<S6>/Dctintegrator'
                                        */
  real_T Integrator_gainval_k;       /* Computed Parameter: Integrator_gainval_k
                                      * Referenced by: '<S100>/Integrator'
                                      */
  real_T Filter_gainval_e;             /* Computed Parameter: Filter_gainval_e
                                        * Referenced by: '<S95>/Filter'
                                        */
  real_T Dctnotch_P1_Size_h[2];        /* Computed Parameter: Dctnotch_P1_Size_h
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P1_d;                /* Expression: f_num
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P2_Size_h[2];        /* Computed Parameter: Dctnotch_P2_Size_h
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P2_n;                /* Expression: b_num
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P3_Size_l[2];        /* Computed Parameter: Dctnotch_P3_Size_l
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P3_k;                /* Expression: f_den
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P4_Size_e[2];        /* Computed Parameter: Dctnotch_P4_Size_e
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P4_e;                /* Expression: b_den
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P5_Size_m[2];        /* Computed Parameter: Dctnotch_P5_Size_m
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctnotch_P5_a;                /* Expression: 0.001
                                        * Referenced by: '<S6>/Dctnotch'
                                        */
  real_T Dctpd_P1_Size_j[2];           /* Computed Parameter: Dctpd_P1_Size_j
                                        * Referenced by: '<S7>/Dctpd'
                                        */
  real_T Dctpd_P1_g;                   /* Expression: kp
                                        * Referenced by: '<S7>/Dctpd'
                                        */
  real_T Dctpd_P2_Size_b[2];           /* Computed Parameter: Dctpd_P2_Size_b
                                        * Referenced by: '<S7>/Dctpd'
                                        */
  real_T Dctpd_P2_ou;                  /* Expression: kv
                                        * Referenced by: '<S7>/Dctpd'
                                        */
  real_T Dctpd_P3_Size_ov[2];          /* Computed Parameter: Dctpd_P3_Size_ov
                                        * Referenced by: '<S7>/Dctpd'
                                        */
  real_T Dctpd_P3_m;                   /* Expression: 0.001
                                        * Referenced by: '<S7>/Dctpd'
                                        */
  real_T Dctintegrator_P1_Size_h[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_h
                                   * Referenced by: '<S7>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_pr;          /* Expression: f_num
                                        * Referenced by: '<S7>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_g[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_g
                                   * Referenced by: '<S7>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_p;           /* Expression: 0.001
                                        * Referenced by: '<S7>/Dctintegrator'
                                        */
  real_T Gain_Gain_n;                  /* Expression: 2
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Integrator_gainval_f;       /* Computed Parameter: Integrator_gainval_f
                                      * Referenced by: '<S149>/Integrator'
                                      */
  real_T Filter_gainval_g;             /* Computed Parameter: Filter_gainval_g
                                        * Referenced by: '<S144>/Filter'
                                        */
  real_T Dctnotch_P1_Size_f[2];        /* Computed Parameter: Dctnotch_P1_Size_f
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P1_p;                /* Expression: f_num
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P2_Size_j[2];        /* Computed Parameter: Dctnotch_P2_Size_j
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P2_i;                /* Expression: b_num
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P3_Size_p[2];        /* Computed Parameter: Dctnotch_P3_Size_p
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P3_n;                /* Expression: f_den
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P4_Size_i[2];        /* Computed Parameter: Dctnotch_P4_Size_i
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P4_a;                /* Expression: b_den
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P5_Size_n[2];        /* Computed Parameter: Dctnotch_P5_Size_n
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T Dctnotch_P5_j;                /* Expression: 0.001
                                        * Referenced by: '<S7>/Dctnotch'
                                        */
  real_T TSamp_WtEt_g;                 /* Computed Parameter: TSamp_WtEt_g
                                        * Referenced by: '<S12>/TSamp'
                                        */
  real_T Gain8_Gain;                   /* Expression: .1
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real_T Gain6_Gain;                   /* Expression: .01
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real_T TSamp_WtEt_b;                 /* Computed Parameter: TSamp_WtEt_b
                                        * Referenced by: '<S13>/TSamp'
                                        */
  real_T Gain7_Gain;                   /* Expression: .009
                                        * Referenced by: '<S1>/Gain7'
                                        */
  real_T TSamp_WtEt_o;                 /* Computed Parameter: TSamp_WtEt_o
                                        * Referenced by: '<S10>/TSamp'
                                        */
  real_T Gain5_Gain;                   /* Expression: .15
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T Gain3_Gain;                   /* Expression: .01
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T TSamp_WtEt_na;                /* Computed Parameter: TSamp_WtEt_na
                                        * Referenced by: '<S11>/TSamp'
                                        */
  real_T Gain4_Gain;                   /* Expression: .009
                                        * Referenced by: '<S1>/Gain4'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: -10
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T Saturation_LowerSat;          /* Expression: -100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T Object1_Amp;                  /* Expression: 1
                                        * Referenced by: '<S15>/Object1'
                                        */
  real_T Object1_Period;               /* Computed Parameter: Object1_Period
                                        * Referenced by: '<S15>/Object1'
                                        */
  real_T Object1_Duty;                 /* Computed Parameter: Object1_Duty
                                        * Referenced by: '<S15>/Object1'
                                        */
  real_T Object1_PhaseDelay;           /* Expression: 0
                                        * Referenced by: '<S15>/Object1'
                                        */
  real_T AddConstant_Bias;             /* Expression: 1
                                        * Referenced by: '<S15>/Add Constant'
                                        */
  real_T Plot_Value;                   /* Expression: 0
                                        * Referenced by: '<S15>/Plot'
                                        */
  real_T Stop_Value;                   /* Expression: 0
                                        * Referenced by: '<S15>/Stop'
                                        */
  real_T Constant1_Value_f;            /* Expression: 5
                                        * Referenced by: '<S176>/Constant1'
                                        */
  real_T Gain5_Gain_e;                 /* Expression: 0.25
                                        * Referenced by: '<S176>/Gain5'
                                        */
  real_T HomingRunningSwitch2_Threshold;/* Expression: 50
                                         * Referenced by: '<S184>/Homing Running Switch2'
                                         */
  real_T HomingRunningSwitch1_Threshold;/* Expression: 2.5
                                         * Referenced by: '<S184>/Homing Running Switch1'
                                         */
  real_T Saturation_UpperSat_i;        /* Expression: 0.7
                                        * Referenced by: '<S185>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: -0.7
                                        * Referenced by: '<S185>/Saturation'
                                        */
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S185>/Homing Running Switch'
                                        */
  real_T HomingRunningSwitch_Threshold_o;/* Expression: 0.5
                                          * Referenced by: '<S186>/Homing Running Switch'
                                          */
  real_T HomingRunningSwitch_Threshold_j;/* Expression: 0.5
                                          * Referenced by: '<S187>/Homing Running Switch'
                                          */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S181>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: portid
                                        * Referenced by: '<S181>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S181>/S-Function'
                                        */
  real_T SFunction_P2;                 /* Expression: ectimeout
                                        * Referenced by: '<S181>/S-Function'
                                        */
  real_T ec_Ebox_P1_Size[2];           /* Computed Parameter: ec_Ebox_P1_Size
                                        * Referenced by: '<S178>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1;                   /* Expression: link_id
                                        * Referenced by: '<S178>/ec_Ebox'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 1/4000*9/150*2*pi
                                        * Referenced by: '<S176>/Gain'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: -1/4000*9/100*2*pi
                                        * Referenced by: '<S176>/Gain1'
                                        */
  real_T ec_Ebox_P1_Size_d[2];         /* Computed Parameter: ec_Ebox_P1_Size_d
                                        * Referenced by: '<S179>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1_e;                 /* Expression: link_id
                                        * Referenced by: '<S179>/ec_Ebox'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: 1/4000*9/100*2*pi
                                        * Referenced by: '<S176>/Gain2'
                                        */
  real_T ec_Ebox_P1_Size_du[2];        /* Computed Parameter: ec_Ebox_P1_Size_du
                                        * Referenced by: '<S180>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1_i;                 /* Expression: link_id
                                        * Referenced by: '<S180>/ec_Ebox'
                                        */
  real_T HomingRunningSwitch_Threshold_d;/* Expression: 2
                                          * Referenced by: '<S176>/Homing Running Switch'
                                          */
  real_T Gain3_Gain_j;                 /* Expression: -1/16000*2*pi*2.07*10
                                        * Referenced by: '<S176>/Gain3'
                                        */
  real_T Gain6_Gain_i;                 /* Expression: -0.1
                                        * Referenced by: '<S176>/Gain6'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S183>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S185>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S185>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_f3;           /* Expression: 0
                                        * Referenced by: '<S197>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_b;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
                           * Referenced by: '<S197>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_g;             /* Expression: -0.1
                                        * Referenced by: '<S185>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S177>/Unit Delay'
                                        */
  real_T set_robot_calibration_r_Value;/* Expression: 1.2358
                                        * Referenced by: '<S177>/set_robot_calibration_r'
                                        */
  real_T DiscreteTimeIntegrator_gainva_a;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_a
                           * Referenced by: '<S186>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_i;  /* Expression: 0
                                        * Referenced by: '<S186>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S203>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_i;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                           * Referenced by: '<S203>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_n;             /* Expression: -0.1
                                        * Referenced by: '<S186>/Constant'
                                        */
  real_T set_robot_calibration_x_Value;/* Expression: 0.6
                                        * Referenced by: '<S177>/set_robot_calibration_x'
                                        */
  real_T DiscreteTimeIntegrator_gainv_ip;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainv_ip
                           * Referenced by: '<S187>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_d;  /* Expression: 0
                                        * Referenced by: '<S187>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S213>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                           * Referenced by: '<S213>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_p;             /* Expression: 0.1
                                        * Referenced by: '<S187>/Constant'
                                        */
  real_T set_robot_calibration_z_Value;/* Expression: -0.4036
                                        * Referenced by: '<S177>/set_robot_calibration_z'
                                        */
  real_T EnableVentiel_Value[8];       /* Expression: [1,0,0,0,0,0,0,0]
                                        * Referenced by: '<S176>/Enable//Ventiel'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1/100
                                        * Referenced by: '<S178>/Gain'
                                        */
  real_T Gain_Gain_ph;                 /* Expression: 25
                                        * Referenced by: '<S194>/Gain'
                                        */
  real_T Dctintegrator_P1_Size_f[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_f
                                   * Referenced by: '<S194>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_g;           /* Expression: f_num
                                        * Referenced by: '<S194>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_j[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_j
                                   * Referenced by: '<S194>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_b;           /* Expression: 0.001
                                        * Referenced by: '<S194>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_p[2];    /* Computed Parameter: Dctleadlag_P1_Size_p
                                      * Referenced by: '<S194>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_c;              /* Expression: f_num
                                        * Referenced by: '<S194>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_p[2];    /* Computed Parameter: Dctleadlag_P2_Size_p
                                      * Referenced by: '<S194>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_i;              /* Expression: f_den
                                        * Referenced by: '<S194>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_c[2];    /* Computed Parameter: Dctleadlag_P3_Size_c
                                      * Referenced by: '<S194>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_m;              /* Expression: 0.001
                                        * Referenced by: '<S194>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_f[2];  /* Computed Parameter: Dct1lowpass_P1_Size_f
                                     * Referenced by: '<S194>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_m;             /* Expression: f_den
                                        * Referenced by: '<S194>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_g[2];  /* Computed Parameter: Dct1lowpass_P2_Size_g
                                     * Referenced by: '<S194>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_l;             /* Expression: 0.001
                                        * Referenced by: '<S194>/Dct1lowpass'
                                        */
  real_T Gain_Gain_ju;                 /* Expression: 25
                                        * Referenced by: '<S195>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_n[2];    /* Computed Parameter: Dctleadlag_P1_Size_n
                                      * Referenced by: '<S195>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_p;              /* Expression: f_num
                                        * Referenced by: '<S195>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_b[2];    /* Computed Parameter: Dctleadlag_P2_Size_b
                                      * Referenced by: '<S195>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_o;              /* Expression: f_den
                                        * Referenced by: '<S195>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_d[2];    /* Computed Parameter: Dctleadlag_P3_Size_d
                                      * Referenced by: '<S195>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_c;              /* Expression: 0.001
                                        * Referenced by: '<S195>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_p[2];  /* Computed Parameter: Dct1lowpass_P1_Size_p
                                     * Referenced by: '<S195>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_d;             /* Expression: f_den
                                        * Referenced by: '<S195>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_gi[2];/* Computed Parameter: Dct1lowpass_P2_Size_gi
                                    * Referenced by: '<S195>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_n;             /* Expression: 0.001
                                        * Referenced by: '<S195>/Dct1lowpass'
                                        */
  real_T Voltagemiddle_Value;          /* Expression: 2.5
                                        * Referenced by: '<S176>/Voltage middle'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 20
                                        * Referenced by: '<S201>/Gain1'
                                        */
  real_T Dctintegrator_P1_Size_c[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_c
                                   * Referenced by: '<S201>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_h;           /* Expression: f_num
                                        * Referenced by: '<S201>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_ja[2];
                                 /* Computed Parameter: Dctintegrator_P2_Size_ja
                                  * Referenced by: '<S201>/Dctintegrator'
                                  */
  real_T Dctintegrator_P2_c;           /* Expression: 0.001
                                        * Referenced by: '<S201>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_ph[2];  /* Computed Parameter: Dctleadlag_P1_Size_ph
                                     * Referenced by: '<S201>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_f;              /* Expression: f_num
                                        * Referenced by: '<S201>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_l[2];    /* Computed Parameter: Dctleadlag_P2_Size_l
                                      * Referenced by: '<S201>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_p;              /* Expression: f_den
                                        * Referenced by: '<S201>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_j[2];    /* Computed Parameter: Dctleadlag_P3_Size_j
                                      * Referenced by: '<S201>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_f;              /* Expression: 0.001
                                        * Referenced by: '<S201>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m[2];  /* Computed Parameter: Dct1lowpass_P1_Size_m
                                     * Referenced by: '<S201>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_do;            /* Expression: f_den
                                        * Referenced by: '<S201>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_i[2];  /* Computed Parameter: Dct1lowpass_P2_Size_i
                                     * Referenced by: '<S201>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_nr;            /* Expression: 0.001
                                        * Referenced by: '<S201>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 20
                                        * Referenced by: '<S202>/Gain1'
                                        */
  real_T Dctleadlag_P1_Size_b[2];    /* Computed Parameter: Dctleadlag_P1_Size_b
                                      * Referenced by: '<S202>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_j;              /* Expression: f_num
                                        * Referenced by: '<S202>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_o[2];    /* Computed Parameter: Dctleadlag_P2_Size_o
                                      * Referenced by: '<S202>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_b;              /* Expression: f_den
                                        * Referenced by: '<S202>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_a[2];    /* Computed Parameter: Dctleadlag_P3_Size_a
                                      * Referenced by: '<S202>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_g;              /* Expression: 0.001
                                        * Referenced by: '<S202>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_i[2];  /* Computed Parameter: Dct1lowpass_P1_Size_i
                                     * Referenced by: '<S202>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_db;            /* Expression: f_den
                                        * Referenced by: '<S202>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_j[2];  /* Computed Parameter: Dct1lowpass_P2_Size_j
                                     * Referenced by: '<S202>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_ns;            /* Expression: 0.001
                                        * Referenced by: '<S202>/Dct1lowpass'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 5
                                        * Referenced by: '<S176>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S176>/Saturation'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 10
                                        * Referenced by: '<S178>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -10
                                        * Referenced by: '<S178>/Saturation'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 1/100
                                        * Referenced by: '<S179>/Gain'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 25
                                        * Referenced by: '<S210>/Gain'
                                        */
  real_T Dctintegrator_P1_Size_j[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_j
                                   * Referenced by: '<S210>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_d;           /* Expression: f_num
                                        * Referenced by: '<S210>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_n[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_n
                                   * Referenced by: '<S210>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_f;           /* Expression: 0.001
                                        * Referenced by: '<S210>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_o[2];    /* Computed Parameter: Dctleadlag_P1_Size_o
                                      * Referenced by: '<S210>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_g;              /* Expression: f_num
                                        * Referenced by: '<S210>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_o4[2];  /* Computed Parameter: Dctleadlag_P2_Size_o4
                                     * Referenced by: '<S210>/Dctleadlag'
                                     */
  real_T Dctleadlag_P2_e;              /* Expression: f_den
                                        * Referenced by: '<S210>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_l[2];    /* Computed Parameter: Dctleadlag_P3_Size_l
                                      * Referenced by: '<S210>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_mc;             /* Expression: 0.001
                                        * Referenced by: '<S210>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_g[2];  /* Computed Parameter: Dct1lowpass_P1_Size_g
                                     * Referenced by: '<S210>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_a;             /* Expression: f_den
                                        * Referenced by: '<S210>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_p[2];  /* Computed Parameter: Dct1lowpass_P2_Size_p
                                     * Referenced by: '<S210>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_o;             /* Expression: 0.001
                                        * Referenced by: '<S210>/Dct1lowpass'
                                        */
  real_T Gain_Gain_pq;                 /* Expression: 30
                                        * Referenced by: '<S211>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_f[2];    /* Computed Parameter: Dctleadlag_P1_Size_f
                                      * Referenced by: '<S211>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_h;              /* Expression: f_num
                                        * Referenced by: '<S211>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_d[2];    /* Computed Parameter: Dctleadlag_P2_Size_d
                                      * Referenced by: '<S211>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_l;              /* Expression: f_den
                                        * Referenced by: '<S211>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_p[2];    /* Computed Parameter: Dctleadlag_P3_Size_p
                                      * Referenced by: '<S211>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_l;              /* Expression: 0.001
                                        * Referenced by: '<S211>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_d[2];  /* Computed Parameter: Dct1lowpass_P1_Size_d
                                     * Referenced by: '<S211>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_g;             /* Expression: f_den
                                        * Referenced by: '<S211>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_k[2];  /* Computed Parameter: Dct1lowpass_P2_Size_k
                                     * Referenced by: '<S211>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_f;             /* Expression: 0.001
                                        * Referenced by: '<S211>/Dct1lowpass'
                                        */
  real_T DiscreteTimeIntegrator_gainva_c;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_c
                           * Referenced by: '<S188>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_f;  /* Expression: 0
                                        * Referenced by: '<S188>/Discrete-Time Integrator'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 10*2.5/500
                                        * Referenced by: '<S220>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size_e[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_e
                                  * Referenced by: '<S220>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_e;          /* Expression: f_num
                                        * Referenced by: '<S220>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_i[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_i
                                  * Referenced by: '<S220>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_a;          /* Expression: 0.001
                                        * Referenced by: '<S220>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size_ph[2];/* Computed Parameter: Dct1lowpass_P1_Size_ph
                                    * Referenced by: '<S220>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_j;             /* Expression: f_den
                                        * Referenced by: '<S220>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_p0[2];/* Computed Parameter: Dct1lowpass_P2_Size_p0
                                    * Referenced by: '<S220>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_p;             /* Expression: 0.001
                                        * Referenced by: '<S220>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size_pu[2];  /* Computed Parameter: Dctleadlag_P1_Size_pu
                                     * Referenced by: '<S220>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_je;             /* Expression: f_num
                                        * Referenced by: '<S220>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_n[2];    /* Computed Parameter: Dctleadlag_P2_Size_n
                                      * Referenced by: '<S220>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_m;              /* Expression: f_den
                                        * Referenced by: '<S220>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_f[2];    /* Computed Parameter: Dctleadlag_P3_Size_f
                                      * Referenced by: '<S220>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_i;              /* Expression: 0.001
                                        * Referenced by: '<S220>/Dctleadlag'
                                        */
  real_T HomingRunningSwitch_Threshold_c;/* Expression: 0.5
                                          * Referenced by: '<S188>/Homing Running Switch'
                                          */
  real_T Gain4_Gain_b;                 /* Expression: 1
                                        * Referenced by: '<S176>/Gain4'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S176>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S176>/Saturation1'
                                        */
  real_T Saturation_UpperSat_e;        /* Expression: 10
                                        * Referenced by: '<S179>/Saturation'
                                        */
  real_T Saturation_LowerSat_o;        /* Expression: -10
                                        * Referenced by: '<S179>/Saturation'
                                        */
  real_T Gain_Gain_na;                 /* Expression: 1/100
                                        * Referenced by: '<S180>/Gain'
                                        */
  real_T HomingRunningSwitch1_Threshol_k;/* Expression: 0.5
                                          * Referenced by: '<S176>/Homing Running Switch1'
                                          */
  real_T Saturation2_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S176>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S176>/Saturation2'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 10
                                        * Referenced by: '<S180>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: -10
                                        * Referenced by: '<S180>/Saturation'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S177>/Unit Delay1'
                                        */
  real_T HomingRunningSwitch_Threshold_f;/* Expression: 0.5
                                          * Referenced by: '<S184>/Homing Running Switch'
                                          */
  real_T Gain_Gain_lr;                 /* Expression: 3
                                        * Referenced by: '<S177>/Gain'
                                        */
  real_T ResetEncoderR_P1_Size[2];  /* Computed Parameter: ResetEncoderR_P1_Size
                                     * Referenced by: '<S185>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P1;             /* Expression: link_id
                                        * Referenced by: '<S185>/Reset EncoderR'
                                        */
  real_T ResetEncoderR_P2_Size[2];  /* Computed Parameter: ResetEncoderR_P2_Size
                                     * Referenced by: '<S185>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P2;             /* Expression: chan_id
                                        * Referenced by: '<S185>/Reset EncoderR'
                                        */
  real_T LimitSpeed_RisingLim;         /* Expression: 0.6
                                        * Referenced by: '<S197>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Expression: -0.6
                                        * Referenced by: '<S197>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S197>/Limit Speed'
                                        */
  real_T TSamp_WtEt_a;                 /* Computed Parameter: TSamp_WtEt_a
                                        * Referenced by: '<S200>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Expression: 0.8
                                        * Referenced by: '<S197>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Expression: -0.8
                                        * Referenced by: '<S197>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S197>/Limit Acceleration'
                                        */
  real_T ResetEncoderX_P1_Size[2];  /* Computed Parameter: ResetEncoderX_P1_Size
                                     * Referenced by: '<S186>/Reset EncoderX'
                                     */
  real_T ResetEncoderX_P1;             /* Expression: link_id
                                        * Referenced by: '<S186>/Reset EncoderX'
                                        */
  real_T ResetEncoderX_P2_Size[2];  /* Computed Parameter: ResetEncoderX_P2_Size
                                     * Referenced by: '<S186>/Reset EncoderX'
                                     */
  real_T ResetEncoderX_P2;             /* Expression: chan_id
                                        * Referenced by: '<S186>/Reset EncoderX'
                                        */
  real_T LimitSpeed_RisingLim_d;       /* Expression: 0.4
                                        * Referenced by: '<S203>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_j;      /* Expression: -0.4
                                        * Referenced by: '<S203>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_g;              /* Expression: 0
                                        * Referenced by: '<S203>/Limit Speed'
                                        */
  real_T TSamp_WtEt_h;                 /* Computed Parameter: TSamp_WtEt_h
                                        * Referenced by: '<S209>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_c;/* Expression: 0.5
                                        * Referenced by: '<S203>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_m;/* Expression: -0.5
                                         * Referenced by: '<S203>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_f;       /* Expression: 0
                                        * Referenced by: '<S203>/Limit Acceleration'
                                        */
  real_T ResetEncoderX_P1_Size_k[2];
                                  /* Computed Parameter: ResetEncoderX_P1_Size_k
                                   * Referenced by: '<S187>/Reset EncoderX'
                                   */
  real_T ResetEncoderX_P1_j;           /* Expression: link_id
                                        * Referenced by: '<S187>/Reset EncoderX'
                                        */
  real_T ResetEncoderX_P2_Size_k[2];
                                  /* Computed Parameter: ResetEncoderX_P2_Size_k
                                   * Referenced by: '<S187>/Reset EncoderX'
                                   */
  real_T ResetEncoderX_P2_j;           /* Expression: chan_id
                                        * Referenced by: '<S187>/Reset EncoderX'
                                        */
  real_T LimitSpeed_RisingLim_m;       /* Expression: 0.2
                                        * Referenced by: '<S213>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_jw;     /* Expression: -0.2
                                        * Referenced by: '<S213>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_j;              /* Expression: 0
                                        * Referenced by: '<S213>/Limit Speed'
                                        */
  real_T TSamp_WtEt_i;                 /* Computed Parameter: TSamp_WtEt_i
                                        * Referenced by: '<S219>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_j;/* Expression: 0.5
                                        * Referenced by: '<S213>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_h;/* Expression: -0.5
                                         * Referenced by: '<S213>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_j;       /* Expression: 0
                                        * Referenced by: '<S213>/Limit Acceleration'
                                        */
  real_T ResetEncoderConv_P1_Size[2];
                                 /* Computed Parameter: ResetEncoderConv_P1_Size
                                  * Referenced by: '<S188>/Reset EncoderConv'
                                  */
  real_T ResetEncoderConv_P1;          /* Expression: link_id
                                        * Referenced by: '<S188>/Reset EncoderConv'
                                        */
  real_T ResetEncoderConv_P2_Size[2];
                                 /* Computed Parameter: ResetEncoderConv_P2_Size
                                  * Referenced by: '<S188>/Reset EncoderConv'
                                  */
  real_T ResetEncoderConv_P2;          /* Expression: chan_id
                                        * Referenced by: '<S188>/Reset EncoderConv'
                                        */
  char_T LEDRing_Y0[256];              /* Computed Parameter: LEDRing_Y0
                                        * Referenced by: '<S1>/LED Ring [-]'
                                        */
  char_T Colorsetwithstringblackorwhite_[256];
                          /* Computed Parameter: Colorsetwithstringblackorwhite_
                           * Referenced by: '<S15>/Color; set with string; black or white'
                           */
  char_T Colorspecifiedin6hexdigitsrrggb[256];
                          /* Computed Parameter: Colorspecifiedin6hexdigitsrrggb
                           * Referenced by: '<S15>/Color; specified in 6 hex digits, rrggbb'
                           */
  char_T StringConstant_String[256];/* Computed Parameter: StringConstant_String
                                     * Referenced by: '<S166>/String Constant'
                                     */
  char_T StringConstant1_String[256];
                                   /* Computed Parameter: StringConstant1_String
                                    * Referenced by: '<S166>/String Constant1'
                                    */
  char_T StringConstant3_String[256];
                                   /* Computed Parameter: StringConstant3_String
                                    * Referenced by: '<S193>/String Constant3'
                                    */
  char_T StringConstant4_String[256];
                                   /* Computed Parameter: StringConstant4_String
                                    * Referenced by: '<S191>/String Constant4'
                                    */
  char_T StringConstant1_String_k[256];
                                 /* Computed Parameter: StringConstant1_String_k
                                  * Referenced by: '<S191>/String Constant1'
                                  */
  char_T ReadyGreen_String[256];       /* Computed Parameter: ReadyGreen_String
                                        * Referenced by: '<S177>/Ready Green'
                                        */
  char_T AirbagRed_String[256];        /* Computed Parameter: AirbagRed_String
                                        * Referenced by: '<S177>/Airbag Red'
                                        */
  char_T HomingOrange_String[256];    /* Computed Parameter: HomingOrange_String
                                       * Referenced by: '<S177>/Homing Orange'
                                       */
  char_T Delay_InitialCondition[256];
                                   /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S190>/Delay'
                                    */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S4>/Manual Switch'
                               */
  uint8_T ManualSwitch_CurrentSetting_d;
                            /* Computed Parameter: ManualSwitch_CurrentSetting_d
                             * Referenced by: '<S7>/Manual Switch'
                             */
  uint8_T ManualSwitch_CurrentSetting_e;
                            /* Computed Parameter: ManualSwitch_CurrentSetting_e
                             * Referenced by: '<S6>/Manual Switch'
                             */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S15>/Manual Switch1'
                              */
  uint8_T Constant1_Value_b;           /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S192>/Constant1'
                                        */
  uint8_T Constant_Value_c;            /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S193>/Constant'
                                        */
  P_IfActionSubsystem_robotarm__T IfActionSubsystem5;/* '<S166>/If Action Subsystem5' */
  P_IfActionSubsystem_robotarm__T IfActionSubsystem4;/* '<S166>/If Action Subsystem4' */
  P_IfActionSubsystem_robotarm__T IfActionSubsystem6;/* '<S166>/If Action Subsystem6' */
  P_IfActionSubsystem_robotarm__T IfActionSubsystem3;/* '<S166>/If Action Subsystem3' */
  P_IfActionSubsystem_robotarm__T IfActionSubsystem2;/* '<S166>/If Action Subsystem2' */
  P_IfActionSubsystem_robotarm__T IfActionSubsystem1;/* '<S166>/If Action Subsystem1' */
  P_IfActionSubsystem_robotarm__T IfActionSubsystem;/* '<S166>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_robotarm_student_2021a_Ebox_T {
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
    SimStruct childSFunctions[38];
    SimStruct *childSFunctionPtrs[38];
    struct _ssBlkInfo2 blkInfo2[38];
    struct _ssSFcnModelMethods2 methods2[38];
    struct _ssSFcnModelMethods3 methods3[38];
    struct _ssSFcnModelMethods4 methods4[38];
    struct _ssStatesInfo2 statesInfo2[38];
    ssPeriodicStatesInfo periodicStatesInfo[38];
    struct _ssPortInfo2 inputOutputPortInfo2[38];
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
    } Sfcn3;

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
    } Sfcn4;

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
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[5];
      mxArray *params[5];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      uint_T attribs[1];
      mxArray *params[1];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
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
      uint_T attribs[2];
      mxArray *params[2];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
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
      uint_T attribs[3];
      mxArray *params[3];
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
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;

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
    } Sfcn27;

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
    } Sfcn28;

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
    } Sfcn29;

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
    } Sfcn30;

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
    } Sfcn31;

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
    } Sfcn32;

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
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn37;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

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
extern P_robotarm_student_2021a_Ebox_T robotarm_student_2021a_Ebox_P;

/* Block signals (default storage) */
extern B_robotarm_student_2021a_Ebox_T robotarm_student_2021a_Ebox_B;

/* Block states (default storage) */
extern DW_robotarm_student_2021a_Ebox_T robotarm_student_2021a_Ebox_DW;

/* External data declarations for dependent source files */
extern const real_T robotarm_student_2021a_Ebox_RGND;/* real_T ground */

/* Model entry point functions */
extern void robotarm_student_2021a_Ebox_initialize(void);
extern void robotarm_student_2021a_Ebox_step(void);
extern void robotarm_student_2021a_Ebox_terminate(void);

/* Real-time Model object */
extern RT_MODEL_robotarm_student_2021a_Ebox_T *const
  robotarm_student_2021a_Ebox_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant1' : Unused code path elimination
 * Block '<S1>/Constant2' : Unused code path elimination
 * Block '<S8>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/Data Type Duplicate' : Unused code path elimination
 * Block '<S1>/Manual Switch' : Unused code path elimination
 * Block '<S15>/Object' : Unused code path elimination
 * Block '<S200>/Data Type Duplicate' : Unused code path elimination
 * Block '<S209>/Data Type Duplicate' : Unused code path elimination
 * Block '<S219>/Data Type Duplicate' : Unused code path elimination
 * Block '<S176>/Signal Conversion' : Eliminate redundant signal conversion block
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
 * '<Root>' : 'robotarm_student_2021a_Ebox'
 * '<S1>'   : 'robotarm_student_2021a_Ebox/Controller'
 * '<S2>'   : 'robotarm_student_2021a_Ebox/RobotArm'
 * '<S3>'   : 'robotarm_student_2021a_Ebox/Controller/Controller Conveyor'
 * '<S4>'   : 'robotarm_student_2021a_Ebox/Controller/Controller R'
 * '<S5>'   : 'robotarm_student_2021a_Ebox/Controller/Controller Vacuum'
 * '<S6>'   : 'robotarm_student_2021a_Ebox/Controller/Controller X'
 * '<S7>'   : 'robotarm_student_2021a_Ebox/Controller/Controller Z'
 * '<S8>'   : 'robotarm_student_2021a_Ebox/Controller/Discrete Derivative'
 * '<S9>'   : 'robotarm_student_2021a_Ebox/Controller/Discrete Derivative1'
 * '<S10>'  : 'robotarm_student_2021a_Ebox/Controller/Discrete Derivative2'
 * '<S11>'  : 'robotarm_student_2021a_Ebox/Controller/Discrete Derivative3'
 * '<S12>'  : 'robotarm_student_2021a_Ebox/Controller/Discrete Derivative4'
 * '<S13>'  : 'robotarm_student_2021a_Ebox/Controller/Discrete Derivative5'
 * '<S14>'  : 'robotarm_student_2021a_Ebox/Controller/Stateflow '
 * '<S15>'  : 'robotarm_student_2021a_Ebox/Controller/Subsystem'
 * '<S16>'  : 'robotarm_student_2021a_Ebox/Controller/quintic trajectory time3'
 * '<S17>'  : 'robotarm_student_2021a_Ebox/Controller/quintic trajectory time4'
 * '<S18>'  : 'robotarm_student_2021a_Ebox/Controller/quintic trajectory time5'
 * '<S19>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller'
 * '<S20>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Anti-windup'
 * '<S21>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/D Gain'
 * '<S22>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Filter'
 * '<S23>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Filter ICs'
 * '<S24>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/I Gain'
 * '<S25>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Ideal P Gain'
 * '<S26>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Ideal P Gain Fdbk'
 * '<S27>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Integrator'
 * '<S28>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Integrator ICs'
 * '<S29>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/N Copy'
 * '<S30>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/N Gain'
 * '<S31>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/P Copy'
 * '<S32>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Parallel P Gain'
 * '<S33>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Reset Signal'
 * '<S34>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Saturation'
 * '<S35>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Saturation Fdbk'
 * '<S36>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Sum'
 * '<S37>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Sum Fdbk'
 * '<S38>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tracking Mode'
 * '<S39>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tracking Mode Sum'
 * '<S40>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tsamp - Integral'
 * '<S41>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tsamp - Ngain'
 * '<S42>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/postSat Signal'
 * '<S43>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/preSat Signal'
 * '<S44>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Anti-windup/Passthrough'
 * '<S45>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/D Gain/Internal Parameters'
 * '<S46>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S47>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S48>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/I Gain/Internal Parameters'
 * '<S49>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Ideal P Gain/Passthrough'
 * '<S50>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S51>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Integrator/Discrete'
 * '<S52>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Integrator ICs/Internal IC'
 * '<S53>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/N Copy/Disabled'
 * '<S54>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/N Gain/Internal Parameters'
 * '<S55>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/P Copy/Disabled'
 * '<S56>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S57>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Reset Signal/Disabled'
 * '<S58>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Saturation/Passthrough'
 * '<S59>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Saturation Fdbk/Disabled'
 * '<S60>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Sum/Sum_PID'
 * '<S61>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Sum Fdbk/Disabled'
 * '<S62>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tracking Mode/Disabled'
 * '<S63>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S64>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tsamp - Integral/Passthrough'
 * '<S65>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S66>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/postSat Signal/Forward_Path'
 * '<S67>'  : 'robotarm_student_2021a_Ebox/Controller/Controller R/PID Controller/preSat Signal/Forward_Path'
 * '<S68>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1'
 * '<S69>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Anti-windup'
 * '<S70>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/D Gain'
 * '<S71>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Filter'
 * '<S72>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Filter ICs'
 * '<S73>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/I Gain'
 * '<S74>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Ideal P Gain'
 * '<S75>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Ideal P Gain Fdbk'
 * '<S76>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Integrator'
 * '<S77>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Integrator ICs'
 * '<S78>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/N Copy'
 * '<S79>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/N Gain'
 * '<S80>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/P Copy'
 * '<S81>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Parallel P Gain'
 * '<S82>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Reset Signal'
 * '<S83>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Saturation'
 * '<S84>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Saturation Fdbk'
 * '<S85>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Sum'
 * '<S86>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Sum Fdbk'
 * '<S87>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tracking Mode'
 * '<S88>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tracking Mode Sum'
 * '<S89>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tsamp - Integral'
 * '<S90>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tsamp - Ngain'
 * '<S91>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/postSat Signal'
 * '<S92>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/preSat Signal'
 * '<S93>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Anti-windup/Passthrough'
 * '<S94>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/D Gain/Internal Parameters'
 * '<S95>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S96>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S97>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/I Gain/Internal Parameters'
 * '<S98>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Ideal P Gain/Passthrough'
 * '<S99>'  : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S100>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Integrator/Discrete'
 * '<S101>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Integrator ICs/Internal IC'
 * '<S102>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/N Copy/Disabled'
 * '<S103>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/N Gain/Internal Parameters'
 * '<S104>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/P Copy/Disabled'
 * '<S105>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S106>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Reset Signal/Disabled'
 * '<S107>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Saturation/Passthrough'
 * '<S108>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Saturation Fdbk/Disabled'
 * '<S109>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Sum/Sum_PID'
 * '<S110>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Sum Fdbk/Disabled'
 * '<S111>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tracking Mode/Disabled'
 * '<S112>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S113>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tsamp - Integral/Passthrough'
 * '<S114>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/Tsamp - Ngain/Passthrough'
 * '<S115>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/postSat Signal/Forward_Path'
 * '<S116>' : 'robotarm_student_2021a_Ebox/Controller/Controller X/PID Controller1/preSat Signal/Forward_Path'
 * '<S117>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller'
 * '<S118>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Anti-windup'
 * '<S119>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/D Gain'
 * '<S120>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Filter'
 * '<S121>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Filter ICs'
 * '<S122>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/I Gain'
 * '<S123>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Ideal P Gain'
 * '<S124>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Ideal P Gain Fdbk'
 * '<S125>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Integrator'
 * '<S126>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Integrator ICs'
 * '<S127>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/N Copy'
 * '<S128>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/N Gain'
 * '<S129>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/P Copy'
 * '<S130>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Parallel P Gain'
 * '<S131>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Reset Signal'
 * '<S132>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Saturation'
 * '<S133>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Saturation Fdbk'
 * '<S134>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Sum'
 * '<S135>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Sum Fdbk'
 * '<S136>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tracking Mode'
 * '<S137>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tracking Mode Sum'
 * '<S138>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tsamp - Integral'
 * '<S139>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tsamp - Ngain'
 * '<S140>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/postSat Signal'
 * '<S141>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/preSat Signal'
 * '<S142>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Anti-windup/Passthrough'
 * '<S143>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/D Gain/Internal Parameters'
 * '<S144>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S145>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S146>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/I Gain/Internal Parameters'
 * '<S147>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Ideal P Gain/Passthrough'
 * '<S148>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S149>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Integrator/Discrete'
 * '<S150>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Integrator ICs/Internal IC'
 * '<S151>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/N Copy/Disabled'
 * '<S152>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/N Gain/Internal Parameters'
 * '<S153>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/P Copy/Disabled'
 * '<S154>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S155>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Reset Signal/Disabled'
 * '<S156>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Saturation/Passthrough'
 * '<S157>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Saturation Fdbk/Disabled'
 * '<S158>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Sum/Sum_PID'
 * '<S159>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Sum Fdbk/Disabled'
 * '<S160>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tracking Mode/Disabled'
 * '<S161>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S162>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tsamp - Integral/Passthrough'
 * '<S163>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S164>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/postSat Signal/Forward_Path'
 * '<S165>' : 'robotarm_student_2021a_Ebox/Controller/Controller Z/PID Controller/preSat Signal/Forward_Path'
 * '<S166>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera'
 * '<S167>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/Detect Change'
 * '<S168>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/Enabled Subsystem'
 * '<S169>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/If Action Subsystem'
 * '<S170>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/If Action Subsystem1'
 * '<S171>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/If Action Subsystem2'
 * '<S172>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/If Action Subsystem3'
 * '<S173>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/If Action Subsystem4'
 * '<S174>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/If Action Subsystem5'
 * '<S175>' : 'robotarm_student_2021a_Ebox/Controller/Subsystem/Camera/If Action Subsystem6'
 * '<S176>' : 'robotarm_student_2021a_Ebox/RobotArm/IO'
 * '<S177>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor'
 * '<S178>' : 'robotarm_student_2021a_Ebox/RobotArm/IO/Ebox'
 * '<S179>' : 'robotarm_student_2021a_Ebox/RobotArm/IO/Ebox1'
 * '<S180>' : 'robotarm_student_2021a_Ebox/RobotArm/IO/Ebox2'
 * '<S181>' : 'robotarm_student_2021a_Ebox/RobotArm/IO/Supervisor'
 * '<S182>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Compare To Constant'
 * '<S183>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/HomingBusyCheck'
 * '<S184>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Subsystem'
 * '<S185>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R'
 * '<S186>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X'
 * '<S187>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z'
 * '<S188>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Conveyor'
 * '<S189>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Subsystem/LED Ring'
 * '<S190>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem'
 * '<S191>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3'
 * '<S192>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem'
 * '<S193>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem1'
 * '<S194>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/ '
 * '<S195>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/   '
 * '<S196>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/Angle2Z'
 * '<S197>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S198>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/Selector1'
 * '<S199>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S200>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S201>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Controller X1'
 * '<S202>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Controller X2'
 * '<S203>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S204>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Selector'
 * '<S205>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Selector1'
 * '<S206>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Selector2'
 * '<S207>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Selector3'
 * '<S208>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Supervisor'
 * '<S209>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S210>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/    '
 * '<S211>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/     '
 * '<S212>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S213>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S214>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Selector'
 * '<S215>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S216>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S217>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S218>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S219>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 * '<S220>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Conveyor/Controller Conveyor'
 * '<S221>' : 'robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Conveyor/Supervisor'
 */
#endif                           /* RTW_HEADER_robotarm_student_2021a_Ebox_h_ */
