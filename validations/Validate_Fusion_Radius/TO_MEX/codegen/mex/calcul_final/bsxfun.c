/*
 * bsxfun.c
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "calcul_final.h"
#include "bsxfun.h"
#include "calcul_final_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "calcul_final_data.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 97, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo e_emlrtRSI = { 91, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo f_emlrtRSI = { 87, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo g_emlrtRSI = { 85, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 1, 14, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 75, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 76, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 95, 5, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 19, 15, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 21, 15, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

/* Function Definitions */
void bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
            emxArray_real_T *b, emxArray_real_T *c)
{
  int32_T na1;
  int32_T nb1;
  boolean_T p;
  int32_T ck;
  int32_T i0;
  emxArray_real_T *av;
  emxArray_real_T *bv;
  uint32_T a_idx_0;
  int32_T nc1;
  emxArray_real_T *cv;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na1 = a->size[0];
  nb1 = b->size[0];
  if ((a->size[0] != 1) && (b->size[0] != 1) && (a->size[0] != b->size[0])) {
    p = false;
  } else {
    p = true;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &g_emlrtRTEI,
      "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }

  p = !(a->size[0] != b->size[0]);
  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &h_emlrtRTEI,
      "Coder:toolbox:bsxfun_dynamicExpansion", 0);
  }

  if (a->size[0] <= b->size[0]) {
    ck = a->size[0];
  } else {
    ck = b->size[0];
  }

  i0 = c->size[0];
  c->size[0] = ck;
  emxEnsureCapacity(sp, (emxArray__common *)c, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  if (c->size[0] == 0) {
  } else {
    emxInit_real_T(sp, &av, 1, &c_emlrtRTEI, true);
    emxInit_real_T(sp, &bv, 1, &d_emlrtRTEI, true);
    a_idx_0 = (uint32_T)a->size[0];
    i0 = av->size[0];
    av->size[0] = (int32_T)a_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)av, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    a_idx_0 = (uint32_T)b->size[0];
    i0 = bv->size[0];
    bv->size[0] = (int32_T)a_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)bv, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    nc1 = c->size[0];
    st.site = &g_emlrtRSI;
    ck = 0;
    emxInit_real_T(sp, &cv, 1, &e_emlrtRTEI, true);
    while (ck <= 0) {
      st.site = &f_emlrtRSI;
      if ((!(1 > na1)) && (na1 > 2147483646)) {
        b_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (ck = 0; ck + 1 <= na1; ck++) {
        av->data[ck] = a->data[ck];
      }

      st.site = &e_emlrtRSI;
      if ((!(1 > nb1)) && (nb1 > 2147483646)) {
        b_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (ck = 0; ck + 1 <= nb1; ck++) {
        bv->data[ck] = b->data[ck];
      }

      i0 = cv->size[0];
      cv->size[0] = av->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)cv, i0, (int32_T)sizeof(real_T),
                        &b_emlrtRTEI);
      ck = av->size[0];
      for (i0 = 0; i0 < ck; i0++) {
        cv->data[i0] = av->data[i0] * bv->data[i0];
      }

      st.site = &d_emlrtRSI;
      if (nc1 > 2147483646) {
        b_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (ck = 0; ck + 1 <= nc1; ck++) {
        c->data[ck] = cv->data[ck];
      }

      ck = nc1;
    }

    emxFree_real_T(&cv);
    emxFree_real_T(&bv);
    emxFree_real_T(&av);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bsxfun.c) */
