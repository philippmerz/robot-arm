/*
 * robotarm_student_2021a_Ebox.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "robotarm_student_2021a_Ebox".
 *
 * Model version              : 2.147
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Mar 31 14:33:41 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "robotarm_student_2021a_Ebox.h"
#include "robotarm_student_2021a_Ebox_private.h"
#include "robotarm_student_2021a_Ebox_dt.h"

/* Named constants for Chart: '<S1>/Stateflow ' */
#define robotarm_s_IN_Start_AboveLabels (5U)
#define robotarm_stu_IN_MoveToIntercept (1U)
#define robotarm_studen_event_ScanAgain (1)
#define robotarm_studen_event_VacuumOff (2)
#define robotarm_student_2021a_Ebo_IN_a (3U)
#define robotarm_student_202_CALL_EVENT (-1)
#define robotarm_student_202_IN_Move_XY (2U)
#define robotarm_student_202_IN_Seeking (1U)
#define robotarm_student_20_IN_AirBurst (1U)
#define robotarm_student_2_IN_Belt_Home (1U)
#define robotarm_student_2_IN_Move_Z_up (4U)
#define robotarm_student_2_IN_VacuumOff (6U)
#define robotarm_student_2_IN_Vacuum_On (3U)
#define robotarm_student_IN_Move_Z_down (3U)
#define robotarm_student_IN_WaitSeeking (2U)
#define robotarm_student__IN_Vacuum_Off (2U)
#define robotarm_student_event_GetLabel (0)
#define robotarm_student_event_VacuumOn (3)

/* Named constants for Chart: '<S185>/Supervisor' */
#define robotarm__IN_EnableRunAndSafety (6U)
#define robotarm_stud_IN_AirbagConveyor (1U)
#define robotarm_stud_IN_CheckRobotIsON (4U)
#define robotarm_stud_IN_DisableOutputs (5U)
#define robotarm_stud_IN_STOPRobotIsOFF (11U)
#define robotarm_student_2021_IN_Homing (7U)
#define robotarm_student_202_IN_Waiting (13U)
#define robotarm_student_20_IN_MovetoX0 (8U)
#define robotarm_student_20_IN_ResetEnc (9U)
#define robotarm_student_20_IN_Waiting1 (14U)
#define robotarm_student_2_IN_RobotIsON (10U)
#define robotarm_student_IN_AirbagLeft1 (3U)
#define robotarm_student_IN_WaitForRest (12U)
#define robotarm_student__IN_AirbagLeft (2U)

/* Named constants for Chart: '<S186>/Supervisor' */
#define robotar_IN_EnableRunAndSafety_n (4U)
#define robotarm_st_IN_DisableOutputs_n (3U)
#define robotarm_stude_IN_WaitForRest_f (8U)
#define robotarm_studen_IN_AirbagLeft_h (1U)
#define robotarm_student_20_IN_Homing_c (5U)
#define robotarm_student_2_IN_Waiting_o (9U)
#define robotarm_student_IN_AirbagRight (2U)
#define robotarm_student__IN_MovetoX0_i (6U)
#define robotarm_student__IN_ResetEnc_o (7U)
#define robotarm_student__IN_Waiting1_e (10U)

/* Named constants for Chart: '<S187>/Supervisor' */
#define robotar_IN_EnableRunAndSafety_g (5U)
#define robotarm_st_IN_DisableOutputs_b (4U)
#define robotarm_stude_IN_WaitForRest_c (9U)
#define robotarm_student_20_IN_Homing_b (6U)
#define robotarm_student_2_IN_AirbagTop (3U)
#define robotarm_student_2_IN_Waiting_c (10U)
#define robotarm_student__IN_AirbagDrop (2U)
#define robotarm_student__IN_MovetoX0_n (7U)
#define robotarm_student__IN_ResetEnc_j (8U)
#define robotarm_student__IN_Waiting1_m (11U)

/* Named constants for Chart: '<S188>/Supervisor' */
#define robotar_IN_EnableRunAndSafety_e (2U)
#define robotarm_st_IN_CheckRobotIsON_f (1U)
#define robotarm_stude_IN_WaitForRest_o (6U)
#define robotarm_student_20_IN_Homing_e (3U)
#define robotarm_student_IN_ResetEnc_ol (5U)
#define robotarm_student__IN_MovetoX0_o (4U)
#define robotarm_student__IN_Waiting_ov (7U)
#define robotarm_student_2021a_E_period (0.00048828125)

const real_T robotarm_student_2021a_Ebox_RGND = 0.0;/* real_T ground */

/* Block signals (default storage) */
B_robotarm_student_2021a_Ebox_T robotarm_student_2021a_Ebox_B;

/* Block states (default storage) */
DW_robotarm_student_2021a_Ebox_T robotarm_student_2021a_Ebox_DW;

/* Real-time model */
static RT_MODEL_robotarm_student_2021a_Ebox_T robotarm_student_2021a_Ebox_M_;
RT_MODEL_robotarm_student_2021a_Ebox_T *const robotarm_student_2021a_Ebox_M =
  &robotarm_student_2021a_Ebox_M_;

/* Forward declaration for local functions */
static void robotarm_student_emxInit_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray, int32_T numDimensions);
static real_T robotarm_student_20_rt_powd_snf(real_T u0, real_T u1,
  B_quintictrajectorytime3_robo_T *localB);
static void robota_emxEnsureCapacity_real_T(emxArray_real_T_robotarm_stud_T
  *emxArray, int32_T oldNumel);
static void robotarm_student_emxFree_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray);

/* Forward declaration for local functions */
static void robotarm_stude_SystemCore_setup(codertarget_raspi_internal_SC_T *obj);

/* Forward declaration for local functions */
static real_T robotarm_student__rt_atan2d_snf(real_T u0, real_T u1);
static void robotarm_student_2021a_E_invkin(real_T x, real_T y, real_T z, real_T
  *Psi, real_T *Phi, real_T *Theta);
static void c3_robotarm_student_2021a_Ebox(void);
static void enter_atomic_Start_AboveLabels(void);

/*
 * System initialize for action system:
 *    '<S166>/If Action Subsystem1'
 *    '<S166>/If Action Subsystem2'
 *    '<S166>/If Action Subsystem3'
 *    '<S166>/If Action Subsystem6'
 *    '<S166>/If Action Subsystem4'
 *    '<S166>/If Action Subsystem5'
 */
void robotar_IfActionSubsystem1_Init(B_IfActionSubsystem1_robotarm_T *localB,
  P_IfActionSubsystem1_robotarm_T *localP)
{
  /* SystemInitialize for Outport: '<S170>/Out1' incorporates:
   *  Inport: '<S170>/In1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for action system:
 *    '<S166>/If Action Subsystem1'
 *    '<S166>/If Action Subsystem2'
 *    '<S166>/If Action Subsystem3'
 *    '<S166>/If Action Subsystem6'
 *    '<S166>/If Action Subsystem4'
 *    '<S166>/If Action Subsystem5'
 */
void robotarm_stu_IfActionSubsystem1(real_T rtu_In1,
  B_IfActionSubsystem1_robotarm_T *localB)
{
  /* Inport: '<S170>/In1' */
  localB->In1 = rtu_In1;
}

static void robotarm_student_emxInit_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_robotarm_stud_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_robotarm_stud_T *)malloc(sizeof
    (emxArray_real_T_robotarm_stud_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static real_T robotarm_student_20_rt_powd_snf(real_T u0, real_T u1,
  B_quintictrajectorytime3_robo_T *localB)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else {
    localB->d = fabs(u0);
    localB->d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (localB->d == 1.0) {
        y = 1.0;
      } else if (localB->d > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (localB->d1 == 0.0) {
      y = 1.0;
    } else if (localB->d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

static void robota_emxEnsureCapacity_real_T(emxArray_real_T_robotarm_stud_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void robotarm_student_emxFree_real_T(emxArray_real_T_robotarm_stud_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_robotarm_stud_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_robotarm_stud_T *)NULL;
  }
}

/*
 * System initialize for atomic system:
 *    '<S1>/quintic trajectory time3'
 *    '<S1>/quintic trajectory time4'
 *    '<S1>/quintic trajectory time5'
 */
void rob_quintictrajectorytime3_Init(DW_quintictrajectorytime3_rob_T *localDW)
{
  localDW->path_array_not_empty = false;
  robotarm_student_emxInit_real_T(&localDW->path_array, 2);
  localDW->previous_value_reference_start = 0.0;
  localDW->previous_value_reference_end = 0.0;
  localDW->index = 1.0;
}

/*
 * Output and update for atomic system:
 *    '<S1>/quintic trajectory time3'
 *    '<S1>/quintic trajectory time4'
 *    '<S1>/quintic trajectory time5'
 */
void robotarm_quintictrajectorytime3(real_T rtu_reference_end, real_T
  rtu_end_time, real_T rtu_measured_position, B_quintictrajectorytime3_robo_T
  *localB, DW_quintictrajectorytime3_rob_T *localDW)
{
  emxArray_real_T_robotarm_stud_T *b_y;
  emxArray_real_T_robotarm_stud_T *c_y;
  emxArray_real_T_robotarm_stud_T *d_y;
  emxArray_real_T_robotarm_stud_T *e_y;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T jA;
  static const int8_T f[6] = { 1, 0, 0, 0, 0, 0 };

  static const int8_T g[6] = { 0, 1, 0, 0, 0, 0 };

  static const int8_T h[6] = { 0, 0, 2, 0, 0, 0 };

  if (!localDW->path_array_not_empty) {
    jA = localDW->path_array->size[0] * localDW->path_array->size[1];
    localDW->path_array->size[0] = 1;
    localDW->path_array->size[1] = 1;
    robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
    localDW->path_array->data[0] = 0.0;
    localDW->path_array_not_empty = true;
  }

  if (localDW->previous_value_reference_end != rtu_reference_end) {
    localB->smax = robotarm_student_20_rt_powd_snf(rtu_end_time, 3.0, localB);
    localB->ndbl = robotarm_student_20_rt_powd_snf(rtu_end_time, 4.0, localB);
    localB->A[3] = 1.0;
    localB->A[9] = rtu_end_time;
    localB->cdiff = rtu_end_time * rtu_end_time;
    localB->A[15] = localB->cdiff;
    localB->A[21] = localB->smax;
    localB->A[27] = localB->ndbl;
    localB->A[33] = robotarm_student_20_rt_powd_snf(rtu_end_time, 5.0, localB);
    localB->A[4] = 0.0;
    localB->A[10] = 1.0;
    localB->A[16] = 2.0 * rtu_end_time;
    localB->A[22] = localB->cdiff * 3.0;
    localB->A[28] = 4.0 * localB->smax;
    localB->A[34] = 5.0 * localB->ndbl;
    localB->A[5] = 0.0;
    localB->A[11] = 0.0;
    localB->A[17] = 2.0;
    localB->A[23] = 6.0 * rtu_end_time;
    localB->A[29] = localB->cdiff * 12.0;
    localB->A[35] = 20.0 * localB->smax;
    for (localB->j = 0; localB->j < 6; localB->j++) {
      localB->A[6 * localB->j] = f[localB->j];
      localB->A[6 * localB->j + 1] = g[localB->j];
      localB->A[6 * localB->j + 2] = h[localB->j];
      localB->ipiv[localB->j] = (int8_T)(localB->j + 1);
    }

    localB->B[0] = localDW->previous_value_reference_start;
    localB->B[1] = 0.0;
    localB->B[2] = 0.0;
    localB->B[3] = rtu_reference_end;
    localB->B[4] = 0.0;
    localB->B[5] = 0.0;
    for (localB->j = 0; localB->j < 5; localB->j++) {
      localB->kAcol = localB->j * 7;
      jA = 0;
      localB->ix = localB->kAcol;
      localB->smax = fabs(localB->A[localB->kAcol]);
      localB->c_k = 2;
      while (localB->c_k <= 6 - localB->j) {
        localB->ix++;
        localB->ndbl = fabs(localB->A[localB->ix]);
        if (localB->ndbl > localB->smax) {
          jA = localB->c_k - 1;
          localB->smax = localB->ndbl;
        }

        localB->c_k++;
      }

      if (localB->A[localB->kAcol + jA] != 0.0) {
        if (jA != 0) {
          localB->ix = localB->j + jA;
          localB->ipiv[localB->j] = (int8_T)(localB->ix + 1);
          for (jA = 0; jA < 6; jA++) {
            localB->c_k = jA * 6 + localB->j;
            localB->smax = localB->A[localB->c_k];
            c_ix = jA * 6 + localB->ix;
            localB->A[localB->c_k] = localB->A[c_ix];
            localB->A[c_ix] = localB->smax;
          }
        }

        jA = (localB->kAcol - localB->j) + 6;
        localB->ix = localB->kAcol + 1;
        while (localB->ix + 1 <= jA) {
          localB->A[localB->ix] /= localB->A[localB->kAcol];
          localB->ix++;
        }
      }

      jA = localB->kAcol;
      localB->ix = localB->kAcol + 6;
      localB->c_k = 0;
      while (localB->c_k <= 4 - localB->j) {
        localB->smax = localB->A[localB->ix];
        if (localB->A[localB->ix] != 0.0) {
          c_ix = localB->kAcol + 1;
          d = (jA - localB->j) + 12;
          for (ijA = jA + 7; ijA < d; ijA++) {
            localB->A[ijA] += localB->A[c_ix] * -localB->smax;
            c_ix++;
          }
        }

        localB->ix += 6;
        jA += 6;
        localB->c_k++;
      }

      if (localB->j + 1 != localB->ipiv[localB->j]) {
        localB->smax = localB->B[localB->j];
        localB->kAcol = localB->ipiv[localB->j] - 1;
        localB->B[localB->j] = localB->B[localB->kAcol];
        localB->B[localB->kAcol] = localB->smax;
      }
    }

    for (localB->j = 0; localB->j < 6; localB->j++) {
      localB->kAcol = 6 * localB->j;
      if (localB->B[localB->j] != 0.0) {
        for (jA = localB->j + 1; jA + 1 < 7; jA++) {
          localB->B[jA] -= localB->A[jA + localB->kAcol] * localB->B[localB->j];
        }
      }
    }

    for (localB->j = 5; localB->j >= 0; localB->j--) {
      localB->kAcol = 6 * localB->j;
      if (localB->B[localB->j] != 0.0) {
        localB->B[localB->j] /= localB->A[localB->j + localB->kAcol];
        for (jA = 0; jA < localB->j; jA++) {
          localB->B[jA] -= localB->A[jA + localB->kAcol] * localB->B[localB->j];
        }
      }
    }

    if (rtIsNaN(rtu_end_time)) {
      jA = localDW->path_array->size[0] * localDW->path_array->size[1];
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 1;
      robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
      localDW->path_array->data[0] = (rtNaN);
    } else if (rtu_end_time < 0.0) {
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 0;
    } else if (rtIsInf(rtu_end_time) && (0.0 == rtu_end_time)) {
      jA = localDW->path_array->size[0] * localDW->path_array->size[1];
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 1;
      robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
      localDW->path_array->data[0] = (rtNaN);
    } else {
      localB->ndbl = floor(rtu_end_time / 0.00048828125 + 0.5);
      localB->smax = localB->ndbl * 0.00048828125;
      localB->cdiff = localB->smax - rtu_end_time;
      if (fabs(localB->cdiff) < 4.4408920985006262E-16 * rtu_end_time) {
        localB->ndbl++;
        localB->smax = rtu_end_time;
      } else if (localB->cdiff > 0.0) {
        localB->smax = (localB->ndbl - 1.0) * 0.00048828125;
      } else {
        localB->ndbl++;
      }

      if (localB->ndbl >= 0.0) {
        localB->j = (int32_T)localB->ndbl - 1;
      } else {
        localB->j = -1;
      }

      jA = localDW->path_array->size[0] * localDW->path_array->size[1];
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = localB->j + 1;
      robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
      if (localB->j + 1 > 0) {
        localDW->path_array->data[0] = 0.0;
        if (localB->j + 1 > 1) {
          localDW->path_array->data[localB->j] = localB->smax;
          localB->kAcol = localB->j / 2;
          for (jA = 1; jA - 1 <= localB->kAcol - 2; jA++) {
            localB->ndbl = (real_T)jA * 0.00048828125;
            localDW->path_array->data[jA] = localB->ndbl;
            localDW->path_array->data[localB->j - jA] = localB->smax -
              localB->ndbl;
          }

          if (localB->kAcol << 1 == localB->j) {
            localDW->path_array->data[localB->kAcol] = localB->smax / 2.0;
          } else {
            localB->ndbl = (real_T)localB->kAcol * 0.00048828125;
            localDW->path_array->data[localB->kAcol] = localB->ndbl;
            localDW->path_array->data[localB->kAcol + 1] = localB->smax -
              localB->ndbl;
          }
        }
      }
    }

    robotarm_student_emxInit_real_T(&b_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(b_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      b_y->data[jA] = localDW->path_array->data[jA] * localDW->path_array->
        data[jA];
      localB->kAcol++;
    }

    robotarm_student_emxInit_real_T(&c_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(c_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      c_y->data[jA] = robotarm_student_20_rt_powd_snf(localDW->path_array->
        data[jA], 3.0, localB);
      localB->kAcol++;
    }

    robotarm_student_emxInit_real_T(&d_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(d_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      d_y->data[jA] = robotarm_student_20_rt_powd_snf(localDW->path_array->
        data[jA], 4.0, localB);
      localB->kAcol++;
    }

    robotarm_student_emxInit_real_T(&e_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = e_y->size[0] * e_y->size[1];
    e_y->size[0] = 1;
    e_y->size[1] = localDW->path_array->size[1];
    robota_emxEnsureCapacity_real_T(e_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      e_y->data[jA] = robotarm_student_20_rt_powd_snf(localDW->path_array->
        data[jA], 5.0, localB);
      localB->kAcol++;
    }

    jA = localDW->path_array->size[0] * localDW->path_array->size[1];
    localDW->path_array->size[0] = 1;
    robota_emxEnsureCapacity_real_T(localDW->path_array, jA);
    localB->smax = localB->B[0];
    localB->ndbl = localB->B[1];
    localB->cdiff = localB->B[2];
    localB->B_m = localB->B[3];
    localB->B_c = localB->B[4];
    localB->B_k = localB->B[5];
    localB->kAcol = localDW->path_array->size[1] - 1;
    for (localB->j = 0; localB->j <= localB->kAcol; localB->j++) {
      jA = localB->j;
      localDW->path_array->data[jA] = ((((localB->ndbl * localDW->
        path_array->data[jA] + localB->smax) + localB->cdiff * b_y->data[jA]) +
        localB->B_m * c_y->data[jA]) + localB->B_c * d_y->data[jA]) +
        localB->B_k * e_y->data[jA];
    }

    robotarm_student_emxFree_real_T(&e_y);
    robotarm_student_emxFree_real_T(&d_y);
    robotarm_student_emxFree_real_T(&c_y);
    robotarm_student_emxFree_real_T(&b_y);
    localDW->path_array_not_empty = (localDW->path_array->size[1] != 0);
    localDW->index = 1.0;
    localB->path = localDW->path_array->data[0];
  } else {
    if (localDW->index < localDW->path_array->size[1]) {
      localDW->index++;
    }

    localB->path = localDW->path_array->data[(int32_T)localDW->index - 1];
  }

  localDW->previous_value_reference_end = rtu_reference_end;
  localDW->previous_value_reference_start = rtu_measured_position;
}

/*
 * CleanupRuntimeResources for atomic system:
 *    '<S1>/quintic trajectory time3'
 *    '<S1>/quintic trajectory time4'
 *    '<S1>/quintic trajectory time5'
 */
void quintictrajectorytim_CleanupRTR(DW_quintictrajectorytime3_rob_T *localDW)
{
  robotarm_student_emxFree_real_T(&localDW->path_array);
}

static void robotarm_stude_SystemCore_setup(codertarget_raspi_internal_SC_T *obj)
{
  MW_SCI_Parity_Type ParityValue;
  MW_SCI_StopBits_Type StopBitsValue;
  uint32_T RxPinLoc;
  uint32_T TxPinLoc;
  void* SCIModuleVoidPtr;
  int32_T i;
  char_T b_SCIModuleLoc[13];
  static const char_T tmp[12] = { '/', 'd', 'e', 'v', '/', 't', 't', 'y', 'A',
    'C', 'M', '0' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  RxPinLoc = MW_UNDEFINED_VALUE;
  TxPinLoc = MW_UNDEFINED_VALUE;
  for (i = 0; i < 12; i++) {
    b_SCIModuleLoc[i] = tmp[i];
  }

  b_SCIModuleLoc[12] = '\x00';
  SCIModuleVoidPtr = (void*)(&b_SCIModuleLoc[0]);
  obj->MW_SCIHANDLE = MW_SCI_Open(SCIModuleVoidPtr, true, RxPinLoc, TxPinLoc);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 9600U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void robotarm_stu_SerialWrite1_Start(DW_SerialWrite1_robotarm_stud_T *localDW)
{
  /* Start for MATLABSystem: '<S192>/Serial Write1' */
  localDW->obj.isInitialized = 0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  robotarm_stude_SystemCore_setup(&localDW->obj);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void robotarm_student_2_SerialWrite1(const uint8_T rtu_0[32],
  DW_SerialWrite1_robotarm_stud_T *localDW)
{
  uint8_T TxDataLocChar[32];

  /* MATLABSystem: '<S192>/Serial Write1' */
  memcpy((void *)&TxDataLocChar[0], (void *)&rtu_0[0], (uint32_T)((size_t)32 *
          sizeof(uint8_T)));
  MW_SCI_Transmit(localDW->obj.MW_SCIHANDLE, &TxDataLocChar[0], 32U);
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
void robotarm_stud_SerialWrite1_Term(DW_SerialWrite1_robotarm_stud_T *localDW)
{
  /* Terminate for MATLABSystem: '<S192>/Serial Write1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_SCI_Close(localDW->obj.MW_SCIHANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S192>/Serial Write1' */
}

static real_T robotarm_student__rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      robotarm_student_2021a_Ebox_B.u0 = 1;
    } else {
      robotarm_student_2021a_Ebox_B.u0 = -1;
    }

    if (u1 > 0.0) {
      robotarm_student_2021a_Ebox_B.u1 = 1;
    } else {
      robotarm_student_2021a_Ebox_B.u1 = -1;
    }

    y = atan2(robotarm_student_2021a_Ebox_B.u0, robotarm_student_2021a_Ebox_B.u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

/* Function for Chart: '<S1>/Stateflow ' */
static void robotarm_student_2021a_E_invkin(real_T x, real_T y, real_T z, real_T
  *Psi, real_T *Phi, real_T *Theta)
{
  robotarm_student_2021a_Ebox_B.Y = y * 0.001;
  robotarm_student_2021a_Ebox_B.X_f = x * 0.001;
  robotarm_student_2021a_Ebox_B.R_g = sqrt(robotarm_student_2021a_Ebox_B.X_f *
    robotarm_student_2021a_Ebox_B.X_f + robotarm_student_2021a_Ebox_B.Y *
    robotarm_student_2021a_Ebox_B.Y);
  robotarm_student_2021a_Ebox_B.a = 0.246 - (z * 0.001 + 0.045);
  robotarm_student_2021a_Ebox_B.L_DB = sqrt(robotarm_student_2021a_Ebox_B.R_g *
    robotarm_student_2021a_Ebox_B.R_g + robotarm_student_2021a_Ebox_B.a *
    robotarm_student_2021a_Ebox_B.a);
  robotarm_student_2021a_Ebox_B.a = robotarm_student_2021a_Ebox_B.L_DB *
    robotarm_student_2021a_Ebox_B.L_DB;
  robotarm_student_2021a_Ebox_B.H_CDB = acos(((robotarm_student_2021a_Ebox_B.a +
    0.016900000000000002) - 0.034225) / (0.26 *
    robotarm_student_2021a_Ebox_B.L_DB));
  robotarm_student_2021a_Ebox_B.L_DF = sqrt(0.0313 - cos((3.1415926535897931 -
    robotarm_student_2021a_Ebox_B.H_CDB) - acos
    (((robotarm_student_2021a_Ebox_B.a + 0.034225) - 0.016900000000000002) /
     (0.37 * robotarm_student_2021a_Ebox_B.L_DB))) * 0.0312);
  robotarm_student_2021a_Ebox_B.a = robotarm_student_2021a_Ebox_B.L_DF *
    robotarm_student_2021a_Ebox_B.L_DF;
  robotarm_student_2021a_Ebox_B.R_g = robotarm_student_2021a_Ebox_B.H_CDB + asin
    (robotarm_student_2021a_Ebox_B.R_g / robotarm_student_2021a_Ebox_B.L_DB);
  robotarm_student_2021a_Ebox_B.L_DB = sqrt((robotarm_student_2021a_Ebox_B.a +
    0.027225000000000003) - cos(robotarm_student_2021a_Ebox_B.R_g - acos
    (((robotarm_student_2021a_Ebox_B.a + 0.016900000000000002) - 0.0144) / (0.26
    * robotarm_student_2021a_Ebox_B.L_DF))) * (2.0 *
    robotarm_student_2021a_Ebox_B.L_DF * 0.165));
  *Psi = robotarm_student__rt_atan2d_snf(robotarm_student_2021a_Ebox_B.Y,
    robotarm_student_2021a_Ebox_B.X_f);
  robotarm_student_2021a_Ebox_B.Y = robotarm_student_2021a_Ebox_B.L_DB *
    robotarm_student_2021a_Ebox_B.L_DB;
  *Phi = (1.5707963267948966 - ((1.5707963267948966 - acos
            (((robotarm_student_2021a_Ebox_B.Y + 0.027225000000000003) -
              robotarm_student_2021a_Ebox_B.a) / (2.0 *
              robotarm_student_2021a_Ebox_B.L_DB * 0.165))) + acos
           (((robotarm_student_2021a_Ebox_B.Y + 0.0064) - 0.016900000000000002) /
            (0.16 * robotarm_student_2021a_Ebox_B.L_DB)))) + -0.2551;
  *Theta = (robotarm_student_2021a_Ebox_B.R_g - 1.5707963267948966) + -0.615;
}

/* Function for Chart: '<S1>/Stateflow ' */
static void c3_robotarm_student_2021a_Ebox(void)
{
  int32_T d_previousEvent;
  int32_T y;
  int32_T z;
  if (robotarm_student_2021a_Ebox_DW.is_active_Object_Detection != 0U) {
    switch (robotarm_student_2021a_Ebox_DW.is_Object_Detection) {
     case robotarm_student_202_IN_Seeking:
      if (robotarm_student_2021a_Ebox_DW.sfEvent_b ==
          robotarm_studen_event_ScanAgain) {
        robotarm_student_2021a_Ebox_DW.is_Object_Detection =
          robotarm_student_2021a_Ebo_IN_a;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i3 = 0U;
      }
      break;

     case robotarm_student_IN_WaitSeeking:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i3 >= 20480U) {
        robotarm_student_2021a_Ebox_DW.is_Object_Detection =
          robotarm_student_202_IN_Seeking;
      }
      break;

     case robotarm_student_2021a_Ebo_IN_a:
      if ((robotarm_student_2021a_Ebox_B.Add > 0.0) &&
          (robotarm_student_2021a_Ebox_DW.temporalCounter_i3 >= 14336U)) {
        robotarm_student_2021a_Ebox_DW.is_Object_Detection =
          robotarm_student_IN_WaitSeeking;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i3 = 0U;

        /* Selector: '<S166>/Selector2' */
        robotarm_student_2021a_Ebox_DW.objectCoordinate1[0] =
          robotarm_student_2021a_Ebox_B.Selector2[0];
        robotarm_student_2021a_Ebox_DW.objectCoordinate2[0] =
          robotarm_student_2021a_Ebox_B.Selector2[3];
        robotarm_student_2021a_Ebox_DW.objectCoordinate3[0] =
          robotarm_student_2021a_Ebox_B.Selector2[6];
        if (robotarm_student_2021a_Ebox_B.Sum > 1.0) {
          robotarm_student_2021a_Ebox_DW.area[0] = 0.0;
          robotarm_student_2021a_Ebox_DW.area[1] = 0.0;
        } else {
          /* Selector: '<S166>/Selector' */
          robotarm_student_2021a_Ebox_DW.area[0] =
            robotarm_student_2021a_Ebox_B.Selector[0];
          robotarm_student_2021a_Ebox_DW.area[1] =
            robotarm_student_2021a_Ebox_B.Selector[1];
        }

        /* Selector: '<S166>/Selector2' */
        robotarm_student_2021a_Ebox_DW.objectCoordinate1[1] =
          robotarm_student_2021a_Ebox_B.Selector2[1];
        robotarm_student_2021a_Ebox_DW.objectCoordinate2[1] =
          robotarm_student_2021a_Ebox_B.Selector2[4];
        robotarm_student_2021a_Ebox_DW.objectCoordinate3[1] =
          robotarm_student_2021a_Ebox_B.Selector2[7];
        robotarm_student_2021a_Ebox_DW.objectCoordinate1[2] =
          robotarm_student_2021a_Ebox_B.Selector2[2];
        robotarm_student_2021a_Ebox_DW.objectCoordinate2[2] =
          robotarm_student_2021a_Ebox_B.Selector2[5];
        robotarm_student_2021a_Ebox_DW.objectCoordinate3[2] =
          robotarm_student_2021a_Ebox_B.Selector2[8];
        if (robotarm_student_2021a_Ebox_B.Sum > 1.0) {
          robotarm_student_2021a_Ebox_DW.area[2] = 0.0;
        } else {
          /* Selector: '<S166>/Selector' */
          robotarm_student_2021a_Ebox_DW.area[2] =
            robotarm_student_2021a_Ebox_B.Selector[2];
        }

        robotarm_student_2021a_Ebox_DW.X_in =
          robotarm_student_2021a_Ebox_DW.objectCoordinate1[0];
        robotarm_student_2021a_Ebox_DW.Y_in =
          robotarm_student_2021a_Ebox_DW.objectCoordinate1[1];
        robotarm_student_2021a_Ebox_DW.Z_in =
          robotarm_student_2021a_Ebox_DW.objectCoordinate1[2];
        if (robotarm_student_2021a_Ebox_B.Add == 1.0) {
          d_previousEvent = 20;
          y = 190;
          z = 40;
        } else if (robotarm_student_2021a_Ebox_B.Add == 2.0) {
          d_previousEvent = 20;
          y = 150;
          z = 48;
        } else if (robotarm_student_2021a_Ebox_B.Add == 3.0) {
          d_previousEvent = -20;
          y = 190;
          z = 40;
        } else if (robotarm_student_2021a_Ebox_B.Add == 4.0) {
          d_previousEvent = -20;
          y = 150;
          z = 40;
        } else {
          d_previousEvent = 0;
          y = 125;
          z = 99;
        }

        robotarm_student_2021a_Ebox_DW.x = d_previousEvent;
        robotarm_student_2021a_Ebox_DW.y = y;
        robotarm_student_2021a_Ebox_DW.z = z;
        d_previousEvent = robotarm_student_2021a_Ebox_DW.sfEvent_b;
        robotarm_student_2021a_Ebox_DW.sfEvent_b =
          robotarm_student_event_GetLabel;

        /* Chart: '<S1>/Stateflow ' */
        c3_robotarm_student_2021a_Ebox();
        robotarm_student_2021a_Ebox_DW.sfEvent_b = d_previousEvent;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ebox_DW.is_Object_Detection = 0U;
      break;
    }
  }

  if ((robotarm_student_2021a_Ebox_DW.is_active_Belt != 0U) &&
      (robotarm_student_2021a_Ebox_DW.is_Belt == robotarm_student_2_IN_Belt_Home))
  {
    robotarm_student_2021a_Ebox_B.Conveyor = 20.0;
  }

  if (robotarm_student_2021a_Ebox_DW.is_active_Robot_Arm != 0U) {
    switch (robotarm_student_2021a_Ebox_DW.is_Robot_Arm) {
     case robotarm_stu_IN_MoveToIntercept:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i2 >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_Robot_Arm =
          robotarm_student_2_IN_VacuumOff;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i2 = 0U;
        d_previousEvent = robotarm_student_2021a_Ebox_DW.sfEvent_b;
        robotarm_student_2021a_Ebox_DW.sfEvent_b =
          robotarm_studen_event_VacuumOff;

        /* Chart: '<S1>/Stateflow ' */
        c3_robotarm_student_2021a_Ebox();
        robotarm_student_2021a_Ebox_DW.sfEvent_b = d_previousEvent;
      }
      break;

     case robotarm_student_202_IN_Move_XY:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i2 >= (uint32_T)ceil
          ((robotarm_student_2021a_Ebox_B.move_time +
            robotarm_student_2021a_Ebox_DW.extra_block_delay) / 0.00048828125 -
           4.8828125E-12)) {
        robotarm_student_2021a_Ebox_DW.is_Robot_Arm =
          robotarm_student_IN_Move_Z_down;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i2 = 0U;
        robotarm_student_2021a_E_invkin(robotarm_student_2021a_Ebox_DW.x,
          robotarm_student_2021a_Ebox_DW.y - 15.0,
          robotarm_student_2021a_Ebox_DW.z, &robotarm_student_2021a_Ebox_B.R,
          &robotarm_student_2021a_Ebox_B.X, &robotarm_student_2021a_Ebox_B.Z);
      }
      break;

     case robotarm_student_IN_Move_Z_down:
      if ((robotarm_student_2021a_Ebox_DW.temporalCounter_i2 >= (uint32_T)ceil
           ((robotarm_student_2021a_Ebox_B.move_time +
             robotarm_student_2021a_Ebox_DW.extra_block_delay) / 0.00048828125 -
            4.8828125E-12)) && (robotarm_student_2021a_Ebox_B.Gain6 <= 1.0)) {
        robotarm_student_2021a_Ebox_DW.is_Robot_Arm =
          robotarm_student_2_IN_Move_Z_up;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i2 = 0U;
        robotarm_student_2021a_Ebox_DW.Buffer_Z = 0.0;
        robotarm_student_2021a_E_invkin(robotarm_student_2021a_Ebox_DW.x,
          robotarm_student_2021a_Ebox_DW.y - 15.0,
          robotarm_student_2021a_Ebox_DW.z +
          robotarm_student_2021a_Ebox_DW.BUFFER_Z,
          &robotarm_student_2021a_Ebox_B.R, &robotarm_student_2021a_Ebox_B.X,
          &robotarm_student_2021a_Ebox_B.Z);
        robotarm_student_2021a_Ebox_B.move_time = 1.5;
      }
      break;

     case robotarm_student_2_IN_Move_Z_up:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i2 >= (uint32_T)ceil
          ((robotarm_student_2021a_Ebox_B.move_time +
            robotarm_student_2021a_Ebox_DW.extra_block_delay) / 0.00048828125 -
           4.8828125E-12)) {
        robotarm_student_2021a_Ebox_DW.is_Robot_Arm =
          robotarm_stu_IN_MoveToIntercept;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i2 = 0U;
        robotarm_student_2021a_E_invkin(robotarm_student_2021a_Ebox_DW.X_in,
          robotarm_student_2021a_Ebox_DW.Y_in +
          (robotarm_student_2021a_Ebox_B.move_time +
           robotarm_student_2021a_Ebox_B.Sum) *
          robotarm_student_2021a_Ebox_B.Conveyor, 120.0,
          &robotarm_student_2021a_Ebox_B.R, &robotarm_student_2021a_Ebox_B.X,
          &robotarm_student_2021a_Ebox_B.Z);
      }
      break;

     case robotarm_s_IN_Start_AboveLabels:
      if ((robotarm_student_2021a_Ebox_DW.sfEvent_b ==
           robotarm_student_event_GetLabel) &&
          (robotarm_student_2021a_Ebox_DW.temporalCounter_i2 >= (uint32_T)ceil
           ((robotarm_student_2021a_Ebox_B.move_time +
             robotarm_student_2021a_Ebox_DW.extra_block_delay) / 0.00048828125 -
            4.8828125E-12))) {
        robotarm_student_2021a_Ebox_DW.is_Robot_Arm =
          robotarm_student_202_IN_Move_XY;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i2 = 0U;
        d_previousEvent = robotarm_student_2021a_Ebox_DW.sfEvent_b;
        robotarm_student_2021a_Ebox_DW.sfEvent_b =
          robotarm_student_event_VacuumOn;

        /* Chart: '<S1>/Stateflow ' */
        c3_robotarm_student_2021a_Ebox();
        robotarm_student_2021a_Ebox_DW.sfEvent_b = d_previousEvent;
        if (robotarm_student_2021a_Ebox_DW.is_Robot_Arm ==
            robotarm_student_202_IN_Move_XY) {
          robotarm_student_2021a_E_invkin(robotarm_student_2021a_Ebox_DW.x,
            robotarm_student_2021a_Ebox_DW.y - 15.0,
            robotarm_student_2021a_Ebox_DW.z +
            robotarm_student_2021a_Ebox_DW.BUFFER_Z,
            &robotarm_student_2021a_Ebox_B.R, &robotarm_student_2021a_Ebox_B.X,
            &robotarm_student_2021a_Ebox_B.Z);
        }
      }
      break;

     case robotarm_student_2_IN_VacuumOff:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i2 >= 10240U) {
        robotarm_student_2021a_Ebox_DW.is_Robot_Arm =
          robotarm_s_IN_Start_AboveLabels;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i2 = 0U;
        enter_atomic_Start_AboveLabels();
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ebox_DW.is_Robot_Arm = 0U;
      break;
    }
  }

  if (robotarm_student_2021a_Ebox_DW.is_active_Vacuum != 0U) {
    switch (robotarm_student_2021a_Ebox_DW.is_Vacuum) {
     case robotarm_student_20_IN_AirBurst:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_m >= 1024U) {
        robotarm_student_2021a_Ebox_DW.is_Vacuum =
          robotarm_student__IN_Vacuum_Off;
        robotarm_student_2021a_Ebox_B.Pump = 0.0;
        robotarm_student_2021a_Ebox_B.Blow_suck = 0.0;
      }
      break;

     case robotarm_student__IN_Vacuum_Off:
      if (robotarm_student_2021a_Ebox_DW.sfEvent_b ==
          robotarm_student_event_VacuumOn) {
        robotarm_student_2021a_Ebox_DW.is_Vacuum =
          robotarm_student_2_IN_Vacuum_On;
      }
      break;

     case robotarm_student_2_IN_Vacuum_On:
      if (robotarm_student_2021a_Ebox_DW.sfEvent_b ==
          robotarm_studen_event_VacuumOff) {
        robotarm_student_2021a_Ebox_DW.is_Vacuum =
          robotarm_student_20_IN_AirBurst;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_m = 0U;
        robotarm_student_2021a_Ebox_B.Blow_suck = 1.0;
      } else {
        robotarm_student_2021a_Ebox_B.Blow_suck = 0.0;
        robotarm_student_2021a_Ebox_B.Pump = -1.0;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      robotarm_student_2021a_Ebox_DW.is_Vacuum = 0U;
      break;
    }
  }
}

/* Function for Chart: '<S1>/Stateflow ' */
static void enter_atomic_Start_AboveLabels(void)
{
  int32_T b_previousEvent;
  robotarm_student_2021a_Ebox_DW.extra_block_delay = 0.2;
  robotarm_student_2021a_Ebox_B.move_time = 1.0;
  robotarm_student_2021a_E_invkin(0.0, 125.0, 99.0,
    &robotarm_student_2021a_Ebox_B.R, &robotarm_student_2021a_Ebox_B.X,
    &robotarm_student_2021a_Ebox_B.Z);
  b_previousEvent = robotarm_student_2021a_Ebox_DW.sfEvent_b;
  robotarm_student_2021a_Ebox_DW.sfEvent_b = robotarm_studen_event_ScanAgain;

  /* Chart: '<S1>/Stateflow ' */
  c3_robotarm_student_2021a_Ebox();
  robotarm_student_2021a_Ebox_DW.sfEvent_b = b_previousEvent;
}

/* Model step function */
void robotarm_student_2021a_Ebox_step(void)
{
  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ebox_DW.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ebox_DW.IfActionSubsystem_SubsysRanBC_o);

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (robotarm_student_2021a_Ebox_DW.IfActionSubsystem1.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ebox_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ebox_DW.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(robotarm_student_2021a_Ebox_DW.Subsystem3_SubsysRanBC);

  /* S-Function (ec_Supervisor): '<S181>/S-Function' */

  /* Level2 S-Function Block: '<S181>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* S-Function (ec_Ebox): '<S178>/ec_Ebox' */

  /* Level2 S-Function Block: '<S178>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* S-Function (ec_Ebox): '<S179>/ec_Ebox' */

  /* Level2 S-Function Block: '<S179>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* S-Function (ec_Ebox): '<S180>/ec_Ebox' */

  /* Level2 S-Function Block: '<S180>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S176>/Homing Running Switch' */
  if (robotarm_student_2021a_Ebox_B.ec_Ebox_o1_o[1] >=
      robotarm_student_2021a_Ebox_P.HomingRunningSwitch_Threshold_d) {
    /* Switch: '<S176>/Homing Running Switch' incorporates:
     *  Gain: '<S176>/Gain'
     *  Gain: '<S176>/Gain1'
     *  Gain: '<S176>/Gain2'
     *  Gain: '<S176>/Gain5'
     */
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] =
      robotarm_student_2021a_Ebox_P.Gain_Gain_p *
      robotarm_student_2021a_Ebox_B.ec_Ebox_o2[0] *
      robotarm_student_2021a_Ebox_P.Gain5_Gain_e;
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1] =
      robotarm_student_2021a_Ebox_P.Gain1_Gain_c *
      robotarm_student_2021a_Ebox_B.ec_Ebox_o2[1] *
      robotarm_student_2021a_Ebox_P.Gain5_Gain_e;
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] =
      robotarm_student_2021a_Ebox_P.Gain2_Gain_d *
      robotarm_student_2021a_Ebox_B.ec_Ebox_o2_o[0] *
      robotarm_student_2021a_Ebox_P.Gain5_Gain_e;
  } else {
    /* Switch: '<S176>/Homing Running Switch' incorporates:
     *  Gain: '<S176>/Gain'
     *  Gain: '<S176>/Gain1'
     *  Gain: '<S176>/Gain2'
     */
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] =
      robotarm_student_2021a_Ebox_P.Gain_Gain_p *
      robotarm_student_2021a_Ebox_B.ec_Ebox_o2[0];
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1] =
      robotarm_student_2021a_Ebox_P.Gain1_Gain_c *
      robotarm_student_2021a_Ebox_B.ec_Ebox_o2[1];
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] =
      robotarm_student_2021a_Ebox_P.Gain2_Gain_d *
      robotarm_student_2021a_Ebox_B.ec_Ebox_o2_o[0];
  }

  /* End of Switch: '<S176>/Homing Running Switch' */

  /* Gain: '<S176>/Gain3' */
  robotarm_student_2021a_Ebox_B.Gain3 =
    robotarm_student_2021a_Ebox_P.Gain3_Gain_j *
    robotarm_student_2021a_Ebox_B.ec_Ebox_o2_o[1];

  /* Gain: '<S176>/Gain6' */
  robotarm_student_2021a_Ebox_B.Gain6 =
    robotarm_student_2021a_Ebox_P.Gain6_Gain_i *
    robotarm_student_2021a_Ebox_B.ec_Ebox_o1_o[0];

  /* Constant: '<S197>/Constant1' */
  robotarm_student_2021a_Ebox_B.Constant1 =
    robotarm_student_2021a_Ebox_P.Constant1_Value_f3;

  /* Sum: '<S185>/Sum2' incorporates:
   *  DiscreteIntegrator: '<S185>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S197>/Discrete-Time Integrator'
   *  Sum: '<S185>/Sum'
   */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    (robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE +
     robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_n) -
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0];

  /* RelationalOperator: '<S185>/Relational Operator' incorporates:
   *  Constant: '<S185>/Constant'
   */
  robotarm_student_2021a_Ebox_B.RelationalOperator =
    (robotarm_student_2021a_Ebox_B.Sum2_k <=
     robotarm_student_2021a_Ebox_P.Constant_Value_g);

  /* RelationalOperator: '<S182>/Compare' incorporates:
   *  Constant: '<S182>/Constant'
   *  UnitDelay: '<S177>/Unit Delay'
   */
  robotarm_student_2021a_Ebox_B.Compare =
    (robotarm_student_2021a_Ebox_DW.UnitDelay_DSTATE ==
     robotarm_student_2021a_Ebox_P.CompareToConstant_const);

  /* MATLAB Function: '<S185>/Angle2Z' incorporates:
   *  MATLAB Function: '<S187>/Angle2Z'
   */
  robotarm_student_2021a_Ebox_B.Gain_au = cos
    (-robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1] + 1.3157007486526573)
    * 0.08;
  robotarm_student_2021a_Ebox_B.fy1_tmp = sin
    (-robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1] + 1.3157007486526573)
    * 0.08;
  robotarm_student_2021a_Ebox_B.PulseGenerator = sin
    (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] + 0.615) * 0.13 +
    0.165;
  robotarm_student_2021a_Ebox_B.Gain3_b = cos
    (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] + 0.615) * 0.13 -
    robotarm_student_2021a_Ebox_B.Gain_au;
  robotarm_student_2021a_Ebox_B.d13_tmp =
    robotarm_student_2021a_Ebox_B.PulseGenerator -
    robotarm_student_2021a_Ebox_B.fy1_tmp;
  robotarm_student_2021a_Ebox_B.d12 = sqrt(robotarm_student_2021a_Ebox_B.Gain3_b
    * robotarm_student_2021a_Ebox_B.Gain3_b +
    robotarm_student_2021a_Ebox_B.d13_tmp *
    robotarm_student_2021a_Ebox_B.d13_tmp);
  robotarm_student_2021a_Ebox_B.fy1_tmp = sqrt((0.165 -
    robotarm_student_2021a_Ebox_B.fy1_tmp) * (0.165 -
    robotarm_student_2021a_Ebox_B.fy1_tmp) +
    robotarm_student_2021a_Ebox_B.Gain_au *
    robotarm_student_2021a_Ebox_B.Gain_au);
  robotarm_student_2021a_Ebox_B.Sum1_k = robotarm_student_2021a_Ebox_B.d12 *
    robotarm_student_2021a_Ebox_B.d12;
  robotarm_student_2021a_Ebox_B.y_j =
    ((robotarm_student_2021a_Ebox_B.PulseGenerator - sin(((3.1415926535897931 -
         acos(((robotarm_student_2021a_Ebox_B.Sum1_k + 0.016900000000000002) -
               robotarm_student_2021a_Ebox_B.fy1_tmp *
               robotarm_student_2021a_Ebox_B.fy1_tmp) / (2.0 *
           robotarm_student_2021a_Ebox_B.d12 * 0.13))) - acos
        (((robotarm_student_2021a_Ebox_B.Sum1_k + 0.0144) - 0.016900000000000002)
         / (2.0 * robotarm_student_2021a_Ebox_B.d12 * 0.12))) -
       (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] + 0.615)) * 0.185)
     - 0.045) + 0.081;

  /* Constant: '<S177>/set_robot_calibration_r' */
  robotarm_student_2021a_Ebox_B.set_robot_calibration_r =
    robotarm_student_2021a_Ebox_P.set_robot_calibration_r_Value;

  /* Chart: '<S185>/Supervisor' */
  if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p < 16383U) {
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p++;
  }

  robotarm_student_2021a_Ebox_DW.sfEvent_f = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ebox_DW.is_active_c5_robotarm_student_2 == 0U) {
    robotarm_student_2021a_Ebox_DW.is_active_c5_robotarm_student_2 = 1U;
    robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
      robotarm_student_202_IN_Waiting;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    robotarm_student_2021a_Ebox_B.Ready_n = 0.0;
    robotarm_student_2021a_Ebox_B.toPoint_i = 0.0;
    robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
    robotarm_student_2021a_Ebox_B.jogSpeed_p = -0.001;
    robotarm_student_2021a_Ebox_B.homeControllerEnabled_i = 0.01;
  } else {
    switch (robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb) {
     case robotarm_stud_IN_AirbagConveyor:
      robotarm_student_2021a_Ebox_B.airBagEnabled_ab = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_stud_IN_DisableOutputs;
        robotarm_student_2021a_Ebox_B.controlEnabled_e = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_np = 1.0;
      }
      break;

     case robotarm_student__IN_AirbagLeft:
      robotarm_student_2021a_Ebox_B.airBagEnabled_ab = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_stud_IN_DisableOutputs;
        robotarm_student_2021a_Ebox_B.controlEnabled_e = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_np = 1.0;
      }
      break;

     case robotarm_student_IN_AirbagLeft1:
      robotarm_student_2021a_Ebox_B.airBagEnabled_ab = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_stud_IN_DisableOutputs;
        robotarm_student_2021a_Ebox_B.controlEnabled_e = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_np = 1.0;
      }
      break;

     case robotarm_stud_IN_CheckRobotIsON:
      if (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] < -3.0) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_stud_IN_STOPRobotIsOFF;
        robotarm_student_2021a_Ebox_B.StopSim_np = 1.0;
      } else {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student_2_IN_RobotIsON;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;
      }
      break;

     case robotarm_stud_IN_DisableOutputs:
      robotarm_student_2021a_Ebox_B.controlEnabled_e = 0.0;
      robotarm_student_2021a_Ebox_B.StopSim_np = 1.0;
      break;

     case robotarm__IN_EnableRunAndSafety:
      robotarm_student_2021a_Ebox_B.resetEnc_l = 0.0;
      if (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] > 2.7) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student_IN_AirbagLeft1;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos_k =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0];
        robotarm_student_2021a_Ebox_B.airBagEnabled_ab = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef_pn =
          robotarm_student_2021a_Ebox_DW.currentcarPos_k - 0.02;
      } else if (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] < -1.1) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student__IN_AirbagLeft;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos_k =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0];
        robotarm_student_2021a_Ebox_B.airBagEnabled_ab = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef_pn =
          robotarm_student_2021a_Ebox_DW.currentcarPos_k + 0.02;
      } else if ((robotarm_student_2021a_Ebox_B.y_j < 0.056) &&
                 (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] < 1.3)) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_stud_IN_AirbagConveyor;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos_k =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0];
        robotarm_student_2021a_Ebox_B.airBagEnabled_ab = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef_pn =
          robotarm_student_2021a_Ebox_DW.currentcarPos_k + 0.02;
      }
      break;

     case robotarm_student_2021_IN_Homing:
      /* Transition if homeswitch becomes high */
      if (robotarm_student_2021a_Ebox_B.RelationalOperator) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student_20_IN_MovetoX0;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;
        robotarm_student_2021a_Ebox_B.jogSpeed_p = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_i =
          robotarm_student_2021a_Ebox_B.set_robot_calibration_r;
      }
      break;

     case robotarm_student_20_IN_MovetoX0:
      if ((robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] ==
           robotarm_student_2021a_Ebox_B.toPoint_i) ||
          (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 10240U)) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_stud_IN_CheckRobotIsON;
      } else {
        /*  Allow time for moving */
      }
      break;

     case robotarm_student_20_IN_ResetEnc:
      robotarm_student_2021a_Ebox_B.resetEnc_l = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm__IN_EnableRunAndSafety;
        robotarm_student_2021a_Ebox_B.resetEnc_l = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 0.0;
      }
      break;

     case robotarm_student_2_IN_RobotIsON:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student_IN_WaitForRest;
        robotarm_student_2021a_Ebox_B.Ready_n = 1.0;
      }
      break;

     case robotarm_stud_IN_STOPRobotIsOFF:
      robotarm_student_2021a_Ebox_B.StopSim_np = 1.0;
      break;

     case robotarm_student_IN_WaitForRest:
      if (robotarm_student_2021a_Ebox_B.Compare) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student_20_IN_ResetEnc;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 100.0;
        robotarm_student_2021a_Ebox_B.resetEnc_l = 1.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_i = 0.0;
      }
      break;

     case robotarm_student_202_IN_Waiting:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student_20_IN_Waiting1;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_n = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_i = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_p = 0.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_i = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_n = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_i = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_p = -0.001;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_i = 0.01;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb =
          robotarm_student_2021_IN_Homing;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ebox_B.Ready_n = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_i = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_p = -0.4;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_i = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_n = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_i = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_p = 0.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_i = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S185>/Supervisor' */

  /* Constant: '<S203>/Constant1' */
  robotarm_student_2021a_Ebox_B.Constant1_c =
    robotarm_student_2021a_Ebox_P.Constant1_Value_c;

  /* Sum: '<S186>/Sum2' incorporates:
   *  DiscreteIntegrator: '<S186>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S203>/Discrete-Time Integrator'
   *  Sum: '<S186>/Sum'
   */
  robotarm_student_2021a_Ebox_B.Sum4_c =
    (robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_p +
     robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTAT_pn) -
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1];

  /* RelationalOperator: '<S186>/Relational Operator' incorporates:
   *  Constant: '<S186>/Constant'
   */
  robotarm_student_2021a_Ebox_B.RelationalOperator_o =
    (robotarm_student_2021a_Ebox_B.Sum4_c <=
     robotarm_student_2021a_Ebox_P.Constant_Value_n);

  /* Constant: '<S177>/set_robot_calibration_x' */
  robotarm_student_2021a_Ebox_B.set_robot_calibration_x =
    robotarm_student_2021a_Ebox_P.set_robot_calibration_x_Value;

  /* Chart: '<S186>/Supervisor' */
  if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a < 16383U) {
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a++;
  }

  robotarm_student_2021a_Ebox_DW.sfEvent_jk = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ebox_DW.is_active_c6_robotarm_student_2 == 0U) {
    robotarm_student_2021a_Ebox_DW.is_active_c6_robotarm_student_2 = 1U;
    robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
      robotarm_student_2_IN_Waiting_o;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    robotarm_student_2021a_Ebox_B.Ready_l = 0.0;
    robotarm_student_2021a_Ebox_B.toPoint_h = 0.0;
    robotarm_student_2021a_Ebox_B.homingBusy_d = 1.0;
    robotarm_student_2021a_Ebox_B.jogSpeed_o = -0.001;
    robotarm_student_2021a_Ebox_B.homeControllerEnabled_f = 0.01;
  } else {
    switch (robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb) {
     case robotarm_studen_IN_AirbagLeft_h:
      robotarm_student_2021a_Ebox_B.airBagEnabled_a = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_st_IN_DisableOutputs_n;
        robotarm_student_2021a_Ebox_B.controlEnabled_b = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_p = 1.0;
      }
      break;

     case robotarm_student_IN_AirbagRight:
      robotarm_student_2021a_Ebox_B.airBagEnabled_a = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_st_IN_DisableOutputs_n;
        robotarm_student_2021a_Ebox_B.controlEnabled_b = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_p = 1.0;
      }
      break;

     case robotarm_st_IN_DisableOutputs_n:
      robotarm_student_2021a_Ebox_B.controlEnabled_b = 0.0;
      robotarm_student_2021a_Ebox_B.StopSim_p = 1.0;
      break;

     case robotar_IN_EnableRunAndSafety_n:
      robotarm_student_2021a_Ebox_B.resetEnc_n = 0.0;
      if (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1] < -0.5) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_studen_IN_AirbagLeft_h;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_d = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos_f =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1];
        robotarm_student_2021a_Ebox_B.airBagEnabled_a = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef_p =
          robotarm_student_2021a_Ebox_DW.currentcarPos_f + 0.02;
      } else if (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1] > 1.1) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_student_IN_AirbagRight;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_d = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos_f =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1];
        robotarm_student_2021a_Ebox_B.airBagEnabled_a = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef_p =
          robotarm_student_2021a_Ebox_DW.currentcarPos_f - 0.02;
      }
      break;

     case robotarm_student_20_IN_Homing_c:
      /* Transition if homeswitch becomes high */
      if (robotarm_student_2021a_Ebox_B.RelationalOperator_o) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_student__IN_MovetoX0_i;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a = 0U;
        robotarm_student_2021a_Ebox_B.jogSpeed_o = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_h =
          robotarm_student_2021a_Ebox_B.set_robot_calibration_x;
      }
      break;

     case robotarm_student__IN_MovetoX0_i:
      if ((robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1] ==
           robotarm_student_2021a_Ebox_B.toPoint_h) ||
          (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a >= 10240U)) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_stude_IN_WaitForRest_f;
        robotarm_student_2021a_Ebox_B.Ready_l = 1.0;
      } else {
        /* Allow time for moving */
      }
      break;

     case robotarm_student__IN_ResetEnc_o:
      robotarm_student_2021a_Ebox_B.resetEnc_n = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotar_IN_EnableRunAndSafety_n;
        robotarm_student_2021a_Ebox_B.resetEnc_n = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_d = 0.0;
      }
      break;

     case robotarm_stude_IN_WaitForRest_f:
      if (robotarm_student_2021a_Ebox_B.Compare) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_student__IN_ResetEnc_o;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a = 0U;
        robotarm_student_2021a_Ebox_B.resetEnc_n = 1.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_f = 0.0;
      }
      break;

     case robotarm_student_2_IN_Waiting_o:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a >= 4096U) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_student__IN_Waiting1_e;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_l = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_h = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_d = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_o = 0.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_f = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_l = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_h = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_d = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_o = -0.001;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_f = 0.01;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb =
          robotarm_student_20_IN_Homing_c;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ebox_B.jogSpeed_o = -0.2;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_f = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_l = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint_h = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_d = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_o = 0.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_f = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S186>/Supervisor' */

  /* Constant: '<S213>/Constant1' */
  robotarm_student_2021a_Ebox_B.Constant1_k =
    robotarm_student_2021a_Ebox_P.Constant1_Value_e;

  /* Sum: '<S187>/Sum2' incorporates:
   *  DiscreteIntegrator: '<S187>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S213>/Discrete-Time Integrator'
   *  Sum: '<S187>/Sum'
   */
  robotarm_student_2021a_Ebox_B.Sum1_k =
    (robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_c +
     robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_i) -
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2];

  /* RelationalOperator: '<S187>/Relational Operator' incorporates:
   *  Constant: '<S187>/Constant'
   */
  robotarm_student_2021a_Ebox_B.RelationalOperator_n =
    (robotarm_student_2021a_Ebox_B.Sum1_k >=
     robotarm_student_2021a_Ebox_P.Constant_Value_p);

  /* MATLAB Function: '<S187>/Angle2Z' */
  robotarm_student_2021a_Ebox_B.d12 = sqrt(robotarm_student_2021a_Ebox_B.Gain3_b
    * robotarm_student_2021a_Ebox_B.Gain3_b +
    robotarm_student_2021a_Ebox_B.d13_tmp *
    robotarm_student_2021a_Ebox_B.d13_tmp);
  robotarm_student_2021a_Ebox_B.Gain_au = robotarm_student_2021a_Ebox_B.d12 *
    robotarm_student_2021a_Ebox_B.d12;
  robotarm_student_2021a_Ebox_B.y =
    ((robotarm_student_2021a_Ebox_B.PulseGenerator - sin(((3.1415926535897931 -
         acos(((robotarm_student_2021a_Ebox_B.Gain_au + 0.016900000000000002) -
               robotarm_student_2021a_Ebox_B.fy1_tmp *
               robotarm_student_2021a_Ebox_B.fy1_tmp) / (2.0 *
           robotarm_student_2021a_Ebox_B.d12 * 0.13))) - acos
        (((robotarm_student_2021a_Ebox_B.Gain_au + 0.0144) -
          0.016900000000000002) / (2.0 * robotarm_student_2021a_Ebox_B.d12 *
          0.12))) - (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] +
                     0.615)) * 0.185) - 0.045) + 0.081;

  /* Constant: '<S177>/set_robot_calibration_z' */
  robotarm_student_2021a_Ebox_B.set_robot_calibration_z =
    robotarm_student_2021a_Ebox_P.set_robot_calibration_z_Value;

  /* Chart: '<S187>/Supervisor' */
  if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k < 16383U) {
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k++;
  }

  robotarm_student_2021a_Ebox_DW.sfEvent_j = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ebox_DW.is_active_c7_robotarm_student_2 == 0U) {
    robotarm_student_2021a_Ebox_DW.is_active_c7_robotarm_student_2 = 1U;
    robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
      robotarm_student_2_IN_Waiting_c;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    robotarm_student_2021a_Ebox_B.Ready_c = 0.0;
    robotarm_student_2021a_Ebox_B.toPoint = 0.0;
    robotarm_student_2021a_Ebox_B.homingBusy_j = 1.0;
    robotarm_student_2021a_Ebox_B.jogSpeed_f = 0.001;
    robotarm_student_2021a_Ebox_B.homeControllerEnabled_j = 0.1;
  } else {
    switch (robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb) {
     case robotarm_stud_IN_AirbagConveyor:
      robotarm_student_2021a_Ebox_B.airBagEnabled = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_st_IN_DisableOutputs_b;
        robotarm_student_2021a_Ebox_B.controlEnabled = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_n = 1.0;
      }
      break;

     case robotarm_student__IN_AirbagDrop:
      robotarm_student_2021a_Ebox_B.airBagEnabled = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_st_IN_DisableOutputs_b;
        robotarm_student_2021a_Ebox_B.controlEnabled = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_n = 1.0;
      }
      break;

     case robotarm_student_2_IN_AirbagTop:
      robotarm_student_2021a_Ebox_B.airBagEnabled = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_st_IN_DisableOutputs_b;
        robotarm_student_2021a_Ebox_B.controlEnabled = 0.0;
        robotarm_student_2021a_Ebox_B.StopSim_n = 1.0;
      }
      break;

     case robotarm_st_IN_DisableOutputs_b:
      robotarm_student_2021a_Ebox_B.controlEnabled = 0.0;
      robotarm_student_2021a_Ebox_B.StopSim_n = 1.0;
      break;

     case robotar_IN_EnableRunAndSafety_g:
      robotarm_student_2021a_Ebox_B.resetEnc_j = 0.0;
      if ((robotarm_student_2021a_Ebox_B.y < 0.056) &&
          (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] < 1.3)) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_stud_IN_AirbagConveyor;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2];
        robotarm_student_2021a_Ebox_B.airBagEnabled = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef =
          robotarm_student_2021a_Ebox_DW.currentcarPos + 0.1;
      } else if (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] > 0.3) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_student_2_IN_AirbagTop;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2];
        robotarm_student_2021a_Ebox_B.airBagEnabled = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef =
          robotarm_student_2021a_Ebox_DW.currentcarPos - 0.02;
      } else if ((robotarm_student_2021a_Ebox_B.y < 0.0) &&
                 (robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0] > 1.3)) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_student__IN_AirbagDrop;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;
        robotarm_student_2021a_Ebox_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ebox_DW.currentcarPos =
          robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2];
        robotarm_student_2021a_Ebox_B.airBagEnabled = 1.0;
        robotarm_student_2021a_Ebox_B.airBagRef =
          robotarm_student_2021a_Ebox_DW.currentcarPos + 0.02;
      }
      break;

     case robotarm_student_20_IN_Homing_b:
      /* Transition if homeswitch becomes high */
      if (robotarm_student_2021a_Ebox_B.RelationalOperator_n) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_student__IN_MovetoX0_n;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;
        robotarm_student_2021a_Ebox_B.jogSpeed_f = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint =
          robotarm_student_2021a_Ebox_B.set_robot_calibration_z;
      }
      break;

     case robotarm_student__IN_MovetoX0_n:
      if ((robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2] ==
           robotarm_student_2021a_Ebox_B.toPoint) ||
          (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k >= 10240U)) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_stude_IN_WaitForRest_c;
        robotarm_student_2021a_Ebox_B.Ready_c = 1.0;
      } else {
        /* Allow time for moving */
      }
      break;

     case robotarm_student__IN_ResetEnc_j:
      robotarm_student_2021a_Ebox_B.resetEnc_j = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotar_IN_EnableRunAndSafety_g;
        robotarm_student_2021a_Ebox_B.resetEnc_j = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_j = 0.0;
      }
      break;

     case robotarm_stude_IN_WaitForRest_c:
      if (robotarm_student_2021a_Ebox_B.Compare) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_student__IN_ResetEnc_j;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;
        robotarm_student_2021a_Ebox_B.resetEnc_j = 1.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_j = 0.0;
        robotarm_student_2021a_Ebox_B.Ready_c = 1.0;
      }
      break;

     case robotarm_student_2_IN_Waiting_c:
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k >= 4096U) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_student__IN_Waiting1_m;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_c = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint = 0.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_f = 0.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_j = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_c = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_f = 0.001;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_j = 0.1;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k >= 4096U) {
        robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb =
          robotarm_student_20_IN_Homing_b;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ebox_B.toPoint = 0.0;
        robotarm_student_2021a_Ebox_B.Ready_c = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy_j = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_f = 0.2;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_j = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        robotarm_student_2021a_Ebox_B.Ready_c = 0.0;
        robotarm_student_2021a_Ebox_B.toPoint = 0.0;
        robotarm_student_2021a_Ebox_B.jogSpeed_f = 0.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_j = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S187>/Supervisor' */

  /* Chart: '<S188>/Supervisor' */
  if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1 < 8191U) {
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1++;
  }

  robotarm_student_2021a_Ebox_DW.sfEvent = robotarm_student_202_CALL_EVENT;
  if (robotarm_student_2021a_Ebox_DW.is_active_c4_robotarm_student_2 == 0U) {
    robotarm_student_2021a_Ebox_DW.is_active_c4_robotarm_student_2 = 1U;
    robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb =
      robotarm_student__IN_Waiting_ov;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1 = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoi d moving to X0 too
       early */
  } else {
    switch (robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb) {
     case robotarm_st_IN_CheckRobotIsON_f:
      robotarm_student_2021a_Ebox_B.jogSpeed = 0.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1 >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb =
          robotarm_stude_IN_WaitForRest_o;
        robotarm_student_2021a_Ebox_B.Ready = 1.0;
      }
      break;

     case robotar_IN_EnableRunAndSafety_e:
      robotarm_student_2021a_Ebox_B.resetEnc = 0.0;
      robotarm_student_2021a_Ebox_B.homingBusy = 0.0;
      break;

     case robotarm_student_20_IN_Homing_e:
      robotarm_student_2021a_Ebox_B.Ready = 0.0;
      robotarm_student_2021a_Ebox_B.homingBusy = 1.0;
      robotarm_student_2021a_Ebox_B.jogSpeed = 20.0;
      robotarm_student_2021a_Ebox_B.homeControllerEnabled = 1.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1 >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb =
          robotarm_student__IN_MovetoX0_o;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1 = 0U;
        robotarm_student_2021a_Ebox_B.jogSpeed = -20.0;
      }
      break;

     case robotarm_student__IN_MovetoX0_o:
      robotarm_student_2021a_Ebox_B.jogSpeed = -20.0;

      /* Allow time for moving */
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1 >= 6144U) {
        robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb =
          robotarm_st_IN_CheckRobotIsON_f;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1 = 0U;
        robotarm_student_2021a_Ebox_B.jogSpeed = 0.0;
      }
      break;

     case robotarm_student_IN_ResetEnc_ol:
      robotarm_student_2021a_Ebox_B.resetEnc = 1.0;
      robotarm_student_2021a_Ebox_B.homeControllerEnabled = 0.0;
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1 >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb =
          robotar_IN_EnableRunAndSafety_e;
        robotarm_student_2021a_Ebox_B.resetEnc = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy = 0.0;
      }
      break;

     case robotarm_stude_IN_WaitForRest_o:
      robotarm_student_2021a_Ebox_B.Ready = 1.0;
      if (robotarm_student_2021a_Ebox_B.Compare) {
        robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb =
          robotarm_student_IN_ResetEnc_ol;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1 = 0U;
        robotarm_student_2021a_Ebox_B.resetEnc = 1.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled = 0.0;
      }
      break;

     default:
      /* case IN_Waiting: */
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1 >= 2048U) {
        robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb =
          robotarm_student_20_IN_Homing_e;
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1 = 0U;

        /* Set jog speed and homing state */
        robotarm_student_2021a_Ebox_B.Ready = 0.0;
        robotarm_student_2021a_Ebox_B.homingBusy = 1.0;
        robotarm_student_2021a_Ebox_B.jogSpeed = 20.0;
        robotarm_student_2021a_Ebox_B.homeControllerEnabled = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S188>/Supervisor' */

  /* Sum: '<S183>/Add' */
  robotarm_student_2021a_Ebox_B.PulseGenerator =
    ((robotarm_student_2021a_Ebox_B.homingBusy_n +
      robotarm_student_2021a_Ebox_B.homingBusy_d) +
     robotarm_student_2021a_Ebox_B.homingBusy_j) +
    robotarm_student_2021a_Ebox_B.homingBusy;

  /* Signum: '<S183>/Sign' */
  if (robotarm_student_2021a_Ebox_B.PulseGenerator < 0.0) {
    robotarm_student_2021a_Ebox_B.PulseGenerator = -1.0;
  } else if (robotarm_student_2021a_Ebox_B.PulseGenerator > 0.0) {
    robotarm_student_2021a_Ebox_B.PulseGenerator = 1.0;
  } else if (robotarm_student_2021a_Ebox_B.PulseGenerator == 0.0) {
    robotarm_student_2021a_Ebox_B.PulseGenerator = 0.0;
  } else {
    robotarm_student_2021a_Ebox_B.PulseGenerator = (rtNaN);
  }

  /* End of Signum: '<S183>/Sign' */

  /* Sum: '<S183>/Add1' incorporates:
   *  Constant: '<S183>/Constant'
   */
  robotarm_student_2021a_Ebox_B.Add1 =
    robotarm_student_2021a_Ebox_P.Constant_Value_e -
    robotarm_student_2021a_Ebox_B.PulseGenerator;

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable '
   */
  if (robotarm_student_2021a_Ebox_B.Add1 > 0.0) {
    robotarm_student_2021a_Ebox_DW.Controller_MODE = true;
  } else if (robotarm_student_2021a_Ebox_DW.Controller_MODE) {
    /* Disable for Enabled SubSystem: '<S166>/Enabled Subsystem' */
    robotarm_student_2021a_Ebox_DW.EnabledSubsystem_MODE = false;

    /* End of Disable for SubSystem: '<S166>/Enabled Subsystem' */
    robotarm_student_2021a_Ebox_DW.Controller_MODE = false;
  }

  if (robotarm_student_2021a_Ebox_DW.Controller_MODE) {
    /* SignalConversion: '<S1>/Signal Conversion2' */
    robotarm_student_2021a_Ebox_B.SignalConversion2 =
      robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0];

    /* SignalConversion: '<S1>/Signal Conversion1' */
    robotarm_student_2021a_Ebox_B.SignalConversion1 =
      robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1];

    /* SignalConversion: '<S1>/Signal Conversion' */
    robotarm_student_2021a_Ebox_B.SignalConversion =
      robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2];

    /* ManualSwitch: '<S166>/Manual Switch1' */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch1_CurrentSetting == 1) {
      /* ManualSwitch: '<S166>/Manual Switch1' incorporates:
       *  Constant: '<S166>/Constant21'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch1_b =
        robotarm_student_2021a_Ebox_P.Constant21_Value;
    } else {
      /* ManualSwitch: '<S166>/Manual Switch1' incorporates:
       *  Constant: '<S166>/Constant20'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch1_b =
        robotarm_student_2021a_Ebox_P.Constant20_Value;
    }

    /* End of ManualSwitch: '<S166>/Manual Switch1' */

    /* ManualSwitch: '<S166>/Manual Switch2' */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch2_CurrentSetting == 1) {
      /* ManualSwitch: '<S166>/Manual Switch2' incorporates:
       *  Constant: '<S166>/Constant22'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch2 =
        robotarm_student_2021a_Ebox_P.Constant22_Value;
    } else {
      /* ManualSwitch: '<S166>/Manual Switch2' incorporates:
       *  Constant: '<S166>/Constant20'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch2 =
        robotarm_student_2021a_Ebox_P.Constant20_Value;
    }

    /* End of ManualSwitch: '<S166>/Manual Switch2' */

    /* ManualSwitch: '<S166>/Manual Switch3' */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch3_CurrentSetting == 1) {
      /* ManualSwitch: '<S166>/Manual Switch3' incorporates:
       *  Constant: '<S166>/Constant23'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch3 =
        robotarm_student_2021a_Ebox_P.Constant23_Value;
    } else {
      /* ManualSwitch: '<S166>/Manual Switch3' incorporates:
       *  Constant: '<S166>/Constant20'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch3 =
        robotarm_student_2021a_Ebox_P.Constant20_Value;
    }

    /* End of ManualSwitch: '<S166>/Manual Switch3' */

    /* ManualSwitch: '<S166>/Manual Switch4' */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch4_CurrentSetting == 1) {
      /* ManualSwitch: '<S166>/Manual Switch4' incorporates:
       *  Constant: '<S166>/Constant24'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch4 =
        robotarm_student_2021a_Ebox_P.Constant24_Value;
    } else {
      /* ManualSwitch: '<S166>/Manual Switch4' incorporates:
       *  Constant: '<S166>/Constant20'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch4 =
        robotarm_student_2021a_Ebox_P.Constant20_Value;
    }

    /* End of ManualSwitch: '<S166>/Manual Switch4' */

    /* Sum: '<S166>/Add' */
    robotarm_student_2021a_Ebox_B.Add =
      ((robotarm_student_2021a_Ebox_B.ManualSwitch1_b +
        robotarm_student_2021a_Ebox_B.ManualSwitch2) +
       robotarm_student_2021a_Ebox_B.ManualSwitch3) +
      robotarm_student_2021a_Ebox_B.ManualSwitch4;

    /* S-Function (getSystemClockTimeval): '<S166>/S-Function Builder' */
    getSystemClockTimeval_Outputs_wrapper
      (&robotarm_student_2021a_Ebox_B.SFunctionBuilder);
    for (robotarm_student_2021a_Ebox_B.i = 0; robotarm_student_2021a_Ebox_B.i <
         12; robotarm_student_2021a_Ebox_B.i++) {
      /* RelationalOperator: '<S167>/FixPt Relational Operator' incorporates:
       *  Constant: '<S166>/Object detection matrix'
       *  UnitDelay: '<S167>/Delay Input1'
       */
      robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[robotarm_student_2021a_Ebox_B.i]
        =
        (robotarm_student_2021a_Ebox_P.Objectdetectionmatrix_Value[robotarm_student_2021a_Ebox_B.i]
         !=
         robotarm_student_2021a_Ebox_DW.DelayInput1_DSTATE[robotarm_student_2021a_Ebox_B.i]);
    }

    /* Outputs for Enabled SubSystem: '<S166>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S168>/Enable'
     */
    /* RelationalOperator: '<S167>/FixPt Relational Operator' */
    robotarm_student_2021a_Ebox_DW.EnabledSubsystem_MODE =
      (robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[0] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[1] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[2] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[3] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[4] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[5] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[6] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[7] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[8] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[9] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[10] ||
       robotarm_student_2021a_Ebox_B.FixPtRelationalOperator[11]);
    if (robotarm_student_2021a_Ebox_DW.EnabledSubsystem_MODE) {
      /* Inport: '<S168>/In1' */
      robotarm_student_2021a_Ebox_B.In1_c =
        robotarm_student_2021a_Ebox_B.SFunctionBuilder;
      srUpdateBC(robotarm_student_2021a_Ebox_DW.EnabledSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S166>/Enabled Subsystem' */

    /* Selector: '<S166>/Selector3' incorporates:
     *  Constant: '<S166>/Object detection matrix'
     */
    robotarm_student_2021a_Ebox_B.Selector3 =
      robotarm_student_2021a_Ebox_P.Objectdetectionmatrix_Value[9];

    /* Sum: '<S166>/Sum' */
    robotarm_student_2021a_Ebox_B.Sum = robotarm_student_2021a_Ebox_B.In1_c -
      robotarm_student_2021a_Ebox_B.Selector3;
    for (robotarm_student_2021a_Ebox_B.i = 0; robotarm_student_2021a_Ebox_B.i <
         3; robotarm_student_2021a_Ebox_B.i++) {
      /* Selector: '<S166>/Selector' incorporates:
       *  Constant: '<S166>/Object detection matrix'
       *  Selector: '<S166>/Selector2'
       */
      robotarm_student_2021a_Ebox_B.Selector_tmp = 3 *
        robotarm_student_2021a_Ebox_B.i + 2;
      robotarm_student_2021a_Ebox_B.PulseGenerator =
        robotarm_student_2021a_Ebox_P.Objectdetectionmatrix_Value[robotarm_student_2021a_Ebox_B.Selector_tmp];

      /* Selector: '<S166>/Selector' incorporates:
       *  Constant: '<S166>/Object detection matrix'
       */
      robotarm_student_2021a_Ebox_B.Selector[robotarm_student_2021a_Ebox_B.i] =
        robotarm_student_2021a_Ebox_B.PulseGenerator;

      /* Selector: '<S166>/Selector2' incorporates:
       *  Constant: '<S166>/Object detection matrix'
       */
      robotarm_student_2021a_Ebox_B.Selector2[3 *
        robotarm_student_2021a_Ebox_B.i] =
        robotarm_student_2021a_Ebox_P.Objectdetectionmatrix_Value[3 *
        robotarm_student_2021a_Ebox_B.i];

      /* Selector: '<S166>/Selector2' incorporates:
       *  Constant: '<S166>/Object detection matrix'
       */
      robotarm_student_2021a_Ebox_B.Selector2_tmp = 3 *
        robotarm_student_2021a_Ebox_B.i + 1;

      /* Selector: '<S166>/Selector2' incorporates:
       *  Constant: '<S166>/Object detection matrix'
       */
      robotarm_student_2021a_Ebox_B.Selector2[robotarm_student_2021a_Ebox_B.Selector2_tmp]
        =
        robotarm_student_2021a_Ebox_P.Objectdetectionmatrix_Value[robotarm_student_2021a_Ebox_B.Selector2_tmp];
      robotarm_student_2021a_Ebox_B.Selector2[robotarm_student_2021a_Ebox_B.Selector_tmp]
        = robotarm_student_2021a_Ebox_B.PulseGenerator;
    }

    /* Chart: '<S1>/Stateflow ' */
    if (robotarm_student_2021a_Ebox_DW.isNotInit) {
      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i1_m < 2047U) {
        robotarm_student_2021a_Ebox_DW.temporalCounter_i1_m++;
      }

      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i2 < MAX_uint32_T) {
        robotarm_student_2021a_Ebox_DW.temporalCounter_i2++;
      }

      if (robotarm_student_2021a_Ebox_DW.temporalCounter_i3 < 32767U) {
        robotarm_student_2021a_Ebox_DW.temporalCounter_i3++;
      }
    }

    robotarm_student_2021a_Ebox_DW.isNotInit = true;
    robotarm_student_2021a_Ebox_DW.sfEvent_b = robotarm_student_202_CALL_EVENT;
    c3_robotarm_student_2021a_Ebox();

    /* End of Chart: '<S1>/Stateflow ' */

    /* MATLAB Function: '<S1>/quintic trajectory time3' */
    robotarm_quintictrajectorytime3(robotarm_student_2021a_Ebox_B.R,
      robotarm_student_2021a_Ebox_B.move_time,
      robotarm_student_2021a_Ebox_B.SignalConversion2,
      &robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime3,
      &robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime3);

    /* MATLAB Function: '<S1>/quintic trajectory time4' */
    robotarm_quintictrajectorytime3(robotarm_student_2021a_Ebox_B.X,
      robotarm_student_2021a_Ebox_B.move_time,
      robotarm_student_2021a_Ebox_B.SignalConversion1,
      &robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime4,
      &robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime4);

    /* MATLAB Function: '<S1>/quintic trajectory time5' */
    robotarm_quintictrajectorytime3(robotarm_student_2021a_Ebox_B.Z,
      robotarm_student_2021a_Ebox_B.move_time,
      robotarm_student_2021a_Ebox_B.SignalConversion,
      &robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime5,
      &robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime5);

    /* SampleTimeMath: '<S9>/TSamp'
     *
     * About '<S9>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ebox_B.TSamp_l =
      robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime3.path *
      robotarm_student_2021a_Ebox_P.TSamp_WtEt;

    /* Sum: '<S219>/Diff' incorporates:
     *  Sum: '<S9>/Diff'
     *  UnitDelay: '<S9>/UD'
     */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_B.TSamp_l -
      robotarm_student_2021a_Ebox_DW.UD_DSTATE_g;

    /* Signum: '<S1>/Sign' */
    if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b < 0.0) {
      robotarm_student_2021a_Ebox_B.PulseGenerator = -1.0;
    } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b > 0.0) {
      robotarm_student_2021a_Ebox_B.PulseGenerator = 1.0;
    } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b == 0.0) {
      robotarm_student_2021a_Ebox_B.PulseGenerator = 0.0;
    } else {
      robotarm_student_2021a_Ebox_B.PulseGenerator = (rtNaN);
    }

    /* End of Signum: '<S1>/Sign' */

    /* Gain: '<S1>/Gain' */
    robotarm_student_2021a_Ebox_B.d12 = robotarm_student_2021a_Ebox_P.Gain_Gain *
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b;

    /* SampleTimeMath: '<S8>/TSamp'
     *
     * About '<S8>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ebox_B.TSamp_i =
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b *
      robotarm_student_2021a_Ebox_P.TSamp_WtEt_n;

    /* SampleTimeMath: '<S10>/TSamp'
     *
     * About '<S10>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ebox_B.TSamp_n =
      robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime4.path *
      robotarm_student_2021a_Ebox_P.TSamp_WtEt_o;

    /* Sum: '<S219>/Diff' incorporates:
     *  Sum: '<S10>/Diff'
     *  UnitDelay: '<S10>/UD'
     */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_B.TSamp_n -
      robotarm_student_2021a_Ebox_DW.UD_DSTATE_m;

    /* Signum: '<S1>/Sign1' */
    if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b < 0.0) {
      robotarm_student_2021a_Ebox_B.fy1_tmp = -1.0;
    } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b > 0.0) {
      robotarm_student_2021a_Ebox_B.fy1_tmp = 1.0;
    } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b == 0.0) {
      robotarm_student_2021a_Ebox_B.fy1_tmp = 0.0;
    } else {
      robotarm_student_2021a_Ebox_B.fy1_tmp = (rtNaN);
    }

    /* End of Signum: '<S1>/Sign1' */

    /* Gain: '<S1>/Gain3' */
    robotarm_student_2021a_Ebox_B.Gain3_b =
      robotarm_student_2021a_Ebox_P.Gain3_Gain *
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b;

    /* SampleTimeMath: '<S11>/TSamp'
     *
     * About '<S11>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ebox_B.TSamp_mq =
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b *
      robotarm_student_2021a_Ebox_P.TSamp_WtEt_na;

    /* SampleTimeMath: '<S12>/TSamp'
     *
     * About '<S12>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ebox_B.TSamp_p =
      robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime5.path *
      robotarm_student_2021a_Ebox_P.TSamp_WtEt_g;

    /* Sum: '<S219>/Diff' incorporates:
     *  Sum: '<S12>/Diff'
     *  UnitDelay: '<S12>/UD'
     */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_B.TSamp_p -
      robotarm_student_2021a_Ebox_DW.UD_DSTATE_d;

    /* SampleTimeMath: '<S13>/TSamp'
     *
     * About '<S13>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    robotarm_student_2021a_Ebox_B.TSamp_d =
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b *
      robotarm_student_2021a_Ebox_P.TSamp_WtEt_b;

    /* Gain: '<S3>/Gain1' incorporates:
     *  DiscreteIntegrator: '<S1>/Discrete  integrator'
     *  Sum: '<S1>/Sum3'
     */
    robotarm_student_2021a_Ebox_B.Gain1_g =
      (robotarm_student_2021a_Ebox_DW.Discreteintegrator_DSTATE -
       robotarm_student_2021a_Ebox_B.Gain3) *
      robotarm_student_2021a_Ebox_P.Gain1_Gain_g;

    /* S-Function (dweakint): '<S3>/Dctintegrator3' */

    /* Level2 S-Function Block: '<S3>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S3>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S3>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S3>/Dctleadlag' */

    /* Level2 S-Function Block: '<S3>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    /* Sum: '<S1>/Sum2' */
    robotarm_student_2021a_Ebox_B.Sum2 =
      robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime3.path -
      robotarm_student_2021a_Ebox_B.SignalConversion2;

    /* S-Function (dpd): '<S4>/Dctpd' */

    /* Level2 S-Function Block: '<S4>/Dctpd' (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dweakint): '<S4>/Dctintegrator' */

    /* Level2 S-Function Block: '<S4>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S54>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S46>/Filter'
     *  Gain: '<S45>/Derivative Gain'
     *  Sum: '<S46>/SumD'
     */
    robotarm_student_2021a_Ebox_B.FilterCoefficient =
      (robotarm_student_2021a_Ebox_P.PIDController_D *
       robotarm_student_2021a_Ebox_B.Sum2 -
       robotarm_student_2021a_Ebox_DW.Filter_DSTATE) *
      robotarm_student_2021a_Ebox_P.PIDController_N;

    /* Sum: '<S60>/Sum' incorporates:
     *  DiscreteIntegrator: '<S51>/Integrator'
     *  Gain: '<S56>/Proportional Gain'
     */
    robotarm_student_2021a_Ebox_B.Sum_b =
      (robotarm_student_2021a_Ebox_P.PIDController_P *
       robotarm_student_2021a_Ebox_B.Sum2 +
       robotarm_student_2021a_Ebox_DW.Integrator_DSTATE) +
      robotarm_student_2021a_Ebox_B.FilterCoefficient;

    /* S-Function (dnotch): '<S4>/Dctnotch' */

    /* Level2 S-Function Block: '<S4>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[5];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S48>/Integral Gain' */
    robotarm_student_2021a_Ebox_B.IntegralGain =
      robotarm_student_2021a_Ebox_P.PIDController_I *
      robotarm_student_2021a_Ebox_B.Sum2;

    /* Gain: '<S5>/Gain1' incorporates:
     *  Sum: '<S1>/Sum9'
     */
    robotarm_student_2021a_Ebox_B.Gain1_o = (robotarm_student_2021a_Ebox_B.Pump
      - robotarm_student_2021a_Ebox_B.Gain6) *
      robotarm_student_2021a_Ebox_P.Gain1_Gain_b;

    /* Sum: '<S1>/Sum1' */
    robotarm_student_2021a_Ebox_B.Sum1 =
      robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime4.path -
      robotarm_student_2021a_Ebox_B.SignalConversion1;

    /* S-Function (dpd): '<S6>/Dctpd' */

    /* Level2 S-Function Block: '<S6>/Dctpd' (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[6];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dweakint): '<S6>/Dctintegrator' */

    /* Level2 S-Function Block: '<S6>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[7];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S103>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S95>/Filter'
     *  Gain: '<S94>/Derivative Gain'
     *  Sum: '<S95>/SumD'
     */
    robotarm_student_2021a_Ebox_B.FilterCoefficient_n =
      (robotarm_student_2021a_Ebox_P.PIDController1_D *
       robotarm_student_2021a_Ebox_B.Sum1 -
       robotarm_student_2021a_Ebox_DW.Filter_DSTATE_f) *
      robotarm_student_2021a_Ebox_P.PIDController1_N;

    /* Sum: '<S109>/Sum' incorporates:
     *  DiscreteIntegrator: '<S100>/Integrator'
     *  Gain: '<S105>/Proportional Gain'
     */
    robotarm_student_2021a_Ebox_B.Sum_n =
      (robotarm_student_2021a_Ebox_P.PIDController1_P *
       robotarm_student_2021a_Ebox_B.Sum1 +
       robotarm_student_2021a_Ebox_DW.Integrator_DSTATE_f) +
      robotarm_student_2021a_Ebox_B.FilterCoefficient_n;

    /* S-Function (dnotch): '<S6>/Dctnotch' */

    /* Level2 S-Function Block: '<S6>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[8];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S97>/Integral Gain' */
    robotarm_student_2021a_Ebox_B.IntegralGain_m =
      robotarm_student_2021a_Ebox_P.PIDController1_I *
      robotarm_student_2021a_Ebox_B.Sum1;

    /* Sum: '<S1>/Sum7' */
    robotarm_student_2021a_Ebox_B.Sum7 =
      robotarm_student_2021a_Ebox_B.sf_quintictrajectorytime5.path -
      robotarm_student_2021a_Ebox_B.SignalConversion;

    /* S-Function (dpd): '<S7>/Dctpd' */

    /* Level2 S-Function Block: '<S7>/Dctpd' (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[9];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dweakint): '<S7>/Dctintegrator' */

    /* Level2 S-Function Block: '<S7>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[10];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S7>/Gain' */
    robotarm_student_2021a_Ebox_B.Gain_au =
      robotarm_student_2021a_Ebox_P.Gain_Gain_n *
      robotarm_student_2021a_Ebox_B.Sum7;

    /* Gain: '<S152>/Filter Coefficient' incorporates:
     *  DiscreteIntegrator: '<S144>/Filter'
     *  Gain: '<S143>/Derivative Gain'
     *  Sum: '<S144>/SumD'
     */
    robotarm_student_2021a_Ebox_B.FilterCoefficient_n4 =
      (robotarm_student_2021a_Ebox_P.PIDController_D_l *
       robotarm_student_2021a_Ebox_B.Gain_au -
       robotarm_student_2021a_Ebox_DW.Filter_DSTATE_l) *
      robotarm_student_2021a_Ebox_P.PIDController_N_a;

    /* Sum: '<S158>/Sum' incorporates:
     *  DiscreteIntegrator: '<S149>/Integrator'
     *  Gain: '<S154>/Proportional Gain'
     */
    robotarm_student_2021a_Ebox_B.Sum_m =
      (robotarm_student_2021a_Ebox_P.PIDController_P_d *
       robotarm_student_2021a_Ebox_B.Gain_au +
       robotarm_student_2021a_Ebox_DW.Integrator_DSTATE_c) +
      robotarm_student_2021a_Ebox_B.FilterCoefficient_n4;

    /* S-Function (dnotch): '<S7>/Dctnotch' */

    /* Level2 S-Function Block: '<S7>/Dctnotch' (dnotch) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[11];
      sfcnOutputs(rts,0);
    }

    /* Gain: '<S146>/Integral Gain' */
    robotarm_student_2021a_Ebox_B.IntegralGain_k =
      robotarm_student_2021a_Ebox_P.PIDController_I_m *
      robotarm_student_2021a_Ebox_B.Gain_au;

    /* Saturate: '<S1>/Saturation ' */
    if (robotarm_student_2021a_Ebox_B.Conveyor >
        robotarm_student_2021a_Ebox_P.Saturation_UpperSat) {
      /* Saturate: '<S1>/Saturation ' */
      robotarm_student_2021a_Ebox_B.Saturation_m =
        robotarm_student_2021a_Ebox_P.Saturation_UpperSat;
    } else if (robotarm_student_2021a_Ebox_B.Conveyor <
               robotarm_student_2021a_Ebox_P.Saturation_LowerSat) {
      /* Saturate: '<S1>/Saturation ' */
      robotarm_student_2021a_Ebox_B.Saturation_m =
        robotarm_student_2021a_Ebox_P.Saturation_LowerSat;
    } else {
      /* Saturate: '<S1>/Saturation ' */
      robotarm_student_2021a_Ebox_B.Saturation_m =
        robotarm_student_2021a_Ebox_B.Conveyor;
    }

    /* End of Saturate: '<S1>/Saturation ' */

    /* ManualSwitch: '<S4>/Manual Switch' */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch_CurrentSetting == 1) {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dctintegrator_o;
    } else {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dctnotch;
    }

    /* End of ManualSwitch: '<S4>/Manual Switch' */

    /* Sum: '<S1>/Sum4' incorporates:
     *  Gain: '<S1>/Gain1'
     *  Gain: '<S1>/Gain2'
     *  Sum: '<S1>/Add'
     *  Sum: '<S8>/Diff'
     *  UnitDelay: '<S8>/UD'
     */
    robotarm_student_2021a_Ebox_B.Sum4 =
      ((robotarm_student_2021a_Ebox_P.Gain2_Gain *
        robotarm_student_2021a_Ebox_B.PulseGenerator +
        robotarm_student_2021a_Ebox_B.d12) +
       (robotarm_student_2021a_Ebox_B.TSamp_i -
        robotarm_student_2021a_Ebox_DW.UD_DSTATE_c) *
       robotarm_student_2021a_Ebox_P.Gain1_Gain) +
      robotarm_student_2021a_Ebox_B.Gain_au;

    /* ManualSwitch: '<S6>/Manual Switch' */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch_CurrentSetting_e == 1) {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dctintegrator_or;
    } else {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dctnotch_p;
    }

    /* End of ManualSwitch: '<S6>/Manual Switch' */

    /* Sum: '<S1>/Sum5' incorporates:
     *  Gain: '<S1>/Gain4'
     *  Gain: '<S1>/Gain5'
     *  Sum: '<S11>/Diff'
     *  Sum: '<S1>/Add1'
     *  UnitDelay: '<S11>/UD'
     */
    robotarm_student_2021a_Ebox_B.Sum5 =
      ((robotarm_student_2021a_Ebox_P.Gain5_Gain *
        robotarm_student_2021a_Ebox_B.fy1_tmp +
        robotarm_student_2021a_Ebox_B.Gain3_b) +
       (robotarm_student_2021a_Ebox_B.TSamp_mq -
        robotarm_student_2021a_Ebox_DW.UD_DSTATE_m3) *
       robotarm_student_2021a_Ebox_P.Gain4_Gain) +
      robotarm_student_2021a_Ebox_B.Gain_au;

    /* Signum: '<S1>/Sign2' */
    if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b < 0.0) {
      robotarm_student_2021a_Ebox_B.PulseGenerator = -1.0;
    } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b > 0.0) {
      robotarm_student_2021a_Ebox_B.PulseGenerator = 1.0;
    } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b == 0.0) {
      robotarm_student_2021a_Ebox_B.PulseGenerator = 0.0;
    } else {
      robotarm_student_2021a_Ebox_B.PulseGenerator = (rtNaN);
    }

    /* End of Signum: '<S1>/Sign2' */

    /* ManualSwitch: '<S7>/Manual Switch' */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch_CurrentSetting_d == 1) {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dctintegrator_f;
    } else {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dctnotch_d;
    }

    /* End of ManualSwitch: '<S7>/Manual Switch' */

    /* Sum: '<S1>/Sum6' incorporates:
     *  Gain: '<S1>/Gain6'
     *  Gain: '<S1>/Gain7'
     *  Gain: '<S1>/Gain8'
     *  Sum: '<S13>/Diff'
     *  Sum: '<S1>/Add2'
     *  UnitDelay: '<S13>/UD'
     */
    robotarm_student_2021a_Ebox_B.Sum6 =
      ((robotarm_student_2021a_Ebox_P.Gain8_Gain *
        robotarm_student_2021a_Ebox_B.PulseGenerator +
        robotarm_student_2021a_Ebox_P.Gain6_Gain *
        robotarm_student_2021a_Ebox_B.LimitAcceleration_b) +
       (robotarm_student_2021a_Ebox_B.TSamp_d -
        robotarm_student_2021a_Ebox_DW.UD_DSTATE_a) *
       robotarm_student_2021a_Ebox_P.Gain7_Gain) +
      robotarm_student_2021a_Ebox_B.Gain_au;

    /* ManualSwitch: '<S15>/Manual Switch1' incorporates:
     *  StringConstant: '<S15>/Color; specified in 6 hex digits, rrggbb'
     *  StringConstant: '<S15>/Color; specified in 6 hex digits, rrggbb1'
     */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch1_CurrentSetting_b == 1) {
      strncpy(&robotarm_student_2021a_Ebox_B.ManualSwitch1[0],
              &robotarm_student_2021a_Ebox_P.Colorspecifiedin6hexdigitsrrggb[0],
              255U);
      robotarm_student_2021a_Ebox_B.ManualSwitch1[255] = '\x00';
    } else {
      strncpy(&robotarm_student_2021a_Ebox_B.ManualSwitch1[0],
              &robotarm_student_2021a_Ebox_P.Colorspecifiedin6hexdigitsrrg_n[0],
              255U);
      robotarm_student_2021a_Ebox_B.ManualSwitch1[255] = '\x00';
    }

    /* End of ManualSwitch: '<S15>/Manual Switch1' */

    /* DiscretePulseGenerator: '<S15>/Object1' */
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      (robotarm_student_2021a_Ebox_DW.clockTickCounter <
       robotarm_student_2021a_Ebox_P.Object1_Duty) &&
      (robotarm_student_2021a_Ebox_DW.clockTickCounter >= 0) ?
      robotarm_student_2021a_Ebox_P.Object1_Amp : 0.0;
    if (robotarm_student_2021a_Ebox_DW.clockTickCounter >=
        robotarm_student_2021a_Ebox_P.Object1_Period - 1.0) {
      robotarm_student_2021a_Ebox_DW.clockTickCounter = 0;
    } else {
      robotarm_student_2021a_Ebox_DW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<S15>/Object1' */

    /* Bias: '<S15>/Add Constant' */
    robotarm_student_2021a_Ebox_B.AddConstant =
      robotarm_student_2021a_Ebox_B.PulseGenerator +
      robotarm_student_2021a_Ebox_P.AddConstant_Bias;

    /* DiscretePulseGenerator: '<S166>/Pulse Generator1' */
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      (robotarm_student_2021a_Ebox_DW.clockTickCounter_p <
       robotarm_student_2021a_Ebox_P.PulseGenerator1_Duty) &&
      (robotarm_student_2021a_Ebox_DW.clockTickCounter_p >= 0) ?
      robotarm_student_2021a_Ebox_P.PulseGenerator1_Amp : 0.0;
    if (robotarm_student_2021a_Ebox_DW.clockTickCounter_p >=
        robotarm_student_2021a_Ebox_P.PulseGenerator1_Period - 1.0) {
      robotarm_student_2021a_Ebox_DW.clockTickCounter_p = 0;
    } else {
      robotarm_student_2021a_Ebox_DW.clockTickCounter_p++;
    }

    /* End of DiscretePulseGenerator: '<S166>/Pulse Generator1' */

    /* If: '<S166>/If1' incorporates:
     *  Constant: '<S166>/Constant13'
     */
    if ((robotarm_student_2021a_Ebox_B.PulseGenerator == 1.0) &&
        (robotarm_student_2021a_Ebox_B.Selector[0] > 75000.0)) {
      /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S170>/Action Port'
       */
      robotarm_stu_IfActionSubsystem1
        (robotarm_student_2021a_Ebox_P.Constant13_Value,
         &robotarm_student_2021a_Ebox_B.IfActionSubsystem1);

      /* End of Outputs for SubSystem: '<S166>/If Action Subsystem1' */
    }

    /* End of If: '<S166>/If1' */

    /* Switch: '<S166>/Switch1' */
    if (robotarm_student_2021a_Ebox_B.IfActionSubsystem1.In1 >
        robotarm_student_2021a_Ebox_P.Switch1_Threshold) {
      /* Switch: '<S166>/Switch1' incorporates:
       *  Constant: '<S166>/Constant3'
       */
      robotarm_student_2021a_Ebox_B.Switch1 =
        robotarm_student_2021a_Ebox_P.Constant3_Value;
    } else {
      /* Switch: '<S166>/Switch1' incorporates:
       *  Constant: '<S166>/Constant1'
       */
      robotarm_student_2021a_Ebox_B.Switch1 =
        robotarm_student_2021a_Ebox_P.Constant1_Value;
    }

    /* End of Switch: '<S166>/Switch1' */

    /* DiscretePulseGenerator: '<S166>/Pulse Generator' */
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      (robotarm_student_2021a_Ebox_DW.clockTickCounter_k <
       robotarm_student_2021a_Ebox_P.PulseGenerator_Duty) &&
      (robotarm_student_2021a_Ebox_DW.clockTickCounter_k >= 0) ?
      robotarm_student_2021a_Ebox_P.PulseGenerator_Amp : 0.0;
    if (robotarm_student_2021a_Ebox_DW.clockTickCounter_k >=
        robotarm_student_2021a_Ebox_P.PulseGenerator_Period - 1.0) {
      robotarm_student_2021a_Ebox_DW.clockTickCounter_k = 0;
    } else {
      robotarm_student_2021a_Ebox_DW.clockTickCounter_k++;
    }

    /* End of DiscretePulseGenerator: '<S166>/Pulse Generator' */

    /* If: '<S166>/If' incorporates:
     *  Constant: '<S166>/Constant12'
     *  Inport: '<S169>/In1'
     */
    if ((robotarm_student_2021a_Ebox_B.PulseGenerator == 0.0) &&
        (robotarm_student_2021a_Ebox_B.Selector[0] > 75000.0)) {
      /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem' incorporates:
       *  ActionPort: '<S169>/Action Port'
       */
      robotarm_student_2021a_Ebox_B.In1 =
        robotarm_student_2021a_Ebox_P.Constant12_Value;

      /* End of Outputs for SubSystem: '<S166>/If Action Subsystem' */

      /* Update for IfAction SubSystem: '<S166>/If Action Subsystem' incorporates:
       *  ActionPort: '<S169>/Action Port'
       */
      /* Update for If: '<S166>/If' incorporates:
       *  Constant: '<S166>/Constant12'
       *  Inport: '<S169>/In1'
       */
      srUpdateBC(robotarm_student_2021a_Ebox_DW.IfActionSubsystem_SubsysRanBC_o);

      /* End of Update for SubSystem: '<S166>/If Action Subsystem' */
    }

    /* End of If: '<S166>/If' */

    /* ManualSwitch: '<S166>/Manual Switch' incorporates:
     *  Switch: '<S166>/Switch'
     */
    if (robotarm_student_2021a_Ebox_P.ManualSwitch_CurrentSetting_c == 1) {
      /* ManualSwitch: '<S166>/Manual Switch' incorporates:
       *  Constant: '<S166>/Constant19'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch =
        robotarm_student_2021a_Ebox_P.Constant19_Value;
    } else if (robotarm_student_2021a_Ebox_B.In1 >
               robotarm_student_2021a_Ebox_P.Switch_Threshold) {
      /* Switch: '<S166>/Switch' incorporates:
       *  Constant: '<S166>/Constant'
       *  ManualSwitch: '<S166>/Manual Switch'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch =
        robotarm_student_2021a_Ebox_P.Constant_Value;
    } else {
      /* ManualSwitch: '<S166>/Manual Switch' incorporates:
       *  Constant: '<S166>/Constant2'
       */
      robotarm_student_2021a_Ebox_B.ManualSwitch =
        robotarm_student_2021a_Ebox_P.Constant2_Value;
    }

    /* End of ManualSwitch: '<S166>/Manual Switch' */

    /* Switch: '<S166>/Switch2' */
    if (0.0 > robotarm_student_2021a_Ebox_P.Switch2_Threshold) {
      /* Switch: '<S166>/Switch2' */
      robotarm_student_2021a_Ebox_B.Switch2 =
        robotarm_student_2021a_Ebox_B.Switch1;
    } else {
      /* Switch: '<S166>/Switch2' */
      robotarm_student_2021a_Ebox_B.Switch2 =
        robotarm_student_2021a_Ebox_B.ManualSwitch;
    }

    /* End of Switch: '<S166>/Switch2' */

    /* If: '<S166>/If2' incorporates:
     *  Constant: '<S166>/Constant14'
     *  Constant: '<S166>/Constant15'
     *  Constant: '<S166>/Constant18'
     */
    if (robotarm_student_2021a_Ebox_B.Switch2 == 0.0) {
      /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S171>/Action Port'
       */
      robotarm_stu_IfActionSubsystem1
        (robotarm_student_2021a_Ebox_P.Constant14_Value,
         &robotarm_student_2021a_Ebox_B.IfActionSubsystem2);

      /* End of Outputs for SubSystem: '<S166>/If Action Subsystem2' */
    } else if ((robotarm_student_2021a_Ebox_B.Switch2 == 0.0) &&
               (robotarm_student_2021a_Ebox_B.Selector[0] > 85000.0)) {
      /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S172>/Action Port'
       */
      robotarm_stu_IfActionSubsystem1
        (robotarm_student_2021a_Ebox_P.Constant15_Value,
         &robotarm_student_2021a_Ebox_B.IfActionSubsystem3);

      /* End of Outputs for SubSystem: '<S166>/If Action Subsystem3' */
    } else {
      /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S175>/Action Port'
       */
      robotarm_stu_IfActionSubsystem1
        (robotarm_student_2021a_Ebox_P.Constant18_Value,
         &robotarm_student_2021a_Ebox_B.IfActionSubsystem6);

      /* End of Outputs for SubSystem: '<S166>/If Action Subsystem6' */
    }

    /* End of If: '<S166>/If2' */

    /* If: '<S166>/If3' incorporates:
     *  Constant: '<S166>/Constant16'
     *  Constant: '<S166>/Constant17'
     */
    if (robotarm_student_2021a_Ebox_B.Switch2 == 1.0) {
      /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem4' incorporates:
       *  ActionPort: '<S173>/Action Port'
       */
      robotarm_stu_IfActionSubsystem1
        (robotarm_student_2021a_Ebox_P.Constant16_Value,
         &robotarm_student_2021a_Ebox_B.IfActionSubsystem4);

      /* End of Outputs for SubSystem: '<S166>/If Action Subsystem4' */
    } else if ((robotarm_student_2021a_Ebox_B.Switch2 == 1.0) &&
               (robotarm_student_2021a_Ebox_B.Selector[0] > 85000.0)) {
      /* Outputs for IfAction SubSystem: '<S166>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S174>/Action Port'
       */
      robotarm_stu_IfActionSubsystem1
        (robotarm_student_2021a_Ebox_P.Constant17_Value,
         &robotarm_student_2021a_Ebox_B.IfActionSubsystem5);

      /* End of Outputs for SubSystem: '<S166>/If Action Subsystem5' */
    }

    /* End of If: '<S166>/If3' */

    /* Constant: '<S15>/Object' */
    robotarm_student_2021a_Ebox_B.Object =
      robotarm_student_2021a_Ebox_P.Object_Value;

    /* Constant: '<S15>/Plot' */
    robotarm_student_2021a_Ebox_B.Plot =
      robotarm_student_2021a_Ebox_P.Plot_Value;

    /* Constant: '<S15>/Stop' */
    robotarm_student_2021a_Ebox_B.Stop =
      robotarm_student_2021a_Ebox_P.Stop_Value;
    srUpdateBC(robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */

  /* Assignment: '<S176>/Assignment' incorporates:
   *  Constant: '<S176>/Enable//Ventiel'
   */
  memcpy(&robotarm_student_2021a_Ebox_B.Assignment[0],
         &robotarm_student_2021a_Ebox_P.EnableVentiel_Value[0], sizeof(real_T) <<
         3U);

  /* Assignment: '<S176>/Assignment' */
  robotarm_student_2021a_Ebox_B.Assignment[1] =
    robotarm_student_2021a_Ebox_B.Blow_suck;

  /* Gain: '<S178>/Gain' */
  robotarm_student_2021a_Ebox_B.Gain[0] =
    robotarm_student_2021a_Ebox_P.Gain_Gain_j * 0.0;
  robotarm_student_2021a_Ebox_B.Gain[1] =
    robotarm_student_2021a_Ebox_P.Gain_Gain_j * 0.0;

  /* Gain: '<S194>/Gain' */
  robotarm_student_2021a_Ebox_B.Gain_c =
    robotarm_student_2021a_Ebox_P.Gain_Gain_ph *
    robotarm_student_2021a_Ebox_B.Sum2_k;

  /* S-Function (dweakint): '<S194>/Dctintegrator' */

  /* Level2 S-Function Block: '<S194>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S194>/Dctleadlag' */

  /* Level2 S-Function Block: '<S194>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S194>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S194>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S195>/Gain' incorporates:
   *  Sum: '<S185>/Sum1'
   */
  robotarm_student_2021a_Ebox_B.Gain_f =
    (robotarm_student_2021a_Ebox_B.airBagRef_pn -
     robotarm_student_2021a_Ebox_B.HomingRunningSwitch[0]) *
    robotarm_student_2021a_Ebox_P.Gain_Gain_ju;

  /* S-Function (dleadlag): '<S195>/Dctleadlag' */

  /* Level2 S-Function Block: '<S195>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S195>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S195>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S185>/AirbagSwitch' incorporates:
   *  Logic: '<S185>/Logical Operator1'
   */
  if (!(robotarm_student_2021a_Ebox_B.airBagEnabled_ab != 0.0)) {
    /* Switch: '<S185>/Homing Running Switch' */
    if (robotarm_student_2021a_Ebox_B.homingBusy_n >=
        robotarm_student_2021a_Ebox_P.HomingRunningSwitch_Threshold) {
      /* Sum: '<S219>/Diff' incorporates:
       *  Product: '<S185>/Product'
       */
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
        robotarm_student_2021a_Ebox_B.Dct1lowpass *
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_i;

      /* Saturate: '<S185>/Saturation' */
      if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b >
          robotarm_student_2021a_Ebox_P.Saturation_UpperSat_i) {
        /* Sum: '<S219>/Diff' */
        robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
          robotarm_student_2021a_Ebox_P.Saturation_UpperSat_i;
      } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b <
                 robotarm_student_2021a_Ebox_P.Saturation_LowerSat_m) {
        /* Sum: '<S219>/Diff' */
        robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
          robotarm_student_2021a_Ebox_P.Saturation_LowerSat_m;
      }

      /* End of Saturate: '<S185>/Saturation' */
    } else {
      /* Sum: '<S219>/Diff' */
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
        robotarm_student_2021a_Ebox_B.Sum4;
    }

    /* End of Switch: '<S185>/Homing Running Switch' */
  } else {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_B.Dct1lowpass_n;
  }

  /* End of Switch: '<S185>/AirbagSwitch' */

  /* Sum: '<S219>/Diff' incorporates:
   *  Constant: '<S176>/Voltage middle'
   *  Product: '<S185>/Product1'
   *  Sum: '<S176>/Sum3'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b *
    robotarm_student_2021a_Ebox_B.controlEnabled_e +
    robotarm_student_2021a_Ebox_P.Voltagemiddle_Value;

  /* Gain: '<S201>/Gain1' */
  robotarm_student_2021a_Ebox_B.Gain1 =
    robotarm_student_2021a_Ebox_P.Gain1_Gain_h *
    robotarm_student_2021a_Ebox_B.Sum4_c;

  /* S-Function (dweakint): '<S201>/Dctintegrator' */

  /* Level2 S-Function Block: '<S201>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S201>/Dctleadlag' */

  /* Level2 S-Function Block: '<S201>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S201>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S201>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[23];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S202>/Gain1' incorporates:
   *  Sum: '<S186>/Sum1'
   */
  robotarm_student_2021a_Ebox_B.Gain1_p =
    (robotarm_student_2021a_Ebox_B.airBagRef_p -
     robotarm_student_2021a_Ebox_B.HomingRunningSwitch[1]) *
    robotarm_student_2021a_Ebox_P.Gain1_Gain_d;

  /* S-Function (dleadlag): '<S202>/Dctleadlag' */

  /* Level2 S-Function Block: '<S202>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[24];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S202>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S202>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* Saturate: '<S176>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_k) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_k;
  } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_i) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_i;
  }

  /* Saturate: '<S178>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_j) {
    /* Saturate: '<S178>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation[0] =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_j;
  } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_f) {
    /* Saturate: '<S178>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation[0] =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_f;
  } else {
    /* Saturate: '<S178>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation[0] =
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b;
  }

  /* Switch: '<S186>/AirbagSwitch' incorporates:
   *  Logic: '<S186>/Logical Operator1'
   */
  if (!(robotarm_student_2021a_Ebox_B.airBagEnabled_a != 0.0)) {
    /* Switch: '<S186>/Homing Running Switch' incorporates:
     *  Product: '<S186>/Product'
     */
    if (robotarm_student_2021a_Ebox_B.homingBusy_d >=
        robotarm_student_2021a_Ebox_P.HomingRunningSwitch_Threshold_o) {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dct1lowpass_f *
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_f;
    } else {
      robotarm_student_2021a_Ebox_B.Gain_au = robotarm_student_2021a_Ebox_B.Sum5;
    }

    /* End of Switch: '<S186>/Homing Running Switch' */
  } else {
    robotarm_student_2021a_Ebox_B.Gain_au =
      robotarm_student_2021a_Ebox_B.Dct1lowpass_o;
  }

  /* End of Switch: '<S186>/AirbagSwitch' */

  /* Sum: '<S176>/Sum4' incorporates:
   *  Constant: '<S176>/Voltage middle'
   *  Product: '<S186>/Product1'
   */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_P.Voltagemiddle_Value -
    robotarm_student_2021a_Ebox_B.Gain_au *
    robotarm_student_2021a_Ebox_B.controlEnabled_b;

  /* Saturate: '<S176>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_k) {
    robotarm_student_2021a_Ebox_B.Sum2_k =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_k;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_i) {
    robotarm_student_2021a_Ebox_B.Sum2_k =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_i;
  }

  /* Saturate: '<S178>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_j) {
    /* Saturate: '<S178>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation[1] =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_j;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_f) {
    /* Saturate: '<S178>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation[1] =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_f;
  } else {
    /* Saturate: '<S178>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation[1] =
      robotarm_student_2021a_Ebox_B.Sum2_k;
  }

  /* Gain: '<S179>/Gain' */
  robotarm_student_2021a_Ebox_B.Gain_j[0] =
    robotarm_student_2021a_Ebox_P.Gain_Gain_l * 0.0;
  robotarm_student_2021a_Ebox_B.Gain_j[1] =
    robotarm_student_2021a_Ebox_P.Gain_Gain_l * 0.0;

  /* Gain: '<S210>/Gain' */
  robotarm_student_2021a_Ebox_B.Gain_e =
    robotarm_student_2021a_Ebox_P.Gain_Gain_d *
    robotarm_student_2021a_Ebox_B.Sum1_k;

  /* S-Function (dweakint): '<S210>/Dctintegrator' */

  /* Level2 S-Function Block: '<S210>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S210>/Dctleadlag' */

  /* Level2 S-Function Block: '<S210>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[27];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S210>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S210>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[28];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S211>/Gain' incorporates:
   *  Sum: '<S187>/Sum1'
   */
  robotarm_student_2021a_Ebox_B.Gain_i =
    (robotarm_student_2021a_Ebox_B.airBagRef -
     robotarm_student_2021a_Ebox_B.HomingRunningSwitch[2]) *
    robotarm_student_2021a_Ebox_P.Gain_Gain_pq;

  /* S-Function (dleadlag): '<S211>/Dctleadlag' */

  /* Level2 S-Function Block: '<S211>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[29];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S211>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S211>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[30];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S187>/AirbagSwitch' incorporates:
   *  Logic: '<S187>/Logical Operator1'
   */
  if (!(robotarm_student_2021a_Ebox_B.airBagEnabled != 0.0)) {
    /* Switch: '<S187>/Homing Running Switch' incorporates:
     *  Product: '<S187>/Product'
     */
    if (robotarm_student_2021a_Ebox_B.homingBusy_j >=
        robotarm_student_2021a_Ebox_P.HomingRunningSwitch_Threshold_j) {
      robotarm_student_2021a_Ebox_B.Gain_au =
        robotarm_student_2021a_Ebox_B.Dct1lowpass_ft *
        robotarm_student_2021a_Ebox_B.homeControllerEnabled_j;
    } else {
      robotarm_student_2021a_Ebox_B.Gain_au = robotarm_student_2021a_Ebox_B.Sum6;
    }

    /* End of Switch: '<S187>/Homing Running Switch' */
  } else {
    robotarm_student_2021a_Ebox_B.Gain_au =
      robotarm_student_2021a_Ebox_B.Dct1lowpass_a;
  }

  /* End of Switch: '<S187>/AirbagSwitch' */

  /* Sum: '<S219>/Diff' incorporates:
   *  Constant: '<S176>/Voltage middle'
   *  Product: '<S187>/Product1'
   *  Sum: '<S176>/Sum5'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.Gain_au *
    robotarm_student_2021a_Ebox_B.controlEnabled +
    robotarm_student_2021a_Ebox_P.Voltagemiddle_Value;

  /* Gain: '<S220>/Gain1' incorporates:
   *  DiscreteIntegrator: '<S188>/Discrete-Time Integrator'
   *  Sum: '<S188>/Sum1'
   */
  robotarm_student_2021a_Ebox_B.Gain1_n =
    (robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_k -
     robotarm_student_2021a_Ebox_B.Gain3) *
    robotarm_student_2021a_Ebox_P.Gain1_Gain_p;

  /* S-Function (dweakint): '<S220>/Dctintegrator3' */

  /* Level2 S-Function Block: '<S220>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[31];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S220>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S220>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[32];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S220>/Dctleadlag' */

  /* Level2 S-Function Block: '<S220>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[33];
    sfcnOutputs(rts,0);
  }

  /* Saturate: '<S176>/Saturation1' */
  if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b >
      robotarm_student_2021a_Ebox_P.Saturation1_UpperSat) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.Saturation1_UpperSat;
  } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b <
             robotarm_student_2021a_Ebox_P.Saturation1_LowerSat) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.Saturation1_LowerSat;
  }

  /* Saturate: '<S179>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_e) {
    /* Saturate: '<S179>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_f[0] =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_e;
  } else if (robotarm_student_2021a_Ebox_B.LimitAcceleration_b <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_o) {
    /* Saturate: '<S179>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_f[0] =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_o;
  } else {
    /* Saturate: '<S179>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_f[0] =
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b;
  }

  /* Switch: '<S188>/Homing Running Switch' incorporates:
   *  Product: '<S188>/Product'
   */
  if (robotarm_student_2021a_Ebox_B.homingBusy >=
      robotarm_student_2021a_Ebox_P.HomingRunningSwitch_Threshold_c) {
    robotarm_student_2021a_Ebox_B.Gain_au =
      robotarm_student_2021a_Ebox_B.Dctleadlag_f *
      robotarm_student_2021a_Ebox_B.homeControllerEnabled;
  } else {
    robotarm_student_2021a_Ebox_B.Gain_au =
      robotarm_student_2021a_Ebox_B.Dctleadlag_d;
  }

  /* End of Switch: '<S188>/Homing Running Switch' */

  /* Sum: '<S176>/Sum1' incorporates:
   *  Constant: '<S176>/Voltage middle'
   *  Gain: '<S176>/Gain4'
   */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_P.Gain4_Gain_b *
    robotarm_student_2021a_Ebox_B.Gain_au +
    robotarm_student_2021a_Ebox_P.Voltagemiddle_Value;

  /* Saturate: '<S176>/Saturation1' */
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.Saturation1_UpperSat) {
    robotarm_student_2021a_Ebox_B.Sum2_k =
      robotarm_student_2021a_Ebox_P.Saturation1_UpperSat;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.Saturation1_LowerSat) {
    robotarm_student_2021a_Ebox_B.Sum2_k =
      robotarm_student_2021a_Ebox_P.Saturation1_LowerSat;
  }

  /* Saturate: '<S179>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_e) {
    /* Saturate: '<S179>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_f[1] =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_e;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_o) {
    /* Saturate: '<S179>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_f[1] =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_o;
  } else {
    /* Saturate: '<S179>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_f[1] =
      robotarm_student_2021a_Ebox_B.Sum2_k;
  }

  /* Gain: '<S180>/Gain' */
  robotarm_student_2021a_Ebox_B.Gain_n[0] =
    robotarm_student_2021a_Ebox_P.Gain_Gain_na * 0.0;
  robotarm_student_2021a_Ebox_B.Gain_n[1] =
    robotarm_student_2021a_Ebox_P.Gain_Gain_na * 0.0;

  /* Switch: '<S176>/Homing Running Switch1' incorporates:
   *  Constant: '<S176>/Constant1'
   */
  if (robotarm_student_2021a_Ebox_B.Blow_suck >=
      robotarm_student_2021a_Ebox_P.HomingRunningSwitch1_Threshol_k) {
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      robotarm_student_2021a_Ebox_P.Constant1_Value_f;
  } else {
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      robotarm_student_2021a_Ebox_B.Gain1_o;
  }

  /* End of Switch: '<S176>/Homing Running Switch1' */

  /* Saturate: '<S176>/Saturation2' */
  if (robotarm_student_2021a_Ebox_B.PulseGenerator >
      robotarm_student_2021a_Ebox_P.Saturation2_UpperSat) {
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      robotarm_student_2021a_Ebox_P.Saturation2_UpperSat;
  } else if (robotarm_student_2021a_Ebox_B.PulseGenerator <
             robotarm_student_2021a_Ebox_P.Saturation2_LowerSat) {
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      robotarm_student_2021a_Ebox_P.Saturation2_LowerSat;
  }

  /* Saturate: '<S180>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.PulseGenerator >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_g) {
    /* Saturate: '<S180>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_h[0] =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_g;
  } else if (robotarm_student_2021a_Ebox_B.PulseGenerator <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_k) {
    /* Saturate: '<S180>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_h[0] =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_k;
  } else {
    /* Saturate: '<S180>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_h[0] =
      robotarm_student_2021a_Ebox_B.PulseGenerator;
  }

  /* Saturate: '<S176>/Saturation2' */
  if (0.0 > robotarm_student_2021a_Ebox_P.Saturation2_UpperSat) {
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      robotarm_student_2021a_Ebox_P.Saturation2_UpperSat;
  } else if (0.0 < robotarm_student_2021a_Ebox_P.Saturation2_LowerSat) {
    robotarm_student_2021a_Ebox_B.PulseGenerator =
      robotarm_student_2021a_Ebox_P.Saturation2_LowerSat;
  } else {
    robotarm_student_2021a_Ebox_B.PulseGenerator = 0.0;
  }

  /* Saturate: '<S180>/Saturation' */
  if (robotarm_student_2021a_Ebox_B.PulseGenerator >
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_g) {
    /* Saturate: '<S180>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_h[1] =
      robotarm_student_2021a_Ebox_P.Saturation_UpperSat_g;
  } else if (robotarm_student_2021a_Ebox_B.PulseGenerator <
             robotarm_student_2021a_Ebox_P.Saturation_LowerSat_k) {
    /* Saturate: '<S180>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_h[1] =
      robotarm_student_2021a_Ebox_P.Saturation_LowerSat_k;
  } else {
    /* Saturate: '<S180>/Saturation' */
    robotarm_student_2021a_Ebox_B.Saturation_h[1] =
      robotarm_student_2021a_Ebox_B.PulseGenerator;
  }

  /* Switch: '<S184>/Homing Running Switch' incorporates:
   *  UnitDelay: '<S177>/Unit Delay1'
   */
  if (robotarm_student_2021a_Ebox_DW.UnitDelay1_DSTATE >=
      robotarm_student_2021a_Ebox_P.HomingRunningSwitch_Threshold_f) {
    /* Switch: '<S184>/Homing Running Switch1' incorporates:
     *  StringConstant: '<S177>/Homing Orange'
     *  Switch: '<S184>/Homing Running Switch'
     */
    if (robotarm_student_2021a_Ebox_DW.UnitDelay1_DSTATE >=
        robotarm_student_2021a_Ebox_P.HomingRunningSwitch1_Threshold) {
      /* Switch: '<S184>/Homing Running Switch2' incorporates:
       *  StringConstant: '<S177>/Airbag Red'
       *  StringConstant: '<S177>/Ready Green'
       *  Switch: '<S184>/Homing Running Switch'
       */
      if (robotarm_student_2021a_Ebox_DW.UnitDelay1_DSTATE >=
          robotarm_student_2021a_Ebox_P.HomingRunningSwitch2_Threshold) {
        strncpy(&robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0],
                &robotarm_student_2021a_Ebox_P.ReadyGreen_String[0], 255U);
        robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[255] = '\x00';
      } else {
        strncpy(&robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0],
                &robotarm_student_2021a_Ebox_P.AirbagRed_String[0], 255U);
        robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[255] = '\x00';
      }

      /* End of Switch: '<S184>/Homing Running Switch2' */
    } else {
      strncpy(&robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0],
              &robotarm_student_2021a_Ebox_P.HomingOrange_String[0], 255U);
      robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[255] = '\x00';
    }

    /* End of Switch: '<S184>/Homing Running Switch1' */
  } else {
    strncpy(&robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0],
            &robotarm_student_2021a_Ebox_B.ManualSwitch1[0], 255U);
    robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[255] = '\x00';
  }

  /* End of Switch: '<S184>/Homing Running Switch' */

  /* Outputs for Enabled SubSystem: '<S189>/Subsystem3' incorporates:
   *  EnablePort: '<S191>/Enable'
   */
  /* Logic: '<S190>/NOT' incorporates:
   *  Delay: '<S190>/Delay'
   *  StringCompare: '<S190>/String Compare'
   */
  if (strcmp(&robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0],
             &robotarm_student_2021a_Ebox_DW.Delay_DSTATE[0]) != 0) {
    /* If: '<S191>/If' incorporates:
     *  Constant: '<S192>/Constant1'
     *  Constant: '<S193>/Constant'
     *  Logic: '<S191>/OR'
     *  StringCompare: '<S191>/String Compare'
     *  StringCompare: '<S191>/String Compare1'
     *  StringConstant: '<S191>/String Constant1'
     *  StringConstant: '<S191>/String Constant4'
     */
    if ((strcmp(&robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0],
                &robotarm_student_2021a_Ebox_P.StringConstant4_String[0]) == 0) ||
        (strcmp(&robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0],
                &robotarm_student_2021a_Ebox_P.StringConstant1_String_k[0]) == 0))
    {
      /* Outputs for IfAction SubSystem: '<S191>/If Action Subsystem' incorporates:
       *  ActionPort: '<S192>/Action Port'
       */
      /* StringToASCII: '<S192>/String to ASCII1' */
      strncpy(&robotarm_student_2021a_Ebox_B.cv[0],
              &robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0], 31U);
      for (robotarm_student_2021a_Ebox_B.i = 0; robotarm_student_2021a_Ebox_B.i <
           31; robotarm_student_2021a_Ebox_B.i++) {
        robotarm_student_2021a_Ebox_B.MatrixConcatenate1[robotarm_student_2021a_Ebox_B.i]
          = (uint8_T)
          robotarm_student_2021a_Ebox_B.cv[robotarm_student_2021a_Ebox_B.i];
      }

      /* End of StringToASCII: '<S192>/String to ASCII1' */
      robotarm_student_2021a_Ebox_B.MatrixConcatenate1[31] =
        robotarm_student_2021a_Ebox_P.Constant1_Value_b;
      robotarm_student_2_SerialWrite1
        (robotarm_student_2021a_Ebox_B.MatrixConcatenate1,
         &robotarm_student_2021a_Ebox_DW.SerialWrite1);

      /* End of Outputs for SubSystem: '<S191>/If Action Subsystem' */

      /* Update for IfAction SubSystem: '<S191>/If Action Subsystem' incorporates:
       *  ActionPort: '<S192>/Action Port'
       */
      /* Update for If: '<S191>/If' incorporates:
       *  Constant: '<S192>/Constant1'
       */
      srUpdateBC(robotarm_student_2021a_Ebox_DW.IfActionSubsystem_SubsysRanBC);

      /* End of Update for SubSystem: '<S191>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S191>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S193>/Action Port'
       */
      /* StringConcatenate: '<S193>/String Concatenate' incorporates:
       *  StringConstant: '<S193>/String Constant3'
       */
      robotarm_student_2021a_Ebox_B.rtb_StringConcatenate_m[0] = '\x00';
      strncat(&robotarm_student_2021a_Ebox_B.rtb_StringConcatenate_m[0],
              &robotarm_student_2021a_Ebox_P.StringConstant3_String[0], 255U);
      robotarm_student_2021a_Ebox_B.i = (int32_T)strlen
        (&robotarm_student_2021a_Ebox_B.rtb_StringConcatenate_m[0]);
      strncat
        (&robotarm_student_2021a_Ebox_B.rtb_StringConcatenate_m[robotarm_student_2021a_Ebox_B.i],
         &robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0], 255U -
         robotarm_student_2021a_Ebox_B.i);

      /* StringToASCII: '<S193>/String to ASCII' incorporates:
       *  StringConcatenate: '<S193>/String Concatenate'
       */
      strncpy(&robotarm_student_2021a_Ebox_B.cv[0],
              &robotarm_student_2021a_Ebox_B.rtb_StringConcatenate_m[0], 31U);
      for (robotarm_student_2021a_Ebox_B.i = 0; robotarm_student_2021a_Ebox_B.i <
           31; robotarm_student_2021a_Ebox_B.i++) {
        robotarm_student_2021a_Ebox_B.MatrixConcatenate[robotarm_student_2021a_Ebox_B.i]
          = (uint8_T)
          robotarm_student_2021a_Ebox_B.cv[robotarm_student_2021a_Ebox_B.i];
      }

      /* End of StringToASCII: '<S193>/String to ASCII' */
      robotarm_student_2021a_Ebox_B.MatrixConcatenate[31] =
        robotarm_student_2021a_Ebox_P.Constant_Value_c;
      robotarm_student_2_SerialWrite1
        (robotarm_student_2021a_Ebox_B.MatrixConcatenate,
         &robotarm_student_2021a_Ebox_DW.SerialWrite);

      /* End of Outputs for SubSystem: '<S191>/If Action Subsystem1' */

      /* Update for IfAction SubSystem: '<S191>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S193>/Action Port'
       */
      /* Update for If: '<S191>/If' incorporates:
       *  Constant: '<S193>/Constant'
       */
      srUpdateBC(robotarm_student_2021a_Ebox_DW.IfActionSubsystem1_SubsysRanBC);

      /* End of Update for SubSystem: '<S191>/If Action Subsystem1' */
    }

    /* End of If: '<S191>/If' */
    srUpdateBC(robotarm_student_2021a_Ebox_DW.Subsystem3_SubsysRanBC);
  }

  /* End of Logic: '<S190>/NOT' */
  /* End of Outputs for SubSystem: '<S189>/Subsystem3' */

  /* Sum: '<S177>/Add' */
  robotarm_student_2021a_Ebox_B.Add_p = ((robotarm_student_2021a_Ebox_B.Ready_n
    + robotarm_student_2021a_Ebox_B.Ready_l) +
    robotarm_student_2021a_Ebox_B.Ready_c) + robotarm_student_2021a_Ebox_B.Ready;

  /* Sum: '<S177>/Add1' incorporates:
   *  Gain: '<S177>/Gain'
   *  Logic: '<S177>/NOT'
   */
  robotarm_student_2021a_Ebox_B.Add1_c =
    (((robotarm_student_2021a_Ebox_P.Gain_Gain_lr *
       robotarm_student_2021a_Ebox_B.airBagEnabled_ab +
       robotarm_student_2021a_Ebox_P.Gain_Gain_lr *
       robotarm_student_2021a_Ebox_B.airBagEnabled_a) +
      robotarm_student_2021a_Ebox_P.Gain_Gain_lr *
      robotarm_student_2021a_Ebox_B.airBagEnabled) + (real_T)
     !(robotarm_student_2021a_Ebox_B.Add1 != 0.0)) +
    robotarm_student_2021a_Ebox_B.homingBusy_n;

  /* S-Function (ec_EboxResetEnc): '<S185>/Reset EncoderR' */

  /* Level2 S-Function Block: '<S185>/Reset EncoderR' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[34];
    sfcnOutputs(rts,0);
  }

  /* Stop: '<S185>/Stop Simulation' */
  if (robotarm_student_2021a_Ebox_B.StopSim_np != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ebox_M, 1);
  }

  /* End of Stop: '<S185>/Stop Simulation' */

  /* Sum: '<S219>/Diff' incorporates:
   *  Sum: '<S197>/Sum'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.toPoint_i +
    robotarm_student_2021a_Ebox_B.Constant1;

  /* RateLimiter: '<S197>/Limit Speed' */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b -
    robotarm_student_2021a_Ebox_DW.PrevY;
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.LimitSpeed_RisingLim *
      robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitSpeed_RisingLim *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.LimitSpeed_FallingLim *
             robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitSpeed_FallingLim *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY;
  }

  robotarm_student_2021a_Ebox_DW.PrevY =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b;

  /* End of RateLimiter: '<S197>/Limit Speed' */

  /* SampleTimeMath: '<S200>/TSamp'
   *
   * About '<S200>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  robotarm_student_2021a_Ebox_B.TSamp =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b *
    robotarm_student_2021a_Ebox_P.TSamp_WtEt_a;

  /* Sum: '<S219>/Diff' incorporates:
   *  Sum: '<S200>/Diff'
   *  UnitDelay: '<S200>/UD'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.TSamp -
    robotarm_student_2021a_Ebox_DW.UD_DSTATE;

  /* RateLimiter: '<S197>/Limit Acceleration' */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b -
    robotarm_student_2021a_Ebox_DW.PrevY_n;
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.LimitAcceleration_RisingLim *
      robotarm_student_2021a_E_period) {
    /* RateLimiter: '<S197>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_RisingLim *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_n;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.LimitAcceleration_FallingLim *
             robotarm_student_2021a_E_period) {
    /* RateLimiter: '<S197>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_FallingLim *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_n;
  } else {
    /* RateLimiter: '<S197>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration =
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b;
  }

  robotarm_student_2021a_Ebox_DW.PrevY_n =
    robotarm_student_2021a_Ebox_B.LimitAcceleration;

  /* End of RateLimiter: '<S197>/Limit Acceleration' */

  /* S-Function (ec_EboxResetEnc): '<S186>/Reset EncoderX' */

  /* Level2 S-Function Block: '<S186>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[35];
    sfcnOutputs(rts,0);
  }

  /* Stop: '<S186>/Stop Simulation' */
  if (robotarm_student_2021a_Ebox_B.StopSim_p != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ebox_M, 1);
  }

  /* End of Stop: '<S186>/Stop Simulation' */

  /* Sum: '<S219>/Diff' incorporates:
   *  Sum: '<S203>/Sum'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.toPoint_h +
    robotarm_student_2021a_Ebox_B.Constant1_c;

  /* RateLimiter: '<S203>/Limit Speed' */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b -
    robotarm_student_2021a_Ebox_DW.PrevY_h;
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.LimitSpeed_RisingLim_d *
      robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitSpeed_RisingLim_d *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_h;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.LimitSpeed_FallingLim_j *
             robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitSpeed_FallingLim_j *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_h;
  }

  robotarm_student_2021a_Ebox_DW.PrevY_h =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b;

  /* End of RateLimiter: '<S203>/Limit Speed' */

  /* SampleTimeMath: '<S209>/TSamp'
   *
   * About '<S209>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  robotarm_student_2021a_Ebox_B.TSamp_m =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b *
    robotarm_student_2021a_Ebox_P.TSamp_WtEt_h;

  /* Sum: '<S219>/Diff' incorporates:
   *  Sum: '<S209>/Diff'
   *  UnitDelay: '<S209>/UD'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.TSamp_m -
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_n;

  /* RateLimiter: '<S203>/Limit Acceleration' */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b -
    robotarm_student_2021a_Ebox_DW.PrevY_m;
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.LimitAcceleration_RisingLim_c *
      robotarm_student_2021a_E_period) {
    /* RateLimiter: '<S203>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_c =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_RisingLim_c *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_m;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.LimitAcceleration_FallingLim_m *
             robotarm_student_2021a_E_period) {
    /* RateLimiter: '<S203>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_c =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_FallingLim_m *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_m;
  } else {
    /* RateLimiter: '<S203>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_c =
      robotarm_student_2021a_Ebox_B.LimitAcceleration_b;
  }

  robotarm_student_2021a_Ebox_DW.PrevY_m =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_c;

  /* End of RateLimiter: '<S203>/Limit Acceleration' */

  /* S-Function (ec_EboxResetEnc): '<S187>/Reset EncoderX' */

  /* Level2 S-Function Block: '<S187>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[36];
    sfcnOutputs(rts,0);
  }

  /* Stop: '<S187>/Stop Simulation' */
  if (robotarm_student_2021a_Ebox_B.StopSim_n != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ebox_M, 1);
  }

  /* End of Stop: '<S187>/Stop Simulation' */

  /* Sum: '<S219>/Diff' incorporates:
   *  Sum: '<S213>/Sum'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.toPoint
    + robotarm_student_2021a_Ebox_B.Constant1_k;

  /* RateLimiter: '<S213>/Limit Speed' */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b -
    robotarm_student_2021a_Ebox_DW.PrevY_c;
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.LimitSpeed_RisingLim_m *
      robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitSpeed_RisingLim_m *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_c;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.LimitSpeed_FallingLim_jw *
             robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitSpeed_FallingLim_jw *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_c;
  }

  robotarm_student_2021a_Ebox_DW.PrevY_c =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b;

  /* End of RateLimiter: '<S213>/Limit Speed' */

  /* SampleTimeMath: '<S219>/TSamp'
   *
   * About '<S219>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  robotarm_student_2021a_Ebox_B.TSamp_j =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b *
    robotarm_student_2021a_Ebox_P.TSamp_WtEt_i;

  /* Sum: '<S219>/Diff' incorporates:
   *  UnitDelay: '<S219>/UD'
   */
  robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
    robotarm_student_2021a_Ebox_B.TSamp_j -
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_e;

  /* RateLimiter: '<S213>/Limit Acceleration' */
  robotarm_student_2021a_Ebox_B.Sum2_k =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b -
    robotarm_student_2021a_Ebox_DW.PrevY_mz;
  if (robotarm_student_2021a_Ebox_B.Sum2_k >
      robotarm_student_2021a_Ebox_P.LimitAcceleration_RisingLim_j *
      robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' incorporates:
     *  RateLimiter: '<S213>/Limit Acceleration'
     */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_RisingLim_j *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_mz;
  } else if (robotarm_student_2021a_Ebox_B.Sum2_k <
             robotarm_student_2021a_Ebox_P.LimitAcceleration_FallingLim_h *
             robotarm_student_2021a_E_period) {
    /* Sum: '<S219>/Diff' incorporates:
     *  RateLimiter: '<S213>/Limit Acceleration'
     */
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_FallingLim_h *
      robotarm_student_2021a_E_period + robotarm_student_2021a_Ebox_DW.PrevY_mz;
  }

  robotarm_student_2021a_Ebox_DW.PrevY_mz =
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b;

  /* End of RateLimiter: '<S213>/Limit Acceleration' */

  /* S-Function (ec_EboxResetEnc): '<S188>/Reset EncoderConv' */

  /* Level2 S-Function Block: '<S188>/Reset EncoderConv' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[37];
    sfcnOutputs(rts,0);
  }

  /* Stop: '<S188>/Stop Simulation' */
  if (robotarm_student_2021a_Ebox_B.StopSim != 0.0) {
    rtmSetStopRequested(robotarm_student_2021a_Ebox_M, 1);
  }

  /* End of Stop: '<S188>/Stop Simulation' */

  /* Update for DiscreteIntegrator: '<S185>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE +=
    robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_gainval *
    robotarm_student_2021a_Ebox_B.jogSpeed_p;

  /* Update for DiscreteIntegrator: '<S197>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_n +=
    robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_gainva_b *
    robotarm_student_2021a_Ebox_B.LimitAcceleration;

  /* Update for UnitDelay: '<S177>/Unit Delay' */
  robotarm_student_2021a_Ebox_DW.UnitDelay_DSTATE =
    robotarm_student_2021a_Ebox_B.Add_p;

  /* Update for DiscreteIntegrator: '<S186>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_p +=
    robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_gainva_a *
    robotarm_student_2021a_Ebox_B.jogSpeed_o;

  /* Update for DiscreteIntegrator: '<S203>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTAT_pn +=
    robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_gainva_i *
    robotarm_student_2021a_Ebox_B.LimitAcceleration_c;

  /* Update for DiscreteIntegrator: '<S187>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_c +=
    robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_gainv_ip *
    robotarm_student_2021a_Ebox_B.jogSpeed_f;

  /* Update for DiscreteIntegrator: '<S213>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_i +=
    robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_gainva_n *
    robotarm_student_2021a_Ebox_B.LimitAcceleration_b;

  /* Update for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable '
   */
  if (robotarm_student_2021a_Ebox_DW.Controller_MODE) {
    /* Update for UnitDelay: '<S167>/Delay Input1' incorporates:
     *  Constant: '<S166>/Object detection matrix'
     */
    memcpy(&robotarm_student_2021a_Ebox_DW.DelayInput1_DSTATE[0],
           &robotarm_student_2021a_Ebox_P.Objectdetectionmatrix_Value[0], 12U *
           sizeof(real_T));

    /* Update for UnitDelay: '<S9>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_g =
      robotarm_student_2021a_Ebox_B.TSamp_l;

    /* Update for UnitDelay: '<S8>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_c =
      robotarm_student_2021a_Ebox_B.TSamp_i;

    /* Update for UnitDelay: '<S10>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_m =
      robotarm_student_2021a_Ebox_B.TSamp_n;

    /* Update for UnitDelay: '<S11>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_m3 =
      robotarm_student_2021a_Ebox_B.TSamp_mq;

    /* Update for UnitDelay: '<S12>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_d =
      robotarm_student_2021a_Ebox_B.TSamp_p;

    /* Update for UnitDelay: '<S13>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_a =
      robotarm_student_2021a_Ebox_B.TSamp_d;

    /* Update for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    robotarm_student_2021a_Ebox_DW.Discreteintegrator_DSTATE +=
      robotarm_student_2021a_Ebox_P.Discreteintegrator_gainval *
      robotarm_student_2021a_Ebox_B.Saturation_m;

    /* Update for DiscreteIntegrator: '<S51>/Integrator' */
    robotarm_student_2021a_Ebox_DW.Integrator_DSTATE +=
      robotarm_student_2021a_Ebox_P.Integrator_gainval *
      robotarm_student_2021a_Ebox_B.IntegralGain;

    /* Update for DiscreteIntegrator: '<S46>/Filter' */
    robotarm_student_2021a_Ebox_DW.Filter_DSTATE +=
      robotarm_student_2021a_Ebox_P.Filter_gainval *
      robotarm_student_2021a_Ebox_B.FilterCoefficient;

    /* Update for DiscreteIntegrator: '<S100>/Integrator' */
    robotarm_student_2021a_Ebox_DW.Integrator_DSTATE_f +=
      robotarm_student_2021a_Ebox_P.Integrator_gainval_k *
      robotarm_student_2021a_Ebox_B.IntegralGain_m;

    /* Update for DiscreteIntegrator: '<S95>/Filter' */
    robotarm_student_2021a_Ebox_DW.Filter_DSTATE_f +=
      robotarm_student_2021a_Ebox_P.Filter_gainval_e *
      robotarm_student_2021a_Ebox_B.FilterCoefficient_n;

    /* Update for DiscreteIntegrator: '<S149>/Integrator' */
    robotarm_student_2021a_Ebox_DW.Integrator_DSTATE_c +=
      robotarm_student_2021a_Ebox_P.Integrator_gainval_f *
      robotarm_student_2021a_Ebox_B.IntegralGain_k;

    /* Update for DiscreteIntegrator: '<S144>/Filter' */
    robotarm_student_2021a_Ebox_DW.Filter_DSTATE_l +=
      robotarm_student_2021a_Ebox_P.Filter_gainval_g *
      robotarm_student_2021a_Ebox_B.FilterCoefficient_n4;
  }

  /* End of Update for SubSystem: '<Root>/Controller' */

  /* Update for DiscreteIntegrator: '<S188>/Discrete-Time Integrator' */
  robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_k +=
    robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_gainva_c *
    robotarm_student_2021a_Ebox_B.jogSpeed;

  /* Update for UnitDelay: '<S177>/Unit Delay1' */
  robotarm_student_2021a_Ebox_DW.UnitDelay1_DSTATE =
    robotarm_student_2021a_Ebox_B.Add1_c;

  /* Update for Delay: '<S190>/Delay' */
  strncpy(&robotarm_student_2021a_Ebox_DW.Delay_DSTATE[0],
          &robotarm_student_2021a_Ebox_B.HomingRunningSwitch_c[0], 255U);
  robotarm_student_2021a_Ebox_DW.Delay_DSTATE[255] = '\x00';

  /* Update for UnitDelay: '<S200>/UD' */
  robotarm_student_2021a_Ebox_DW.UD_DSTATE = robotarm_student_2021a_Ebox_B.TSamp;

  /* Update for UnitDelay: '<S209>/UD' */
  robotarm_student_2021a_Ebox_DW.UD_DSTATE_n =
    robotarm_student_2021a_Ebox_B.TSamp_m;

  /* Update for UnitDelay: '<S219>/UD' */
  robotarm_student_2021a_Ebox_DW.UD_DSTATE_e =
    robotarm_student_2021a_Ebox_B.TSamp_j;

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)robotarm_student_2021a_Ebox_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.00048828125s, 0.0s] */
    rtExtModeUpload(1, (real_T)robotarm_student_2021a_Ebox_M->Timing.t[1]);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(robotarm_student_2021a_Ebox_M)!=-1) &&
        !((rtmGetTFinal(robotarm_student_2021a_Ebox_M)-
           robotarm_student_2021a_Ebox_M->Timing.t[0]) >
          robotarm_student_2021a_Ebox_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(robotarm_student_2021a_Ebox_M, "Simulation finished");
    }

    if (rtmGetStopRequested(robotarm_student_2021a_Ebox_M)) {
      rtmSetErrorStatus(robotarm_student_2021a_Ebox_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++robotarm_student_2021a_Ebox_M->Timing.clockTick0)) {
    ++robotarm_student_2021a_Ebox_M->Timing.clockTickH0;
  }

  robotarm_student_2021a_Ebox_M->Timing.t[0] =
    robotarm_student_2021a_Ebox_M->Timing.clockTick0 *
    robotarm_student_2021a_Ebox_M->Timing.stepSize0 +
    robotarm_student_2021a_Ebox_M->Timing.clockTickH0 *
    robotarm_student_2021a_Ebox_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.00048828125s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++robotarm_student_2021a_Ebox_M->Timing.clockTick1)) {
      ++robotarm_student_2021a_Ebox_M->Timing.clockTickH1;
    }

    robotarm_student_2021a_Ebox_M->Timing.t[1] =
      robotarm_student_2021a_Ebox_M->Timing.clockTick1 *
      robotarm_student_2021a_Ebox_M->Timing.stepSize1 +
      robotarm_student_2021a_Ebox_M->Timing.clockTickH1 *
      robotarm_student_2021a_Ebox_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void robotarm_student_2021a_Ebox_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)robotarm_student_2021a_Ebox_M, 0,
                sizeof(RT_MODEL_robotarm_student_2021a_Ebox_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&robotarm_student_2021a_Ebox_M->solverInfo,
                          &robotarm_student_2021a_Ebox_M->Timing.simTimeStep);
    rtsiSetTPtr(&robotarm_student_2021a_Ebox_M->solverInfo, &rtmGetTPtr
                (robotarm_student_2021a_Ebox_M));
    rtsiSetStepSizePtr(&robotarm_student_2021a_Ebox_M->solverInfo,
                       &robotarm_student_2021a_Ebox_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&robotarm_student_2021a_Ebox_M->solverInfo,
                          (&rtmGetErrorStatus(robotarm_student_2021a_Ebox_M)));
    rtsiSetRTModelPtr(&robotarm_student_2021a_Ebox_M->solverInfo,
                      robotarm_student_2021a_Ebox_M);
  }

  rtsiSetSimTimeStep(&robotarm_student_2021a_Ebox_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&robotarm_student_2021a_Ebox_M->solverInfo,
                    "FixedStepDiscrete");
  robotarm_student_2021a_Ebox_M->solverInfoPtr =
    (&robotarm_student_2021a_Ebox_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      robotarm_student_2021a_Ebox_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    robotarm_student_2021a_Ebox_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    robotarm_student_2021a_Ebox_M->Timing.sampleTimes =
      (&robotarm_student_2021a_Ebox_M->Timing.sampleTimesArray[0]);
    robotarm_student_2021a_Ebox_M->Timing.offsetTimes =
      (&robotarm_student_2021a_Ebox_M->Timing.offsetTimesArray[0]);

    /* task periods */
    robotarm_student_2021a_Ebox_M->Timing.sampleTimes[0] = (0.0);
    robotarm_student_2021a_Ebox_M->Timing.sampleTimes[1] = (0.00048828125);

    /* task offsets */
    robotarm_student_2021a_Ebox_M->Timing.offsetTimes[0] = (0.0);
    robotarm_student_2021a_Ebox_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(robotarm_student_2021a_Ebox_M,
             &robotarm_student_2021a_Ebox_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = robotarm_student_2021a_Ebox_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    robotarm_student_2021a_Ebox_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(robotarm_student_2021a_Ebox_M, -1);
  robotarm_student_2021a_Ebox_M->Timing.stepSize0 = 0.00048828125;
  robotarm_student_2021a_Ebox_M->Timing.stepSize1 = 0.00048828125;

  /* External mode info */
  robotarm_student_2021a_Ebox_M->Sizes.checksums[0] = (4278239279U);
  robotarm_student_2021a_Ebox_M->Sizes.checksums[1] = (1601896168U);
  robotarm_student_2021a_Ebox_M->Sizes.checksums[2] = (2522320864U);
  robotarm_student_2021a_Ebox_M->Sizes.checksums[3] = (3378533286U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[46];
    robotarm_student_2021a_Ebox_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem_SubsysRanBC_o;
    systemRan[4] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem1.IfActionSubsystem1_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem2.IfActionSubsystem1_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem3.IfActionSubsystem1_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem4.IfActionSubsystem1_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem5.IfActionSubsystem1_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem6.IfActionSubsystem1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[18] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[21] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[22] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[23] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Controller_SubsysRanBC;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[27] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[28] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[29] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[30] = (sysRanDType *)
      &robotarm_student_2021a_Ebox_DW.Subsystem3_SubsysRanBC;
    systemRan[31] = &rtAlwaysEnabled;
    systemRan[32] = &rtAlwaysEnabled;
    systemRan[33] = &rtAlwaysEnabled;
    systemRan[34] = &rtAlwaysEnabled;
    systemRan[35] = &rtAlwaysEnabled;
    systemRan[36] = &rtAlwaysEnabled;
    systemRan[37] = &rtAlwaysEnabled;
    systemRan[38] = &rtAlwaysEnabled;
    systemRan[39] = &rtAlwaysEnabled;
    systemRan[40] = &rtAlwaysEnabled;
    systemRan[41] = &rtAlwaysEnabled;
    systemRan[42] = &rtAlwaysEnabled;
    systemRan[43] = &rtAlwaysEnabled;
    systemRan[44] = &rtAlwaysEnabled;
    systemRan[45] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(robotarm_student_2021a_Ebox_M->extModeInfo,
      &robotarm_student_2021a_Ebox_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(robotarm_student_2021a_Ebox_M->extModeInfo,
                        robotarm_student_2021a_Ebox_M->Sizes.checksums);
    rteiSetTPtr(robotarm_student_2021a_Ebox_M->extModeInfo, rtmGetTPtr
                (robotarm_student_2021a_Ebox_M));
  }

  robotarm_student_2021a_Ebox_M->solverInfoPtr =
    (&robotarm_student_2021a_Ebox_M->solverInfo);
  robotarm_student_2021a_Ebox_M->Timing.stepSize = (0.00048828125);
  rtsiSetFixedStepSize(&robotarm_student_2021a_Ebox_M->solverInfo, 0.00048828125);
  rtsiSetSolverMode(&robotarm_student_2021a_Ebox_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &robotarm_student_2021a_Ebox_B), 0,
                sizeof(B_robotarm_student_2021a_Ebox_T));

  /* states (dwork) */
  (void) memset((void *)&robotarm_student_2021a_Ebox_DW, 0,
                sizeof(DW_robotarm_student_2021a_Ebox_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    robotarm_student_2021a_Ebox_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.sfcnInfo;
    robotarm_student_2021a_Ebox_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (robotarm_student_2021a_Ebox_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &robotarm_student_2021a_Ebox_M->Sizes.numSampTimes);
    robotarm_student_2021a_Ebox_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(robotarm_student_2021a_Ebox_M)[0]);
    robotarm_student_2021a_Ebox_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(robotarm_student_2021a_Ebox_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   robotarm_student_2021a_Ebox_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(robotarm_student_2021a_Ebox_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(robotarm_student_2021a_Ebox_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (robotarm_student_2021a_Ebox_M));
    rtssSetStepSizePtr(sfcnInfo, &robotarm_student_2021a_Ebox_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (robotarm_student_2021a_Ebox_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &robotarm_student_2021a_Ebox_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &robotarm_student_2021a_Ebox_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &robotarm_student_2021a_Ebox_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &robotarm_student_2021a_Ebox_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &robotarm_student_2021a_Ebox_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &robotarm_student_2021a_Ebox_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &robotarm_student_2021a_Ebox_M->solverInfoPtr);
  }

  robotarm_student_2021a_Ebox_M->Sizes.numSFcns = (38);

  /* register each child */
  {
    (void) memset((void *)
                  &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.childSFunctions
                  [0], 0,
                  38*sizeof(SimStruct));
    robotarm_student_2021a_Ebox_M->childSfunctions =
      (&robotarm_student_2021a_Ebox_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 38; i++) {
        robotarm_student_2021a_Ebox_M->childSfunctions[i] =
          (&robotarm_student_2021a_Ebox_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S3>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain1_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator3_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator3_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator3_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ebox_DW.Dctintegrator3_RWORK_g[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S3>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctintegrator3_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass_ab));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_c[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S3>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dct1lowpass_ab;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_g[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S4>/Dctpd (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Sum2;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctpd));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts, "robotarm_student_2021a_Ebox/Controller/Controller R/Dctpd");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ebox_DW.Dctpd_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctpd_RWORK[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S4>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctpd;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller R/Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_e[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_e[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S4>/Dctnotch (dnotch) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Sum_b;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctnotch));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller R/Dctnotch");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ebox_DW.Dctnotch_RWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctnotch_RWORK[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S6>/Dctpd (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Sum1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctpd_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts, "robotarm_student_2021a_Ebox/Controller/Controller X/Dctpd");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P2_Size_c);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P3_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ebox_DW.Dctpd_RWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctpd_RWORK_h[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S6>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctpd_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator_or));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller X/Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P2_Size_k);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_l[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S6>/Dctnotch (dnotch) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Sum_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctnotch_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller X/Dctnotch");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P3_Size_l);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P4_Size_e);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P5_Size_m);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctnotch_RWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctnotch_RWORK_a[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S7>/Dctpd (dpd) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Sum7;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctpd_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctpd");
      ssSetPath(rts, "robotarm_student_2021a_Ebox/Controller/Controller Z/Dctpd");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctpd_P3_Size_ov);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &robotarm_student_2021a_Ebox_DW.Dctpd_RWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctpd_RWORK_j[0]);
      }

      /* registration */
      dpd(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S7>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctpd_d;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn10.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller Z/Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P1_Size_h);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P2_Size_g);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_ln[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_ln[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S7>/Dctnotch (dnotch) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Sum_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn11.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctnotch_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctnotch");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/Controller/Controller Z/Dctnotch");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P3_Size_p);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P4_Size_i);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctnotch_P5_Size_n);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctnotch_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctnotch_RWORK_k[0]);
      }

      /* registration */
      dnotch(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S181>/S-Function (ec_Supervisor) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn12.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn12.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/IO/Supervisor/S-Function");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.SFunction_P2_Size);
      }

      /* registration */
      ec_Supervisor(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S178>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          sfcnUPtrs[0] = robotarm_student_2021a_Ebox_B.Saturation;
          sfcnUPtrs[1] = &robotarm_student_2021a_Ebox_B.Saturation[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.UPtrs1;
          sfcnUPtrs[0] = robotarm_student_2021a_Ebox_B.Gain;
          sfcnUPtrs[1] = &robotarm_student_2021a_Ebox_B.Gain[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.UPtrs2;

          {
            int_T i1;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = ((const real_T*) &robotarm_student_2021a_Ebox_RGND);
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn13.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o3));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "robotarm_student_2021a_Ebox/RobotArm/IO/Ebox/ec_Ebox");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ec_Ebox_P1_Size);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S179>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          sfcnUPtrs[0] = robotarm_student_2021a_Ebox_B.Saturation_f;
          sfcnUPtrs[1] = &robotarm_student_2021a_Ebox_B.Saturation_f[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.UPtrs1;
          sfcnUPtrs[0] = robotarm_student_2021a_Ebox_B.Gain_j;
          sfcnUPtrs[1] = &robotarm_student_2021a_Ebox_B.Gain_j[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.UPtrs2;

          {
            int_T i1;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = ((const real_T*) &robotarm_student_2021a_Ebox_RGND);
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn14.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o1_h));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o2_o));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o3_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "robotarm_student_2021a_Ebox/RobotArm/IO/Ebox1/ec_Ebox");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ec_Ebox_P1_Size_d);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S180>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          sfcnUPtrs[0] = robotarm_student_2021a_Ebox_B.Saturation_h;
          sfcnUPtrs[1] = &robotarm_student_2021a_Ebox_B.Saturation_h[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.UPtrs1;
          sfcnUPtrs[0] = robotarm_student_2021a_Ebox_B.Gain_n;
          sfcnUPtrs[1] = &robotarm_student_2021a_Ebox_B.Gain_n[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.UPtrs2;

          {
            int_T i1;
            const real_T *u2 = robotarm_student_2021a_Ebox_B.Assignment;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = &u2[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn15.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o1_o));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o2_p));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            robotarm_student_2021a_Ebox_B.ec_Ebox_o3_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "robotarm_student_2021a_Ebox/RobotArm/IO/Ebox2/ec_Ebox");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ec_Ebox_P1_Size_du);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S194>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain_c;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn16.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/ /Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P2_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S194>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctintegrator;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/ /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size_c);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S194>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctleadlag;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/ /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size_g);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S195>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn19.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/   /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size_d);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_b[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_b[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S195>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctleadlag_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn20.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/   /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size_gi);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_g[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S201>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn21.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P2_Size_ja);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_b[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_b[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S201>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctintegrator_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn22.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size_ph);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_a[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S201>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [23]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctleadlag_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn23.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size_i);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_m[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S202>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [24]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain1_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn24.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size_a);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_f[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S202>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [25]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctleadlag_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn25.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_k[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S210>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [26]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn26.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/    /Dctintegrator");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator_P2_Size_n);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &robotarm_student_2021a_Ebox_DW.Dctintegrator_RWORK_m[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S210>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [27]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[27]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [27]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctintegrator_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn27.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag_eg));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/    /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size_o4);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size_l);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn27.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_p[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S210>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [28]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[28]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [28]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctleadlag_eg;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn28.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass_ft));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/    /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn28.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_p[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S211>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[29];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [29]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[29]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [29]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [29]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [29]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [29]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[29]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn29.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/     /Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn29.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_o[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S211>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[30];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [30]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[30]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [30]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [30]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [30]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [30]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[30]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctleadlag_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn30.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/     /Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size_k);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_gb[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn30.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_gb
                   [0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S220>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[31];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [31]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[31]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [31]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [31]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [31]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [31]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[31]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Gain1_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn31.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctintegrator3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Conveyor/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator3_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctintegrator3_P2_Size_i);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctintegrator3_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn31.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctintegrator3_RWORK
                   [0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S220>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[32];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [32]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[32]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [32]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [32]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [32]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [32]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[32]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dctintegrator3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn32.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dct1lowpass_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Conveyor/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P1_Size_ph);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dct1lowpass_P2_Size_p0);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn32.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dct1lowpass_RWORK_n[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S220>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[33];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [33]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[33]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [33]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [33]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [33]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [33]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[33]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.Dct1lowpass_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &robotarm_student_2021a_Ebox_M->
          NonInlinedSFcns.Sfcn33.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &robotarm_student_2021a_Ebox_B.Dctleadlag_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Conveyor/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P1_Size_pu);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       robotarm_student_2021a_Ebox_P.Dctleadlag_P3_Size_f);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn33.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &robotarm_student_2021a_Ebox_DW.Dctleadlag_RWORK_l[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S185>/Reset EncoderR (ec_EboxResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[34];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [34]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[34]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [34]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [34]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [34]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [34]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[34]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.resetEnc_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller R/Reset EncoderR");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn34.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderR_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderR_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S186>/Reset EncoderX (ec_EboxResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[35];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [35]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[35]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [35]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [35]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [35]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [35]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[35]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.resetEnc_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderX");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller X/Reset EncoderX");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn35.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderX_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderX_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S187>/Reset EncoderX (ec_EboxResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[36];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [36]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[36]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [36]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [36]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [36]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [36]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[36]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.resetEnc_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderX");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Controller Z/Reset EncoderX");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn36.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderX_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderX_P2_Size_k);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: robotarm_student_2021a_Ebox/<S188>/Reset EncoderConv (ec_EboxResetEnc) */
    {
      SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[37];

      /* timing info */
      time_T *sfcnPeriod =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.sfcnPeriod;
      time_T *sfcnOffset =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.sfcnOffset;
      int_T *sfcnTsMap =
        robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.blkInfo2
                         [37]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.inputOutputPortInfo2[37]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, robotarm_student_2021a_Ebox_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods2
                           [37]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods3
                           [37]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.methods4
                           [37]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.statesInfo2
                         [37]);
        ssSetPeriodicStatesInfo(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.periodicStatesInfo[37]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.UPtrs0;
          sfcnUPtrs[0] = &robotarm_student_2021a_Ebox_B.resetEnc;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderConv");
      ssSetPath(rts,
                "robotarm_student_2021a_Ebox/RobotArm/Supervisor/Supervisory Conveyor/Reset EncoderConv");
      ssSetRTModel(rts,robotarm_student_2021a_Ebox_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &robotarm_student_2021a_Ebox_M->NonInlinedSFcns.Sfcn37.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderConv_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       robotarm_student_2021a_Ebox_P.ResetEncoderConv_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  robotarm_student_2021a_Ebox_DW.new7_define_label_picker =
    robotarm_student_2021a_Ebox_P.DataStoreMemory_InitialValue;

  /* Start for S-Function (ec_Supervisor): '<S181>/S-Function' */
  /* Level2 S-Function Block: '<S181>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S197>/Constant1' */
  robotarm_student_2021a_Ebox_B.Constant1 =
    robotarm_student_2021a_Ebox_P.Constant1_Value_f3;

  /* Start for Constant: '<S177>/set_robot_calibration_r' */
  robotarm_student_2021a_Ebox_B.set_robot_calibration_r =
    robotarm_student_2021a_Ebox_P.set_robot_calibration_r_Value;

  /* Start for Constant: '<S203>/Constant1' */
  robotarm_student_2021a_Ebox_B.Constant1_c =
    robotarm_student_2021a_Ebox_P.Constant1_Value_c;

  /* Start for Constant: '<S177>/set_robot_calibration_x' */
  robotarm_student_2021a_Ebox_B.set_robot_calibration_x =
    robotarm_student_2021a_Ebox_P.set_robot_calibration_x_Value;

  /* Start for Constant: '<S213>/Constant1' */
  robotarm_student_2021a_Ebox_B.Constant1_k =
    robotarm_student_2021a_Ebox_P.Constant1_Value_e;

  /* Start for Constant: '<S177>/set_robot_calibration_z' */
  robotarm_student_2021a_Ebox_B.set_robot_calibration_z =
    robotarm_student_2021a_Ebox_P.set_robot_calibration_z_Value;

  /* Start for Enabled SubSystem: '<Root>/Controller' */
  robotarm_student_2021a_Ebox_DW.Controller_MODE = false;

  /* Start for Enabled SubSystem: '<S166>/Enabled Subsystem' */
  robotarm_student_2021a_Ebox_DW.EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S166>/Enabled Subsystem' */

  /* Start for S-Function (dweakint): '<S3>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S3>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S3>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S3>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S3>/Dctleadlag' */
  /* Level2 S-Function Block: '<S3>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S4>/Dctpd' */
  /* Level2 S-Function Block: '<S4>/Dctpd' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S4>/Dctintegrator' */
  /* Level2 S-Function Block: '<S4>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dnotch): '<S4>/Dctnotch' */
  /* Level2 S-Function Block: '<S4>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S6>/Dctpd' */
  /* Level2 S-Function Block: '<S6>/Dctpd' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S6>/Dctintegrator' */
  /* Level2 S-Function Block: '<S6>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dnotch): '<S6>/Dctnotch' */
  /* Level2 S-Function Block: '<S6>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dpd): '<S7>/Dctpd' */
  /* Level2 S-Function Block: '<S7>/Dctpd' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S7>/Dctintegrator' */
  /* Level2 S-Function Block: '<S7>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dnotch): '<S7>/Dctnotch' */
  /* Level2 S-Function Block: '<S7>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for DiscretePulseGenerator: '<S15>/Object1' */
  robotarm_student_2021a_Ebox_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S166>/Pulse Generator1' */
  robotarm_student_2021a_Ebox_DW.clockTickCounter_p = 0;

  /* Start for DiscretePulseGenerator: '<S166>/Pulse Generator' */
  robotarm_student_2021a_Ebox_DW.clockTickCounter_k = 0;

  /* End of Start for SubSystem: '<Root>/Controller' */

  /* Start for S-Function (dweakint): '<S194>/Dctintegrator' */
  /* Level2 S-Function Block: '<S194>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S194>/Dctleadlag' */
  /* Level2 S-Function Block: '<S194>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S194>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S194>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S195>/Dctleadlag' */
  /* Level2 S-Function Block: '<S195>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S195>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S195>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S201>/Dctintegrator' */
  /* Level2 S-Function Block: '<S201>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S201>/Dctleadlag' */
  /* Level2 S-Function Block: '<S201>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S201>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S201>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S202>/Dctleadlag' */
  /* Level2 S-Function Block: '<S202>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S202>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S202>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S210>/Dctintegrator' */
  /* Level2 S-Function Block: '<S210>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S210>/Dctleadlag' */
  /* Level2 S-Function Block: '<S210>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[27];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S210>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S210>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[28];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S211>/Dctleadlag' */
  /* Level2 S-Function Block: '<S211>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[29];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S211>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S211>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[30];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S220>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S220>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[31];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S220>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S220>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[32];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S220>/Dctleadlag' */
  /* Level2 S-Function Block: '<S220>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[33];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S189>/Subsystem3' */
  /* Start for IfAction SubSystem: '<S191>/If Action Subsystem' */
  robotarm_stu_SerialWrite1_Start(&robotarm_student_2021a_Ebox_DW.SerialWrite1);

  /* End of Start for SubSystem: '<S191>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S191>/If Action Subsystem1' */
  robotarm_stu_SerialWrite1_Start(&robotarm_student_2021a_Ebox_DW.SerialWrite);

  /* End of Start for SubSystem: '<S191>/If Action Subsystem1' */
  /* End of Start for SubSystem: '<S189>/Subsystem3' */
  {
    int32_T i;

    /* InitializeConditions for DiscreteIntegrator: '<S185>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE =
      robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S197>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_n =
      robotarm_student_2021a_Ebox_B.Constant1;

    /* InitializeConditions for UnitDelay: '<S177>/Unit Delay' */
    robotarm_student_2021a_Ebox_DW.UnitDelay_DSTATE =
      robotarm_student_2021a_Ebox_P.UnitDelay_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S186>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_p =
      robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_IC_i;

    /* InitializeConditions for DiscreteIntegrator: '<S203>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTAT_pn =
      robotarm_student_2021a_Ebox_B.Constant1_c;

    /* InitializeConditions for DiscreteIntegrator: '<S187>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_c =
      robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_IC_d;

    /* InitializeConditions for DiscreteIntegrator: '<S213>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_i =
      robotarm_student_2021a_Ebox_B.Constant1_k;

    /* InitializeConditions for DiscreteIntegrator: '<S188>/Discrete-Time Integrator' */
    robotarm_student_2021a_Ebox_DW.DiscreteTimeIntegrator_DSTATE_k =
      robotarm_student_2021a_Ebox_P.DiscreteTimeIntegrator_IC_f;

    /* InitializeConditions for UnitDelay: '<S177>/Unit Delay1' */
    robotarm_student_2021a_Ebox_DW.UnitDelay1_DSTATE =
      robotarm_student_2021a_Ebox_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Delay: '<S190>/Delay' */
    strncpy(&robotarm_student_2021a_Ebox_DW.Delay_DSTATE[0],
            &robotarm_student_2021a_Ebox_P.Delay_InitialCondition[0], 255U);
    robotarm_student_2021a_Ebox_DW.Delay_DSTATE[255] = '\x00';

    /* InitializeConditions for RateLimiter: '<S197>/Limit Speed' */
    robotarm_student_2021a_Ebox_DW.PrevY =
      robotarm_student_2021a_Ebox_P.LimitSpeed_IC;

    /* InitializeConditions for UnitDelay: '<S200>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative_ICPrevScal_p;

    /* InitializeConditions for RateLimiter: '<S197>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_DW.PrevY_n =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_IC;

    /* InitializeConditions for RateLimiter: '<S203>/Limit Speed' */
    robotarm_student_2021a_Ebox_DW.PrevY_h =
      robotarm_student_2021a_Ebox_P.LimitSpeed_IC_g;

    /* InitializeConditions for UnitDelay: '<S209>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_n =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative_ICPrevSca_pl;

    /* InitializeConditions for RateLimiter: '<S203>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_DW.PrevY_m =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_IC_f;

    /* InitializeConditions for RateLimiter: '<S213>/Limit Speed' */
    robotarm_student_2021a_Ebox_DW.PrevY_c =
      robotarm_student_2021a_Ebox_P.LimitSpeed_IC_j;

    /* InitializeConditions for UnitDelay: '<S219>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_e =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative_ICPrevScal_i;

    /* InitializeConditions for RateLimiter: '<S213>/Limit Acceleration' */
    robotarm_student_2021a_Ebox_DW.PrevY_mz =
      robotarm_student_2021a_Ebox_P.LimitAcceleration_IC_j;

    /* SystemInitialize for Chart: '<S185>/Supervisor' */
    robotarm_student_2021a_Ebox_DW.sfEvent_f = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_p = 0U;
    robotarm_student_2021a_Ebox_DW.is_active_c5_robotarm_student_2 = 0U;
    robotarm_student_2021a_Ebox_DW.is_c5_robotarm_student_2021a_Eb = 0U;
    robotarm_student_2021a_Ebox_DW.currentcarPos_k = 0.0;
    robotarm_student_2021a_Ebox_B.jogSpeed_p = 0.0;
    robotarm_student_2021a_Ebox_B.toPoint_i = 0.0;
    robotarm_student_2021a_Ebox_B.homeControllerEnabled_i = 0.0;
    robotarm_student_2021a_Ebox_B.resetEnc_l = 0.0;
    robotarm_student_2021a_Ebox_B.homingBusy_n = 1.0;
    robotarm_student_2021a_Ebox_B.airBagEnabled_ab = 0.0;
    robotarm_student_2021a_Ebox_B.airBagRef_pn = 0.0;
    robotarm_student_2021a_Ebox_B.controlEnabled_e = 1.0;
    robotarm_student_2021a_Ebox_B.Ready_n = 1.0;
    robotarm_student_2021a_Ebox_B.StopSim_np = 0.0;

    /* SystemInitialize for Chart: '<S186>/Supervisor' */
    robotarm_student_2021a_Ebox_DW.sfEvent_jk = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_a = 0U;
    robotarm_student_2021a_Ebox_DW.is_active_c6_robotarm_student_2 = 0U;
    robotarm_student_2021a_Ebox_DW.is_c6_robotarm_student_2021a_Eb = 0U;
    robotarm_student_2021a_Ebox_DW.currentcarPos_f = 0.0;
    robotarm_student_2021a_Ebox_B.jogSpeed_o = 0.0;
    robotarm_student_2021a_Ebox_B.toPoint_h = 0.0;
    robotarm_student_2021a_Ebox_B.homeControllerEnabled_f = 0.0;
    robotarm_student_2021a_Ebox_B.resetEnc_n = 0.0;
    robotarm_student_2021a_Ebox_B.homingBusy_d = 1.0;
    robotarm_student_2021a_Ebox_B.airBagEnabled_a = 0.0;
    robotarm_student_2021a_Ebox_B.airBagRef_p = 0.0;
    robotarm_student_2021a_Ebox_B.controlEnabled_b = 1.0;
    robotarm_student_2021a_Ebox_B.Ready_l = 1.0;
    robotarm_student_2021a_Ebox_B.StopSim_p = 0.0;

    /* SystemInitialize for Chart: '<S187>/Supervisor' */
    robotarm_student_2021a_Ebox_DW.sfEvent_j = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_k = 0U;
    robotarm_student_2021a_Ebox_DW.is_active_c7_robotarm_student_2 = 0U;
    robotarm_student_2021a_Ebox_DW.is_c7_robotarm_student_2021a_Eb = 0U;
    robotarm_student_2021a_Ebox_DW.currentcarPos = 0.0;
    robotarm_student_2021a_Ebox_B.jogSpeed_f = 0.0;
    robotarm_student_2021a_Ebox_B.toPoint = 0.0;
    robotarm_student_2021a_Ebox_B.homeControllerEnabled_j = 0.0;
    robotarm_student_2021a_Ebox_B.resetEnc_j = 0.0;
    robotarm_student_2021a_Ebox_B.homingBusy_j = 1.0;
    robotarm_student_2021a_Ebox_B.airBagEnabled = 0.0;
    robotarm_student_2021a_Ebox_B.airBagRef = 0.0;
    robotarm_student_2021a_Ebox_B.controlEnabled = 1.0;
    robotarm_student_2021a_Ebox_B.Ready_c = 1.0;
    robotarm_student_2021a_Ebox_B.StopSim_n = 0.0;

    /* SystemInitialize for Chart: '<S188>/Supervisor' */
    robotarm_student_2021a_Ebox_DW.sfEvent = robotarm_student_202_CALL_EVENT;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1 = 0U;
    robotarm_student_2021a_Ebox_DW.is_active_c4_robotarm_student_2 = 0U;
    robotarm_student_2021a_Ebox_DW.is_c4_robotarm_student_2021a_Eb = 0U;
    robotarm_student_2021a_Ebox_B.jogSpeed = 0.0;
    robotarm_student_2021a_Ebox_B.homeControllerEnabled = 0.0;
    robotarm_student_2021a_Ebox_B.resetEnc = 0.0;
    robotarm_student_2021a_Ebox_B.homingBusy = 1.0;
    robotarm_student_2021a_Ebox_B.Ready = 1.0;
    robotarm_student_2021a_Ebox_B.StopSim = 0.0;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Controller' */
    /* InitializeConditions for UnitDelay: '<S167>/Delay Input1' */
    for (i = 0; i < 12; i++) {
      robotarm_student_2021a_Ebox_DW.DelayInput1_DSTATE[i] =
        robotarm_student_2021a_Ebox_P.DetectChange_vinit;
    }

    /* End of InitializeConditions for UnitDelay: '<S167>/Delay Input1' */

    /* InitializeConditions for UnitDelay: '<S9>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_g =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative1_ICPrevScale;

    /* InitializeConditions for UnitDelay: '<S8>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_c =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for UnitDelay: '<S10>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_m =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative2_ICPrevScale;

    /* InitializeConditions for UnitDelay: '<S11>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_m3 =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative3_ICPrevScale;

    /* InitializeConditions for UnitDelay: '<S12>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_d =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative4_ICPrevScale;

    /* InitializeConditions for UnitDelay: '<S13>/UD' */
    robotarm_student_2021a_Ebox_DW.UD_DSTATE_a =
      robotarm_student_2021a_Ebox_P.DiscreteDerivative5_ICPrevScale;

    /* InitializeConditions for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    robotarm_student_2021a_Ebox_DW.Discreteintegrator_DSTATE =
      robotarm_student_2021a_Ebox_P.Discreteintegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S51>/Integrator' */
    robotarm_student_2021a_Ebox_DW.Integrator_DSTATE =
      robotarm_student_2021a_Ebox_P.PIDController_InitialConditi_b4;

    /* InitializeConditions for DiscreteIntegrator: '<S46>/Filter' */
    robotarm_student_2021a_Ebox_DW.Filter_DSTATE =
      robotarm_student_2021a_Ebox_P.PIDController_InitialConditionF;

    /* InitializeConditions for DiscreteIntegrator: '<S100>/Integrator' */
    robotarm_student_2021a_Ebox_DW.Integrator_DSTATE_f =
      robotarm_student_2021a_Ebox_P.PIDController1_InitialConditi_l;

    /* InitializeConditions for DiscreteIntegrator: '<S95>/Filter' */
    robotarm_student_2021a_Ebox_DW.Filter_DSTATE_f =
      robotarm_student_2021a_Ebox_P.PIDController1_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S149>/Integrator' */
    robotarm_student_2021a_Ebox_DW.Integrator_DSTATE_c =
      robotarm_student_2021a_Ebox_P.PIDController_InitialConditio_c;

    /* InitializeConditions for DiscreteIntegrator: '<S144>/Filter' */
    robotarm_student_2021a_Ebox_DW.Filter_DSTATE_l =
      robotarm_student_2021a_Ebox_P.PIDController_InitialConditio_b;

    /* SystemInitialize for Enabled SubSystem: '<S166>/Enabled Subsystem' */
    /* SystemInitialize for Outport: '<S168>/Delay [s]' incorporates:
     *  Inport: '<S168>/In1'
     */
    robotarm_student_2021a_Ebox_B.In1_c =
      robotarm_student_2021a_Ebox_P.Delays_Y0;

    /* End of SystemInitialize for SubSystem: '<S166>/Enabled Subsystem' */

    /* SystemInitialize for Chart: '<S1>/Stateflow ' */
    robotarm_student_2021a_Ebox_DW.temporalCounter_i3 = 0U;
    robotarm_student_2021a_Ebox_DW.is_active_Vacuum = 0U;
    robotarm_student_2021a_Ebox_DW.is_Vacuum = 0U;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i1_m = 0U;
    robotarm_student_2021a_Ebox_DW.z = 0.0;
    robotarm_student_2021a_Ebox_DW.y = 0.0;
    robotarm_student_2021a_Ebox_DW.x = 0.0;
    robotarm_student_2021a_Ebox_DW.BUFFER_Z = 30.0;
    robotarm_student_2021a_Ebox_DW.X_in = 0.0;
    robotarm_student_2021a_Ebox_DW.Y_in = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate1[0] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate2[0] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate3[0] = 0.0;
    robotarm_student_2021a_Ebox_DW.area[0] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate1[1] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate2[1] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate3[1] = 0.0;
    robotarm_student_2021a_Ebox_DW.area[1] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate1[2] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate2[2] = 0.0;
    robotarm_student_2021a_Ebox_DW.objectCoordinate3[2] = 0.0;
    robotarm_student_2021a_Ebox_DW.area[2] = 0.0;
    robotarm_student_2021a_Ebox_DW.Z_in = 0.0;
    robotarm_student_2021a_Ebox_DW.Buffer_Z = 0.0;
    robotarm_student_2021a_Ebox_DW.extra_block_delay = 0.0;
    robotarm_student_2021a_Ebox_B.Pump = 0.0;
    robotarm_student_2021a_Ebox_B.Blow_suck = 0.0;
    robotarm_student_2021a_Ebox_B.Conveyor = 0.0;
    robotarm_student_2021a_Ebox_B.X = 0.0;
    robotarm_student_2021a_Ebox_B.Z = 0.0;
    robotarm_student_2021a_Ebox_B.R = 0.0;
    robotarm_student_2021a_Ebox_B.move_time = 0.0;
    robotarm_student_2021a_Ebox_DW.isNotInit = false;
    robotarm_student_2021a_Ebox_DW.sfEvent_b = robotarm_student_202_CALL_EVENT;

    /* Chart: '<S1>/Stateflow ' */
    robotarm_student_2021a_Ebox_DW.is_active_c3_robotarm_student_2 = 1U;
    robotarm_student_2021a_Ebox_DW.is_active_Object_Detection = 1U;
    robotarm_student_2021a_Ebox_DW.is_Object_Detection =
      robotarm_student_202_IN_Seeking;
    robotarm_student_2021a_Ebox_DW.is_active_Belt = 1U;
    robotarm_student_2021a_Ebox_DW.is_Belt = robotarm_student_2_IN_Belt_Home;
    robotarm_student_2021a_Ebox_DW.is_active_Robot_Arm = 1U;
    robotarm_student_2021a_Ebox_DW.is_Robot_Arm =
      robotarm_s_IN_Start_AboveLabels;
    robotarm_student_2021a_Ebox_DW.temporalCounter_i2 = 0U;
    enter_atomic_Start_AboveLabels();
    robotarm_student_2021a_Ebox_DW.is_active_Vacuum = 1U;
    robotarm_student_2021a_Ebox_DW.is_Vacuum = robotarm_student__IN_Vacuum_Off;
    robotarm_student_2021a_Ebox_B.Pump = 0.0;
    robotarm_student_2021a_Ebox_B.Blow_suck = 0.0;

    /* SystemInitialize for MATLAB Function: '<S1>/quintic trajectory time3' */
    rob_quintictrajectorytime3_Init
      (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime3);

    /* SystemInitialize for MATLAB Function: '<S1>/quintic trajectory time4' */
    rob_quintictrajectorytime3_Init
      (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime4);

    /* SystemInitialize for MATLAB Function: '<S1>/quintic trajectory time5' */
    rob_quintictrajectorytime3_Init
      (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime5);

    /* SystemInitialize for IfAction SubSystem: '<S166>/If Action Subsystem1' */
    robotar_IfActionSubsystem1_Init
      (&robotarm_student_2021a_Ebox_B.IfActionSubsystem1,
       &robotarm_student_2021a_Ebox_P.IfActionSubsystem1);

    /* End of SystemInitialize for SubSystem: '<S166>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S166>/If Action Subsystem' */
    /* SystemInitialize for Outport: '<S169>/Out1' incorporates:
     *  Inport: '<S169>/In1'
     */
    robotarm_student_2021a_Ebox_B.In1 = robotarm_student_2021a_Ebox_P.Out1_Y0;

    /* End of SystemInitialize for SubSystem: '<S166>/If Action Subsystem' */

    /* SystemInitialize for IfAction SubSystem: '<S166>/If Action Subsystem2' */
    robotar_IfActionSubsystem1_Init
      (&robotarm_student_2021a_Ebox_B.IfActionSubsystem2,
       &robotarm_student_2021a_Ebox_P.IfActionSubsystem2);

    /* End of SystemInitialize for SubSystem: '<S166>/If Action Subsystem2' */

    /* SystemInitialize for IfAction SubSystem: '<S166>/If Action Subsystem3' */
    robotar_IfActionSubsystem1_Init
      (&robotarm_student_2021a_Ebox_B.IfActionSubsystem3,
       &robotarm_student_2021a_Ebox_P.IfActionSubsystem3);

    /* End of SystemInitialize for SubSystem: '<S166>/If Action Subsystem3' */

    /* SystemInitialize for IfAction SubSystem: '<S166>/If Action Subsystem6' */
    robotar_IfActionSubsystem1_Init
      (&robotarm_student_2021a_Ebox_B.IfActionSubsystem6,
       &robotarm_student_2021a_Ebox_P.IfActionSubsystem6);

    /* End of SystemInitialize for SubSystem: '<S166>/If Action Subsystem6' */

    /* SystemInitialize for IfAction SubSystem: '<S166>/If Action Subsystem4' */
    robotar_IfActionSubsystem1_Init
      (&robotarm_student_2021a_Ebox_B.IfActionSubsystem4,
       &robotarm_student_2021a_Ebox_P.IfActionSubsystem4);

    /* End of SystemInitialize for SubSystem: '<S166>/If Action Subsystem4' */

    /* SystemInitialize for IfAction SubSystem: '<S166>/If Action Subsystem5' */
    robotar_IfActionSubsystem1_Init
      (&robotarm_student_2021a_Ebox_B.IfActionSubsystem5,
       &robotarm_student_2021a_Ebox_P.IfActionSubsystem5);

    /* End of SystemInitialize for SubSystem: '<S166>/If Action Subsystem5' */

    /* SystemInitialize for Sum: '<S1>/Sum4' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    robotarm_student_2021a_Ebox_B.Sum4 = robotarm_student_2021a_Ebox_P.RobotV_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum5' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    robotarm_student_2021a_Ebox_B.Sum5 = robotarm_student_2021a_Ebox_P.RobotV_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum6' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    robotarm_student_2021a_Ebox_B.Sum6 = robotarm_student_2021a_Ebox_P.RobotV_Y0;

    /* SystemInitialize for S-Function (dleadlag): '<S3>/Dctleadlag' incorporates:
     *  Outport: '<S1>/Conveyor [V] '
     */
    robotarm_student_2021a_Ebox_B.Dctleadlag_d =
      robotarm_student_2021a_Ebox_P.ConveyorV_Y0;

    /* SystemInitialize for Gain: '<S5>/Gain1' incorporates:
     *  Outport: '<S1>/Vacuum [V] '
     */
    robotarm_student_2021a_Ebox_B.Gain1_o =
      robotarm_student_2021a_Ebox_P.VacuumV_Y0;

    /* SystemInitialize for ManualSwitch: '<S15>/Manual Switch1' incorporates:
     *  Outport: '<S1>/LED Ring [-]'
     */
    strncpy(&robotarm_student_2021a_Ebox_B.ManualSwitch1[0],
            &robotarm_student_2021a_Ebox_P.LEDRing_Y0[0], 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Controller' */
    robotarm_student_2021a_Ebox_B.ManualSwitch1[255] = '\x00';
  }
}

/* Model terminate function */
void robotarm_student_2021a_Ebox_terminate(void)
{
  /* Terminate for S-Function (ec_Supervisor): '<S181>/S-Function' */
  /* Level2 S-Function Block: '<S181>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_Ebox): '<S178>/ec_Ebox' */
  /* Level2 S-Function Block: '<S178>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_Ebox): '<S179>/ec_Ebox' */
  /* Level2 S-Function Block: '<S179>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_Ebox): '<S180>/ec_Ebox' */
  /* Level2 S-Function Block: '<S180>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */
  /* Terminate for S-Function (dweakint): '<S3>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S3>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S3>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S3>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S3>/Dctleadlag' */
  /* Level2 S-Function Block: '<S3>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S4>/Dctpd' */
  /* Level2 S-Function Block: '<S4>/Dctpd' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S4>/Dctintegrator' */
  /* Level2 S-Function Block: '<S4>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dnotch): '<S4>/Dctnotch' */
  /* Level2 S-Function Block: '<S4>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S6>/Dctpd' */
  /* Level2 S-Function Block: '<S6>/Dctpd' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S6>/Dctintegrator' */
  /* Level2 S-Function Block: '<S6>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dnotch): '<S6>/Dctnotch' */
  /* Level2 S-Function Block: '<S6>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dpd): '<S7>/Dctpd' */
  /* Level2 S-Function Block: '<S7>/Dctpd' (dpd) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S7>/Dctintegrator' */
  /* Level2 S-Function Block: '<S7>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dnotch): '<S7>/Dctnotch' */
  /* Level2 S-Function Block: '<S7>/Dctnotch' (dnotch) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */

  /* Terminate for S-Function (dweakint): '<S194>/Dctintegrator' */
  /* Level2 S-Function Block: '<S194>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S194>/Dctleadlag' */
  /* Level2 S-Function Block: '<S194>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S194>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S194>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S195>/Dctleadlag' */
  /* Level2 S-Function Block: '<S195>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S195>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S195>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S201>/Dctintegrator' */
  /* Level2 S-Function Block: '<S201>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S201>/Dctleadlag' */
  /* Level2 S-Function Block: '<S201>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S201>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S201>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S202>/Dctleadlag' */
  /* Level2 S-Function Block: '<S202>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S202>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S202>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S210>/Dctintegrator' */
  /* Level2 S-Function Block: '<S210>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S210>/Dctleadlag' */
  /* Level2 S-Function Block: '<S210>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S210>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S210>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[28];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S211>/Dctleadlag' */
  /* Level2 S-Function Block: '<S211>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[29];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S211>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S211>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[30];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S220>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S220>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[31];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S220>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S220>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[32];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S220>/Dctleadlag' */
  /* Level2 S-Function Block: '<S220>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[33];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S189>/Subsystem3' */
  /* Terminate for IfAction SubSystem: '<S191>/If Action Subsystem' */
  robotarm_stud_SerialWrite1_Term(&robotarm_student_2021a_Ebox_DW.SerialWrite1);

  /* End of Terminate for SubSystem: '<S191>/If Action Subsystem' */

  /* Terminate for IfAction SubSystem: '<S191>/If Action Subsystem1' */
  robotarm_stud_SerialWrite1_Term(&robotarm_student_2021a_Ebox_DW.SerialWrite);

  /* End of Terminate for SubSystem: '<S191>/If Action Subsystem1' */
  /* End of Terminate for SubSystem: '<S189>/Subsystem3' */

  /* Terminate for S-Function (ec_EboxResetEnc): '<S185>/Reset EncoderR' */
  /* Level2 S-Function Block: '<S185>/Reset EncoderR' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[34];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_EboxResetEnc): '<S186>/Reset EncoderX' */
  /* Level2 S-Function Block: '<S186>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[35];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_EboxResetEnc): '<S187>/Reset EncoderX' */
  /* Level2 S-Function Block: '<S187>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[36];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_EboxResetEnc): '<S188>/Reset EncoderConv' */
  /* Level2 S-Function Block: '<S188>/Reset EncoderConv' (ec_EboxResetEnc) */
  {
    SimStruct *rts = robotarm_student_2021a_Ebox_M->childSfunctions[37];
    sfcnTerminate(rts);
  }

  /* CleanupRuntimeResources for Enabled SubSystem: '<Root>/Controller' */
  /* CleanupRuntimeResources for MATLAB Function: '<S1>/quintic trajectory time3' */
  quintictrajectorytim_CleanupRTR
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime3);

  /* CleanupRuntimeResources for MATLAB Function: '<S1>/quintic trajectory time4' */
  quintictrajectorytim_CleanupRTR
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime4);

  /* CleanupRuntimeResources for MATLAB Function: '<S1>/quintic trajectory time5' */
  quintictrajectorytim_CleanupRTR
    (&robotarm_student_2021a_Ebox_DW.sf_quintictrajectorytime5);
}
