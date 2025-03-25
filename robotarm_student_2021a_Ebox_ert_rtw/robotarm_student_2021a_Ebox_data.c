/*
 * robotarm_student_2021a_Ebox_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ebox".
 *
 * Model version              : 2.43
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Mar 25 14:59:26 2025
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
   * Referenced by: '<S146>/Integral Gain'
   */
  10.0,

  /* Mask Parameter: PIDController1_I
   * Referenced by: '<S97>/Integral Gain'
   */
  0.1,

  /* Mask Parameter: PIDController_I_a
   * Referenced by: '<S48>/Integral Gain'
   */
  2.0,

  /* Mask Parameter: DiscreteDerivative1_ICPrevScale
   * Referenced by: '<S9>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S8>/UD'
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

  /* Mask Parameter: DiscreteDerivative2_ICPrevScale
   * Referenced by: '<S10>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative3_ICPrevScale
   * Referenced by: '<S11>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_p
   * Referenced by: '<S193>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevSca_pl
   * Referenced by: '<S202>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_i
   * Referenced by: '<S212>/UD'
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
  20.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S175>/Constant'
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

  /* Expression: 0
   * Referenced by: '<S1>/Constant1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Constant2'
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

  /* Expression: [0                    0                    0      1737848201.0033;0  0  0  0;0  0  0  0]
   * Referenced by: '<S166>/Object detection matrix'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.7378482010033E+9, 0.0, 0.0 },

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

  /* Expression: -10
   * Referenced by: '<S5>/Gain1'
   */
  -10.0,

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
  2048.0,

  /* Computed Parameter: Object1_Duty
   * Referenced by: '<S15>/Object1'
   */
  1024.0,

  /* Expression: 1
   * Referenced by: '<S15>/Object1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S15>/Add Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S15>/Object'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S15>/Plot'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Stop'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S169>/Constant1'
   */
  5.0,

  /* Expression: 0.25
   * Referenced by: '<S169>/Gain5'
   */
  0.25,

  /* Expression: 50
   * Referenced by: '<S177>/Homing Running Switch2'
   */
  50.0,

  /* Expression: 2.5
   * Referenced by: '<S177>/Homing Running Switch1'
   */
  2.5,

  /* Expression: 0.7
   * Referenced by: '<S178>/Saturation'
   */
  0.7,

  /* Expression: -0.7
   * Referenced by: '<S178>/Saturation'
   */
  -0.7,

  /* Expression: 0.5
   * Referenced by: '<S178>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S179>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S180>/Homing Running Switch'
   */
  0.5,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S174>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: portid
   * Referenced by: '<S174>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S174>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: ectimeout
   * Referenced by: '<S174>/S-Function'
   */
  500.0,

  /* Computed Parameter: ec_Ebox_P1_Size
   * Referenced by: '<S171>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S171>/ec_Ebox'
   */
  0.0,

  /* Expression: 1/4000*9/150*2*pi
   * Referenced by: '<S169>/Gain'
   */
  9.4247779607693812E-5,

  /* Expression: -1/4000*9/100*2*pi
   * Referenced by: '<S169>/Gain1'
   */
  -0.00014137166941154071,

  /* Computed Parameter: ec_Ebox_P1_Size_d
   * Referenced by: '<S172>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S172>/ec_Ebox'
   */
  1.0,

  /* Expression: 1/4000*9/100*2*pi
   * Referenced by: '<S169>/Gain2'
   */
  0.00014137166941154071,

  /* Computed Parameter: ec_Ebox_P1_Size_du
   * Referenced by: '<S173>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S173>/ec_Ebox'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S169>/Homing Running Switch'
   */
  2.0,

  /* Expression: -1/16000*2*pi*2.07*10
   * Referenced by: '<S169>/Gain3'
   */
  -0.00812887099116359,

  /* Expression: -0.1
   * Referenced by: '<S169>/Gain6'
   */
  -0.1,

  /* Expression: 1
   * Referenced by: '<S176>/Constant'
   */
  1.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S178>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S178>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S190>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
   * Referenced by: '<S190>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S178>/Constant'
   */
  -0.1,

  /* Expression: 0
   * Referenced by: '<S170>/Unit Delay'
   */
  0.0,

  /* Expression: 1.2974
   * Referenced by: '<S170>/set_robot_calibration_r'
   */
  1.2974,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_a
   * Referenced by: '<S179>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S179>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S196>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
   * Referenced by: '<S196>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S179>/Constant'
   */
  -0.1,

  /* Expression: 0.69287
   * Referenced by: '<S170>/set_robot_calibration_x'
   */
  0.69287,

  /* Computed Parameter: DiscreteTimeIntegrator_gainv_ip
   * Referenced by: '<S180>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S180>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S206>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
   * Referenced by: '<S206>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0.1
   * Referenced by: '<S180>/Constant'
   */
  0.1,

  /* Expression: -0.40164
   * Referenced by: '<S170>/set_robot_calibration_z'
   */
  -0.40164,

  /* Expression: [1,0,0,0,0,0,0,0]
   * Referenced by: '<S169>/Enable//Ventiel'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 1/100
   * Referenced by: '<S171>/Gain'
   */
  0.01,

  /* Expression: 25
   * Referenced by: '<S187>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size_f
   * Referenced by: '<S187>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S187>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_j
   * Referenced by: '<S187>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S187>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_p
   * Referenced by: '<S187>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S187>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_p
   * Referenced by: '<S187>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S187>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_c
   * Referenced by: '<S187>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S187>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_f
   * Referenced by: '<S187>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S187>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_g
   * Referenced by: '<S187>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S187>/Dct1lowpass'
   */
  0.001,

  /* Expression: 25
   * Referenced by: '<S188>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctleadlag_P1_Size_n
   * Referenced by: '<S188>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S188>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_b
   * Referenced by: '<S188>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S188>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_d
   * Referenced by: '<S188>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S188>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_p
   * Referenced by: '<S188>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S188>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_gi
   * Referenced by: '<S188>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S188>/Dct1lowpass'
   */
  0.001,

  /* Expression: 2.5
   * Referenced by: '<S169>/Voltage middle'
   */
  2.5,

  /* Expression: 20
   * Referenced by: '<S194>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_c
   * Referenced by: '<S194>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S194>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_ja
   * Referenced by: '<S194>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S194>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_ph
   * Referenced by: '<S194>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S194>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_l
   * Referenced by: '<S194>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S194>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_j
   * Referenced by: '<S194>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S194>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m
   * Referenced by: '<S194>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S194>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_i
   * Referenced by: '<S194>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S194>/Dct1lowpass'
   */
  0.001,

  /* Expression: 20
   * Referenced by: '<S195>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P1_Size_b
   * Referenced by: '<S195>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S195>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_o
   * Referenced by: '<S195>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S195>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_a
   * Referenced by: '<S195>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S195>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_i
   * Referenced by: '<S195>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S195>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_j
   * Referenced by: '<S195>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S195>/Dct1lowpass'
   */
  0.001,

  /* Expression: 5
   * Referenced by: '<S169>/Saturation'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S169>/Saturation'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S171>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S171>/Saturation'
   */
  -10.0,

  /* Expression: 1/100
   * Referenced by: '<S172>/Gain'
   */
  0.01,

  /* Expression: 25
   * Referenced by: '<S203>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size_j
   * Referenced by: '<S203>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S203>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_n
   * Referenced by: '<S203>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S203>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_o
   * Referenced by: '<S203>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S203>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_o4
   * Referenced by: '<S203>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S203>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_l
   * Referenced by: '<S203>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S203>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_g
   * Referenced by: '<S203>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S203>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p
   * Referenced by: '<S203>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S203>/Dct1lowpass'
   */
  0.001,

  /* Expression: 30
   * Referenced by: '<S204>/Gain'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P1_Size_f
   * Referenced by: '<S204>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S204>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_d
   * Referenced by: '<S204>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S204>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_p
   * Referenced by: '<S204>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S204>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_d
   * Referenced by: '<S204>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S204>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_k
   * Referenced by: '<S204>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S204>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_c
   * Referenced by: '<S181>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S181>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S213>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size_e
   * Referenced by: '<S213>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S213>/Dctintegrator3'
   */
  0.01,

  /* Computed Parameter: Dctintegrator3_P2_Size_i
   * Referenced by: '<S213>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S213>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_ph
   * Referenced by: '<S213>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S213>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p0
   * Referenced by: '<S213>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S213>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_pu
   * Referenced by: '<S213>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S213>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size_n
   * Referenced by: '<S213>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S213>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size_f
   * Referenced by: '<S213>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S213>/Dctleadlag'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<S181>/Homing Running Switch'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S169>/Gain4'
   */
  1.0,

  /* Expression: 5
   * Referenced by: '<S169>/Saturation1'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S169>/Saturation1'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S172>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S172>/Saturation'
   */
  -10.0,

  /* Expression: 1/100
   * Referenced by: '<S173>/Gain'
   */
  0.01,

  /* Expression: 0.5
   * Referenced by: '<S169>/Homing Running Switch1'
   */
  0.5,

  /* Expression: 5
   * Referenced by: '<S169>/Saturation2'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S169>/Saturation2'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S173>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S173>/Saturation'
   */
  -10.0,

  /* Expression: 0
   * Referenced by: '<S170>/Unit Delay1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S177>/Homing Running Switch'
   */
  0.5,

  /* Expression: 3
   * Referenced by: '<S170>/Gain'
   */
  3.0,

  /* Computed Parameter: ResetEncoderR_P1_Size
   * Referenced by: '<S178>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S178>/Reset EncoderR'
   */
  0.0,

  /* Computed Parameter: ResetEncoderR_P2_Size
   * Referenced by: '<S178>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S178>/Reset EncoderR'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<S190>/Limit Speed'
   */
  0.6,

  /* Expression: -0.6
   * Referenced by: '<S190>/Limit Speed'
   */
  -0.6,

  /* Expression: 0
   * Referenced by: '<S190>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_a
   * Referenced by: '<S193>/TSamp'
   */
  2048.0,

  /* Expression: 0.8
   * Referenced by: '<S190>/Limit Acceleration'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S190>/Limit Acceleration'
   */
  -0.8,

  /* Expression: 0
   * Referenced by: '<S190>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P1_Size
   * Referenced by: '<S179>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S179>/Reset EncoderX'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P2_Size
   * Referenced by: '<S179>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S179>/Reset EncoderX'
   */
  1.0,

  /* Expression: 0.4
   * Referenced by: '<S196>/Limit Speed'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S196>/Limit Speed'
   */
  -0.4,

  /* Expression: 0
   * Referenced by: '<S196>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_h
   * Referenced by: '<S202>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S196>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S196>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S196>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P1_Size_k
   * Referenced by: '<S180>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S180>/Reset EncoderX'
   */
  1.0,

  /* Computed Parameter: ResetEncoderX_P2_Size_k
   * Referenced by: '<S180>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S180>/Reset EncoderX'
   */
  0.0,

  /* Expression: 0.2
   * Referenced by: '<S206>/Limit Speed'
   */
  0.2,

  /* Expression: -0.2
   * Referenced by: '<S206>/Limit Speed'
   */
  -0.2,

  /* Expression: 0
   * Referenced by: '<S206>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_i
   * Referenced by: '<S212>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S206>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S206>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S206>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderConv_P1_Size
   * Referenced by: '<S181>/Reset EncoderConv'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S181>/Reset EncoderConv'
   */
  1.0,

  /* Computed Parameter: ResetEncoderConv_P2_Size
   * Referenced by: '<S181>/Reset EncoderConv'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S181>/Reset EncoderConv'
   */
  1.0,

  /* Computed Parameter: LEDRing_Y0
   * Referenced by: '<S1>/LED Ring [-]'
   */
  "",

  /* Computed Parameter: Colorsetwithstringblackorwhite_
   * Referenced by: '<S15>/Color; set with string; black or white'
   */
  "black",

  /* Computed Parameter: Colorspecifiedin6hexdigitsrrggb
   * Referenced by: '<S15>/Color; specified in 6 hex digits, rrggbb'
   */
  "8ab1ff",

  /* Computed Parameter: StringConstant3_String
   * Referenced by: '<S186>/String Constant3'
   */
  "color ",

  /* Computed Parameter: StringConstant4_String
   * Referenced by: '<S184>/String Constant4'
   */
  "white",

  /* Computed Parameter: StringConstant1_String
   * Referenced by: '<S184>/String Constant1'
   */
  "black",

  /* Computed Parameter: ReadyGreen_String
   * Referenced by: '<S170>/Ready Green'
   */
  "0000FF00",

  /* Computed Parameter: AirbagRed_String
   * Referenced by: '<S170>/Airbag Red'
   */
  "00FF0000",

  /* Computed Parameter: HomingOrange_String
   * Referenced by: '<S170>/Homing Orange'
   */
  "00FF3900",

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S183>/Delay'
   */
  "",

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_c
   * Referenced by: '<S4>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_d
   * Referenced by: '<S7>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_e
   * Referenced by: '<S6>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S15>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S185>/Constant1'
   */
  13U,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S186>/Constant'
   */
  13U
};
