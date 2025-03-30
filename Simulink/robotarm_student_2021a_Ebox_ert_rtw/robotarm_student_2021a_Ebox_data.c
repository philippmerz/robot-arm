/*
 * robotarm_student_2021a_Ebox_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ebox".
 *
 * Model version              : 2.117
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 28 12:22:44 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "robotarm_student_2021a_Ebox.h"
#include "robotarm_student_2021a_Ebox_private.h"

/* Block parameters (default storage) */
P_robotarm_student_2021a_Ebox_T robotarm_student_2021a_Ebox_P = {
  /* Mask Parameter: PIDController_D
   * Referenced by: '<S45>/Derivative Gain'
   */
  0.3,

  /* Mask Parameter: PIDController1_D
   * Referenced by: '<S94>/Derivative Gain'
   */
  0.2,

  /* Mask Parameter: PIDController_D_l
   * Referenced by: '<S143>/Derivative Gain'
   */
  0.1,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S48>/Integral Gain'
   */
  2.0,

  /* Mask Parameter: PIDController1_I
   * Referenced by: '<S97>/Integral Gain'
   */
  0.1,

  /* Mask Parameter: PIDController_I_m
   * Referenced by: '<S146>/Integral Gain'
   */
  10.0,

  /* Mask Parameter: DiscreteDerivative1_ICPrevScale
   * Referenced by: '<S9>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S8>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative2_ICPrevScale
   * Referenced by: '<S10>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative3_ICPrevScale
   * Referenced by: '<S11>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative4_ICPrevScale
   * Referenced by: '<S12>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative5_ICPrevScale
   * Referenced by: '<S13>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_p
   * Referenced by: '<S200>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevSca_pl
   * Referenced by: '<S209>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_i
   * Referenced by: '<S219>/UD'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S46>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialCondition
   * Referenced by: '<S95>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_b
   * Referenced by: '<S144>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditi_b4
   * Referenced by: '<S51>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController1_InitialConditi_l
   * Referenced by: '<S100>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_c
   * Referenced by: '<S149>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S54>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController1_N
   * Referenced by: '<S103>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_N_a
   * Referenced by: '<S152>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S56>/Proportional Gain'
   */
  20.0,

  /* Mask Parameter: PIDController1_P
   * Referenced by: '<S105>/Proportional Gain'
   */
  20.0,

  /* Mask Parameter: PIDController_P_d
   * Referenced by: '<S154>/Proportional Gain'
   */
  10.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S182>/Constant'
   */
  4.0,

  /* Mask Parameter: DetectChange_vinit
   * Referenced by: '<S167>/Delay Input1'
   */
  0.0,

  /* Computed Parameter: Delays_Y0
   * Referenced by: '<S168>/Delay [s]'
   */
  0.0,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S169>/Out1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant21'
   */
  1.0,

  /* Expression: 2
   * Referenced by: '<S166>/Constant22'
   */
  2.0,

  /* Expression: 3
   * Referenced by: '<S166>/Constant23'
   */
  3.0,

  /* Expression: 4
   * Referenced by: '<S166>/Constant24'
   */
  4.0,

  /* Expression: 100
   * Referenced by: '<S166>/Constant19'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S166>/Constant'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S166>/Constant2'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S166>/Switch'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S166>/Constant3'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant1'
   */
  1.0,

  /* Computed Parameter: RobotV_Y0
   * Referenced by: '<S1>/Robot [V]'
   */
  0.0,

  /* Computed Parameter: ConveyorV_Y0
   * Referenced by: '<S1>/Conveyor [V] '
   */
  0.0,

  /* Computed Parameter: VacuumV_Y0
   * Referenced by: '<S1>/Vacuum [V] '
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S166>/Constant20'
   */
  0.0,

  /* Expression: [0                    0                    0      1737781830.9543;0  0  0  0;0  0  0  0]
   * Referenced by: '<S166>/Object detection matrix'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.7377818309543E+9, 0.0, 0.0 },

  /* Expression: 1
   * Referenced by: '<S1>/Constant'
   */
  1.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S9>/TSamp'
   */
  2048.0,

  /* Expression: .2
   * Referenced by: '<S1>/Gain2'
   */
  0.2,

  /* Expression: .01
   * Referenced by: '<S1>/Gain'
   */
  0.01,

  /* Computed Parameter: TSamp_WtEt_n
   * Referenced by: '<S8>/TSamp'
   */
  2048.0,

  /* Expression: .009
   * Referenced by: '<S1>/Gain1'
   */
  0.009,

  /* Computed Parameter: TSamp_WtEt_o
   * Referenced by: '<S10>/TSamp'
   */
  2048.0,

  /* Expression: .15
   * Referenced by: '<S1>/Gain5'
   */
  0.15,

  /* Expression: .01
   * Referenced by: '<S1>/Gain3'
   */
  0.01,

  /* Computed Parameter: TSamp_WtEt_na
   * Referenced by: '<S11>/TSamp'
   */
  2048.0,

  /* Expression: .009
   * Referenced by: '<S1>/Gain4'
   */
  0.009,

  /* Computed Parameter: TSamp_WtEt_g
   * Referenced by: '<S12>/TSamp'
   */
  2048.0,

  /* Expression: .1
   * Referenced by: '<S1>/Gain8'
   */
  0.1,

  /* Expression: .01
   * Referenced by: '<S1>/Gain6'
   */
  0.01,

  /* Computed Parameter: TSamp_WtEt_b
   * Referenced by: '<S13>/TSamp'
   */
  2048.0,

  /* Expression: .009
   * Referenced by: '<S1>/Gain7'
   */
  0.009,

  /* Computed Parameter: Discreteintegrator_gainval
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S3>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size
   * Referenced by: '<S3>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S3>/Dctintegrator3'
   */
  0.0,

  /* Computed Parameter: Dctintegrator3_P2_Size
   * Referenced by: '<S3>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S3>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size
   * Referenced by: '<S3>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S3>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size
   * Referenced by: '<S3>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S3>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size
   * Referenced by: '<S3>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S3>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size
   * Referenced by: '<S3>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S3>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size
   * Referenced by: '<S3>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S3>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dctpd_P1_Size
   * Referenced by: '<S4>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S4>/Dctpd'
   */
  15.0,

  /* Computed Parameter: Dctpd_P2_Size
   * Referenced by: '<S4>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S4>/Dctpd'
   */
  0.3,

  /* Computed Parameter: Dctpd_P3_Size
   * Referenced by: '<S4>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S4>/Dctpd'
   */
  0.001,

  /* Computed Parameter: Dctintegrator_P1_Size
   * Referenced by: '<S4>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S4>/Dctintegrator'
   */
  3.0,

  /* Computed Parameter: Dctintegrator_P2_Size
   * Referenced by: '<S4>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S4>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S51>/Integrator'
   */
  0.00048828125,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S46>/Filter'
   */
  0.00048828125,

  /* Computed Parameter: Dctnotch_P1_Size
   * Referenced by: '<S4>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S4>/Dctnotch'
   */
  100.0,

  /* Computed Parameter: Dctnotch_P2_Size
   * Referenced by: '<S4>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: b_num
   * Referenced by: '<S4>/Dctnotch'
   */
  0.1,

  /* Computed Parameter: Dctnotch_P3_Size
   * Referenced by: '<S4>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S4>/Dctnotch'
   */
  100.0,

  /* Computed Parameter: Dctnotch_P4_Size
   * Referenced by: '<S4>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: b_den
   * Referenced by: '<S4>/Dctnotch'
   */
  0.5,

  /* Computed Parameter: Dctnotch_P5_Size
   * Referenced by: '<S4>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S4>/Dctnotch'
   */
  0.001,

  /* Expression: -10
   * Referenced by: '<S5>/Gain1'
   */
  -10.0,

  /* Computed Parameter: Dctpd_P1_Size_n
   * Referenced by: '<S6>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S6>/Dctpd'
   */
  10.0,

  /* Computed Parameter: Dctpd_P2_Size_c
   * Referenced by: '<S6>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S6>/Dctpd'
   */
  0.25,

  /* Computed Parameter: Dctpd_P3_Size_o
   * Referenced by: '<S6>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S6>/Dctpd'
   */
  0.001,

  /* Computed Parameter: Dctintegrator_P1_Size_b
   * Referenced by: '<S6>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S6>/Dctintegrator'
   */
  3.5,

  /* Computed Parameter: Dctintegrator_P2_Size_k
   * Referenced by: '<S6>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S6>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Integrator_gainval_k
   * Referenced by: '<S100>/Integrator'
   */
  0.00048828125,

  /* Computed Parameter: Filter_gainval_e
   * Referenced by: '<S95>/Filter'
   */
  0.00048828125,

  /* Computed Parameter: Dctnotch_P1_Size_h
   * Referenced by: '<S6>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S6>/Dctnotch'
   */
  200.0,

  /* Computed Parameter: Dctnotch_P2_Size_h
   * Referenced by: '<S6>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: b_num
   * Referenced by: '<S6>/Dctnotch'
   */
  0.1,

  /* Computed Parameter: Dctnotch_P3_Size_l
   * Referenced by: '<S6>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S6>/Dctnotch'
   */
  200.0,

  /* Computed Parameter: Dctnotch_P4_Size_e
   * Referenced by: '<S6>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: b_den
   * Referenced by: '<S6>/Dctnotch'
   */
  0.1,

  /* Computed Parameter: Dctnotch_P5_Size_m
   * Referenced by: '<S6>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S6>/Dctnotch'
   */
  0.001,

  /* Computed Parameter: Dctpd_P1_Size_j
   * Referenced by: '<S7>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: kp
   * Referenced by: '<S7>/Dctpd'
   */
  19.0,

  /* Computed Parameter: Dctpd_P2_Size_b
   * Referenced by: '<S7>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: kv
   * Referenced by: '<S7>/Dctpd'
   */
  0.4,

  /* Computed Parameter: Dctpd_P3_Size_ov
   * Referenced by: '<S7>/Dctpd'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S7>/Dctpd'
   */
  0.001,

  /* Computed Parameter: Dctintegrator_P1_Size_h
   * Referenced by: '<S7>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S7>/Dctintegrator'
   */
  3.0,

  /* Computed Parameter: Dctintegrator_P2_Size_g
   * Referenced by: '<S7>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S7>/Dctintegrator'
   */
  0.001,

  /* Expression: 2
   * Referenced by: '<S7>/Gain'
   */
  2.0,

  /* Computed Parameter: Integrator_gainval_f
   * Referenced by: '<S149>/Integrator'
   */
  0.00048828125,

  /* Computed Parameter: Filter_gainval_g
   * Referenced by: '<S144>/Filter'
   */
  0.00048828125,

  /* Computed Parameter: Dctnotch_P1_Size_f
   * Referenced by: '<S7>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S7>/Dctnotch'
   */
  100.0,

  /* Computed Parameter: Dctnotch_P2_Size_j
   * Referenced by: '<S7>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: b_num
   * Referenced by: '<S7>/Dctnotch'
   */
  0.1,

  /* Computed Parameter: Dctnotch_P3_Size_p
   * Referenced by: '<S7>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S7>/Dctnotch'
   */
  100.0,

  /* Computed Parameter: Dctnotch_P4_Size_i
   * Referenced by: '<S7>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: b_den
   * Referenced by: '<S7>/Dctnotch'
   */
  0.5,

  /* Computed Parameter: Dctnotch_P5_Size_n
   * Referenced by: '<S7>/Dctnotch'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S7>/Dctnotch'
   */
  0.001,

  /* Expression: 100
   * Referenced by: '<S1>/Saturation '
   */
  100.0,

  /* Expression: -100
   * Referenced by: '<S1>/Saturation '
   */
  -100.0,

  /* Expression: 1
   * Referenced by: '<S15>/Object1'
   */
  1.0,

  /* Computed Parameter: Object1_Period
   * Referenced by: '<S15>/Object1'
   */
  1024.0,

  /* Computed Parameter: Object1_Duty
   * Referenced by: '<S15>/Object1'
   */
  512.0,

  /* Expression: 0
   * Referenced by: '<S15>/Object1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S15>/Add Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S166>/Pulse Generator1'
   */
  1.0,

  /* Computed Parameter: PulseGenerator1_Period
   * Referenced by: '<S166>/Pulse Generator1'
   */
  1024.0,

  /* Computed Parameter: PulseGenerator1_Duty
   * Referenced by: '<S166>/Pulse Generator1'
   */
  512.0,

  /* Expression: 0
   * Referenced by: '<S166>/Pulse Generator1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant13'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S166>/Switch1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S166>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<S166>/Pulse Generator'
   */
  1024.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<S166>/Pulse Generator'
   */
  512.0,

  /* Expression: 0
   * Referenced by: '<S166>/Pulse Generator'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant12'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S166>/Switch2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant14'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant15'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant16'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S166>/Constant17'
   */
  1.0,

  /* Expression: 100
   * Referenced by: '<S166>/Constant18'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S15>/Plot'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Stop'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S176>/Constant1'
   */
  5.0,

  /* Expression: 0.25
   * Referenced by: '<S176>/Gain5'
   */
  0.25,

  /* Expression: 50
   * Referenced by: '<S184>/Homing Running Switch2'
   */
  50.0,

  /* Expression: 2.5
   * Referenced by: '<S184>/Homing Running Switch1'
   */
  2.5,

  /* Expression: 0.7
   * Referenced by: '<S185>/Saturation'
   */
  0.7,

  /* Expression: -0.7
   * Referenced by: '<S185>/Saturation'
   */
  -0.7,

  /* Expression: 0.5
   * Referenced by: '<S185>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S186>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S187>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory'
   */
  0.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S181>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: portid
   * Referenced by: '<S181>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S181>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: ectimeout
   * Referenced by: '<S181>/S-Function'
   */
  500.0,

  /* Computed Parameter: ec_Ebox_P1_Size
   * Referenced by: '<S178>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S178>/ec_Ebox'
   */
  0.0,

  /* Expression: 1/4000*9/150*2*pi
   * Referenced by: '<S176>/Gain'
   */
  9.4247779607693812E-5,

  /* Expression: -1/4000*9/100*2*pi
   * Referenced by: '<S176>/Gain1'
   */
  -0.00014137166941154071,

  /* Computed Parameter: ec_Ebox_P1_Size_d
   * Referenced by: '<S179>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S179>/ec_Ebox'
   */
  1.0,

  /* Expression: 1/4000*9/100*2*pi
   * Referenced by: '<S176>/Gain2'
   */
  0.00014137166941154071,

  /* Computed Parameter: ec_Ebox_P1_Size_du
   * Referenced by: '<S180>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S180>/ec_Ebox'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S176>/Homing Running Switch'
   */
  2.0,

  /* Expression: -1/16000*2*pi*2.07*10
   * Referenced by: '<S176>/Gain3'
   */
  -0.00812887099116359,

  /* Expression: -0.1
   * Referenced by: '<S176>/Gain6'
   */
  -0.1,

  /* Expression: 1
   * Referenced by: '<S183>/Constant'
   */
  1.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S185>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S185>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S197>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
   * Referenced by: '<S197>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S185>/Constant'
   */
  -0.1,

  /* Expression: 0
   * Referenced by: '<S177>/Unit Delay'
   */
  0.0,

  /* Expression: 1.2358
   * Referenced by: '<S177>/set_robot_calibration_r'
   */
  1.2358,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_a
   * Referenced by: '<S186>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S186>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S203>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
   * Referenced by: '<S203>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S186>/Constant'
   */
  -0.1,

  /* Expression: 0.6
   * Referenced by: '<S177>/set_robot_calibration_x'
   */
  0.6,

  /* Computed Parameter: DiscreteTimeIntegrator_gainv_ip
   * Referenced by: '<S187>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S187>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S213>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
   * Referenced by: '<S213>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0.1
   * Referenced by: '<S187>/Constant'
   */
  0.1,

  /* Expression: -0.4036
   * Referenced by: '<S177>/set_robot_calibration_z'
   */
  -0.4036,

  /* Expression: [1,0,0,0,0,0,0,0]
   * Referenced by: '<S176>/Enable//Ventiel'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 1/100
   * Referenced by: '<S178>/Gain'
   */
  0.01,

  /* Expression: 25
   * Referenced by: '<S194>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size_f
   * Referenced by: '<S194>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S194>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_j
   * Referenced by: '<S194>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S194>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_p
   * Referenced by: '<S194>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S194>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_p
   * Referenced by: '<S194>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S194>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_c
   * Referenced by: '<S194>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S194>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_f
   * Referenced by: '<S194>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S194>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_g
   * Referenced by: '<S194>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S194>/Dct1lowpass'
   */
  0.001,

  /* Expression: 25
   * Referenced by: '<S195>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctleadlag_P1_Size_n
   * Referenced by: '<S195>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S195>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_b
   * Referenced by: '<S195>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S195>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_d
   * Referenced by: '<S195>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S195>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_p
   * Referenced by: '<S195>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S195>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_gi
   * Referenced by: '<S195>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S195>/Dct1lowpass'
   */
  0.001,

  /* Expression: 2.5
   * Referenced by: '<S176>/Voltage middle'
   */
  2.5,

  /* Expression: 20
   * Referenced by: '<S201>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_c
   * Referenced by: '<S201>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S201>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_ja
   * Referenced by: '<S201>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S201>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_ph
   * Referenced by: '<S201>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S201>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_l
   * Referenced by: '<S201>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S201>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_j
   * Referenced by: '<S201>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S201>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m
   * Referenced by: '<S201>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S201>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_i
   * Referenced by: '<S201>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S201>/Dct1lowpass'
   */
  0.001,

  /* Expression: 20
   * Referenced by: '<S202>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P1_Size_b
   * Referenced by: '<S202>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S202>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_o
   * Referenced by: '<S202>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S202>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_a
   * Referenced by: '<S202>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S202>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_i
   * Referenced by: '<S202>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S202>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_j
   * Referenced by: '<S202>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S202>/Dct1lowpass'
   */
  0.001,

  /* Expression: 5
   * Referenced by: '<S176>/Saturation'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S176>/Saturation'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S178>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S178>/Saturation'
   */
  -10.0,

  /* Expression: 1/100
   * Referenced by: '<S179>/Gain'
   */
  0.01,

  /* Expression: 25
   * Referenced by: '<S210>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size_j
   * Referenced by: '<S210>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S210>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_n
   * Referenced by: '<S210>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S210>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_o
   * Referenced by: '<S210>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S210>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_o4
   * Referenced by: '<S210>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S210>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_l
   * Referenced by: '<S210>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S210>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_g
   * Referenced by: '<S210>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S210>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p
   * Referenced by: '<S210>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S210>/Dct1lowpass'
   */
  0.001,

  /* Expression: 30
   * Referenced by: '<S211>/Gain'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P1_Size_f
   * Referenced by: '<S211>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S211>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_d
   * Referenced by: '<S211>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S211>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_p
   * Referenced by: '<S211>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S211>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_d
   * Referenced by: '<S211>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S211>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_k
   * Referenced by: '<S211>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S211>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_c
   * Referenced by: '<S188>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S188>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S220>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size_e
   * Referenced by: '<S220>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S220>/Dctintegrator3'
   */
  0.01,

  /* Computed Parameter: Dctintegrator3_P2_Size_i
   * Referenced by: '<S220>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S220>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_ph
   * Referenced by: '<S220>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S220>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p0
   * Referenced by: '<S220>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S220>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_pu
   * Referenced by: '<S220>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S220>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size_n
   * Referenced by: '<S220>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S220>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size_f
   * Referenced by: '<S220>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S220>/Dctleadlag'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<S188>/Homing Running Switch'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S176>/Gain4'
   */
  1.0,

  /* Expression: 5
   * Referenced by: '<S176>/Saturation1'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S176>/Saturation1'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S179>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S179>/Saturation'
   */
  -10.0,

  /* Expression: 1/100
   * Referenced by: '<S180>/Gain'
   */
  0.01,

  /* Expression: 0.5
   * Referenced by: '<S176>/Homing Running Switch1'
   */
  0.5,

  /* Expression: 5
   * Referenced by: '<S176>/Saturation2'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S176>/Saturation2'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S180>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S180>/Saturation'
   */
  -10.0,

  /* Expression: 0
   * Referenced by: '<S177>/Unit Delay1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S184>/Homing Running Switch'
   */
  0.5,

  /* Expression: 3
   * Referenced by: '<S177>/Gain'
   */
  3.0,

  /* Computed Parameter: ResetEncoderR_P1_Size
   * Referenced by: '<S185>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S185>/Reset EncoderR'
   */
  0.0,

  /* Computed Parameter: ResetEncoderR_P2_Size
   * Referenced by: '<S185>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S185>/Reset EncoderR'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<S197>/Limit Speed'
   */
  0.6,

  /* Expression: -0.6
   * Referenced by: '<S197>/Limit Speed'
   */
  -0.6,

  /* Expression: 0
   * Referenced by: '<S197>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_a
   * Referenced by: '<S200>/TSamp'
   */
  2048.0,

  /* Expression: 0.8
   * Referenced by: '<S197>/Limit Acceleration'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S197>/Limit Acceleration'
   */
  -0.8,

  /* Expression: 0
   * Referenced by: '<S197>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P1_Size
   * Referenced by: '<S186>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S186>/Reset EncoderX'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P2_Size
   * Referenced by: '<S186>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S186>/Reset EncoderX'
   */
  1.0,

  /* Expression: 0.4
   * Referenced by: '<S203>/Limit Speed'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S203>/Limit Speed'
   */
  -0.4,

  /* Expression: 0
   * Referenced by: '<S203>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_h
   * Referenced by: '<S209>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S203>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S203>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S203>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P1_Size_k
   * Referenced by: '<S187>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S187>/Reset EncoderX'
   */
  1.0,

  /* Computed Parameter: ResetEncoderX_P2_Size_k
   * Referenced by: '<S187>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S187>/Reset EncoderX'
   */
  0.0,

  /* Expression: 0.2
   * Referenced by: '<S213>/Limit Speed'
   */
  0.2,

  /* Expression: -0.2
   * Referenced by: '<S213>/Limit Speed'
   */
  -0.2,

  /* Expression: 0
   * Referenced by: '<S213>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_i
   * Referenced by: '<S219>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S213>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S213>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S213>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderConv_P1_Size
   * Referenced by: '<S188>/Reset EncoderConv'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S188>/Reset EncoderConv'
   */
  1.0,

  /* Computed Parameter: ResetEncoderConv_P2_Size
   * Referenced by: '<S188>/Reset EncoderConv'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S188>/Reset EncoderConv'
   */
  1.0,

  /* Computed Parameter: LEDRing_Y0
   * Referenced by: '<S1>/LED Ring [-]'
   */
  "",

  /* Computed Parameter: Colorspecifiedin6hexdigitsrrggb
   * Referenced by: '<S15>/Color; specified in 6 hex digits, rrggbb'
   */
  "8ab1ff",

  /* Computed Parameter: Colorspecifiedin6hexdigitsrrg_n
   * Referenced by: '<S15>/Color; specified in 6 hex digits, rrggbb1'
   */
  "0000ff",

  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S166>/String Constant'
   */
  "Blue",

  /* Computed Parameter: StringConstant1_String
   * Referenced by: '<S166>/String Constant1'
   */
  "Red",

  /* Computed Parameter: StringConstant3_String
   * Referenced by: '<S193>/String Constant3'
   */
  "color ",

  /* Computed Parameter: StringConstant4_String
   * Referenced by: '<S191>/String Constant4'
   */
  "white",

  /* Computed Parameter: StringConstant1_String_k
   * Referenced by: '<S191>/String Constant1'
   */
  "black",

  /* Computed Parameter: ReadyGreen_String
   * Referenced by: '<S177>/Ready Green'
   */
  "0000FF00",

  /* Computed Parameter: AirbagRed_String
   * Referenced by: '<S177>/Airbag Red'
   */
  "00FF0000",

  /* Computed Parameter: HomingOrange_String
   * Referenced by: '<S177>/Homing Orange'
   */
  "00FF3900",

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S190>/Delay'
   */
  "",

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S166>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<S166>/Manual Switch2'
   */
  0U,

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S166>/Manual Switch3'
   */
  0U,

  /* Computed Parameter: ManualSwitch4_CurrentSetting
   * Referenced by: '<S166>/Manual Switch4'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S4>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_e
   * Referenced by: '<S6>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_d
   * Referenced by: '<S7>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_b
   * Referenced by: '<S15>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_c
   * Referenced by: '<S166>/Manual Switch'
   */
  0U,

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S192>/Constant1'
   */
  13U,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S193>/Constant'
   */
  13U,

  /* Start of '<S166>/If Action Subsystem5' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S174>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S166>/If Action Subsystem5' */

  /* Start of '<S166>/If Action Subsystem4' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S173>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S166>/If Action Subsystem4' */

  /* Start of '<S166>/If Action Subsystem6' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S175>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S166>/If Action Subsystem6' */

  /* Start of '<S166>/If Action Subsystem3' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S172>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S166>/If Action Subsystem3' */

  /* Start of '<S166>/If Action Subsystem2' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S171>/Out1'
     */
    0.0
  }
  ,

  /* End of '<S166>/If Action Subsystem2' */

  /* Start of '<S166>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S170>/Out1'
     */
    0.0
  }
  /* End of '<S166>/If Action Subsystem1' */
};
