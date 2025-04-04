/*
 * Robot_calibration_Ipos.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Robot_calibration_Ipos".
 *
 * Model version              : 2.118
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Jan 27 11:52:02 2025
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Robot_calibration_Ipos.h"
#include "Robot_calibration_Ipos_private.h"
#include "Robot_calibration_Ipos_dt.h"

/* Named constants for Chart: '<S1>/Stateflow ' */
#define Robot_calibrat_event_GetProduct (0)
#define Robot_calibrati_event_ScanAgain (5)
#define Robot_calibratio_IN_WaitSeeking (2U)
#define Robot_calibratio_event_VacuumOn (6)
#define Robot_calibration_IN_Start_Home (2U)
#define Robot_calibration_IN_Vacuum_Off (1U)
#define Robot_calibration_Ip_IN_Move_XY (1U)
#define Robot_calibration_Ip_IN_Seeking (1U)
#define Robot_calibration__IN_Belt_Home (1U)

/* Named constants for Chart: '<S22>/Supervisor' */
#define Robot_cal_IN_EnableRunAndSafety (2U)
#define Robot_calibra_IN_CheckRobotIsON (1U)
#define Robot_calibra_IN_STOPRobotIsOFF (8U)
#define Robot_calibratio_IN_WaitForRest (9U)
#define Robot_calibration_I_IN_MovetoX0 (5U)
#define Robot_calibration_I_IN_ResetEnc (6U)
#define Robot_calibration_I_IN_Waiting1 (11U)
#define Robot_calibration_Ip_IN_Homing1 (4U)
#define Robot_calibration_Ip_IN_Waiting (10U)
#define Robot_calibration_Ipo_IN_Homing (3U)
#define Robot_calibration__IN_RobotIsON (7U)

/* Named constants for Chart: '<S23>/Supervisor2' */
#define Robot_calibrat_IN_WaitForRest_h (8U)
#define Robot_calibration_IN_Waiting1_o (10U)
#define Robot_calibration__IN_Waiting_i (9U)

/* Named constants for Chart: '<S24>/Supervisor' */
#define Robot_c_IN_EnableRunAndSafety_j (1U)
#define Robot_calibrat_IN_WaitForRest_l (6U)
#define Robot_calibration_IN_MovetoX0_e (4U)
#define Robot_calibration_IN_ResetEnc_n (5U)
#define Robot_calibration_IN_Waiting1_k (8U)
#define Robot_calibration_IN_Waiting_iz (7U)
#define Robot_calibration_I_IN_Homing_g (2U)
#define Robot_calibration__IN_Homing1_b (3U)
#define Robot_calibration_Ipos_period  (0.00048828125)

/* Block signals (default storage) */
B_Robot_calibration_Ipos_T Robot_calibration_Ipos_B;

/* Block states (default storage) */
DW_Robot_calibration_Ipos_T Robot_calibration_Ipos_DW;

/* Real-time model */
static RT_MODEL_Robot_calibration_Ipos_T Robot_calibration_Ipos_M_;
RT_MODEL_Robot_calibration_Ipos_T *const Robot_calibration_Ipos_M =
  &Robot_calibration_Ipos_M_;

/* Forward declaration for local functions */
static void Robot_calibrat_SystemCore_setup(codertarget_raspi_internal_SC_T *obj);

/* Forward declaration for local functions */
static void Robot_calibratio_emxInit_real_T(emxArray_real_T_Robot_calibra_T
  **pEmxArray, int32_T numDimensions);
static real_T Robot_calibration_I_rt_powd_snf(real_T u0, real_T u1,
  B_quintictrajectorytime_Robot_T *localB);
static void Robot__emxEnsureCapacity_real_T(emxArray_real_T_Robot_calibra_T
  *emxArray, int32_T oldNumel);
static void Robot_calibratio_emxFree_real_T(emxArray_real_T_Robot_calibra_T
  **pEmxArray);

/* Forward declaration for local functions */
static void Robot_c3_Robot_calibration_Ipos(void);
static void Robot_calibratio_emxInit_char_T(emxArray_char_T_Robot_calibra_T
  **pEmxArray, int32_T numDimensions);
static void Robot__emxEnsureCapacity_char_T(emxArray_char_T_Robot_calibra_T
  *emxArray, int32_T oldNumel);
static int8_T Robot_calibration_Ipos_filedata(void);
static void Robot_calibratio_emxFree_char_T(emxArray_char_T_Robot_calibra_T
  **pEmxArray);
static int8_T Robot_calibration_Ipos_cfopen(const
  emxArray_char_T_Robot_calibra_T *cfilename, const char_T *cpermission);
static int32_T Robot_calibration_Ipos_cfclose(real_T fid);
static void Robot_calibrat_SystemCore_setup(codertarget_raspi_internal_SC_T *obj)
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
void Robot_calibr_SerialWrite1_Start(DW_SerialWrite1_Robot_calibra_T *localDW)
{
  /* Start for MATLABSystem: '<S29>/Serial Write1' */
  localDW->obj.isInitialized = 0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  Robot_calibrat_SystemCore_setup(&localDW->obj);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Robot_calibration__SerialWrite1(const uint8_T rtu_0[32],
  DW_SerialWrite1_Robot_calibra_T *localDW)
{
  uint8_T TxDataLocChar[32];

  /* MATLABSystem: '<S29>/Serial Write1' */
  memcpy((void *)&TxDataLocChar[0], (void *)&rtu_0[0], (uint32_T)((size_t)32 *
          sizeof(uint8_T)));
  MW_SCI_Transmit(localDW->obj.MW_SCIHANDLE, &TxDataLocChar[0], 32U);
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Robot_calibra_SerialWrite1_Term(DW_SerialWrite1_Robot_calibra_T *localDW)
{
  /* Terminate for MATLABSystem: '<S29>/Serial Write1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_SCI_Close(localDW->obj.MW_SCIHANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S29>/Serial Write1' */
}

static void Robot_calibratio_emxInit_real_T(emxArray_real_T_Robot_calibra_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_Robot_calibra_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T_Robot_calibra_T *)malloc(sizeof
    (emxArray_real_T_Robot_calibra_T));
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

static real_T Robot_calibration_I_rt_powd_snf(real_T u0, real_T u1,
  B_quintictrajectorytime_Robot_T *localB)
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

static void Robot__emxEnsureCapacity_real_T(emxArray_real_T_Robot_calibra_T
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

static void Robot_calibratio_emxFree_real_T(emxArray_real_T_Robot_calibra_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_Robot_calibra_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_Robot_calibra_T *)NULL;
  }
}

/*
 * System initialize for atomic system:
 *    '<S23>/quintic trajectory time'
 *    '<S24>/quintic trajectory time'
 */
void Robo_quintictrajectorytime_Init(DW_quintictrajectorytime_Robo_T *localDW)
{
  localDW->path_array_not_empty = false;
  Robot_calibratio_emxInit_real_T(&localDW->path_array, 2);
  localDW->previous_value_reference_start = 0.0;
  localDW->previous_value_reference_end = 0.0;
  localDW->index = 1.0;
}

/*
 * Output and update for atomic system:
 *    '<S23>/quintic trajectory time'
 *    '<S24>/quintic trajectory time'
 */
void Robot_cal_quintictrajectorytime(real_T rtu_reference_end, real_T
  rtu_end_time, real_T rtu_measured_position, B_quintictrajectorytime_Robot_T
  *localB, DW_quintictrajectorytime_Robo_T *localDW)
{
  emxArray_real_T_Robot_calibra_T *b_y;
  emxArray_real_T_Robot_calibra_T *c_y;
  emxArray_real_T_Robot_calibra_T *d_y;
  emxArray_real_T_Robot_calibra_T *e_y;
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
    Robot__emxEnsureCapacity_real_T(localDW->path_array, jA);
    localDW->path_array->data[0] = 0.0;
    localDW->path_array_not_empty = true;
  }

  if (localDW->previous_value_reference_end != rtu_reference_end) {
    localB->smax = Robot_calibration_I_rt_powd_snf(rtu_end_time, 3.0, localB);
    localB->ndbl = Robot_calibration_I_rt_powd_snf(rtu_end_time, 4.0, localB);
    localB->A[3] = 1.0;
    localB->A[9] = rtu_end_time;
    localB->cdiff = rtu_end_time * rtu_end_time;
    localB->A[15] = localB->cdiff;
    localB->A[21] = localB->smax;
    localB->A[27] = localB->ndbl;
    localB->A[33] = Robot_calibration_I_rt_powd_snf(rtu_end_time, 5.0, localB);
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
      Robot__emxEnsureCapacity_real_T(localDW->path_array, jA);
      localDW->path_array->data[0] = (rtNaN);
    } else if (rtu_end_time < 0.0) {
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 0;
    } else if (rtIsInf(rtu_end_time) && (0.0 == rtu_end_time)) {
      jA = localDW->path_array->size[0] * localDW->path_array->size[1];
      localDW->path_array->size[0] = 1;
      localDW->path_array->size[1] = 1;
      Robot__emxEnsureCapacity_real_T(localDW->path_array, jA);
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
      Robot__emxEnsureCapacity_real_T(localDW->path_array, jA);
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

    Robot_calibratio_emxInit_real_T(&b_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = localDW->path_array->size[1];
    Robot__emxEnsureCapacity_real_T(b_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      b_y->data[jA] = localDW->path_array->data[jA] * localDW->path_array->
        data[jA];
      localB->kAcol++;
    }

    Robot_calibratio_emxInit_real_T(&c_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = localDW->path_array->size[1];
    Robot__emxEnsureCapacity_real_T(c_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      c_y->data[jA] = Robot_calibration_I_rt_powd_snf(localDW->path_array->
        data[jA], 3.0, localB);
      localB->kAcol++;
    }

    Robot_calibratio_emxInit_real_T(&d_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = d_y->size[0] * d_y->size[1];
    d_y->size[0] = 1;
    d_y->size[1] = localDW->path_array->size[1];
    Robot__emxEnsureCapacity_real_T(d_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      d_y->data[jA] = Robot_calibration_I_rt_powd_snf(localDW->path_array->
        data[jA], 4.0, localB);
      localB->kAcol++;
    }

    Robot_calibratio_emxInit_real_T(&e_y, 2);
    localB->j = localDW->path_array->size[1];
    jA = e_y->size[0] * e_y->size[1];
    e_y->size[0] = 1;
    e_y->size[1] = localDW->path_array->size[1];
    Robot__emxEnsureCapacity_real_T(e_y, jA);
    localB->kAcol = 0;
    while (localB->kAcol <= localB->j - 1) {
      jA = localB->kAcol;
      e_y->data[jA] = Robot_calibration_I_rt_powd_snf(localDW->path_array->
        data[jA], 5.0, localB);
      localB->kAcol++;
    }

    jA = localDW->path_array->size[0] * localDW->path_array->size[1];
    localDW->path_array->size[0] = 1;
    Robot__emxEnsureCapacity_real_T(localDW->path_array, jA);
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

    Robot_calibratio_emxFree_real_T(&e_y);
    Robot_calibratio_emxFree_real_T(&d_y);
    Robot_calibratio_emxFree_real_T(&c_y);
    Robot_calibratio_emxFree_real_T(&b_y);
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
 *    '<S23>/quintic trajectory time'
 *    '<S24>/quintic trajectory time'
 */
void quintictrajectorytim_CleanupRTR(DW_quintictrajectorytime_Robo_T *localDW)
{
  Robot_calibratio_emxFree_real_T(&localDW->path_array);
}

/* Function for Chart: '<S1>/Stateflow ' */
static void Robot_c3_Robot_calibration_Ipos(void)
{
  int32_T c_previousEvent;
  if (Robot_calibration_Ipos_DW.is_active_Object_Detection != 0U) {
    switch (Robot_calibration_Ipos_DW.is_Object_Detection) {
     case Robot_calibration_Ip_IN_Seeking:
      break;

     case Robot_calibratio_IN_WaitSeeking:
      if (Robot_calibration_Ipos_DW.sfEvent_k == Robot_calibrati_event_ScanAgain)
      {
        Robot_calibration_Ipos_DW.is_Object_Detection =
          Robot_calibration_Ip_IN_Seeking;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      Robot_calibration_Ipos_DW.is_Object_Detection = 0U;
      break;
    }
  }

  if (Robot_calibration_Ipos_DW.is_active_Robot_Arm != 0U) {
    switch (Robot_calibration_Ipos_DW.is_Robot_Arm) {
     case Robot_calibration_Ip_IN_Move_XY:
      break;

     case Robot_calibration_IN_Start_Home:
      if (Robot_calibration_Ipos_DW.sfEvent_k == Robot_calibrat_event_GetProduct)
      {
        Robot_calibration_Ipos_DW.is_Robot_Arm = Robot_calibration_Ip_IN_Move_XY;
        c_previousEvent = Robot_calibration_Ipos_DW.sfEvent_k;
        Robot_calibration_Ipos_DW.sfEvent_k = Robot_calibratio_event_VacuumOn;

        /* Chart: '<S1>/Stateflow ' */
        Robot_c3_Robot_calibration_Ipos();
        Robot_calibration_Ipos_DW.sfEvent_k = c_previousEvent;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      Robot_calibration_Ipos_DW.is_Robot_Arm = 0U;
      break;
    }
  }
}

static void Robot_calibratio_emxInit_char_T(emxArray_char_T_Robot_calibra_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T_Robot_calibra_T *emxArray;
  *pEmxArray = (emxArray_char_T_Robot_calibra_T *)malloc(sizeof
    (emxArray_char_T_Robot_calibra_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (Robot_calibration_Ipos_B.i_c = 0; Robot_calibration_Ipos_B.i_c <
       numDimensions; Robot_calibration_Ipos_B.i_c++) {
    emxArray->size[Robot_calibration_Ipos_B.i_c] = 0;
  }
}

static void Robot__emxEnsureCapacity_char_T(emxArray_char_T_Robot_calibra_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  Robot_calibration_Ipos_B.newNumel = 1;
  for (Robot_calibration_Ipos_B.i_p = 0; Robot_calibration_Ipos_B.i_p <
       emxArray->numDimensions; Robot_calibration_Ipos_B.i_p++) {
    Robot_calibration_Ipos_B.newNumel *= emxArray->
      size[Robot_calibration_Ipos_B.i_p];
  }

  if (Robot_calibration_Ipos_B.newNumel > emxArray->allocatedSize) {
    Robot_calibration_Ipos_B.i_p = emxArray->allocatedSize;
    if (Robot_calibration_Ipos_B.i_p < 16) {
      Robot_calibration_Ipos_B.i_p = 16;
    }

    while (Robot_calibration_Ipos_B.i_p < Robot_calibration_Ipos_B.newNumel) {
      if (Robot_calibration_Ipos_B.i_p > 1073741823) {
        Robot_calibration_Ipos_B.i_p = MAX_int32_T;
      } else {
        Robot_calibration_Ipos_B.i_p <<= 1;
      }
    }

    newData = calloc((uint32_T)Robot_calibration_Ipos_B.i_p, sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = Robot_calibration_Ipos_B.i_p;
    emxArray->canFreeData = true;
  }
}

/* Function for MATLAB Function: '<S10>/SPERTE_measurement_function' */
static int8_T Robot_calibration_Ipos_filedata(void)
{
  int32_T k;
  int8_T f;
  boolean_T exitg1;
  f = 0;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k - 1 < 20)) {
    if (Robot_calibration_Ipos_DW.eml_openfiles[(int8_T)k - 1] == NULL) {
      f = (int8_T)k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return f;
}

static void Robot_calibratio_emxFree_char_T(emxArray_char_T_Robot_calibra_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_Robot_calibra_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_Robot_calibra_T *)NULL;
  }
}

/* Function for MATLAB Function: '<S10>/SPERTE_measurement_function' */
static int8_T Robot_calibration_Ipos_cfopen(const
  emxArray_char_T_Robot_calibra_T *cfilename, const char_T *cpermission)
{
  emxArray_char_T_Robot_calibra_T *ccfilename;
  int8_T fileid;
  fileid = -1;
  Robot_calibration_Ipos_B.j = Robot_calibration_Ipos_filedata();
  if (Robot_calibration_Ipos_B.j >= 1) {
    Robot_calibratio_emxInit_char_T(&ccfilename, 2);
    Robot_calibration_Ipos_B.i_b = ccfilename->size[0] * ccfilename->size[1];
    ccfilename->size[0] = 1;
    ccfilename->size[1] = cfilename->size[1] + 1;
    Robot__emxEnsureCapacity_char_T(ccfilename, Robot_calibration_Ipos_B.i_b);
    Robot_calibration_Ipos_B.loop_ub = cfilename->size[1];
    for (Robot_calibration_Ipos_B.i_b = 0; Robot_calibration_Ipos_B.i_b <
         Robot_calibration_Ipos_B.loop_ub; Robot_calibration_Ipos_B.i_b++) {
      Robot_calibration_Ipos_B.i1 = Robot_calibration_Ipos_B.i_b;
      ccfilename->data[Robot_calibration_Ipos_B.i1] = cfilename->
        data[Robot_calibration_Ipos_B.i1];
    }

    ccfilename->data[cfilename->size[1]] = '\x00';
    Robot_calibration_Ipos_B.filestar_k = fopen(&ccfilename->data[0],
      cpermission);
    Robot_calibratio_emxFree_char_T(&ccfilename);
    if (Robot_calibration_Ipos_B.filestar_k != NULL) {
      Robot_calibration_Ipos_DW.eml_openfiles[Robot_calibration_Ipos_B.j - 1] =
        Robot_calibration_Ipos_B.filestar_k;
      Robot_calibration_Ipos_DW.eml_autoflush[Robot_calibration_Ipos_B.j - 1] =
        true;
      Robot_calibration_Ipos_B.i_b = Robot_calibration_Ipos_B.j + 2;
      if (Robot_calibration_Ipos_B.j + 2 > 127) {
        Robot_calibration_Ipos_B.i_b = 127;
      }

      fileid = (int8_T)Robot_calibration_Ipos_B.i_b;
    }
  }

  return fileid;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Function for MATLAB Function: '<S10>/SPERTE_measurement_function' */
static int32_T Robot_calibration_Ipos_cfclose(real_T fid)
{
  FILE * f;
  int32_T cst;
  int32_T st;
  int8_T b_fileid;
  int8_T fileid;
  st = -1;
  fileid = (int8_T)rt_roundd_snf(fid);
  if ((fileid < 0) || (fid != fileid)) {
    fileid = -1;
  }

  b_fileid = fileid;
  if (fileid < 0) {
    b_fileid = -1;
  }

  if (b_fileid >= 3) {
    f = Robot_calibration_Ipos_DW.eml_openfiles[b_fileid - 3];
  } else if (b_fileid == 0) {
    f = stdin;
  } else if (b_fileid == 1) {
    f = stdout;
  } else if (b_fileid == 2) {
    f = stderr;
  } else {
    f = NULL;
  }

  if ((f != NULL) && (fileid >= 3)) {
    cst = fclose(f);
    if (cst == 0) {
      st = 0;
      Robot_calibration_Ipos_DW.eml_openfiles[fileid - 3] = NULL;
      Robot_calibration_Ipos_DW.eml_autoflush[fileid - 3] = true;
    }
  }

  return st;
}

/* Model step function */
void Robot_calibration_Ipos_step(void)
{
  emxArray_char_T_Robot_calibra_T *charStr;

  /* Reset subsysRan breadcrumbs */
  srClearBC(Robot_calibration_Ipos_DW.EnabledSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Robot_calibration_Ipos_DW.Controller_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Robot_calibration_Ipos_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Robot_calibration_Ipos_DW.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Robot_calibration_Ipos_DW.Subsystem3_SubsysRanBC);

  /* S-Function (ec_Supervisor): '<S3>/S-Function' */

  /* Level2 S-Function Block: '<S3>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (Ipos360): '<S17>/ec_Ipos' */

  /* Level2 S-Function Block: '<S17>/ec_Ipos' (Ipos360) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S15>/Gain' */
  Robot_calibration_Ipos_B.Gain = Robot_calibration_Ipos_P.Gain_Gain_n *
    Robot_calibration_Ipos_B.ec_Ipos_o4;

  /* Constant: '<S34>/Constant1' */
  Robot_calibration_Ipos_B.Constant1 =
    Robot_calibration_Ipos_P.Constant1_Value_b;

  /* DiscreteIntegrator: '<S34>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_B.DiscreteTimeIntegrator =
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE;

  /* DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_B.DiscreteTimeIntegrator_p =
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g;

  /* Sum: '<S22>/Sum' */
  Robot_calibration_Ipos_B.Sum =
    Robot_calibration_Ipos_B.DiscreteTimeIntegrator_p +
    Robot_calibration_Ipos_B.DiscreteTimeIntegrator;

  /* Sum: '<S22>/Sum2' */
  Robot_calibration_Ipos_B.Sum2 = Robot_calibration_Ipos_B.Sum -
    Robot_calibration_Ipos_B.Gain;

  /* RelationalOperator: '<S22>/Relational Operator' incorporates:
   *  Constant: '<S22>/Constant'
   */
  Robot_calibration_Ipos_B.RelationalOperator = (Robot_calibration_Ipos_B.Sum2 <=
    Robot_calibration_Ipos_P.Constant_Value);

  /* Gain: '<S15>/Gain1' */
  Robot_calibration_Ipos_B.Gain1 = Robot_calibration_Ipos_P.Gain1_Gain_g2 *
    Robot_calibration_Ipos_B.ec_Ipos_o3;

  /* DiscreteIntegrator: '<S23>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_B.DiscreteTimeIntegrator_d =
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m;

  /* Constant: '<S16>/set_robot_calibration_x' */
  Robot_calibration_Ipos_B.set_robot_calibration_x =
    Robot_calibration_Ipos_P.set_robot_calibration_x_Value;

  /* Switch: '<S23>/Homing Running Switch1' incorporates:
   *  UnitDelay: '<S23>/Unit Delay'
   */
  if (Robot_calibration_Ipos_DW.UnitDelay_DSTATE >=
      Robot_calibration_Ipos_P.HomingRunningSwitch1_Threshol_h) {
    /* Switch: '<S23>/Homing Running Switch1' */
    Robot_calibration_Ipos_B.HomingRunningSwitch1_l =
      Robot_calibration_Ipos_B.set_robot_calibration_x;
  } else {
    /* Switch: '<S23>/Homing Running Switch1' incorporates:
     *  Constant: '<S23>/Constant1'
     */
    Robot_calibration_Ipos_B.HomingRunningSwitch1_l =
      Robot_calibration_Ipos_P.Constant1_Value;
  }

  /* End of Switch: '<S23>/Homing Running Switch1' */

  /* MATLAB Function: '<S23>/quintic trajectory time' incorporates:
   *  Constant: '<S23>/Constant2'
   *  Constant: '<S23>/Constant3'
   */
  Robot_cal_quintictrajectorytime
    (Robot_calibration_Ipos_B.HomingRunningSwitch1_l,
     Robot_calibration_Ipos_P.Constant2_Value,
     Robot_calibration_Ipos_P.Constant3_Value,
     &Robot_calibration_Ipos_B.sf_quintictrajectorytime,
     &Robot_calibration_Ipos_DW.sf_quintictrajectorytime);

  /* Sum: '<S23>/Sum' */
  Robot_calibration_Ipos_B.Sum_p =
    Robot_calibration_Ipos_B.DiscreteTimeIntegrator_d +
    Robot_calibration_Ipos_B.sf_quintictrajectorytime.path;

  /* Sum: '<S23>/Sum2' */
  Robot_calibration_Ipos_B.Sum2_a = Robot_calibration_Ipos_B.Sum_p -
    Robot_calibration_Ipos_B.Gain1;

  /* RelationalOperator: '<S23>/Relational Operator' incorporates:
   *  Constant: '<S23>/Constant'
   */
  Robot_calibration_Ipos_B.RelationalOperator_f =
    (Robot_calibration_Ipos_B.Sum2_a <=
     Robot_calibration_Ipos_P.Constant_Value_f);

  /* Gain: '<S15>/Gain2' */
  Robot_calibration_Ipos_B.Gain2 = Robot_calibration_Ipos_P.Gain2_Gain *
    Robot_calibration_Ipos_B.ec_Ipos_o2;

  /* DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_B.DiscreteTimeIntegrator_pg =
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a;

  /* Constant: '<S16>/set_robot_calibration_z' */
  Robot_calibration_Ipos_B.set_robot_calibration_z =
    Robot_calibration_Ipos_P.set_robot_calibration_z_Value;

  /* Switch: '<S24>/Homing Running Switch1' incorporates:
   *  UnitDelay: '<S24>/Unit Delay'
   */
  if (Robot_calibration_Ipos_DW.UnitDelay_DSTATE_b >=
      Robot_calibration_Ipos_P.HomingRunningSwitch1_Threshol_p) {
    /* Switch: '<S24>/Homing Running Switch1' */
    Robot_calibration_Ipos_B.HomingRunningSwitch1_f =
      Robot_calibration_Ipos_B.set_robot_calibration_z;
  } else {
    /* Switch: '<S24>/Homing Running Switch1' incorporates:
     *  Constant: '<S24>/Constant1'
     */
    Robot_calibration_Ipos_B.HomingRunningSwitch1_f =
      Robot_calibration_Ipos_P.Constant1_Value_f;
  }

  /* End of Switch: '<S24>/Homing Running Switch1' */

  /* MATLAB Function: '<S24>/quintic trajectory time' incorporates:
   *  Constant: '<S24>/Constant2'
   *  Constant: '<S24>/Constant3'
   */
  Robot_cal_quintictrajectorytime
    (Robot_calibration_Ipos_B.HomingRunningSwitch1_f,
     Robot_calibration_Ipos_P.Constant2_Value_h,
     Robot_calibration_Ipos_P.Constant3_Value_m,
     &Robot_calibration_Ipos_B.sf_quintictrajectorytime_i,
     &Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i);

  /* Sum: '<S24>/Sum' */
  Robot_calibration_Ipos_B.Sum_o =
    Robot_calibration_Ipos_B.DiscreteTimeIntegrator_pg +
    Robot_calibration_Ipos_B.sf_quintictrajectorytime_i.path;

  /* Sum: '<S24>/Sum2' */
  Robot_calibration_Ipos_B.Sum2_e = Robot_calibration_Ipos_B.Sum_o -
    Robot_calibration_Ipos_B.Gain2;

  /* RelationalOperator: '<S24>/Relational Operator' incorporates:
   *  Constant: '<S24>/Constant'
   */
  Robot_calibration_Ipos_B.RelationalOperator_k =
    (Robot_calibration_Ipos_B.Sum2_e >=
     Robot_calibration_Ipos_P.Constant_Value_o);

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   *  Sum: '<S16>/Add1'
   */
  Robot_calibration_Ipos_B.Compare = ((int32_T)(((uint32_T)
    Robot_calibration_Ipos_B.RelationalOperator +
    Robot_calibration_Ipos_B.RelationalOperator_f) +
    Robot_calibration_Ipos_B.RelationalOperator_k) ==
    Robot_calibration_Ipos_P.CompareToConstant1_const);

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   *  UnitDelay: '<S16>/Unit Delay'
   */
  Robot_calibration_Ipos_B.Compare_j =
    (Robot_calibration_Ipos_DW.UnitDelay_DSTATE_f ==
     Robot_calibration_Ipos_P.CompareToConstant_const);

  /* MATLAB Function: '<S22>/Angle2Z' incorporates:
   *  MATLAB Function: '<S24>/Angle2Z'
   *  SignalConversion generated from: '<S33>/ SFunction '
   */
  Robot_calibration_Ipos_B.fx1_tmp = cos(-Robot_calibration_Ipos_B.Gain1 +
    1.3157007486526573) * 0.08;
  Robot_calibration_Ipos_B.fy1_tmp = sin(-Robot_calibration_Ipos_B.Gain1 +
    1.3157007486526573) * 0.08;
  Robot_calibration_Ipos_B.fy2_tmp = sin(Robot_calibration_Ipos_B.Gain2 + 0.615)
    * 0.13 + 0.165;
  Robot_calibration_Ipos_B.d12_tmp = cos(Robot_calibration_Ipos_B.Gain2 + 0.615)
    * 0.13 - Robot_calibration_Ipos_B.fx1_tmp;
  Robot_calibration_Ipos_B.d13_tmp = Robot_calibration_Ipos_B.fy2_tmp -
    Robot_calibration_Ipos_B.fy1_tmp;
  Robot_calibration_Ipos_B.d12 = sqrt(Robot_calibration_Ipos_B.d12_tmp *
    Robot_calibration_Ipos_B.d12_tmp + Robot_calibration_Ipos_B.d13_tmp *
    Robot_calibration_Ipos_B.d13_tmp);
  Robot_calibration_Ipos_B.fy1_tmp = sqrt((0.165 -
    Robot_calibration_Ipos_B.fy1_tmp) * (0.165 -
    Robot_calibration_Ipos_B.fy1_tmp) + Robot_calibration_Ipos_B.fx1_tmp *
    Robot_calibration_Ipos_B.fx1_tmp);
  Robot_calibration_Ipos_B.fx1_tmp = Robot_calibration_Ipos_B.d12 *
    Robot_calibration_Ipos_B.d12;
  Robot_calibration_Ipos_B.y_e = ((Robot_calibration_Ipos_B.fy2_tmp - sin
    (((3.1415926535897931 - acos(((Robot_calibration_Ipos_B.fx1_tmp +
    0.016900000000000002) - Robot_calibration_Ipos_B.fy1_tmp *
    Robot_calibration_Ipos_B.fy1_tmp) / (2.0 * Robot_calibration_Ipos_B.d12 *
    0.13))) - acos(((Robot_calibration_Ipos_B.fx1_tmp + 0.0144) -
                    0.016900000000000002) / (2.0 * Robot_calibration_Ipos_B.d12 *
    0.12))) - (Robot_calibration_Ipos_B.Gain2 + 0.615)) * 0.185) - 0.045) +
    0.081;

  /* Constant: '<S16>/set_robot_calibration_r' */
  Robot_calibration_Ipos_B.set_robot_calibration_r =
    Robot_calibration_Ipos_P.set_robot_calibration_r_Value;

  /* Chart: '<S22>/Supervisor' */
  if (Robot_calibration_Ipos_DW.temporalCounter_i1_b < 8191U) {
    Robot_calibration_Ipos_DW.temporalCounter_i1_b++;
  }

  Robot_calibration_Ipos_DW.sfEvent_m = -1;
  if (Robot_calibration_Ipos_DW.is_active_c12_Robot_calibration == 0U) {
    Robot_calibration_Ipos_DW.is_active_c12_Robot_calibration = 1U;
    Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
      Robot_calibration_Ip_IN_Waiting;
    Robot_calibration_Ipos_DW.temporalCounter_i1_b = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    Robot_calibration_Ipos_B.Ready_g = 0.0;
    Robot_calibration_Ipos_B.toPoint_d = 0.0;
    Robot_calibration_Ipos_B.homingBusy_jt = 1.0;
    Robot_calibration_Ipos_B.jogSpeed_o1 = -0.001;
    Robot_calibration_Ipos_B.homeControllerEnabled_c = 0.01;
    Robot_calibration_Ipos_B.freddy_n = 0.0;
  } else {
    switch (Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos) {
     case Robot_calibra_IN_CheckRobotIsON:
      if (Robot_calibration_Ipos_B.Gain < -3.0) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibra_IN_STOPRobotIsOFF;
        Robot_calibration_Ipos_B.StopSim_i = 1.0;
      } else {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibration__IN_RobotIsON;
        Robot_calibration_Ipos_DW.temporalCounter_i1_b = 0U;
      }
      break;

     case Robot_cal_IN_EnableRunAndSafety:
      Robot_calibration_Ipos_B.resetEnc_g = 0.0;
      break;

     case Robot_calibration_Ipo_IN_Homing:
      /* Transition if homeswitch becomes high */
      if (Robot_calibration_Ipos_B.RelationalOperator) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibration_I_IN_MovetoX0;
        Robot_calibration_Ipos_B.jogSpeed_o1 = 0.0;
        Robot_calibration_Ipos_B.toPoint_d =
          Robot_calibration_Ipos_B.set_robot_calibration_r;
        Robot_calibration_Ipos_B.freddy_n = 1.0;
      }
      break;

     case Robot_calibration_Ip_IN_Homing1:
      break;

     case Robot_calibration_I_IN_MovetoX0:
      if ((Robot_calibration_Ipos_B.Sum2 < 0.005) &&
          (Robot_calibration_Ipos_B.set_robot_calibration_r -
           Robot_calibration_Ipos_B.DiscreteTimeIntegrator <= 0.002)) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibra_IN_CheckRobotIsON;
      }
      break;

     case Robot_calibration_I_IN_ResetEnc:
      Robot_calibration_Ipos_B.resetEnc_g = 1.0;
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_b >= 2048U) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_cal_IN_EnableRunAndSafety;
        Robot_calibration_Ipos_B.resetEnc_g = 0.0;
        Robot_calibration_Ipos_B.homingBusy_jt = 0.0;
      }
      break;

     case Robot_calibration__IN_RobotIsON:
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_b >= 2048U) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibratio_IN_WaitForRest;
        Robot_calibration_Ipos_B.Ready_g = 1.0;
      }
      break;

     case Robot_calibra_IN_STOPRobotIsOFF:
      Robot_calibration_Ipos_B.StopSim_i = 1.0;
      break;

     case Robot_calibratio_IN_WaitForRest:
      if (Robot_calibration_Ipos_B.Compare_j) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibration_I_IN_ResetEnc;
        Robot_calibration_Ipos_DW.temporalCounter_i1_b = 0U;
        Robot_calibration_Ipos_B.homingBusy_jt = 100.0;
        Robot_calibration_Ipos_B.resetEnc_g = 1.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_c = 0.0;
      }
      break;

     case Robot_calibration_Ip_IN_Waiting:
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_b >= 2048U) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibration_I_IN_Waiting1;
        Robot_calibration_Ipos_DW.temporalCounter_i1_b = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_g = 0.0;
        Robot_calibration_Ipos_B.toPoint_d = 0.0;
        Robot_calibration_Ipos_B.homingBusy_jt = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o1 = 0.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_c = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_g = 0.0;
        Robot_calibration_Ipos_B.toPoint_d = 0.0;
        Robot_calibration_Ipos_B.homingBusy_jt = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o1 = -0.001;
        Robot_calibration_Ipos_B.homeControllerEnabled_c = 0.01;
        Robot_calibration_Ipos_B.freddy_n = 0.0;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_b >= 6144U) {
        Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos =
          Robot_calibration_Ipo_IN_Homing;

        /* Set jog speed and homing state */
        Robot_calibration_Ipos_B.Ready_g = 0.0;
        Robot_calibration_Ipos_B.toPoint_d = 0.0;
        Robot_calibration_Ipos_B.homingBusy_jt = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o1 = -0.4;
        Robot_calibration_Ipos_B.homeControllerEnabled_c = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_g = 0.0;
        Robot_calibration_Ipos_B.toPoint_d = 0.0;
        Robot_calibration_Ipos_B.homingBusy_jt = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o1 = 0.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_c = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S22>/Supervisor' */

  /* Chart: '<S23>/Supervisor2' */
  if (Robot_calibration_Ipos_DW.temporalCounter_i1_di < 8191U) {
    Robot_calibration_Ipos_DW.temporalCounter_i1_di++;
  }

  Robot_calibration_Ipos_DW.sfEvent_j = -1;
  if (Robot_calibration_Ipos_DW.is_active_c16_Robot_calibration == 0U) {
    Robot_calibration_Ipos_DW.is_active_c16_Robot_calibration = 1U;
    Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
      Robot_calibration__IN_Waiting_i;
    Robot_calibration_Ipos_DW.temporalCounter_i1_di = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    Robot_calibration_Ipos_B.Ready_c = 0.0;
    Robot_calibration_Ipos_B.toPoint_j = 0.0;
    Robot_calibration_Ipos_B.homingBusy_i = 1.0;
    Robot_calibration_Ipos_B.jogSpeed_l = -0.001;
    Robot_calibration_Ipos_B.homeControllerEnabled_a = 0.01;
  } else {
    switch (Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos) {
     case Robot_calibra_IN_CheckRobotIsON:
      Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
        Robot_calibration__IN_RobotIsON;
      Robot_calibration_Ipos_DW.temporalCounter_i1_di = 0U;
      break;

     case Robot_cal_IN_EnableRunAndSafety:
      Robot_calibration_Ipos_B.resetEnc_d = 0.0;
      break;

     case Robot_calibration_Ipo_IN_Homing:
      /* Transition if homeswitch becomes high */
      if (Robot_calibration_Ipos_B.RelationalOperator_f) {
        Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
          Robot_calibration_I_IN_MovetoX0;
        Robot_calibration_Ipos_B.jogSpeed_l = 0.0;
        Robot_calibration_Ipos_B.toPoint_j =
          Robot_calibration_Ipos_B.set_robot_calibration_x;
        Robot_calibration_Ipos_B.freddy_a = 1.0;
      }
      break;

     case Robot_calibration_Ip_IN_Homing1:
      break;

     case Robot_calibration_I_IN_MovetoX0:
      if ((Robot_calibration_Ipos_B.Sum2_a < 0.005) &&
          (Robot_calibration_Ipos_B.set_robot_calibration_x -
           Robot_calibration_Ipos_B.sf_quintictrajectorytime.path <= 0.002)) {
        Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
          Robot_calibra_IN_CheckRobotIsON;
      }
      break;

     case Robot_calibration_I_IN_ResetEnc:
      Robot_calibration_Ipos_B.resetEnc_d = 1.0;
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_di >= 2048U) {
        Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
          Robot_cal_IN_EnableRunAndSafety;
        Robot_calibration_Ipos_B.resetEnc_d = 0.0;
        Robot_calibration_Ipos_B.homingBusy_i = 0.0;
      }
      break;

     case Robot_calibration__IN_RobotIsON:
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_di >= 2048U) {
        Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
          Robot_calibrat_IN_WaitForRest_h;
        Robot_calibration_Ipos_B.Ready_c = 1.0;
      }
      break;

     case Robot_calibrat_IN_WaitForRest_h:
      if (Robot_calibration_Ipos_B.Compare_j) {
        Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
          Robot_calibration_I_IN_ResetEnc;
        Robot_calibration_Ipos_DW.temporalCounter_i1_di = 0U;
        Robot_calibration_Ipos_B.homingBusy_i = 100.0;
        Robot_calibration_Ipos_B.resetEnc_d = 1.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_a = 0.0;
      }
      break;

     case Robot_calibration__IN_Waiting_i:
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_di >= 2048U) {
        Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
          Robot_calibration_IN_Waiting1_o;
        Robot_calibration_Ipos_DW.temporalCounter_i1_di = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_c = 0.0;
        Robot_calibration_Ipos_B.toPoint_j = 0.0;
        Robot_calibration_Ipos_B.homingBusy_i = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_l = 0.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_a = 1.0;
        Robot_calibration_Ipos_B.freddy_a = 0.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_c = 0.0;
        Robot_calibration_Ipos_B.toPoint_j = 0.0;
        Robot_calibration_Ipos_B.homingBusy_i = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_l = -0.001;
        Robot_calibration_Ipos_B.homeControllerEnabled_a = 0.01;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_di >= 6144U) {
        Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos =
          Robot_calibration_Ipo_IN_Homing;

        /* Set jog speed and homing state */
        Robot_calibration_Ipos_B.Ready_c = 0.0;
        Robot_calibration_Ipos_B.toPoint_j = 0.0;
        Robot_calibration_Ipos_B.homingBusy_i = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_l = -0.8;
        Robot_calibration_Ipos_B.homeControllerEnabled_a = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_c = 0.0;
        Robot_calibration_Ipos_B.toPoint_j = 0.0;
        Robot_calibration_Ipos_B.homingBusy_i = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_l = 0.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_a = 1.0;
        Robot_calibration_Ipos_B.freddy_a = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S23>/Supervisor2' */

  /* MATLAB Function: '<S24>/Angle2Z' incorporates:
   *  MATLAB Function: '<S22>/Angle2Z'
   *  SignalConversion generated from: '<S33>/ SFunction '
   */
  Robot_calibration_Ipos_B.d12 = sqrt(Robot_calibration_Ipos_B.d12_tmp *
    Robot_calibration_Ipos_B.d12_tmp + Robot_calibration_Ipos_B.d13_tmp *
    Robot_calibration_Ipos_B.d13_tmp);
  Robot_calibration_Ipos_B.fx1_tmp = Robot_calibration_Ipos_B.d12 *
    Robot_calibration_Ipos_B.d12;
  Robot_calibration_Ipos_B.y = ((Robot_calibration_Ipos_B.fy2_tmp - sin
    (((3.1415926535897931 - acos(((Robot_calibration_Ipos_B.fx1_tmp +
    0.016900000000000002) - Robot_calibration_Ipos_B.fy1_tmp *
    Robot_calibration_Ipos_B.fy1_tmp) / (2.0 * Robot_calibration_Ipos_B.d12 *
    0.13))) - acos(((Robot_calibration_Ipos_B.fx1_tmp + 0.0144) -
                    0.016900000000000002) / (2.0 * Robot_calibration_Ipos_B.d12 *
    0.12))) - (Robot_calibration_Ipos_B.Gain2 + 0.615)) * 0.185) - 0.045) +
    0.081;

  /* Chart: '<S24>/Supervisor' */
  if (Robot_calibration_Ipos_DW.temporalCounter_i1_d < 8191U) {
    Robot_calibration_Ipos_DW.temporalCounter_i1_d++;
  }

  Robot_calibration_Ipos_DW.sfEvent_o = -1;
  if (Robot_calibration_Ipos_DW.is_active_c18_Robot_calibration == 0U) {
    Robot_calibration_Ipos_DW.is_active_c18_Robot_calibration = 1U;
    Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos =
      Robot_calibration_IN_Waiting_iz;
    Robot_calibration_Ipos_DW.temporalCounter_i1_d = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoid moving to X0 too
       early */
    Robot_calibration_Ipos_B.Ready_b = 0.0;
    Robot_calibration_Ipos_B.toPoint = 0.0;
    Robot_calibration_Ipos_B.homingBusy_j = 1.0;
    Robot_calibration_Ipos_B.jogSpeed_o = 0.001;
    Robot_calibration_Ipos_B.homeControllerEnabled_m = 0.1;
    Robot_calibration_Ipos_B.freddy = 0.0;
  } else {
    switch (Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos) {
     case Robot_c_IN_EnableRunAndSafety_j:
      Robot_calibration_Ipos_B.resetEnc_h = 0.0;
      break;

     case Robot_calibration_I_IN_Homing_g:
      /* Transition if homeswitch becomes high */
      if (Robot_calibration_Ipos_B.RelationalOperator_k) {
        Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos =
          Robot_calibration_IN_MovetoX0_e;
        Robot_calibration_Ipos_B.jogSpeed_o = 0.0;
        Robot_calibration_Ipos_B.toPoint =
          Robot_calibration_Ipos_B.set_robot_calibration_z;
        Robot_calibration_Ipos_B.freddy = 1.0;
      }
      break;

     case Robot_calibration__IN_Homing1_b:
      break;

     case Robot_calibration_IN_MovetoX0_e:
      if ((Robot_calibration_Ipos_B.Sum2_e < 0.005) &&
          (Robot_calibration_Ipos_B.set_robot_calibration_z -
           Robot_calibration_Ipos_B.sf_quintictrajectorytime_i.path <= 0.002)) {
        Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos =
          Robot_calibrat_IN_WaitForRest_l;
        Robot_calibration_Ipos_B.Ready_b = 1.0;
      }
      break;

     case Robot_calibration_IN_ResetEnc_n:
      Robot_calibration_Ipos_B.resetEnc_h = 1.0;
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_d >= 2048U) {
        Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos =
          Robot_c_IN_EnableRunAndSafety_j;
        Robot_calibration_Ipos_B.resetEnc_h = 0.0;
        Robot_calibration_Ipos_B.homingBusy_j = 0.0;
      }
      break;

     case Robot_calibrat_IN_WaitForRest_l:
      if (Robot_calibration_Ipos_B.Compare_j) {
        Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos =
          Robot_calibration_IN_ResetEnc_n;
        Robot_calibration_Ipos_DW.temporalCounter_i1_d = 0U;
        Robot_calibration_Ipos_B.resetEnc_h = 1.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_m = 0.0;
        Robot_calibration_Ipos_B.Ready_b = 1.0;
      }
      break;

     case Robot_calibration_IN_Waiting_iz:
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_d >= 4096U) {
        Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos =
          Robot_calibration_IN_Waiting1_k;
        Robot_calibration_Ipos_DW.temporalCounter_i1_d = 0U;

        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_b = 0.0;
        Robot_calibration_Ipos_B.toPoint = 0.0;
        Robot_calibration_Ipos_B.homingBusy_j = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o = 0.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_m = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_b = 0.0;
        Robot_calibration_Ipos_B.toPoint = 0.0;
        Robot_calibration_Ipos_B.homingBusy_j = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o = 0.001;
        Robot_calibration_Ipos_B.homeControllerEnabled_m = 0.1;
        Robot_calibration_Ipos_B.freddy = 0.0;
      }
      break;

     default:
      /* case IN_Waiting1: */
      if (Robot_calibration_Ipos_DW.temporalCounter_i1_d >= 4096U) {
        Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos =
          Robot_calibration_I_IN_Homing_g;

        /* Set jog speed and homing state */
        Robot_calibration_Ipos_B.toPoint = 0.0;
        Robot_calibration_Ipos_B.Ready_b = 0.0;
        Robot_calibration_Ipos_B.homingBusy_j = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o = 0.8;
        Robot_calibration_Ipos_B.homeControllerEnabled_m = 1.0;
      } else {
        /* Homing has to wait for 3 sec
           as the new arm gets the 5V enable signal
           after pressing start to avoid moving to X0 too
           early */
        Robot_calibration_Ipos_B.Ready_b = 0.0;
        Robot_calibration_Ipos_B.toPoint = 0.0;
        Robot_calibration_Ipos_B.homingBusy_j = 1.0;
        Robot_calibration_Ipos_B.jogSpeed_o = 0.0;
        Robot_calibration_Ipos_B.homeControllerEnabled_m = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S24>/Supervisor' */

  /* Chart: '<S25>/Supervisor' */
  if (Robot_calibration_Ipos_DW.temporalCounter_i1 < 8191U) {
    Robot_calibration_Ipos_DW.temporalCounter_i1++;
  }

  Robot_calibration_Ipos_DW.sfEvent = -1;
  if (Robot_calibration_Ipos_DW.is_active_c1_Robot_calibration_ == 0U) {
    Robot_calibration_Ipos_DW.is_active_c1_Robot_calibration_ = 1U;
    Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos =
      Robot_calibration_IN_Waiting_iz;
    Robot_calibration_Ipos_DW.temporalCounter_i1 = 0U;

    /* Homing has to wait for 3 sec
       as the new arm gets the 5V enable signal
       after pressing start to avoi d moving to X0 too
       early */
  } else {
    switch (Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos) {
     case Robot_calibra_IN_CheckRobotIsON:
      Robot_calibration_Ipos_B.jogSpeed = 0.0;
      if (Robot_calibration_Ipos_DW.temporalCounter_i1 >= 2048U) {
        Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos =
          Robot_calibrat_IN_WaitForRest_l;
        Robot_calibration_Ipos_B.Ready = 1.0;
      }
      break;

     case Robot_cal_IN_EnableRunAndSafety:
      Robot_calibration_Ipos_B.resetEnc = 0.0;
      Robot_calibration_Ipos_B.homingBusy = 0.0;
      break;

     case Robot_calibration_Ipo_IN_Homing:
      Robot_calibration_Ipos_B.Ready = 0.0;
      Robot_calibration_Ipos_B.homingBusy = 1.0;
      Robot_calibration_Ipos_B.jogSpeed = 20.0;
      Robot_calibration_Ipos_B.homeControllerEnabled = 1.0;
      if (Robot_calibration_Ipos_DW.temporalCounter_i1 >= 6144U) {
        Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos =
          Robot_calibration_IN_MovetoX0_e;
        Robot_calibration_Ipos_DW.temporalCounter_i1 = 0U;
        Robot_calibration_Ipos_B.jogSpeed = -20.0;
      }
      break;

     case Robot_calibration_IN_MovetoX0_e:
      Robot_calibration_Ipos_B.jogSpeed = -20.0;

      /* Allow time for moving */
      if (Robot_calibration_Ipos_DW.temporalCounter_i1 >= 6144U) {
        Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos =
          Robot_calibra_IN_CheckRobotIsON;
        Robot_calibration_Ipos_DW.temporalCounter_i1 = 0U;
        Robot_calibration_Ipos_B.jogSpeed = 0.0;
      }
      break;

     case Robot_calibration_IN_ResetEnc_n:
      Robot_calibration_Ipos_B.resetEnc = 1.0;
      Robot_calibration_Ipos_B.homeControllerEnabled = 0.0;
      if (Robot_calibration_Ipos_DW.temporalCounter_i1 >= 2048U) {
        Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos =
          Robot_cal_IN_EnableRunAndSafety;
        Robot_calibration_Ipos_B.resetEnc = 0.0;
        Robot_calibration_Ipos_B.homingBusy = 0.0;
      }
      break;

     case Robot_calibrat_IN_WaitForRest_l:
      Robot_calibration_Ipos_B.Ready = 1.0;
      if (Robot_calibration_Ipos_B.Compare_j) {
        Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos =
          Robot_calibration_IN_ResetEnc_n;
        Robot_calibration_Ipos_DW.temporalCounter_i1 = 0U;
        Robot_calibration_Ipos_B.resetEnc = 1.0;
        Robot_calibration_Ipos_B.homeControllerEnabled = 0.0;
      }
      break;

     default:
      /* case IN_Waiting: */
      if (Robot_calibration_Ipos_DW.temporalCounter_i1 >= 2048U) {
        Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos =
          Robot_calibration_Ipo_IN_Homing;
        Robot_calibration_Ipos_DW.temporalCounter_i1 = 0U;

        /* Set jog speed and homing state */
        Robot_calibration_Ipos_B.Ready = 0.0;
        Robot_calibration_Ipos_B.homingBusy = 1.0;
        Robot_calibration_Ipos_B.jogSpeed = 20.0;
        Robot_calibration_Ipos_B.homeControllerEnabled = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S25>/Supervisor' */

  /* Sum: '<S20>/Add' */
  Robot_calibration_Ipos_B.fy2_tmp = ((Robot_calibration_Ipos_B.homingBusy_jt +
    Robot_calibration_Ipos_B.homingBusy_i) +
    Robot_calibration_Ipos_B.homingBusy_j) + Robot_calibration_Ipos_B.homingBusy;

  /* Signum: '<S20>/Sign' */
  if (Robot_calibration_Ipos_B.fy2_tmp < 0.0) {
    Robot_calibration_Ipos_B.fy2_tmp = -1.0;
  } else if (Robot_calibration_Ipos_B.fy2_tmp > 0.0) {
    Robot_calibration_Ipos_B.fy2_tmp = 1.0;
  } else if (Robot_calibration_Ipos_B.fy2_tmp == 0.0) {
    Robot_calibration_Ipos_B.fy2_tmp = 0.0;
  } else {
    Robot_calibration_Ipos_B.fy2_tmp = (rtNaN);
  }

  /* End of Signum: '<S20>/Sign' */

  /* Sum: '<S20>/Add1' incorporates:
   *  Constant: '<S20>/Constant'
   */
  Robot_calibration_Ipos_B.Add1 = Robot_calibration_Ipos_P.Constant_Value_m -
    Robot_calibration_Ipos_B.fy2_tmp;

  /* Sum: '<S16>/Add2' incorporates:
   *  Gain: '<S16>/Gain'
   *  Logic: '<S16>/NOT'
   */
  Robot_calibration_Ipos_B.Add2 = (((Robot_calibration_Ipos_P.Gain_Gain_m *
    Robot_calibration_Ipos_B.airBagEnabled_m +
    Robot_calibration_Ipos_P.Gain_Gain_m *
    Robot_calibration_Ipos_B.airBagEnabled_o) +
    Robot_calibration_Ipos_P.Gain_Gain_m *
    Robot_calibration_Ipos_B.airBagEnabled) + (real_T)
    !(Robot_calibration_Ipos_B.Add1 != 0.0)) +
    Robot_calibration_Ipos_B.homingBusy_jt;

  /* Gain: '<S15>/Gain3' */
  Robot_calibration_Ipos_B.Gain3 = Robot_calibration_Ipos_P.Gain3_Gain *
    Robot_calibration_Ipos_B.ec_Ipos_o5;

  /* Gain: '<S15>/Gain5' incorporates:
   *  Gain: '<S15>/Gain4'
   */
  Robot_calibration_Ipos_B.Gain5 = Robot_calibration_Ipos_P.Gain4_Gain *
    Robot_calibration_Ipos_B.ec_Ipos_o1 * Robot_calibration_Ipos_P.Gain5_Gain;

  /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable '
   */
  Robot_calibration_Ipos_DW.Controller_MODE = (Robot_calibration_Ipos_B.Add1 >
    0.0);
  if (Robot_calibration_Ipos_DW.Controller_MODE) {
    /* RelationalOperator: '<S12>/FixPt Relational Operator' incorporates:
     *  Constant: '<S4>/Object detection matrix'
     *  UnitDelay: '<S12>/Delay Input1'
     */
    for (Robot_calibration_Ipos_B.i = 0; Robot_calibration_Ipos_B.i < 12;
         Robot_calibration_Ipos_B.i++) {
      Robot_calibration_Ipos_B.FixPtRelationalOperator[Robot_calibration_Ipos_B.i]
        =
        (Robot_calibration_Ipos_P.Objectdetectionmatrix_Value[Robot_calibration_Ipos_B.i]
         !=
         Robot_calibration_Ipos_DW.DelayInput1_DSTATE[Robot_calibration_Ipos_B.i]);
    }

    /* End of RelationalOperator: '<S12>/FixPt Relational Operator' */
    for (Robot_calibration_Ipos_B.i = 0; Robot_calibration_Ipos_B.i < 3;
         Robot_calibration_Ipos_B.i++) {
      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      Robot_calibration_Ipos_B.Selector2[3 * Robot_calibration_Ipos_B.i] =
        Robot_calibration_Ipos_P.Objectdetectionmatrix_Value[3 *
        Robot_calibration_Ipos_B.i];

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      Robot_calibration_Ipos_B.Selector2_tmp = 3 * Robot_calibration_Ipos_B.i +
        1;

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      Robot_calibration_Ipos_B.Selector2[Robot_calibration_Ipos_B.Selector2_tmp]
        =
        Robot_calibration_Ipos_P.Objectdetectionmatrix_Value[Robot_calibration_Ipos_B.Selector2_tmp];

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       *  Selector: '<S4>/Selector'
       */
      Robot_calibration_Ipos_B.Selector2_tmp = 3 * Robot_calibration_Ipos_B.i +
        2;
      Robot_calibration_Ipos_B.fy2_tmp =
        Robot_calibration_Ipos_P.Objectdetectionmatrix_Value[Robot_calibration_Ipos_B.Selector2_tmp];

      /* Selector: '<S4>/Selector2' incorporates:
       *  Constant: '<S4>/Object detection matrix'
       */
      Robot_calibration_Ipos_B.Selector2[Robot_calibration_Ipos_B.Selector2_tmp]
        = Robot_calibration_Ipos_B.fy2_tmp;

      /* Selector: '<S4>/Selector' */
      Robot_calibration_Ipos_B.Selector[Robot_calibration_Ipos_B.i] =
        Robot_calibration_Ipos_B.fy2_tmp;
    }

    /* DiscreteIntegrator: '<S1>/Discrete  integrator' */
    Robot_calibration_Ipos_B.Conveyorreferencemm =
      Robot_calibration_Ipos_DW.Discreteintegrator_DSTATE;

    /* Gain: '<S5>/Gain1' incorporates:
     *  Sum: '<S1>/Sum3'
     */
    Robot_calibration_Ipos_B.Gain1_k =
      (Robot_calibration_Ipos_B.Conveyorreferencemm -
       Robot_calibration_Ipos_B.Gain3) * Robot_calibration_Ipos_P.Gain1_Gain;

    /* S-Function (dweakint): '<S5>/Dctintegrator3' */

    /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S5>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S5>/Dctleadlag' */

    /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    /* S-Function (getSystemClockTimeval): '<S4>/S-Function Builder' */
    getSystemClockTimeval_Outputs_wrapper
      (&Robot_calibration_Ipos_B.SFunctionBuilder);

    /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S13>/Enable'
     */
    /* RelationalOperator: '<S12>/FixPt Relational Operator' incorporates:
     *  Inport: '<S13>/In1'
     */
    if (Robot_calibration_Ipos_B.FixPtRelationalOperator[0] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[1] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[2] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[3] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[4] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[5] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[6] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[7] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[8] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[9] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[10] ||
        Robot_calibration_Ipos_B.FixPtRelationalOperator[11]) {
      Robot_calibration_Ipos_B.In1 = Robot_calibration_Ipos_B.SFunctionBuilder;
      srUpdateBC(Robot_calibration_Ipos_DW.EnabledSubsystem_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */

    /* Sum: '<S4>/Sum' incorporates:
     *  Constant: '<S4>/Object detection matrix'
     *  Selector: '<S4>/Selector3'
     */
    Robot_calibration_Ipos_B.Sum_l = Robot_calibration_Ipos_B.In1 -
      Robot_calibration_Ipos_P.Objectdetectionmatrix_Value[9];

    /* Chart: '<S1>/Stateflow ' */
    Robot_calibration_Ipos_DW.sfEvent_k = -1;
    Robot_c3_Robot_calibration_Ipos();

    /* SignalConversion: '<S1>/Signal Conversion2' */
    Robot_calibration_Ipos_B.SignalConversion2 = Robot_calibration_Ipos_B.Gain;

    /* SignalConversion: '<S1>/Signal Conversion1' */
    Robot_calibration_Ipos_B.SignalConversion1 = Robot_calibration_Ipos_B.Gain1;

    /* SignalConversion: '<S1>/Signal Conversion' */
    Robot_calibration_Ipos_B.SignalConversion = Robot_calibration_Ipos_B.Gain2;

    /* MATLAB Function: '<S10>/SPERTE_measurement_function' incorporates:
     *  Constant: '<S10>/SPERTE_measurement_samples'
     *  Constant: '<S10>/SPERTE_measurement_trigger_command'
     *  SignalConversion generated from: '<S14>/ SFunction '
     */
    if ((((Robot_calibration_Ipos_P.MeasurementBlock_triggertype == 1) &&
          (Robot_calibration_Ipos_P.MeasurementBlock_trigger_comman == 1)) ||
         ((Robot_calibration_Ipos_P.MeasurementBlock_triggertype == 2) &&
          (Robot_calibration_Ipos_P.MeasurementBlock_trigger_comman == 1))) &&
        (Robot_calibration_Ipos_DW.busy != 1)) {
      Robot_calibratio_emxInit_char_T(&charStr, 2);
      Robot_calibration_Ipos_B.i = snprintf(NULL, 0, "measurement_%d.bin",
        Robot_calibration_Ipos_DW.NF);
      Robot_calibration_Ipos_B.Selector2_tmp = charStr->size[0] * charStr->size
        [1];
      charStr->size[0] = 1;
      charStr->size[1] = Robot_calibration_Ipos_B.i + 1;
      Robot__emxEnsureCapacity_char_T(charStr,
        Robot_calibration_Ipos_B.Selector2_tmp);
      snprintf(&charStr->data[0], (size_t)(Robot_calibration_Ipos_B.i + 1),
               "measurement_%d.bin", Robot_calibration_Ipos_DW.NF);
      if (1 > Robot_calibration_Ipos_B.i) {
        charStr->size[1] = 0;
      } else {
        Robot_calibration_Ipos_B.Selector2_tmp = charStr->size[0] *
          charStr->size[1];
        charStr->size[1] = Robot_calibration_Ipos_B.i;
        Robot__emxEnsureCapacity_char_T(charStr,
          Robot_calibration_Ipos_B.Selector2_tmp);
      }

      Robot_calibration_Ipos_B.b_fileid = Robot_calibration_Ipos_cfopen(charStr,
        "wb");
      Robot_calibration_Ipos_DW.fileID = Robot_calibration_Ipos_B.b_fileid;
      Robot_calibration_Ipos_B.i = Robot_calibration_Ipos_DW.NF + 1;
      Robot_calibratio_emxFree_char_T(&charStr);
      if (Robot_calibration_Ipos_DW.NF + 1 > 32767) {
        Robot_calibration_Ipos_B.i = 32767;
      }

      Robot_calibration_Ipos_DW.NF = (int16_T)Robot_calibration_Ipos_B.i;
      Robot_calibration_Ipos_DW.busy = 1U;
      Robot_calibration_Ipos_DW.NS = 0U;
    }

    if (Robot_calibration_Ipos_DW.busy == 1) {
      if (Robot_calibration_Ipos_DW.NS <
          Robot_calibration_Ipos_P.MeasurementBlock_N_samples) {
        Robot_calibration_Ipos_B.b_fileid = (int8_T)rt_roundd_snf
          (Robot_calibration_Ipos_DW.fileID);
        if ((Robot_calibration_Ipos_B.b_fileid < 0) ||
            (Robot_calibration_Ipos_DW.fileID !=
             Robot_calibration_Ipos_B.b_fileid)) {
          Robot_calibration_Ipos_B.b_fileid = -1;
        }

        if (Robot_calibration_Ipos_B.b_fileid >= 3) {
          Robot_calibration_Ipos_B.filestar =
            Robot_calibration_Ipos_DW.eml_openfiles[Robot_calibration_Ipos_B.b_fileid
            - 3];
          Robot_calibration_Ipos_B.a =
            Robot_calibration_Ipos_DW.eml_autoflush[Robot_calibration_Ipos_B.b_fileid
            - 3];
        } else if (Robot_calibration_Ipos_B.b_fileid == 0) {
          Robot_calibration_Ipos_B.filestar = stdin;
          Robot_calibration_Ipos_B.a = true;
        } else if (Robot_calibration_Ipos_B.b_fileid == 1) {
          Robot_calibration_Ipos_B.filestar = stdout;
          Robot_calibration_Ipos_B.a = true;
        } else if (Robot_calibration_Ipos_B.b_fileid == 2) {
          Robot_calibration_Ipos_B.filestar = stderr;
          Robot_calibration_Ipos_B.a = true;
        } else {
          Robot_calibration_Ipos_B.filestar = NULL;
          Robot_calibration_Ipos_B.a = true;
        }

        if (!(Robot_calibration_Ipos_DW.fileID != 0.0)) {
          Robot_calibration_Ipos_B.filestar = NULL;
        }

        if (!(Robot_calibration_Ipos_B.filestar == NULL)) {
          Robot_calibration_Ipos_B.xout[0] = (real32_T)
            Robot_calibration_Ipos_B.Gain;
          Robot_calibration_Ipos_B.xout[1] = (real32_T)
            Robot_calibration_Ipos_B.Gain1;
          Robot_calibration_Ipos_B.xout[2] = (real32_T)
            Robot_calibration_Ipos_B.Gain2;
          Robot_calibration_Ipos_B.bytesOutSizet = fwrite
            (&Robot_calibration_Ipos_B.xout[0], sizeof(real32_T), (size_t)3,
             Robot_calibration_Ipos_B.filestar);
          if (((real_T)Robot_calibration_Ipos_B.bytesOutSizet > 0.0) &&
              Robot_calibration_Ipos_B.a) {
            fflush(Robot_calibration_Ipos_B.filestar);
          }
        }

        Robot_calibration_Ipos_B.qY = Robot_calibration_Ipos_DW.NS + 1U;
        if (Robot_calibration_Ipos_DW.NS + 1U < Robot_calibration_Ipos_DW.NS) {
          Robot_calibration_Ipos_B.qY = MAX_uint32_T;
        }

        Robot_calibration_Ipos_DW.NS = Robot_calibration_Ipos_B.qY;
      } else {
        Robot_calibration_Ipos_cfclose(Robot_calibration_Ipos_DW.fileID);
        Robot_calibration_Ipos_DW.busy = 0U;
        Robot_calibration_Ipos_DW.NS = 0U;
      }
    }

    /* End of MATLAB Function: '<S10>/SPERTE_measurement_function' */

    /* Sum: '<S1>/Sum4' incorporates:
     *  Constant: '<S1>/Feedfoward R [V]'
     *  Gain: '<S6>/Gain'
     *  Sum: '<S1>/Sum2'
     */
    Robot_calibration_Ipos_B.Sum4 = Robot_calibration_Ipos_P.Gain_Gain * 0.0 +
      Robot_calibration_Ipos_P.FeedfowardRV_Value;

    /* Sum: '<S1>/Sum5' incorporates:
     *  Constant: '<S1>/Feedfoward X [V]'
     *  Constant: '<S1>/Reference X [rad]'
     *  Gain: '<S8>/Gain1'
     */
    Robot_calibration_Ipos_B.Sum5 = Robot_calibration_Ipos_P.Gain1_Gain_g *
      Robot_calibration_Ipos_P.ReferenceXrad_Value +
      Robot_calibration_Ipos_P.FeedfowardXV_Value;

    /* Sum: '<S1>/Sum6' incorporates:
     *  Constant: '<S1>/Feedfoward Z [V]'
     *  Constant: '<S1>/Reference Z [rad]'
     *  Gain: '<S9>/Gain'
     */
    Robot_calibration_Ipos_B.Sum6 = Robot_calibration_Ipos_P.Gain_Gain_i *
      Robot_calibration_Ipos_P.ReferenceZrad_Value +
      Robot_calibration_Ipos_P.FeedfowardZV_Value;

    /* Saturate: '<S1>/Saturation ' incorporates:
     *  Constant: '<S1>/Conveyor speed [mm//s]'
     */
    if (Robot_calibration_Ipos_P.Conveyorspeedmms_Value >
        Robot_calibration_Ipos_P.Saturation_UpperSat) {
      /* Saturate: '<S1>/Saturation ' */
      Robot_calibration_Ipos_B.Saturation_c =
        Robot_calibration_Ipos_P.Saturation_UpperSat;
    } else if (Robot_calibration_Ipos_P.Conveyorspeedmms_Value <
               Robot_calibration_Ipos_P.Saturation_LowerSat) {
      /* Saturate: '<S1>/Saturation ' */
      Robot_calibration_Ipos_B.Saturation_c =
        Robot_calibration_Ipos_P.Saturation_LowerSat;
    } else {
      /* Saturate: '<S1>/Saturation ' */
      Robot_calibration_Ipos_B.Saturation_c =
        Robot_calibration_Ipos_P.Conveyorspeedmms_Value;
    }

    /* End of Saturate: '<S1>/Saturation ' */

    /* Gain: '<S7>/Gain1' incorporates:
     *  Constant: '<S1>/Reference Vacuum [bar]'
     *  Sum: '<S1>/Sum9'
     */
    Robot_calibration_Ipos_B.Gain1_b =
      (Robot_calibration_Ipos_P.ReferenceVacuumbar_Value -
       Robot_calibration_Ipos_B.Gain5) * Robot_calibration_Ipos_P.Gain1_Gain_j;

    /* ManualSwitch: '<S1>/Manual Switch' */
    if (Robot_calibration_Ipos_P.ManualSwitch_CurrentSetting == 1) {
      /* ManualSwitch: '<S1>/Manual Switch' incorporates:
       *  Constant: '<S1>/Suck'
       */
      Robot_calibration_Ipos_B.Doubleclickswitch =
        Robot_calibration_Ipos_P.Suck_Value;
    } else {
      /* ManualSwitch: '<S1>/Manual Switch' incorporates:
       *  Constant: '<S1>/ Blow'
       */
      Robot_calibration_Ipos_B.Doubleclickswitch =
        Robot_calibration_Ipos_P.Blow_Value;
    }

    /* End of ManualSwitch: '<S1>/Manual Switch' */

    /* ManualSwitch: '<S1>/Manual Switch1' incorporates:
     *  StringConstant: '<S1>/Color; set with string; black or white'
     *  StringConstant: '<S1>/Color; specified in 6 hex digits, rrggbb'
     */
    if (Robot_calibration_Ipos_P.ManualSwitch1_CurrentSetting == 1) {
      strncpy(&Robot_calibration_Ipos_B.ManualSwitch1[0],
              &Robot_calibration_Ipos_P.Colorspecifiedin6hexdigitsrrggb[0], 255U);
      Robot_calibration_Ipos_B.ManualSwitch1[255] = '\x00';
    } else {
      strncpy(&Robot_calibration_Ipos_B.ManualSwitch1[0],
              &Robot_calibration_Ipos_P.Colorsetwithstringblackorwhite_[0], 255U);
      Robot_calibration_Ipos_B.ManualSwitch1[255] = '\x00';
    }

    /* End of ManualSwitch: '<S1>/Manual Switch1' */

    /* Constant: '<S1>/Object' */
    Robot_calibration_Ipos_B.Object = Robot_calibration_Ipos_P.Object_Value;

    /* Constant: '<S1>/Plot' */
    Robot_calibration_Ipos_B.Plot = Robot_calibration_Ipos_P.Plot_Value;

    /* Constant: '<S1>/Stop' */
    Robot_calibration_Ipos_B.Stop = Robot_calibration_Ipos_P.Stop_Value;
    srUpdateBC(Robot_calibration_Ipos_DW.Controller_SubsysRanBC);
  }

  /* End of Outputs for SubSystem: '<Root>/Controller' */

  /* Saturate: '<S17>/Saturation' */
  if (Robot_calibration_Ipos_B.Gain1_b >
      Robot_calibration_Ipos_P.Saturation_UpperSat_d) {
    /* Saturate: '<S17>/Saturation' */
    Robot_calibration_Ipos_B.Saturation =
      Robot_calibration_Ipos_P.Saturation_UpperSat_d;
  } else if (Robot_calibration_Ipos_B.Gain1_b <
             Robot_calibration_Ipos_P.Saturation_LowerSat_n) {
    /* Saturate: '<S17>/Saturation' */
    Robot_calibration_Ipos_B.Saturation =
      Robot_calibration_Ipos_P.Saturation_LowerSat_n;
  } else {
    /* Saturate: '<S17>/Saturation' */
    Robot_calibration_Ipos_B.Saturation = Robot_calibration_Ipos_B.Gain1_b;
  }

  /* End of Saturate: '<S17>/Saturation' */

  /* Switch: '<S21>/Homing Running Switch' incorporates:
   *  UnitDelay: '<S16>/Unit Delay1'
   */
  if (Robot_calibration_Ipos_DW.UnitDelay1_DSTATE >=
      Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold_l) {
    /* Switch: '<S21>/Homing Running Switch1' incorporates:
     *  StringConstant: '<S16>/Homing Orange'
     *  Switch: '<S21>/Homing Running Switch'
     */
    if (Robot_calibration_Ipos_DW.UnitDelay1_DSTATE >=
        Robot_calibration_Ipos_P.HomingRunningSwitch1_Threshold) {
      /* Switch: '<S21>/Homing Running Switch2' incorporates:
       *  StringConstant: '<S16>/Airbag Red'
       *  StringConstant: '<S16>/Ready Green'
       *  Switch: '<S21>/Homing Running Switch'
       */
      if (Robot_calibration_Ipos_DW.UnitDelay1_DSTATE >=
          Robot_calibration_Ipos_P.HomingRunningSwitch2_Threshold) {
        strncpy(&Robot_calibration_Ipos_B.HomingRunningSwitch_c[0],
                &Robot_calibration_Ipos_P.ReadyGreen_String[0], 255U);
        Robot_calibration_Ipos_B.HomingRunningSwitch_c[255] = '\x00';
      } else {
        strncpy(&Robot_calibration_Ipos_B.HomingRunningSwitch_c[0],
                &Robot_calibration_Ipos_P.AirbagRed_String[0], 255U);
        Robot_calibration_Ipos_B.HomingRunningSwitch_c[255] = '\x00';
      }

      /* End of Switch: '<S21>/Homing Running Switch2' */
    } else {
      strncpy(&Robot_calibration_Ipos_B.HomingRunningSwitch_c[0],
              &Robot_calibration_Ipos_P.HomingOrange_String[0], 255U);
      Robot_calibration_Ipos_B.HomingRunningSwitch_c[255] = '\x00';
    }

    /* End of Switch: '<S21>/Homing Running Switch1' */
  } else {
    strncpy(&Robot_calibration_Ipos_B.HomingRunningSwitch_c[0],
            &Robot_calibration_Ipos_B.ManualSwitch1[0], 255U);
    Robot_calibration_Ipos_B.HomingRunningSwitch_c[255] = '\x00';
  }

  /* End of Switch: '<S21>/Homing Running Switch' */

  /* Outputs for Enabled SubSystem: '<S26>/Subsystem3' incorporates:
   *  EnablePort: '<S28>/Enable'
   */
  /* Logic: '<S27>/NOT' incorporates:
   *  Delay: '<S27>/Delay'
   *  StringCompare: '<S27>/String Compare'
   */
  if (strcmp(&Robot_calibration_Ipos_B.HomingRunningSwitch_c[0],
             &Robot_calibration_Ipos_DW.Delay_DSTATE[0]) != 0) {
    /* If: '<S28>/If' incorporates:
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S30>/Constant'
     *  StringCompare: '<S28>/String Compare'
     *  StringConstant: '<S28>/String Constant4'
     */
    if (strcmp(&Robot_calibration_Ipos_B.HomingRunningSwitch_c[0],
               &Robot_calibration_Ipos_P.StringConstant4_String[0]) == 0) {
      /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      /* StringToASCII: '<S29>/String to ASCII1' */
      strncpy(&Robot_calibration_Ipos_B.cv[0],
              &Robot_calibration_Ipos_B.HomingRunningSwitch_c[0], 31U);
      for (Robot_calibration_Ipos_B.i = 0; Robot_calibration_Ipos_B.i < 31;
           Robot_calibration_Ipos_B.i++) {
        Robot_calibration_Ipos_B.MatrixConcatenate1[Robot_calibration_Ipos_B.i] =
          (uint8_T)Robot_calibration_Ipos_B.cv[Robot_calibration_Ipos_B.i];
      }

      /* End of StringToASCII: '<S29>/String to ASCII1' */
      Robot_calibration_Ipos_B.MatrixConcatenate1[31] =
        Robot_calibration_Ipos_P.Constant1_Value_j;
      Robot_calibration__SerialWrite1
        (Robot_calibration_Ipos_B.MatrixConcatenate1,
         &Robot_calibration_Ipos_DW.SerialWrite1);

      /* End of Outputs for SubSystem: '<S28>/If Action Subsystem' */

      /* Update for IfAction SubSystem: '<S28>/If Action Subsystem' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      /* Update for If: '<S28>/If' incorporates:
       *  Constant: '<S29>/Constant1'
       */
      srUpdateBC(Robot_calibration_Ipos_DW.IfActionSubsystem_SubsysRanBC);

      /* End of Update for SubSystem: '<S28>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      /* StringConcatenate: '<S30>/String Concatenate' incorporates:
       *  StringConstant: '<S30>/String Constant1'
       *  StringConstant: '<S30>/String Constant3'
       */
      Robot_calibration_Ipos_B.rtb_StringConcatenate_m[0] = '\x00';
      strncat(&Robot_calibration_Ipos_B.rtb_StringConcatenate_m[0],
              &Robot_calibration_Ipos_P.StringConstant3_String[0], 255U);
      Robot_calibration_Ipos_B.i = (int32_T)strlen
        (&Robot_calibration_Ipos_B.rtb_StringConcatenate_m[0]);
      strncat
        (&Robot_calibration_Ipos_B.rtb_StringConcatenate_m[Robot_calibration_Ipos_B.i],
         &Robot_calibration_Ipos_B.HomingRunningSwitch_c[0], 255U -
         Robot_calibration_Ipos_B.i);
      Robot_calibration_Ipos_B.i += (int32_T)strlen
        (&Robot_calibration_Ipos_B.rtb_StringConcatenate_m[Robot_calibration_Ipos_B.i]);
      strncat
        (&Robot_calibration_Ipos_B.rtb_StringConcatenate_m[Robot_calibration_Ipos_B.i],
         &Robot_calibration_Ipos_P.StringConstant1_String[0], 255U -
         Robot_calibration_Ipos_B.i);

      /* StringToASCII: '<S30>/String to ASCII' incorporates:
       *  StringConcatenate: '<S30>/String Concatenate'
       */
      strncpy(&Robot_calibration_Ipos_B.cv[0],
              &Robot_calibration_Ipos_B.rtb_StringConcatenate_m[0], 31U);
      for (Robot_calibration_Ipos_B.i = 0; Robot_calibration_Ipos_B.i < 31;
           Robot_calibration_Ipos_B.i++) {
        Robot_calibration_Ipos_B.MatrixConcatenate[Robot_calibration_Ipos_B.i] =
          (uint8_T)Robot_calibration_Ipos_B.cv[Robot_calibration_Ipos_B.i];
      }

      /* End of StringToASCII: '<S30>/String to ASCII' */
      Robot_calibration_Ipos_B.MatrixConcatenate[31] =
        Robot_calibration_Ipos_P.Constant_Value_d;
      Robot_calibration__SerialWrite1(Robot_calibration_Ipos_B.MatrixConcatenate,
        &Robot_calibration_Ipos_DW.SerialWrite);

      /* End of Outputs for SubSystem: '<S28>/If Action Subsystem1' */

      /* Update for IfAction SubSystem: '<S28>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      /* Update for If: '<S28>/If' incorporates:
       *  Constant: '<S30>/Constant'
       */
      srUpdateBC(Robot_calibration_Ipos_DW.IfActionSubsystem1_SubsysRanBC);

      /* End of Update for SubSystem: '<S28>/If Action Subsystem1' */
    }

    /* End of If: '<S28>/If' */
    srUpdateBC(Robot_calibration_Ipos_DW.Subsystem3_SubsysRanBC);
  }

  /* End of Logic: '<S27>/NOT' */
  /* End of Outputs for SubSystem: '<S26>/Subsystem3' */

  /* S-Function (ec_IposResetEnc): '<S22>/Reset EncoderR' */

  /* Level2 S-Function Block: '<S22>/Reset EncoderR' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S31>/Gain' */
  Robot_calibration_Ipos_B.Gain_h = Robot_calibration_Ipos_P.Gain_Gain_h *
    Robot_calibration_Ipos_B.Sum2;

  /* S-Function (dweakint): '<S31>/Dctintegrator' */

  /* Level2 S-Function Block: '<S31>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[6];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S31>/Dctleadlag' */

  /* Level2 S-Function Block: '<S31>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[7];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S31>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S31>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[8];
    sfcnOutputs(rts,0);
  }

  /* Product: '<S22>/Product' */
  Robot_calibration_Ipos_B.Product = Robot_calibration_Ipos_B.Dct1lowpass *
    Robot_calibration_Ipos_B.homeControllerEnabled_c;

  /* Switch: '<S22>/Homing Running Switch' */
  if (Robot_calibration_Ipos_B.homingBusy_jt >=
      Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold_g) {
    /* Switch: '<S22>/Homing Running Switch' */
    Robot_calibration_Ipos_B.HomingRunningSwitch =
      Robot_calibration_Ipos_B.Product;
  } else {
    /* Switch: '<S22>/Homing Running Switch' */
    Robot_calibration_Ipos_B.HomingRunningSwitch = Robot_calibration_Ipos_B.Sum4;
  }

  /* End of Switch: '<S22>/Homing Running Switch' */
  /* Gain: '<S32>/Gain' incorporates:
   *  Sum: '<S22>/Sum1'
   */
  Robot_calibration_Ipos_B.Gain_p = (Robot_calibration_Ipos_B.airBagRef_n -
    Robot_calibration_Ipos_B.Gain) * Robot_calibration_Ipos_P.Gain_Gain_c;

  /* S-Function (dleadlag): '<S32>/Dctleadlag' */

  /* Level2 S-Function Block: '<S32>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[9];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S32>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S32>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[10];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S22>/AirbagSwitch' incorporates:
   *  Logic: '<S22>/Logical Operator1'
   */
  if (!(Robot_calibration_Ipos_B.airBagEnabled_m != 0.0)) {
    /* Switch: '<S22>/AirbagSwitch' */
    Robot_calibration_Ipos_B.AirbagSwitch =
      Robot_calibration_Ipos_B.HomingRunningSwitch;
  } else {
    /* Switch: '<S22>/AirbagSwitch' */
    Robot_calibration_Ipos_B.AirbagSwitch =
      Robot_calibration_Ipos_B.Dct1lowpass_i;
  }

  /* End of Switch: '<S22>/AirbagSwitch' */
  /* Product: '<S22>/Product1' */
  Robot_calibration_Ipos_B.Product1 = Robot_calibration_Ipos_B.AirbagSwitch *
    Robot_calibration_Ipos_B.controlEnabled_i;

  /* Gain: '<S22>/Gain1' */
  Robot_calibration_Ipos_B.Saturation1 = Robot_calibration_Ipos_P.Gain1_Gain_m *
    Robot_calibration_Ipos_B.Product1;

  /* Saturate: '<S22>/Saturation1' */
  if (Robot_calibration_Ipos_B.Saturation1 >
      Robot_calibration_Ipos_P.Saturation1_UpperSat) {
    /* Gain: '<S22>/Gain1' incorporates:
     *  Saturate: '<S22>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1 =
      Robot_calibration_Ipos_P.Saturation1_UpperSat;
  } else if (Robot_calibration_Ipos_B.Saturation1 <
             Robot_calibration_Ipos_P.Saturation1_LowerSat) {
    /* Gain: '<S22>/Gain1' incorporates:
     *  Saturate: '<S22>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1 =
      Robot_calibration_Ipos_P.Saturation1_LowerSat;
  }

  /* End of Saturate: '<S22>/Saturation1' */
  /* S-Function (ec_IposResetEnc): '<S23>/Reset EncoderR1' */

  /* Level2 S-Function Block: '<S23>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[11];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S38>/Gain1' */
  Robot_calibration_Ipos_B.Gain1_p = Robot_calibration_Ipos_P.Gain1_Gain_o *
    Robot_calibration_Ipos_B.Sum2_a;

  /* S-Function (dweakint): '<S38>/Dctintegrator' */

  /* Level2 S-Function Block: '<S38>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[12];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S38>/Dctleadlag' */

  /* Level2 S-Function Block: '<S38>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[13];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S38>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S38>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[14];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S39>/Gain1' incorporates:
   *  Sum: '<S23>/Sum1'
   */
  Robot_calibration_Ipos_B.Gain1_o = (Robot_calibration_Ipos_B.airBagRef_j -
    Robot_calibration_Ipos_B.Gain1) * Robot_calibration_Ipos_P.Gain1_Gain_h;

  /* S-Function (dleadlag): '<S39>/Dctleadlag' */

  /* Level2 S-Function Block: '<S39>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[15];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S39>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S39>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[16];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S23>/AirbagSwitch' incorporates:
   *  Logic: '<S23>/Logical Operator1'
   */
  if (!(Robot_calibration_Ipos_B.airBagEnabled_o != 0.0)) {
    /* Switch: '<S23>/Homing Running Switch' incorporates:
     *  Product: '<S23>/Product'
     */
    if (Robot_calibration_Ipos_B.homingBusy_i >=
        Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold) {
      Robot_calibration_Ipos_B.fy2_tmp = Robot_calibration_Ipos_B.Dct1lowpass_k *
        Robot_calibration_Ipos_B.homeControllerEnabled_a;
    } else {
      Robot_calibration_Ipos_B.fy2_tmp = Robot_calibration_Ipos_B.Sum5;
    }

    /* End of Switch: '<S23>/Homing Running Switch' */
  } else {
    Robot_calibration_Ipos_B.fy2_tmp = Robot_calibration_Ipos_B.Dct1lowpass_j;
  }

  /* End of Switch: '<S23>/AirbagSwitch' */

  /* Gain: '<S23>/Gain' incorporates:
   *  Product: '<S23>/Product1'
   */
  Robot_calibration_Ipos_B.Saturation1_n = Robot_calibration_Ipos_B.fy2_tmp *
    Robot_calibration_Ipos_B.controlEnabled_p *
    Robot_calibration_Ipos_P.Gain_Gain_cj;

  /* Saturate: '<S23>/Saturation1' */
  if (Robot_calibration_Ipos_B.Saturation1_n >
      Robot_calibration_Ipos_P.Saturation1_UpperSat_e) {
    /* Gain: '<S23>/Gain' incorporates:
     *  Saturate: '<S23>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1_n =
      Robot_calibration_Ipos_P.Saturation1_UpperSat_e;
  } else if (Robot_calibration_Ipos_B.Saturation1_n <
             Robot_calibration_Ipos_P.Saturation1_LowerSat_p) {
    /* Gain: '<S23>/Gain' incorporates:
     *  Saturate: '<S23>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1_n =
      Robot_calibration_Ipos_P.Saturation1_LowerSat_p;
  }

  /* End of Saturate: '<S23>/Saturation1' */

  /* S-Function (ec_IposResetEnc): '<S24>/Reset EncoderR1' */

  /* Level2 S-Function Block: '<S24>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[17];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S48>/Gain' */
  Robot_calibration_Ipos_B.Gain_i = Robot_calibration_Ipos_P.Gain_Gain_cr *
    Robot_calibration_Ipos_B.Sum2_e;

  /* S-Function (dweakint): '<S48>/Dctintegrator' */

  /* Level2 S-Function Block: '<S48>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[18];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S48>/Dctleadlag' */

  /* Level2 S-Function Block: '<S48>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[19];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S48>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S48>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[20];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<S49>/Gain' incorporates:
   *  Sum: '<S24>/Sum1'
   */
  Robot_calibration_Ipos_B.Gain_f = (Robot_calibration_Ipos_B.airBagRef -
    Robot_calibration_Ipos_B.Gain2) * Robot_calibration_Ipos_P.Gain_Gain_l;

  /* S-Function (dleadlag): '<S49>/Dctleadlag' */

  /* Level2 S-Function Block: '<S49>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[21];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S49>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S49>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[22];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S24>/AirbagSwitch' incorporates:
   *  Logic: '<S24>/Logical Operator1'
   */
  if (!(Robot_calibration_Ipos_B.airBagEnabled != 0.0)) {
    /* Switch: '<S24>/Homing Running Switch' incorporates:
     *  Product: '<S24>/Product'
     */
    if (Robot_calibration_Ipos_B.homingBusy_j >=
        Robot_calibration_Ipos_P.HomingRunningSwitch_Threshold_d) {
      Robot_calibration_Ipos_B.fy2_tmp = Robot_calibration_Ipos_B.Dct1lowpass_p *
        Robot_calibration_Ipos_B.homeControllerEnabled_m;
    } else {
      Robot_calibration_Ipos_B.fy2_tmp = Robot_calibration_Ipos_B.Sum6;
    }

    /* End of Switch: '<S24>/Homing Running Switch' */
  } else {
    Robot_calibration_Ipos_B.fy2_tmp = Robot_calibration_Ipos_B.Dct1lowpass_a;
  }

  /* End of Switch: '<S24>/AirbagSwitch' */

  /* Gain: '<S24>/Gain' incorporates:
   *  Product: '<S24>/Product1'
   */
  Robot_calibration_Ipos_B.Saturation1_a = Robot_calibration_Ipos_B.fy2_tmp *
    Robot_calibration_Ipos_B.controlEnabled *
    Robot_calibration_Ipos_P.Gain_Gain_g;

  /* Saturate: '<S24>/Saturation1' */
  if (Robot_calibration_Ipos_B.Saturation1_a >
      Robot_calibration_Ipos_P.Saturation1_UpperSat_i) {
    /* Gain: '<S24>/Gain' incorporates:
     *  Saturate: '<S24>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1_a =
      Robot_calibration_Ipos_P.Saturation1_UpperSat_i;
  } else if (Robot_calibration_Ipos_B.Saturation1_a <
             Robot_calibration_Ipos_P.Saturation1_LowerSat_n) {
    /* Gain: '<S24>/Gain' incorporates:
     *  Saturate: '<S24>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1_a =
      Robot_calibration_Ipos_P.Saturation1_LowerSat_n;
  }

  /* End of Saturate: '<S24>/Saturation1' */

  /* S-Function (ec_IposResetEnc): '<S25>/Reset EncoderR1' */

  /* Level2 S-Function Block: '<S25>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[23];
    sfcnOutputs(rts,0);
  }

  /* DiscreteIntegrator: '<S25>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_B.DiscreteTimeIntegrator_i =
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k;

  /* Gain: '<S59>/Gain1' incorporates:
   *  Sum: '<S25>/Sum1'
   */
  Robot_calibration_Ipos_B.Gain1_a =
    (Robot_calibration_Ipos_B.DiscreteTimeIntegrator_i -
     Robot_calibration_Ipos_B.Gain3) * Robot_calibration_Ipos_P.Gain1_Gain_ja;

  /* S-Function (dweakint): '<S59>/Dctintegrator3' */

  /* Level2 S-Function Block: '<S59>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[24];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dlowpass1): '<S59>/Dct1lowpass' */

  /* Level2 S-Function Block: '<S59>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[25];
    sfcnOutputs(rts,0);
  }

  /* S-Function (dleadlag): '<S59>/Dctleadlag' */

  /* Level2 S-Function Block: '<S59>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[26];
    sfcnOutputs(rts,0);
  }

  /* Switch: '<S25>/Homing Running Switch' */
  if (Robot_calibration_Ipos_B.homingBusy >=
      Robot_calibration_Ipos_P.HomingRunningSwitch_Threshol_lq) {
    /* Switch: '<S25>/Homing Running Switch' incorporates:
     *  Product: '<S25>/Product'
     */
    Robot_calibration_Ipos_B.HomingRunningSwitch_e =
      Robot_calibration_Ipos_B.Dctleadlag_k *
      Robot_calibration_Ipos_B.homeControllerEnabled;
  } else {
    /* Switch: '<S25>/Homing Running Switch' */
    Robot_calibration_Ipos_B.HomingRunningSwitch_e =
      Robot_calibration_Ipos_B.Dctleadlag_ei;
  }

  /* End of Switch: '<S25>/Homing Running Switch' */
  /* Gain: '<S25>/Gain' */
  Robot_calibration_Ipos_B.Saturation1_d = Robot_calibration_Ipos_P.Gain_Gain_j *
    Robot_calibration_Ipos_B.HomingRunningSwitch_e;

  /* Saturate: '<S25>/Saturation1' */
  if (Robot_calibration_Ipos_B.Saturation1_d >
      Robot_calibration_Ipos_P.Saturation1_UpperSat_o) {
    /* Gain: '<S25>/Gain' incorporates:
     *  Saturate: '<S25>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1_d =
      Robot_calibration_Ipos_P.Saturation1_UpperSat_o;
  } else if (Robot_calibration_Ipos_B.Saturation1_d <
             Robot_calibration_Ipos_P.Saturation1_LowerSat_g) {
    /* Gain: '<S25>/Gain' incorporates:
     *  Saturate: '<S25>/Saturation1'
     */
    Robot_calibration_Ipos_B.Saturation1_d =
      Robot_calibration_Ipos_P.Saturation1_LowerSat_g;
  }

  /* End of Saturate: '<S25>/Saturation1' */

  /* Sum: '<S16>/Add' */
  Robot_calibration_Ipos_B.Add = ((Robot_calibration_Ipos_B.Ready_g +
    Robot_calibration_Ipos_B.Ready_c) + Robot_calibration_Ipos_B.Ready_b) +
    Robot_calibration_Ipos_B.Ready;

  /* Stop: '<S25>/Stop Simulation' */
  if (Robot_calibration_Ipos_B.StopSim != 0.0) {
    rtmSetStopRequested(Robot_calibration_Ipos_M, 1);
  }

  /* End of Stop: '<S25>/Stop Simulation' */

  /* Stop: '<S24>/Stop Simulation' */
  if (Robot_calibration_Ipos_B.StopSim_c != 0.0) {
    rtmSetStopRequested(Robot_calibration_Ipos_M, 1);
  }

  /* End of Stop: '<S24>/Stop Simulation' */

  /* Constant: '<S51>/Constant1' */
  Robot_calibration_Ipos_B.Constant1_f =
    Robot_calibration_Ipos_P.Constant1_Value_e;

  /* Sum: '<S37>/Diff' incorporates:
   *  Sum: '<S51>/Sum'
   */
  Robot_calibration_Ipos_B.LimitAcceleration_h =
    Robot_calibration_Ipos_B.toPoint + Robot_calibration_Ipos_B.Constant1_f;

  /* RateLimiter: '<S51>/Limit Speed' */
  Robot_calibration_Ipos_B.fy2_tmp =
    Robot_calibration_Ipos_B.LimitAcceleration_h -
    Robot_calibration_Ipos_DW.PrevY;
  if (Robot_calibration_Ipos_B.fy2_tmp >
      Robot_calibration_Ipos_P.LimitSpeed_RisingLim *
      Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitSpeed_RisingLim *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY;
  } else if (Robot_calibration_Ipos_B.fy2_tmp <
             Robot_calibration_Ipos_P.LimitSpeed_FallingLim *
             Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitSpeed_FallingLim *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY;
  }

  Robot_calibration_Ipos_DW.PrevY = Robot_calibration_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S51>/Limit Speed' */

  /* SampleTimeMath: '<S58>/TSamp'
   *
   * About '<S58>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  Robot_calibration_Ipos_B.TSamp = Robot_calibration_Ipos_B.LimitAcceleration_h *
    Robot_calibration_Ipos_P.TSamp_WtEt;

  /* Sum: '<S37>/Diff' incorporates:
   *  Sum: '<S58>/Diff'
   *  UnitDelay: '<S58>/UD'
   */
  Robot_calibration_Ipos_B.LimitAcceleration_h = Robot_calibration_Ipos_B.TSamp
    - Robot_calibration_Ipos_DW.UD_DSTATE;

  /* RateLimiter: '<S51>/Limit Acceleration' */
  Robot_calibration_Ipos_B.fy2_tmp =
    Robot_calibration_Ipos_B.LimitAcceleration_h -
    Robot_calibration_Ipos_DW.PrevY_j;
  if (Robot_calibration_Ipos_B.fy2_tmp >
      Robot_calibration_Ipos_P.LimitAcceleration_RisingLim *
      Robot_calibration_Ipos_period) {
    /* RateLimiter: '<S51>/Limit Acceleration' */
    Robot_calibration_Ipos_B.LimitAcceleration =
      Robot_calibration_Ipos_P.LimitAcceleration_RisingLim *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_j;
  } else if (Robot_calibration_Ipos_B.fy2_tmp <
             Robot_calibration_Ipos_P.LimitAcceleration_FallingLim *
             Robot_calibration_Ipos_period) {
    /* RateLimiter: '<S51>/Limit Acceleration' */
    Robot_calibration_Ipos_B.LimitAcceleration =
      Robot_calibration_Ipos_P.LimitAcceleration_FallingLim *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_j;
  } else {
    /* RateLimiter: '<S51>/Limit Acceleration' */
    Robot_calibration_Ipos_B.LimitAcceleration =
      Robot_calibration_Ipos_B.LimitAcceleration_h;
  }

  Robot_calibration_Ipos_DW.PrevY_j = Robot_calibration_Ipos_B.LimitAcceleration;

  /* End of RateLimiter: '<S51>/Limit Acceleration' */

  /* DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_B.DiscreteTimeIntegrator_pv =
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j;

  /* Stop: '<S23>/Stop Simulation' */
  if (Robot_calibration_Ipos_B.StopSim_g != 0.0) {
    rtmSetStopRequested(Robot_calibration_Ipos_M, 1);
  }

  /* End of Stop: '<S23>/Stop Simulation' */

  /* Constant: '<S40>/Constant1' */
  Robot_calibration_Ipos_B.Constant1_e =
    Robot_calibration_Ipos_P.Constant1_Value_a;

  /* Sum: '<S37>/Diff' incorporates:
   *  Sum: '<S40>/Sum'
   */
  Robot_calibration_Ipos_B.LimitAcceleration_h =
    Robot_calibration_Ipos_B.toPoint_j + Robot_calibration_Ipos_B.Constant1_e;

  /* RateLimiter: '<S40>/Limit Speed' */
  Robot_calibration_Ipos_B.fy2_tmp =
    Robot_calibration_Ipos_B.LimitAcceleration_h -
    Robot_calibration_Ipos_DW.PrevY_d;
  if (Robot_calibration_Ipos_B.fy2_tmp >
      Robot_calibration_Ipos_P.LimitSpeed_RisingLim_i *
      Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitSpeed_RisingLim_i *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_d;
  } else if (Robot_calibration_Ipos_B.fy2_tmp <
             Robot_calibration_Ipos_P.LimitSpeed_FallingLim_k *
             Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitSpeed_FallingLim_k *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_d;
  }

  Robot_calibration_Ipos_DW.PrevY_d =
    Robot_calibration_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S40>/Limit Speed' */

  /* SampleTimeMath: '<S47>/TSamp'
   *
   * About '<S47>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  Robot_calibration_Ipos_B.TSamp_d =
    Robot_calibration_Ipos_B.LimitAcceleration_h *
    Robot_calibration_Ipos_P.TSamp_WtEt_d;

  /* Sum: '<S37>/Diff' incorporates:
   *  Sum: '<S47>/Diff'
   *  UnitDelay: '<S47>/UD'
   */
  Robot_calibration_Ipos_B.LimitAcceleration_h =
    Robot_calibration_Ipos_B.TSamp_d - Robot_calibration_Ipos_DW.UD_DSTATE_c;

  /* RateLimiter: '<S40>/Limit Acceleration' */
  Robot_calibration_Ipos_B.fy2_tmp =
    Robot_calibration_Ipos_B.LimitAcceleration_h -
    Robot_calibration_Ipos_DW.PrevY_f;
  if (Robot_calibration_Ipos_B.fy2_tmp >
      Robot_calibration_Ipos_P.LimitAcceleration_RisingLim_k *
      Robot_calibration_Ipos_period) {
    /* RateLimiter: '<S40>/Limit Acceleration' */
    Robot_calibration_Ipos_B.LimitAcceleration_b =
      Robot_calibration_Ipos_P.LimitAcceleration_RisingLim_k *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_f;
  } else if (Robot_calibration_Ipos_B.fy2_tmp <
             Robot_calibration_Ipos_P.LimitAcceleration_FallingLim_m *
             Robot_calibration_Ipos_period) {
    /* RateLimiter: '<S40>/Limit Acceleration' */
    Robot_calibration_Ipos_B.LimitAcceleration_b =
      Robot_calibration_Ipos_P.LimitAcceleration_FallingLim_m *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_f;
  } else {
    /* RateLimiter: '<S40>/Limit Acceleration' */
    Robot_calibration_Ipos_B.LimitAcceleration_b =
      Robot_calibration_Ipos_B.LimitAcceleration_h;
  }

  Robot_calibration_Ipos_DW.PrevY_f =
    Robot_calibration_Ipos_B.LimitAcceleration_b;

  /* End of RateLimiter: '<S40>/Limit Acceleration' */

  /* DiscreteIntegrator: '<S40>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_B.DiscreteTimeIntegrator_e =
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o;

  /* Stop: '<S22>/Stop Simulation' */
  if (Robot_calibration_Ipos_B.StopSim_i != 0.0) {
    rtmSetStopRequested(Robot_calibration_Ipos_M, 1);
  }

  /* End of Stop: '<S22>/Stop Simulation' */

  /* Sum: '<S37>/Diff' incorporates:
   *  Sum: '<S34>/Sum'
   */
  Robot_calibration_Ipos_B.LimitAcceleration_h =
    Robot_calibration_Ipos_B.toPoint_d + Robot_calibration_Ipos_B.Constant1;

  /* RateLimiter: '<S34>/Limit Speed' */
  Robot_calibration_Ipos_B.fy2_tmp =
    Robot_calibration_Ipos_B.LimitAcceleration_h -
    Robot_calibration_Ipos_DW.PrevY_i;
  if (Robot_calibration_Ipos_B.fy2_tmp >
      Robot_calibration_Ipos_P.LimitSpeed_RisingLim_iu *
      Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitSpeed_RisingLim_iu *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_i;
  } else if (Robot_calibration_Ipos_B.fy2_tmp <
             Robot_calibration_Ipos_P.LimitSpeed_FallingLim_j *
             Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitSpeed_FallingLim_j *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_i;
  }

  Robot_calibration_Ipos_DW.PrevY_i =
    Robot_calibration_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S34>/Limit Speed' */

  /* SampleTimeMath: '<S37>/TSamp'
   *
   * About '<S37>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  Robot_calibration_Ipos_B.TSamp_k =
    Robot_calibration_Ipos_B.LimitAcceleration_h *
    Robot_calibration_Ipos_P.TSamp_WtEt_g;

  /* Sum: '<S37>/Diff' incorporates:
   *  UnitDelay: '<S37>/UD'
   */
  Robot_calibration_Ipos_B.LimitAcceleration_h =
    Robot_calibration_Ipos_B.TSamp_k - Robot_calibration_Ipos_DW.UD_DSTATE_cc;

  /* RateLimiter: '<S34>/Limit Acceleration' */
  Robot_calibration_Ipos_B.fy2_tmp =
    Robot_calibration_Ipos_B.LimitAcceleration_h -
    Robot_calibration_Ipos_DW.PrevY_k;
  if (Robot_calibration_Ipos_B.fy2_tmp >
      Robot_calibration_Ipos_P.LimitAcceleration_RisingLim_m *
      Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' incorporates:
     *  RateLimiter: '<S34>/Limit Acceleration'
     */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitAcceleration_RisingLim_m *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_k;
  } else if (Robot_calibration_Ipos_B.fy2_tmp <
             Robot_calibration_Ipos_P.LimitAcceleration_FallingLim_k *
             Robot_calibration_Ipos_period) {
    /* Sum: '<S37>/Diff' incorporates:
     *  RateLimiter: '<S34>/Limit Acceleration'
     */
    Robot_calibration_Ipos_B.LimitAcceleration_h =
      Robot_calibration_Ipos_P.LimitAcceleration_FallingLim_k *
      Robot_calibration_Ipos_period + Robot_calibration_Ipos_DW.PrevY_k;
  }

  Robot_calibration_Ipos_DW.PrevY_k =
    Robot_calibration_Ipos_B.LimitAcceleration_h;

  /* End of RateLimiter: '<S34>/Limit Acceleration' */

  /* Update for DiscreteIntegrator: '<S34>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE +=
    Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainval *
    Robot_calibration_Ipos_B.LimitAcceleration_h;

  /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g +=
    Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_i *
    Robot_calibration_Ipos_B.jogSpeed_o1;

  /* Update for DiscreteIntegrator: '<S23>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m +=
    Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_h *
    Robot_calibration_Ipos_B.jogSpeed_l;

  /* Update for UnitDelay: '<S23>/Unit Delay' */
  Robot_calibration_Ipos_DW.UnitDelay_DSTATE = Robot_calibration_Ipos_B.freddy_a;

  /* Update for DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a +=
    Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_o *
    Robot_calibration_Ipos_B.jogSpeed_o;

  /* Update for UnitDelay: '<S24>/Unit Delay' */
  Robot_calibration_Ipos_DW.UnitDelay_DSTATE_b = Robot_calibration_Ipos_B.freddy;

  /* Update for UnitDelay: '<S16>/Unit Delay' */
  Robot_calibration_Ipos_DW.UnitDelay_DSTATE_f = Robot_calibration_Ipos_B.Add;

  /* Update for Enabled SubSystem: '<Root>/Controller' incorporates:
   *  EnablePort: '<S1>/Enable '
   */
  if (Robot_calibration_Ipos_DW.Controller_MODE) {
    /* Update for UnitDelay: '<S12>/Delay Input1' incorporates:
     *  Constant: '<S4>/Object detection matrix'
     */
    memcpy(&Robot_calibration_Ipos_DW.DelayInput1_DSTATE[0],
           &Robot_calibration_Ipos_P.Objectdetectionmatrix_Value[0], 12U *
           sizeof(real_T));

    /* Update for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    Robot_calibration_Ipos_DW.Discreteintegrator_DSTATE +=
      Robot_calibration_Ipos_P.Discreteintegrator_gainval *
      Robot_calibration_Ipos_B.Saturation_c;
  }

  /* End of Update for SubSystem: '<Root>/Controller' */

  /* Update for UnitDelay: '<S16>/Unit Delay1' */
  Robot_calibration_Ipos_DW.UnitDelay1_DSTATE = Robot_calibration_Ipos_B.Add2;

  /* Update for Delay: '<S27>/Delay' */
  strncpy(&Robot_calibration_Ipos_DW.Delay_DSTATE[0],
          &Robot_calibration_Ipos_B.HomingRunningSwitch_c[0], 255U);
  Robot_calibration_Ipos_DW.Delay_DSTATE[255] = '\x00';

  /* Update for DiscreteIntegrator: '<S25>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k +=
    Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_g *
    Robot_calibration_Ipos_B.jogSpeed;

  /* Update for UnitDelay: '<S58>/UD' */
  Robot_calibration_Ipos_DW.UD_DSTATE = Robot_calibration_Ipos_B.TSamp;

  /* Update for DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j +=
    Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_n *
    Robot_calibration_Ipos_B.LimitAcceleration;

  /* Update for UnitDelay: '<S47>/UD' */
  Robot_calibration_Ipos_DW.UD_DSTATE_c = Robot_calibration_Ipos_B.TSamp_d;

  /* Update for DiscreteIntegrator: '<S40>/Discrete-Time Integrator' */
  Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o +=
    Robot_calibration_Ipos_P.DiscreteTimeIntegrator_gainva_j *
    Robot_calibration_Ipos_B.LimitAcceleration_b;

  /* Update for UnitDelay: '<S37>/UD' */
  Robot_calibration_Ipos_DW.UD_DSTATE_cc = Robot_calibration_Ipos_B.TSamp_k;

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)Robot_calibration_Ipos_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.00048828125s, 0.0s] */
    rtExtModeUpload(1, (real_T)Robot_calibration_Ipos_M->Timing.t[1]);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(Robot_calibration_Ipos_M)!=-1) &&
        !((rtmGetTFinal(Robot_calibration_Ipos_M)-
           Robot_calibration_Ipos_M->Timing.t[0]) >
          Robot_calibration_Ipos_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(Robot_calibration_Ipos_M, "Simulation finished");
    }

    if (rtmGetStopRequested(Robot_calibration_Ipos_M)) {
      rtmSetErrorStatus(Robot_calibration_Ipos_M, "Simulation finished");
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
  if (!(++Robot_calibration_Ipos_M->Timing.clockTick0)) {
    ++Robot_calibration_Ipos_M->Timing.clockTickH0;
  }

  Robot_calibration_Ipos_M->Timing.t[0] =
    Robot_calibration_Ipos_M->Timing.clockTick0 *
    Robot_calibration_Ipos_M->Timing.stepSize0 +
    Robot_calibration_Ipos_M->Timing.clockTickH0 *
    Robot_calibration_Ipos_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++Robot_calibration_Ipos_M->Timing.clockTick1)) {
      ++Robot_calibration_Ipos_M->Timing.clockTickH1;
    }

    Robot_calibration_Ipos_M->Timing.t[1] =
      Robot_calibration_Ipos_M->Timing.clockTick1 *
      Robot_calibration_Ipos_M->Timing.stepSize1 +
      Robot_calibration_Ipos_M->Timing.clockTickH1 *
      Robot_calibration_Ipos_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Robot_calibration_Ipos_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Robot_calibration_Ipos_M, 0,
                sizeof(RT_MODEL_Robot_calibration_Ipos_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Robot_calibration_Ipos_M->solverInfo,
                          &Robot_calibration_Ipos_M->Timing.simTimeStep);
    rtsiSetTPtr(&Robot_calibration_Ipos_M->solverInfo, &rtmGetTPtr
                (Robot_calibration_Ipos_M));
    rtsiSetStepSizePtr(&Robot_calibration_Ipos_M->solverInfo,
                       &Robot_calibration_Ipos_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Robot_calibration_Ipos_M->solverInfo,
                          (&rtmGetErrorStatus(Robot_calibration_Ipos_M)));
    rtsiSetRTModelPtr(&Robot_calibration_Ipos_M->solverInfo,
                      Robot_calibration_Ipos_M);
  }

  rtsiSetSimTimeStep(&Robot_calibration_Ipos_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Robot_calibration_Ipos_M->solverInfo,"FixedStepDiscrete");
  Robot_calibration_Ipos_M->solverInfoPtr =
    (&Robot_calibration_Ipos_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Robot_calibration_Ipos_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Robot_calibration_Ipos_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Robot_calibration_Ipos_M->Timing.sampleTimes =
      (&Robot_calibration_Ipos_M->Timing.sampleTimesArray[0]);
    Robot_calibration_Ipos_M->Timing.offsetTimes =
      (&Robot_calibration_Ipos_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Robot_calibration_Ipos_M->Timing.sampleTimes[0] = (0.0);
    Robot_calibration_Ipos_M->Timing.sampleTimes[1] = (0.00048828125);

    /* task offsets */
    Robot_calibration_Ipos_M->Timing.offsetTimes[0] = (0.0);
    Robot_calibration_Ipos_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Robot_calibration_Ipos_M, &Robot_calibration_Ipos_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = Robot_calibration_Ipos_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Robot_calibration_Ipos_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Robot_calibration_Ipos_M, -1);
  Robot_calibration_Ipos_M->Timing.stepSize0 = 0.00048828125;
  Robot_calibration_Ipos_M->Timing.stepSize1 = 0.00048828125;

  /* External mode info */
  Robot_calibration_Ipos_M->Sizes.checksums[0] = (3010107738U);
  Robot_calibration_Ipos_M->Sizes.checksums[1] = (2666968715U);
  Robot_calibration_Ipos_M->Sizes.checksums[2] = (3655197131U);
  Robot_calibration_Ipos_M->Sizes.checksums[3] = (2743539604U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[29];
    Robot_calibration_Ipos_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.Controller_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.Controller_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.Controller_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.Controller_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.Controller_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &Robot_calibration_Ipos_DW.Subsystem3_SubsysRanBC;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = &rtAlwaysEnabled;
    systemRan[27] = &rtAlwaysEnabled;
    systemRan[28] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Robot_calibration_Ipos_M->extModeInfo,
      &Robot_calibration_Ipos_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Robot_calibration_Ipos_M->extModeInfo,
                        Robot_calibration_Ipos_M->Sizes.checksums);
    rteiSetTPtr(Robot_calibration_Ipos_M->extModeInfo, rtmGetTPtr
                (Robot_calibration_Ipos_M));
  }

  Robot_calibration_Ipos_M->solverInfoPtr =
    (&Robot_calibration_Ipos_M->solverInfo);
  Robot_calibration_Ipos_M->Timing.stepSize = (0.00048828125);
  rtsiSetFixedStepSize(&Robot_calibration_Ipos_M->solverInfo, 0.00048828125);
  rtsiSetSolverMode(&Robot_calibration_Ipos_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &Robot_calibration_Ipos_B), 0,
                sizeof(B_Robot_calibration_Ipos_T));

  /* states (dwork) */
  (void) memset((void *)&Robot_calibration_Ipos_DW, 0,
                sizeof(DW_Robot_calibration_Ipos_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Robot_calibration_Ipos_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 18;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Robot_calibration_Ipos_M->NonInlinedSFcns.sfcnInfo;
    Robot_calibration_Ipos_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Robot_calibration_Ipos_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Robot_calibration_Ipos_M->Sizes.numSampTimes);
    Robot_calibration_Ipos_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Robot_calibration_Ipos_M)[0]);
    Robot_calibration_Ipos_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (Robot_calibration_Ipos_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   Robot_calibration_Ipos_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Robot_calibration_Ipos_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Robot_calibration_Ipos_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Robot_calibration_Ipos_M));
    rtssSetStepSizePtr(sfcnInfo, &Robot_calibration_Ipos_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Robot_calibration_Ipos_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Robot_calibration_Ipos_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Robot_calibration_Ipos_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Robot_calibration_Ipos_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Robot_calibration_Ipos_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Robot_calibration_Ipos_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Robot_calibration_Ipos_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Robot_calibration_Ipos_M->solverInfoPtr);
  }

  Robot_calibration_Ipos_M->Sizes.numSFcns = (27);

  /* register each child */
  {
    (void) memset((void *)
                  &Robot_calibration_Ipos_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  27*sizeof(SimStruct));
    Robot_calibration_Ipos_M->childSfunctions =
      (&Robot_calibration_Ipos_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 27; i++) {
        Robot_calibration_Ipos_M->childSfunctions[i] =
          (&Robot_calibration_Ipos_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S5>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain1_k;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctintegrator3_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "Robot_calibration_Ipos/Controller/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator3_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_calibration_Ipos_DW.Dctintegrator3_RWORK_e[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctintegrator3_RWORK_e[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S5>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctintegrator3_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/Controller/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_e
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_e[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S5>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dct1lowpass_b;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag_ei));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/Controller/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_h[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_h[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S3>/S-Function (ec_Supervisor) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "Robot_calibration_Ipos/Supervisor2/S-Function");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.SFunction_P2_Size);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S17>/ec_Ipos (Ipos360) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 6);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        ssSetInputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);
        ssSetInputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Saturation1_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.UPtrs1;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Saturation1_n;
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.UPtrs2;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Saturation1;
          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.UPtrs3;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Saturation1_d;
          ssSetInputPortSignalPtrs(rts, 3, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.UPtrs4;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Doubleclickswitch;
          ssSetInputPortSignalPtrs(rts, 4, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }

        /* port 5 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.UPtrs5;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Saturation;
          ssSetInputPortSignalPtrs(rts, 5, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 5, 1);
          ssSetInputPortWidth(rts, 5, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 5);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.ec_Ipos_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &Robot_calibration_Ipos_B.ec_Ipos_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &Robot_calibration_Ipos_B.ec_Ipos_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real_T *)
            &Robot_calibration_Ipos_B.ec_Ipos_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real_T *)
            &Robot_calibration_Ipos_B.ec_Ipos_o5));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ipos");
      ssSetPath(rts, "Robot_calibration_Ipos/RobotArm/Subsystem/Ipos/ec_Ipos");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.ec_Ipos_P1_Size);
      }

      /* registration */
      Ipos360(rts);
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
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetInputPortConnected(rts, 5, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
      ssSetInputPortBufferDstPort(rts, 5, -1);
    }

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S22>/Reset EncoderR (ec_IposResetEnc) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.resetEnc_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller R/Reset EncoderR");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.ResetEncoderR_P1_Size);
      }

      /* registration */
      ec_IposResetEnc(rts);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S31>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctintegrator));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller R/ /Dctintegrator");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctintegrator_RWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctintegrator_RWORK[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S31>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [7]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctintegrator;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller R/ /Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size_h);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S31>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [8]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctleadlag;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller R/ /Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S32>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [9]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller R/   /Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size_k);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size_hn);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_k[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S32>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctleadlag_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller R/   /Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_a);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_l);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_a
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_a[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S23>/Reset EncoderR1 (ec_IposResetEnc) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.resetEnc_d;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR1");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller X/Reset EncoderR1");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.ResetEncoderR1_P1_Size);
      }

      /* registration */
      ec_IposResetEnc(rts);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S38>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain1_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctintegrator_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctintegrator");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator_P2_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_calibration_Ipos_DW.Dctintegrator_RWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctintegrator_RWORK_m[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S38>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctintegrator_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag_h));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size_g);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_g[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S38>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctleadlag_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_m3);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_b);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_n
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_n[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S39>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain1_o;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag_b));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size_m);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_j[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_j[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S39>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctleadlag_b;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_g);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_k
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_k[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S24>/Reset EncoderR1 (ec_IposResetEnc) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.resetEnc_h;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR1");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller Z/Reset EncoderR1");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.ResetEncoderR1_P1_Size_d);
      }

      /* registration */
      ec_IposResetEnc(rts);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S48>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctintegrator_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    /Dctintegrator");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator_P2_Size_o);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_calibration_Ipos_DW.Dctintegrator_RWORK_i[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctintegrator_RWORK_i[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S48>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctintegrator_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag_m));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    /Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size_ch);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size_h);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size_f);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_n[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S48>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctleadlag_m;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller Z/    /Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_ni);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_a);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_g
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_g[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S49>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     /Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size_by);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size_j);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size_oi);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_i[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_i[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S49>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctleadlag_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Controller Z/     /Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_h
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_h[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S25>/Reset EncoderR1 (ec_IposResetEnc) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [23]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.resetEnc;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR1");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Reset EncoderR1");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.ResetEncoderR1_P1_Size_b);
      }

      /* registration */
      ec_IposResetEnc(rts);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S59>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [24]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Gain1_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctintegrator3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator3_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctintegrator3_P2_Size_b);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_calibration_Ipos_DW.Dctintegrator3_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctintegrator3_RWORK[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S59>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [25]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dctintegrator3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dct1lowpass_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dct1lowpass_P2_Size_aj);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_ay[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn25.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dct1lowpass_RWORK_ay[0]);
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

    /* Level2 S-Function Block: Robot_calibration_Ipos/<S59>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.blkInfo2[26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_calibration_Ipos_M->NonInlinedSFcns.inputOutputPortInfo2[26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_calibration_Ipos_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods2
                           [26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods3
                           [26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_calibration_Ipos_M->NonInlinedSFcns.methods4
                           [26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_calibration_Ipos_M->NonInlinedSFcns.statesInfo2
                         [26]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.UPtrs0;
          sfcnUPtrs[0] = &Robot_calibration_Ipos_B.Dct1lowpass_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_calibration_Ipos_B.Dctleadlag_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_calibration_Ipos/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,Robot_calibration_Ipos_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P1_Size_l);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_calibration_Ipos_P.Dctleadlag_P3_Size_d);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_calibration_Ipos_M->NonInlinedSFcns.Sfcn26.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_calibration_Ipos_DW.Dctleadlag_RWORK_o[0]);
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
  }

  /* Start for S-Function (ec_Supervisor): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S34>/Constant1' */
  Robot_calibration_Ipos_B.Constant1 =
    Robot_calibration_Ipos_P.Constant1_Value_b;

  /* Start for Constant: '<S16>/set_robot_calibration_x' */
  Robot_calibration_Ipos_B.set_robot_calibration_x =
    Robot_calibration_Ipos_P.set_robot_calibration_x_Value;

  /* Start for Constant: '<S16>/set_robot_calibration_z' */
  Robot_calibration_Ipos_B.set_robot_calibration_z =
    Robot_calibration_Ipos_P.set_robot_calibration_z_Value;

  /* Start for Constant: '<S16>/set_robot_calibration_r' */
  Robot_calibration_Ipos_B.set_robot_calibration_r =
    Robot_calibration_Ipos_P.set_robot_calibration_r_Value;

  /* Start for Enabled SubSystem: '<Root>/Controller' */
  Robot_calibration_Ipos_DW.Controller_MODE = false;

  /* Start for S-Function (dweakint): '<S5>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S5>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S5>/Dctleadlag' */
  /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<Root>/Controller' */

  /* Start for Enabled SubSystem: '<S26>/Subsystem3' */
  /* Start for IfAction SubSystem: '<S28>/If Action Subsystem' */
  Robot_calibr_SerialWrite1_Start(&Robot_calibration_Ipos_DW.SerialWrite1);

  /* End of Start for SubSystem: '<S28>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S28>/If Action Subsystem1' */
  Robot_calibr_SerialWrite1_Start(&Robot_calibration_Ipos_DW.SerialWrite);

  /* End of Start for SubSystem: '<S28>/If Action Subsystem1' */
  /* End of Start for SubSystem: '<S26>/Subsystem3' */

  /* Start for S-Function (dweakint): '<S31>/Dctintegrator' */
  /* Level2 S-Function Block: '<S31>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[6];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S31>/Dctleadlag' */
  /* Level2 S-Function Block: '<S31>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S31>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S31>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S32>/Dctleadlag' */
  /* Level2 S-Function Block: '<S32>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S32>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S32>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S38>/Dctintegrator' */
  /* Level2 S-Function Block: '<S38>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S38>/Dctleadlag' */
  /* Level2 S-Function Block: '<S38>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S38>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S38>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S39>/Dctleadlag' */
  /* Level2 S-Function Block: '<S39>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S39>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S39>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S48>/Dctintegrator' */
  /* Level2 S-Function Block: '<S48>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S48>/Dctleadlag' */
  /* Level2 S-Function Block: '<S48>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S48>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S48>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S49>/Dctleadlag' */
  /* Level2 S-Function Block: '<S49>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S49>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S49>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S59>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S59>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S59>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S59>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[25];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S59>/Dctleadlag' */
  /* Level2 S-Function Block: '<S59>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[26];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S51>/Constant1' */
  Robot_calibration_Ipos_B.Constant1_f =
    Robot_calibration_Ipos_P.Constant1_Value_e;

  /* Start for Constant: '<S40>/Constant1' */
  Robot_calibration_Ipos_B.Constant1_e =
    Robot_calibration_Ipos_P.Constant1_Value_a;

  {
    FILE * a;
    int32_T i;

    /* InitializeConditions for DiscreteIntegrator: '<S34>/Discrete-Time Integrator' */
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE =
      Robot_calibration_Ipos_B.Constant1;

    /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_g =
      Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S23>/Discrete-Time Integrator' */
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_m =
      Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC_c;

    /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
    Robot_calibration_Ipos_DW.UnitDelay_DSTATE =
      Robot_calibration_Ipos_P.UnitDelay_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S24>/Discrete-Time Integrator' */
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_a =
      Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC_o;

    /* InitializeConditions for UnitDelay: '<S24>/Unit Delay' */
    Robot_calibration_Ipos_DW.UnitDelay_DSTATE_b =
      Robot_calibration_Ipos_P.UnitDelay_InitialCondition_d;

    /* InitializeConditions for UnitDelay: '<S16>/Unit Delay' */
    Robot_calibration_Ipos_DW.UnitDelay_DSTATE_f =
      Robot_calibration_Ipos_P.UnitDelay_InitialCondition_k;

    /* InitializeConditions for UnitDelay: '<S16>/Unit Delay1' */
    Robot_calibration_Ipos_DW.UnitDelay1_DSTATE =
      Robot_calibration_Ipos_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Delay: '<S27>/Delay' */
    strncpy(&Robot_calibration_Ipos_DW.Delay_DSTATE[0],
            &Robot_calibration_Ipos_P.Delay_InitialCondition[0], 255U);
    Robot_calibration_Ipos_DW.Delay_DSTATE[255] = '\x00';

    /* InitializeConditions for DiscreteIntegrator: '<S25>/Discrete-Time Integrator' */
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_k =
      Robot_calibration_Ipos_P.DiscreteTimeIntegrator_IC_co;

    /* InitializeConditions for RateLimiter: '<S51>/Limit Speed' */
    Robot_calibration_Ipos_DW.PrevY = Robot_calibration_Ipos_P.LimitSpeed_IC;

    /* InitializeConditions for UnitDelay: '<S58>/UD' */
    Robot_calibration_Ipos_DW.UD_DSTATE =
      Robot_calibration_Ipos_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for RateLimiter: '<S51>/Limit Acceleration' */
    Robot_calibration_Ipos_DW.PrevY_j =
      Robot_calibration_Ipos_P.LimitAcceleration_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S51>/Discrete-Time Integrator' */
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_j =
      Robot_calibration_Ipos_B.Constant1_f;

    /* InitializeConditions for RateLimiter: '<S40>/Limit Speed' */
    Robot_calibration_Ipos_DW.PrevY_d = Robot_calibration_Ipos_P.LimitSpeed_IC_a;

    /* InitializeConditions for UnitDelay: '<S47>/UD' */
    Robot_calibration_Ipos_DW.UD_DSTATE_c =
      Robot_calibration_Ipos_P.DiscreteDerivative_ICPrevScal_e;

    /* InitializeConditions for RateLimiter: '<S40>/Limit Acceleration' */
    Robot_calibration_Ipos_DW.PrevY_f =
      Robot_calibration_Ipos_P.LimitAcceleration_IC_k;

    /* InitializeConditions for DiscreteIntegrator: '<S40>/Discrete-Time Integrator' */
    Robot_calibration_Ipos_DW.DiscreteTimeIntegrator_DSTATE_o =
      Robot_calibration_Ipos_B.Constant1_e;

    /* InitializeConditions for RateLimiter: '<S34>/Limit Speed' */
    Robot_calibration_Ipos_DW.PrevY_i = Robot_calibration_Ipos_P.LimitSpeed_IC_e;

    /* InitializeConditions for UnitDelay: '<S37>/UD' */
    Robot_calibration_Ipos_DW.UD_DSTATE_cc =
      Robot_calibration_Ipos_P.DiscreteDerivative_ICPrevScal_h;

    /* InitializeConditions for RateLimiter: '<S34>/Limit Acceleration' */
    Robot_calibration_Ipos_DW.PrevY_k =
      Robot_calibration_Ipos_P.LimitAcceleration_IC_i;

    /* SystemInitialize for MATLAB Function: '<S23>/quintic trajectory time' */
    Robo_quintictrajectorytime_Init
      (&Robot_calibration_Ipos_DW.sf_quintictrajectorytime);

    /* SystemInitialize for MATLAB Function: '<S24>/quintic trajectory time' */
    Robo_quintictrajectorytime_Init
      (&Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i);

    /* SystemInitialize for Chart: '<S22>/Supervisor' */
    Robot_calibration_Ipos_DW.sfEvent_m = -1;
    Robot_calibration_Ipos_DW.temporalCounter_i1_b = 0U;
    Robot_calibration_Ipos_DW.is_active_c12_Robot_calibration = 0U;
    Robot_calibration_Ipos_DW.is_c12_Robot_calibration_Ipos = 0U;
    Robot_calibration_Ipos_DW.currentcarPos_b = 0.0;
    Robot_calibration_Ipos_B.jogSpeed_o1 = 0.0;
    Robot_calibration_Ipos_B.toPoint_d = 0.0;
    Robot_calibration_Ipos_B.homeControllerEnabled_c = 0.0;
    Robot_calibration_Ipos_B.resetEnc_g = 0.0;
    Robot_calibration_Ipos_B.freddy_n = 0.0;
    Robot_calibration_Ipos_B.homingBusy_jt = 1.0;
    Robot_calibration_Ipos_B.airBagEnabled_m = 0.0;
    Robot_calibration_Ipos_B.airBagRef_n = 0.0;
    Robot_calibration_Ipos_B.controlEnabled_i = 1.0;
    Robot_calibration_Ipos_B.Ready_g = 1.0;
    Robot_calibration_Ipos_B.StopSim_i = 0.0;

    /* SystemInitialize for Chart: '<S23>/Supervisor2' */
    Robot_calibration_Ipos_DW.sfEvent_j = -1;
    Robot_calibration_Ipos_DW.temporalCounter_i1_di = 0U;
    Robot_calibration_Ipos_DW.is_active_c16_Robot_calibration = 0U;
    Robot_calibration_Ipos_DW.is_c16_Robot_calibration_Ipos = 0U;
    Robot_calibration_Ipos_DW.currentcarPos_m = 0.0;
    Robot_calibration_Ipos_B.jogSpeed_l = 0.0;
    Robot_calibration_Ipos_B.toPoint_j = 0.0;
    Robot_calibration_Ipos_B.homeControllerEnabled_a = 0.0;
    Robot_calibration_Ipos_B.resetEnc_d = 0.0;
    Robot_calibration_Ipos_B.freddy_a = 0.0;
    Robot_calibration_Ipos_B.homingBusy_i = 1.0;
    Robot_calibration_Ipos_B.airBagEnabled_o = 0.0;
    Robot_calibration_Ipos_B.airBagRef_j = 0.0;
    Robot_calibration_Ipos_B.controlEnabled_p = 1.0;
    Robot_calibration_Ipos_B.Ready_c = 1.0;
    Robot_calibration_Ipos_B.StopSim_g = 0.0;

    /* SystemInitialize for Chart: '<S24>/Supervisor' */
    Robot_calibration_Ipos_DW.sfEvent_o = -1;
    Robot_calibration_Ipos_DW.temporalCounter_i1_d = 0U;
    Robot_calibration_Ipos_DW.is_active_c18_Robot_calibration = 0U;
    Robot_calibration_Ipos_DW.is_c18_Robot_calibration_Ipos = 0U;
    Robot_calibration_Ipos_DW.currentcarPos = 0.0;
    Robot_calibration_Ipos_B.jogSpeed_o = 0.0;
    Robot_calibration_Ipos_B.toPoint = 0.0;
    Robot_calibration_Ipos_B.homeControllerEnabled_m = 0.0;
    Robot_calibration_Ipos_B.resetEnc_h = 0.0;
    Robot_calibration_Ipos_B.homingBusy_j = 1.0;
    Robot_calibration_Ipos_B.freddy = 0.0;
    Robot_calibration_Ipos_B.airBagEnabled = 0.0;
    Robot_calibration_Ipos_B.airBagRef = 0.0;
    Robot_calibration_Ipos_B.controlEnabled = 1.0;
    Robot_calibration_Ipos_B.Ready_b = 1.0;
    Robot_calibration_Ipos_B.StopSim_c = 0.0;

    /* SystemInitialize for Chart: '<S25>/Supervisor' */
    Robot_calibration_Ipos_DW.sfEvent = -1;
    Robot_calibration_Ipos_DW.temporalCounter_i1 = 0U;
    Robot_calibration_Ipos_DW.is_active_c1_Robot_calibration_ = 0U;
    Robot_calibration_Ipos_DW.is_c1_Robot_calibration_Ipos = 0U;
    Robot_calibration_Ipos_B.jogSpeed = 0.0;
    Robot_calibration_Ipos_B.homeControllerEnabled = 0.0;
    Robot_calibration_Ipos_B.resetEnc = 0.0;
    Robot_calibration_Ipos_B.homingBusy = 1.0;
    Robot_calibration_Ipos_B.Ready = 1.0;
    Robot_calibration_Ipos_B.StopSim = 0.0;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Controller' */
    /* InitializeConditions for UnitDelay: '<S12>/Delay Input1' */
    for (i = 0; i < 12; i++) {
      Robot_calibration_Ipos_DW.DelayInput1_DSTATE[i] =
        Robot_calibration_Ipos_P.DetectChange_vinit;
    }

    /* End of InitializeConditions for UnitDelay: '<S12>/Delay Input1' */

    /* InitializeConditions for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    Robot_calibration_Ipos_DW.Discreteintegrator_DSTATE =
      Robot_calibration_Ipos_P.Discreteintegrator_IC;

    /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
    /* SystemInitialize for Outport: '<S13>/Delay [s]' incorporates:
     *  Inport: '<S13>/In1'
     */
    Robot_calibration_Ipos_B.In1 = Robot_calibration_Ipos_P.Delays_Y0;

    /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */

    /* SystemInitialize for Chart: '<S1>/Stateflow ' */
    Robot_calibration_Ipos_DW.sfEvent_k = -1;

    /* Chart: '<S1>/Stateflow ' */
    Robot_calibration_Ipos_DW.is_active_c3_Robot_calibration_ = 1U;
    Robot_calibration_Ipos_DW.is_active_Object_Detection = 1U;
    Robot_calibration_Ipos_DW.is_Object_Detection =
      Robot_calibration_Ip_IN_Seeking;
    Robot_calibration_Ipos_DW.is_active_Belt = 1U;
    Robot_calibration_Ipos_DW.is_Belt = Robot_calibration__IN_Belt_Home;
    Robot_calibration_Ipos_DW.is_active_Robot_Arm = 1U;
    Robot_calibration_Ipos_DW.is_Robot_Arm = Robot_calibration_IN_Start_Home;
    Robot_calibration_Ipos_DW.is_active_Vacuum = 1U;
    Robot_calibration_Ipos_DW.is_Vacuum = Robot_calibration_IN_Vacuum_Off;

    /* SystemInitialize for MATLAB Function: '<S10>/SPERTE_measurement_function' */
    a = NULL;
    for (i = 0; i < 20; i++) {
      Robot_calibration_Ipos_DW.eml_autoflush[i] = false;
      Robot_calibration_Ipos_DW.eml_openfiles[i] = a;
    }

    Robot_calibration_Ipos_DW.NF = 0;
    Robot_calibration_Ipos_DW.NS = 0U;
    Robot_calibration_Ipos_DW.fileID = 0.0;
    Robot_calibration_Ipos_DW.busy = 0U;

    /* End of SystemInitialize for MATLAB Function: '<S10>/SPERTE_measurement_function' */

    /* SystemInitialize for Sum: '<S1>/Sum4' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    Robot_calibration_Ipos_B.Sum4 = Robot_calibration_Ipos_P.RobotV_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum5' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    Robot_calibration_Ipos_B.Sum5 = Robot_calibration_Ipos_P.RobotV_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum6' incorporates:
     *  Outport: '<S1>/Robot [V]'
     */
    Robot_calibration_Ipos_B.Sum6 = Robot_calibration_Ipos_P.RobotV_Y0;

    /* SystemInitialize for S-Function (dleadlag): '<S5>/Dctleadlag' incorporates:
     *  Outport: '<S1>/Conveyor [V] '
     */
    Robot_calibration_Ipos_B.Dctleadlag_ei =
      Robot_calibration_Ipos_P.ConveyorV_Y0;

    /* SystemInitialize for Gain: '<S7>/Gain1' incorporates:
     *  Outport: '<S1>/Vacuum [V] '
     */
    Robot_calibration_Ipos_B.Gain1_b = Robot_calibration_Ipos_P.VacuumV_Y0;

    /* SystemInitialize for ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Outport: '<S1>/Blow//suck [-]'
     */
    Robot_calibration_Ipos_B.Doubleclickswitch =
      Robot_calibration_Ipos_P.Blowsuck_Y0;

    /* SystemInitialize for ManualSwitch: '<S1>/Manual Switch1' incorporates:
     *  Outport: '<S1>/LED Ring [-]'
     */
    strncpy(&Robot_calibration_Ipos_B.ManualSwitch1[0],
            &Robot_calibration_Ipos_P.LEDRing_Y0[0], 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Controller' */
    Robot_calibration_Ipos_B.ManualSwitch1[255] = '\x00';
  }
}

/* Model terminate function */
void Robot_calibration_Ipos_terminate(void)
{
  /* Terminate for S-Function (ec_Supervisor): '<S3>/S-Function' */
  /* Level2 S-Function Block: '<S3>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (Ipos360): '<S17>/ec_Ipos' */
  /* Level2 S-Function Block: '<S17>/ec_Ipos' (Ipos360) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<Root>/Controller' */
  /* Terminate for S-Function (dweakint): '<S5>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S5>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S5>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S5>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S5>/Dctleadlag' */
  /* Level2 S-Function Block: '<S5>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */

  /* Terminate for Enabled SubSystem: '<S26>/Subsystem3' */
  /* Terminate for IfAction SubSystem: '<S28>/If Action Subsystem' */
  Robot_calibra_SerialWrite1_Term(&Robot_calibration_Ipos_DW.SerialWrite1);

  /* End of Terminate for SubSystem: '<S28>/If Action Subsystem' */

  /* Terminate for IfAction SubSystem: '<S28>/If Action Subsystem1' */
  Robot_calibra_SerialWrite1_Term(&Robot_calibration_Ipos_DW.SerialWrite);

  /* End of Terminate for SubSystem: '<S28>/If Action Subsystem1' */
  /* End of Terminate for SubSystem: '<S26>/Subsystem3' */

  /* Terminate for S-Function (ec_IposResetEnc): '<S22>/Reset EncoderR' */
  /* Level2 S-Function Block: '<S22>/Reset EncoderR' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S31>/Dctintegrator' */
  /* Level2 S-Function Block: '<S31>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S31>/Dctleadlag' */
  /* Level2 S-Function Block: '<S31>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S31>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S31>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S32>/Dctleadlag' */
  /* Level2 S-Function Block: '<S32>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S32>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S32>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S23>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S23>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S38>/Dctintegrator' */
  /* Level2 S-Function Block: '<S38>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S38>/Dctleadlag' */
  /* Level2 S-Function Block: '<S38>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S38>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S38>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S39>/Dctleadlag' */
  /* Level2 S-Function Block: '<S39>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S39>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S39>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S24>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S24>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S48>/Dctintegrator' */
  /* Level2 S-Function Block: '<S48>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S48>/Dctleadlag' */
  /* Level2 S-Function Block: '<S48>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S48>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S48>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S49>/Dctleadlag' */
  /* Level2 S-Function Block: '<S49>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S49>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S49>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_IposResetEnc): '<S25>/Reset EncoderR1' */
  /* Level2 S-Function Block: '<S25>/Reset EncoderR1' (ec_IposResetEnc) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S59>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S59>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S59>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S59>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S59>/Dctleadlag' */
  /* Level2 S-Function Block: '<S59>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_calibration_Ipos_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* CleanupRuntimeResources for MATLAB Function: '<S23>/quintic trajectory time' */
  quintictrajectorytim_CleanupRTR
    (&Robot_calibration_Ipos_DW.sf_quintictrajectorytime);

  /* CleanupRuntimeResources for MATLAB Function: '<S24>/quintic trajectory time' */
  quintictrajectorytim_CleanupRTR
    (&Robot_calibration_Ipos_DW.sf_quintictrajectorytime_i);
}
