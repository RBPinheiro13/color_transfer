/*
 * desc_Q_initialize.c
 *
 * Code generation for function 'desc_Q_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "desc_Q_initialize.h"
#include "_coder_desc_Q_mex.h"
#include "desc_Q_data.h"
#include "blas.h"
#include "lapacke.h"

/* Function Declarations */
static void desc_Q_once(void);

/* Function Definitions */
static void desc_Q_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
                  0, 1, 5, 1, 0, 0, 0, 3, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "desc_Q", 0, -1, 776);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 613, -1, 759);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 411, -1, 540);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 319, -1, 339);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 223, -1, 246);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 84, -1, 192);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 366, 377, -1, 574);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 194, 214, 769);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 257, 271, 603);
  covrtForInit(&emlrtCoverageInstance, 0, 2, 279, 294, 586);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void desc_Q_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    desc_Q_once();
  }
}

/* End of code generation (desc_Q_initialize.c) */
