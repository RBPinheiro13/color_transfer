/*
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 14, 25, "warning",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtMCInfo c_emlrtMCI = { 14, 9, "warning",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtRSInfo mb_emlrtRSI = { 14, "warning",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

/* Function Declarations */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m7;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m7, 3, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 2, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp, const char_T varargin_1[14])
{
  int32_T i4;
  const mxArray *y;
  char_T u[7];
  static const char_T cv3[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m2;
  static const int32_T iv5[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv4[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv6[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[33];
  static const char_T msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o',
    'n', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  static const int32_T iv7[2] = { 1, 33 };

  const mxArray *d_y;
  char_T d_u[14];
  static const int32_T iv8[2] = { 1, 14 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i4 = 0; i4 < 7; i4++) {
    u[i4] = cv3[i4];
  }

  y = NULL;
  m2 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 7, m2, &u[0]);
  emlrtAssign(&y, m2);
  for (i4 = 0; i4 < 7; i4++) {
    b_u[i4] = cv4[i4];
  }

  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 7, m2, &b_u[0]);
  emlrtAssign(&b_y, m2);
  for (i4 = 0; i4 < 33; i4++) {
    c_u[i4] = msgID[i4];
  }

  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 33, m2, &c_u[0]);
  emlrtAssign(&c_y, m2);
  for (i4 = 0; i4 < 14; i4++) {
    d_u[i4] = varargin_1[i4];
  }

  d_y = NULL;
  m2 = emlrtCreateCharArray(2, iv8);
  emlrtInitCharArrayR2013a(sp, 14, m2, &d_u[0]);
  emlrtAssign(&d_y, m2);
  st.site = &mb_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &b_emlrtMCI), &c_emlrtMCI);
}

void warning(const emlrtStack *sp)
{
  int32_T i3;
  const mxArray *y;
  char_T u[7];
  static const char_T cv1[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m1;
  static const int32_T iv2[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv2[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv3[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[27];
  static const char_T msgID[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  static const int32_T iv4[2] = { 1, 27 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i3 = 0; i3 < 7; i3++) {
    u[i3] = cv1[i3];
  }

  y = NULL;
  m1 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 7, m1, &u[0]);
  emlrtAssign(&y, m1);
  for (i3 = 0; i3 < 7; i3++) {
    b_u[i3] = cv2[i3];
  }

  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 7, m1, &b_u[0]);
  emlrtAssign(&b_y, m1);
  for (i3 = 0; i3 < 27; i3++) {
    c_u[i3] = msgID[i3];
  }

  c_y = NULL;
  m1 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 27, m1, &c_u[0]);
  emlrtAssign(&c_y, m1);
  st.site = &mb_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &b_emlrtMCI), &c_emlrtMCI);
}

/* End of code generation (warning.c) */
