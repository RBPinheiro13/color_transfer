/*
 * calcul_final_initialize.c
 *
 * Code generation for function 'calcul_final_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "calcul_final.h"
#include "calcul_final_initialize.h"
#include "_coder_calcul_final_mex.h"
#include "calcul_final_data.h"

/* Function Declarations */
static void calcul_final_once(void);

/* Function Definitions */
static void calcul_final_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xe9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
                  0, 1, 2, 0, 0, 0, 0, 2, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "calcul_final", 0, -1, 421);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 137, -1, 403);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 67, -1, 93);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 96, 110, 416);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 114, 129, 412);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void calcul_final_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    calcul_final_once();
  }
}

/* End of code generation (calcul_final_initialize.c) */
