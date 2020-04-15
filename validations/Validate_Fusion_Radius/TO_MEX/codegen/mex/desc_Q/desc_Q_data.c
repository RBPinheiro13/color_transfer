/*
 * desc_Q_data.c
 *
 * Code generation for function 'desc_Q_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "desc_Q_data.h"
#include "blas.h"
#include "lapacke.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "desc_Q", NULL,
  false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

emlrtRSInfo f_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo k_emlrtRSI = { 85, "xgemm",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"
};

emlrtRSInfo l_emlrtRSI = { 37, "mpower",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"
};

emlrtRSInfo m_emlrtRSI = { 49, "power",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

emlrtRSInfo cb_emlrtRSI = { 21, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo db_emlrtRSI = { 75, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo eb_emlrtRSI = { 112, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo fb_emlrtRSI = { 156, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo gb_emlrtRSI = { 14, "eml_ipiv2perm",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_ipiv2perm.m"
};

emlrtRSInfo hb_emlrtRSI = { 68, "xtrsm",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"
};

/* End of code generation (desc_Q_data.c) */
