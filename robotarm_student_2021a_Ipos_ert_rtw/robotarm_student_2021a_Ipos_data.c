/*
 * robotarm_student_2021a_Ipos_data.c
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

#include "robotarm_student_2021a_Ipos.h"
#include "robotarm_student_2021a_Ipos_private.h"

/* Block parameters (default storage) */
P_robotarm_student_2021a_Ipos_T robotarm_student_2021a_Ipos_P = {
  /* Mask Parameter: PIDController_D
   * Referenced by: '<S40>/Derivative Gain'
   */
  0.2,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S43>/Integral Gain'
   */
  2.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S104>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
   * Referenced by: '<S94>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_h
   * Referenced by: '<S85>/UD'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S41>/Filter'
   */
  0.0,

  /* Mask Parameter: PIDController_InitialConditio_e
   * Referenced by: '<S46>/Integrator'
   */
  0.0,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S49>/Filter Coefficient'
   */
  100.0,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S51>/Proportional Gain'
   */
  6.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S66>/Constant'
   */
  4.0,

  /* Mask Parameter: DetectChange_vinit
   * Referenced by: '<S12>/Delay Input1'
   */
  0.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S67>/Constant'
   */
  3U,

  /* Computed Parameter: Delays_Y0
   * Referenced by: '<S13>/Delay [s]'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant1'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S1>/Constant2'
   */
  0.4,

  /* Expression: 0
   * Referenced by: '<S1>/Suck'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/ Blow'
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

  /* Computed Parameter: Blowsuck_Y0
   * Referenced by: '<S1>/Blow//suck [-]'
   */
  0.0,

  /* Expression: [0                    0                    0      1709314849.7653;0  0  0  0;0  0  0  0]
   * Referenced by: '<S4>/Object detection matrix'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.7093148497653E+9, 0.0, 0.0 },

  /* Computed Parameter: Discreteintegrator_gainval
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.0,

  /* Expression: 0.05
   * Referenced by: '<S5>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size
   * Referenced by: '<S5>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S5>/Dctintegrator3'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P2_Size
   * Referenced by: '<S5>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S5>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size
   * Referenced by: '<S5>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S5>/Dct1lowpass'
   */
  40.0,

  /* Computed Parameter: Dct1lowpass_P2_Size
   * Referenced by: '<S5>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S5>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S5>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S5>/Dctleadlag'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P3_Size
   * Referenced by: '<S5>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S5>/Dctleadlag'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S1>/Reference R [rad]'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Feedfoward R [V]'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S1>/Constant'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S1>/Feedfoward X [V]'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Reference Z [rad]'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S9>/Gain'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S1>/Feedfoward Z [V]'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Conveyor speed [mm//s]'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S1>/Saturation '
   */
  100.0,

  /* Expression: -100
   * Referenced by: '<S1>/Saturation '
   */
  -100.0,

  /* Expression: 0.2
   * Referenced by: '<S1>/Reference Vacuum [bar]'
   */
  0.2,

  /* Expression: -100
   * Referenced by: '<S7>/Gain1'
   */
  -100.0,

  /* Expression: 1
   * Referenced by: '<S1>/Object'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Plot'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Stop'
   */
  0.0,

  /* Expression: 50
   * Referenced by: '<S69>/Homing Running Switch2'
   */
  50.0,

  /* Expression: 2.5
   * Referenced by: '<S69>/Homing Running Switch1'
   */
  2.5,

  /* Expression: 0.5
   * Referenced by: '<S70>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S71>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S72>/Homing Running Switch'
   */
  0.5,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: portid
   * Referenced by: '<S3>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S3>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: ectimeout
   * Referenced by: '<S3>/S-Function'
   */
  500.0,

  /* Computed Parameter: ec_Ipos_P1_Size
   * Referenced by: '<S65>/ec_Ipos'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S65>/ec_Ipos'
   */
  1.0,

  /* Expression: 1/16000*9/150*2*pi
   * Referenced by: '<S63>/Gain'
   */
  2.3561944901923453E-5,

  /* Expression: 0
   * Referenced by: '<S82>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S82>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
   * Referenced by: '<S70>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S70>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: -0.05
   * Referenced by: '<S70>/Constant'
   */
  -0.05,

  /* Expression: 1/16000*9/100*2*pi
   * Referenced by: '<S63>/Gain1'
   */
  3.5342917352885178E-5,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_h
   * Referenced by: '<S71>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S71>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S88>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_j
   * Referenced by: '<S88>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S71>/Constant'
   */
  -0.1,

  /* Expression: 1/16000*9/100*2*pi
   * Referenced by: '<S63>/Gain2'
   */
  3.5342917352885178E-5,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_o
   * Referenced by: '<S72>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S72>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S98>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
   * Referenced by: '<S98>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0.05
   * Referenced by: '<S72>/Constant'
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S64>/Unit Delay'
   */
  0.0,

  /* Expression: 1.2299
   * Referenced by: '<S64>/set_robot_calibration_r'
   */
  1.2299,

  /* Expression: 0.63386
   * Referenced by: '<S64>/set_robot_calibration_x'
   */
  0.63386,

  /* Expression: -0.34972
   * Referenced by: '<S64>/set_robot_calibration_z'
   */
  -0.34972,

  /* Expression: 3
   * Referenced by: '<S64>/Gain'
   */
  3.0,

  /* Expression: 1
   * Referenced by: '<S68>/Constant'
   */
  1.0,

  /* Expression: 1/16000*2*pi*2.05*10
   * Referenced by: '<S63>/Gain3'
   */
  0.0080503311748238437,

  /* Expression: 1/65535
   * Referenced by: '<S63>/Gain4'
   */
  1.5259021896696422E-5,

  /* Expression: 1/2
   * Referenced by: '<S63>/Gain5'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S64>/Unit Delay1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S69>/Homing Running Switch'
   */
  0.5,

  /* Computed Parameter: ResetEncoderR_P1_Size
   * Referenced by: '<S70>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S70>/Reset EncoderR'
   */
  3.0,

  /* Expression: 25
   * Referenced by: '<S79>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size
   * Referenced by: '<S79>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S79>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size
   * Referenced by: '<S79>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S79>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_m
   * Referenced by: '<S79>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S79>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_p
   * Referenced by: '<S79>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S79>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_h
   * Referenced by: '<S79>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S79>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m
   * Referenced by: '<S79>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S79>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_o
   * Referenced by: '<S79>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S79>/Dct1lowpass'
   */
  0.001,

  /* Expression: 25
   * Referenced by: '<S80>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctleadlag_P1_Size_c
   * Referenced by: '<S80>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S80>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_k
   * Referenced by: '<S80>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S80>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_hn
   * Referenced by: '<S80>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S80>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_a
   * Referenced by: '<S80>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S80>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_l
   * Referenced by: '<S80>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S80>/Dct1lowpass'
   */
  0.001,

  /* Expression: 32
   * Referenced by: '<S70>/Gain1'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S70>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S70>/Saturation1'
   */
  -127.0,

  /* Computed Parameter: ResetEncoderR1_P1_Size
   * Referenced by: '<S71>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S71>/Reset EncoderR1'
   */
  1.0,

  /* Expression: 20
   * Referenced by: '<S86>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_i
   * Referenced by: '<S86>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S86>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_p
   * Referenced by: '<S86>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S86>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_d
   * Referenced by: '<S86>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S86>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_g
   * Referenced by: '<S86>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S86>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_o
   * Referenced by: '<S86>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S86>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m3
   * Referenced by: '<S86>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S86>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_b
   * Referenced by: '<S86>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S86>/Dct1lowpass'
   */
  0.001,

  /* Expression: 20
   * Referenced by: '<S87>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P1_Size_b
   * Referenced by: '<S87>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S87>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_m
   * Referenced by: '<S87>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S87>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_p
   * Referenced by: '<S87>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S87>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_n
   * Referenced by: '<S87>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S87>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_g
   * Referenced by: '<S87>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S87>/Dct1lowpass'
   */
  0.001,

  /* Expression: 32
   * Referenced by: '<S71>/Gain'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S71>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S71>/Saturation1'
   */
  -127.0,

  /* Computed Parameter: ResetEncoderR1_P1_Size_d
   * Referenced by: '<S72>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S72>/Reset EncoderR1'
   */
  2.0,

  /* Expression: 20
   * Referenced by: '<S95>/Gain'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_p
   * Referenced by: '<S95>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S95>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_o
   * Referenced by: '<S95>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S95>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_ch
   * Referenced by: '<S95>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S95>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_h
   * Referenced by: '<S95>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S95>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_f
   * Referenced by: '<S95>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S95>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_ni
   * Referenced by: '<S95>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S95>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_a
   * Referenced by: '<S95>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S95>/Dct1lowpass'
   */
  0.001,

  /* Expression: 30
   * Referenced by: '<S96>/Gain'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P1_Size_by
   * Referenced by: '<S96>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S96>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_j
   * Referenced by: '<S96>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S96>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_oi
   * Referenced by: '<S96>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S96>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_p
   * Referenced by: '<S96>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S96>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_j
   * Referenced by: '<S96>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S96>/Dct1lowpass'
   */
  0.001,

  /* Expression: 32
   * Referenced by: '<S72>/Gain'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S72>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S72>/Saturation1'
   */
  -127.0,

  /* Computed Parameter: ResetEncoderR1_P1_Size_b
   * Referenced by: '<S73>/Reset EncoderR1'
   */
  { 1.0, 1.0 },

  /* Expression: ipos_id
   * Referenced by: '<S73>/Reset EncoderR1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
   * Referenced by: '<S73>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S73>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S105>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size_m
   * Referenced by: '<S105>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S105>/Dctintegrator3'
   */
  0.01,

  /* Computed Parameter: Dctintegrator3_P2_Size_b
   * Referenced by: '<S105>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S105>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_j
   * Referenced by: '<S105>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S105>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_aj
   * Referenced by: '<S105>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S105>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_l
   * Referenced by: '<S105>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S105>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size_n
   * Referenced by: '<S105>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S105>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size_d
   * Referenced by: '<S105>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S105>/Dctleadlag'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<S73>/Homing Running Switch'
   */
  0.5,

  /* Expression: 32
   * Referenced by: '<S73>/Gain'
   */
  32.0,

  /* Expression: 127
   * Referenced by: '<S73>/Saturation1'
   */
  127.0,

  /* Expression: -127
   * Referenced by: '<S73>/Saturation1'
   */
  -127.0,

  /* Expression: 0.2
   * Referenced by: '<S98>/Limit Speed'
   */
  0.2,

  /* Expression: -0.2
   * Referenced by: '<S98>/Limit Speed'
   */
  -0.2,

  /* Expression: 0
   * Referenced by: '<S98>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S104>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S98>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S98>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S98>/Limit Acceleration'
   */
  0.0,

  /* Expression: 0.4
   * Referenced by: '<S88>/Limit Speed'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S88>/Limit Speed'
   */
  -0.4,

  /* Expression: 0
   * Referenced by: '<S88>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_d
   * Referenced by: '<S94>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S88>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S88>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S88>/Limit Acceleration'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<S82>/Limit Speed'
   */
  0.6,

  /* Expression: -0.6
   * Referenced by: '<S82>/Limit Speed'
   */
  -0.6,

  /* Expression: 0
   * Referenced by: '<S82>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_g
   * Referenced by: '<S85>/TSamp'
   */
  2048.0,

  /* Expression: 0.8
   * Referenced by: '<S82>/Limit Acceleration'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S82>/Limit Acceleration'
   */
  -0.8,

  /* Expression: 0
   * Referenced by: '<S82>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: LEDRing_Y0
   * Referenced by: '<S1>/LED Ring [-]'
   */
  "",

  /* Computed Parameter: Colorsetwithstringblackorwhite_
   * Referenced by: '<S1>/Color; set with string; black or white'
   */
  "black",

  /* Computed Parameter: Colorspecifiedin6hexdigitsrrggb
   * Referenced by: '<S1>/Color; specified in 6 hex digits, rrggbb'
   */
  "0072bd",

  /* Computed Parameter: StringConstant3_String
   * Referenced by: '<S78>/String Constant3'
   */
  "color ",

  /* Computed Parameter: StringConstant1_String
   * Referenced by: '<S78>/String Constant1'
   */
  " 0 16",

  /* Computed Parameter: StringConstant4_String
   * Referenced by: '<S76>/String Constant4'
   */
  "white",

  /* Computed Parameter: ReadyGreen_String
   * Referenced by: '<S64>/Ready Green'
   */
  "0000FF00",

  /* Computed Parameter: AirbagRed_String
   * Referenced by: '<S64>/Airbag Red'
   */
  "00FF0000",

  /* Computed Parameter: HomingOrange_String
   * Referenced by: '<S64>/Homing Orange'
   */
  "00FF3900",

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S75>/Delay'
   */
  "",

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<S1>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S1>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S77>/Constant1'
   */
  13U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S78>/Constant'
   */
  13U
};
