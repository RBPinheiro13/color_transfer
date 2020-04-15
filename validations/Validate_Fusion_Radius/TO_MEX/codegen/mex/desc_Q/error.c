/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "error.h"
#include "blas.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = { 17, 9, "error",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"
};

/* Function Definitions */
void b_error(const emlrtStack *sp, int32_T varargin_2)
{
  emlrtErrorWithMessageIdR2012b(sp, &k_emlrtRTEI,
    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, "LAPACKE_dgetrf_work", 12,
    varargin_2);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &k_emlrtRTEI, "MATLAB:nomem", 0);
}

/* End of code generation (error.c) */
