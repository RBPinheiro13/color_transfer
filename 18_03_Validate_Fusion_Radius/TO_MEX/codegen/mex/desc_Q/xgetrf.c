/*
 * xgetrf.c
 *
 * Code generation for function 'xgetrf'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "xgetrf.h"
#include "error.h"
#include "blas.h"
#include "lapacke.h"

/* Type Definitions */
#include <stdlib.h>

/* Variable Definitions */
static emlrtRSInfo v_emlrtRSI = { 25, "xgetrf",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"
};

static emlrtRSInfo w_emlrtRSI = { 88, "xgetrf",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"
};

static emlrtRSInfo x_emlrtRSI = { 55, "xgetrf",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"
};

static emlrtRSInfo y_emlrtRSI = { 18, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo ab_emlrtRSI = { 45, "infocheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"
};

static emlrtRSInfo bb_emlrtRSI = { 48, "infocheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"
};

static emlrtMCInfo emlrtMCI = { 37, 5, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo ob_emlrtRSI = { 37, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

/* Function Declarations */
static void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, real_T A_data[], int32_T
            lda, int32_T ipiv_data[], int32_T ipiv_size[2])
{
  int32_T varargin_1;
  int32_T k;
  const mxArray *y;
  char_T u[15];
  static const char_T cv5[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  ptrdiff_t ipiv_t_data[5];
  const mxArray *m8;
  static const int32_T iv14[2] = { 1, 15 };

  ptrdiff_t info_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &v_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  varargin_1 = muIntScalarMin_sint32(m, n);
  b_st.site = &x_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  if ((int8_T)varargin_1 == varargin_1) {
  } else {
    for (k = 0; k < 15; k++) {
      u[k] = cv5[k];
    }

    y = NULL;
    m8 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(&b_st, 15, m8, &u[0]);
    emlrtAssign(&y, m8);
    c_st.site = &ob_emlrtRSI;
    c_error(&c_st, y, &emlrtMCI);
  }

  info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &A_data[0],
    (ptrdiff_t)lda, &ipiv_t_data[0]);
  k = (int32_T)info_t;
  ipiv_size[0] = 1;
  ipiv_size[1] = (int8_T)varargin_1;
  b_st.site = &w_emlrtRSI;
  if (k < 0) {
    if (k == -1010) {
      c_st.site = &ab_emlrtRSI;
      error(&c_st);
    } else {
      c_st.site = &bb_emlrtRSI;
      b_error(&c_st, k);
    }
  }

  for (k = 0; k < (int8_T)varargin_1; k++) {
    ipiv_data[k] = (int32_T)ipiv_t_data[k];
  }
}

/* End of code generation (xgetrf.c) */
