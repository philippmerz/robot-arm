#include <stdio.h>
#include <stdlib.h>
#include "robotarm_student_2021a_Ebox.h"
#include "robotarm_student_2021a_Ebox_private.h"
#include "rtwtypes.h"
#include "limits.h"
#include "rt_nonfinite.h"
#include "MW_raspi_init.h"
#include "MW_Pyserver_control.h"
#include "linuxinitialize.h"
#define UNUSED(x)                      x = x
#define NAMELEN                        16

/* Function prototype declaration*/
void exitFcn(int sig);
void *terminateTask(void *arg);
void *baseRateTask(void *arg);
void *subrateTask(void *arg);
volatile boolean_T stopRequested = false;
volatile boolean_T runModel = true;
sem_t stopSem;
sem_t baserateTaskSem;
pthread_t schedulerThread;
pthread_t baseRateThread;
void *threadJoinStatus;
int terminatingmodel = 0;
void *baseRateTask(void *arg)
{
  runModel = (rtmGetErrorStatus(robotarm_student_2021a_Ebox_M) == (NULL)) &&
    !rtmGetStopRequested(robotarm_student_2021a_Ebox_M);
  while (runModel) {
    sem_wait(&baserateTaskSem);
    robotarm_student_2021a_Ebox_step();

    /* Get model outputs here */
    stopRequested = !((rtmGetErrorStatus(robotarm_student_2021a_Ebox_M) == (NULL))
                      && !rtmGetStopRequested(robotarm_student_2021a_Ebox_M));
  }

  runModel = 0;
  terminateTask(arg);
  pthread_exit((void *)0);
  return NULL;
}

void exitFcn(int sig)
{
  UNUSED(sig);
  rtmSetErrorStatus(robotarm_student_2021a_Ebox_M, "stopping the model");
  runModel = 0;
}

void *terminateTask(void *arg)
{
  UNUSED(arg);
  terminatingmodel = 1;

  {
    runModel = 0;
  }

  MW_killPyserver();
  mwRaspiTerminate();

  /* Disable rt_OneStep() here */

  /* Terminate model */
  robotarm_student_2021a_Ebox_terminate();
  sem_post(&stopSem);
  return NULL;
}

int main(int argc, char **argv)
{
  UNUSED(argc);
  UNUSED(argv);
  mwRaspiInit();
  MW_launchPyserver();
  rtmSetErrorStatus(robotarm_student_2021a_Ebox_M, 0);

  /* Initialize model */
  robotarm_student_2021a_Ebox_initialize();

  /* Call RTOS Initialization function */
  myRTOSInit(0.00048828125, 0);

  /* Wait for stop semaphore */
  sem_wait(&stopSem);

#if (MW_NUMBER_TIMER_DRIVEN_TASKS > 0)

  {
    int i;
    for (i=0; i < MW_NUMBER_TIMER_DRIVEN_TASKS; i++) {
      CHECK_STATUS(sem_destroy(&timerTaskSem[i]), 0, "sem_destroy");
    }
  }

#endif

  return 0;
}
