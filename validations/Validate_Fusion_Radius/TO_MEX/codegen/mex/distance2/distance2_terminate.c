/*
 * distance2_terminate.c
 *
 * Code generation for function 'distance2_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "distance2.h"
#include "distance2_terminate.h"
#include "_coder_distance2_mex.h"
#include "distance2_data.h"

/* Function Definitions */
void distance2_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void distance2_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (distance2_terminate.c) */
