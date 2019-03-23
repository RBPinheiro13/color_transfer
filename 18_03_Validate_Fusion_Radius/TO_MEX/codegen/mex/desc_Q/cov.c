/*
 * cov.c
 *
 * Code generation for function 'cov'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "cov.h"
#include "desc_Q_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "desc_Q_data.h"
#include "blas.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 73, "cov",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"
};

static emlrtRSInfo h_emlrtRSI = { 153, "cov",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"
};

static emlrtRSInfo i_emlrtRSI = { 158, "cov",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"
};

static emlrtRSInfo j_emlrtRSI = { 170, "cov",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 1, 15, "cov",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\cov.m"
};

/* Function Definitions */
void b_cov(const emlrtStack *sp, const emxArray_real_T *x, real_T xy_data[],
           int32_T xy_size[2])
{
  boolean_T p;
  emxArray_real_T *b_x;
  int32_T m;
  real_T alpha;
  real_T c_x[3];
  int32_T i;
  int32_T j;
  real_T temp;
  real_T d_x;
  real_T c[9];
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  p = (x->size[0] == 1);
  if (p) {
    for (m = 0; m < 3; m++) {
      c_x[m] = x->data[x->size[0] * m];
    }

    alpha = 0.0;
    for (i = 0; i < 3; i++) {
      alpha += x->data[x->size[0] * i];
    }

    alpha /= 3.0;
    temp = 0.0;
    for (i = 0; i < 3; i++) {
      d_x = c_x[i] - alpha;
      temp += d_x * d_x;
    }

    xy_size[0] = 1;
    xy_size[1] = 1;
    xy_data[0] = 0.5 * temp;
  } else {
    emxInit_real_T(sp, &b_x, 2, &d_emlrtRTEI, true);
    st.site = &g_emlrtRSI;
    m = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = 3;
    emxEnsureCapacity(&st, (emxArray__common *)b_x, m, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    j = x->size[0] * x->size[1];
    for (m = 0; m < j; m++) {
      b_x->data[m] = x->data[m];
    }

    m = x->size[0];
    memset(&c[0], 0, 9U * sizeof(real_T));
    if (x->size[0] == 0) {
      for (m = 0; m < 9; m++) {
        c[m] = rtNaN;
      }
    } else {
      if (x->size[0] >= 2) {
        for (j = 0; j < 3; j++) {
          alpha = 0.0;
          b_st.site = &h_emlrtRSI;
          if ((!(1 > m)) && (m > 2147483646)) {
            c_st.site = &f_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (i = 1; i <= m; i++) {
            alpha += b_x->data[(i + b_x->size[0] * j) - 1];
          }

          alpha /= (real_T)m;
          b_st.site = &i_emlrtRSI;
          for (i = 0; i + 1 <= m; i++) {
            b_x->data[i + b_x->size[0] * j] -= alpha;
          }
        }

        alpha = 1.0 / ((real_T)x->size[0] - 1.0);
        b_st.site = &j_emlrtRSI;
        temp = 0.0;
        TRANSB = 'N';
        TRANSA = 'C';
        memset(&c[0], 0, 9U * sizeof(real_T));
        m_t = (ptrdiff_t)3;
        n_t = (ptrdiff_t)3;
        k_t = (ptrdiff_t)x->size[0];
        lda_t = (ptrdiff_t)x->size[0];
        ldb_t = (ptrdiff_t)x->size[0];
        ldc_t = (ptrdiff_t)3;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha, &b_x->data[0], &lda_t,
              &b_x->data[0], &ldb_t, &temp, &c[0], &ldc_t);
      }
    }

    emxFree_real_T(&b_x);
    xy_size[0] = 3;
    xy_size[1] = 3;
    memcpy(&xy_data[0], &c[0], 9U * sizeof(real_T));
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void cov(const emlrtStack *sp, const emxArray_real_T *x, real_T xy_data[],
         int32_T xy_size[2])
{
  boolean_T p;
  emxArray_real_T *b_x;
  int32_T i;
  real_T alpha;
  real_T c_x[2];
  int32_T j;
  real_T temp;
  int32_T m;
  real_T d_x;
  real_T c[4];
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  p = (x->size[0] == 1);
  if (p) {
    for (i = 0; i < 2; i++) {
      c_x[i] = x->data[x->size[0] * i];
    }

    alpha = 0.0;
    for (i = 0; i < 2; i++) {
      alpha += x->data[x->size[0] * i];
    }

    alpha /= 2.0;
    temp = 0.0;
    for (i = 0; i < 2; i++) {
      d_x = c_x[i] - alpha;
      temp += d_x * d_x;
    }

    xy_size[0] = 1;
    xy_size[1] = 1;
    xy_data[0] = temp;
  } else {
    emxInit_real_T(sp, &b_x, 2, &d_emlrtRTEI, true);
    st.site = &g_emlrtRSI;
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = 2;
    emxEnsureCapacity(&st, (emxArray__common *)b_x, i, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    j = x->size[0] * x->size[1];
    for (i = 0; i < j; i++) {
      b_x->data[i] = x->data[i];
    }

    m = x->size[0];
    for (i = 0; i < 4; i++) {
      c[i] = 0.0;
    }

    if (x->size[0] == 0) {
      for (i = 0; i < 4; i++) {
        c[i] = rtNaN;
      }
    } else {
      if (x->size[0] >= 2) {
        for (j = 0; j < 2; j++) {
          alpha = 0.0;
          b_st.site = &h_emlrtRSI;
          if ((!(1 > m)) && (m > 2147483646)) {
            c_st.site = &f_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (i = 1; i <= m; i++) {
            alpha += b_x->data[(i + b_x->size[0] * j) - 1];
          }

          alpha /= (real_T)m;
          b_st.site = &i_emlrtRSI;
          for (i = 0; i + 1 <= m; i++) {
            b_x->data[i + b_x->size[0] * j] -= alpha;
          }
        }

        alpha = 1.0 / ((real_T)x->size[0] - 1.0);
        b_st.site = &j_emlrtRSI;
        temp = 0.0;
        TRANSB = 'N';
        TRANSA = 'C';
        for (i = 0; i < 4; i++) {
          c[i] = 0.0;
        }

        m_t = (ptrdiff_t)2;
        n_t = (ptrdiff_t)2;
        k_t = (ptrdiff_t)x->size[0];
        lda_t = (ptrdiff_t)x->size[0];
        ldb_t = (ptrdiff_t)x->size[0];
        ldc_t = (ptrdiff_t)2;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha, &b_x->data[0], &lda_t,
              &b_x->data[0], &ldb_t, &temp, &c[0], &ldc_t);
      }
    }

    emxFree_real_T(&b_x);
    xy_size[0] = 2;
    xy_size[1] = 2;
    for (i = 0; i < 4; i++) {
      xy_data[i] = c[i];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (cov.c) */
