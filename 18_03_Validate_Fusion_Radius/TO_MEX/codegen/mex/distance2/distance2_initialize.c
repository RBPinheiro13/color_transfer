/*
 * distance2_initialize.c
 *
 * Code generation for function 'distance2_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "distance2.h"
#include "distance2_initialize.h"
#include "_coder_distance2_mex.h"
#include "distance2_data.h"

/* Function Declarations */
static void distance2_once(void);

/* Function Definitions */
static void distance2_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xe9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
                  0, 1, 5, 1, 0, 0, 0, 3, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "distance2", 0, -1, 957);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 870, -1, 940);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 803, -1, 819);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 421, -1, 754);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 232, -1, 262);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 86, -1, 179);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 335, 395, 768, 836);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 182, 196, 953);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 200, 215, 949);
  covrtForInit(&emlrtCoverageInstance, 0, 2, 281, 310, 861);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void distance2_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    distance2_once();
  }
}

/* End of code generation (distance2_initialize.c) */
