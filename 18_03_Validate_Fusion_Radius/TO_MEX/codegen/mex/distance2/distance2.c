/*
 * distance2.c
 *
 * Code generation for function 'distance2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "distance2.h"
#include "mpower.h"
#include "distance2_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "distance2_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 12, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m"
};

static emlrtRSInfo b_emlrtRSI = { 14, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m"
};

static emlrtRSInfo c_emlrtRSI = { 26, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m"
};

static emlrtRSInfo d_emlrtRSI = { 28, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m"
};

static emlrtRSInfo e_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo h_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo i_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo j_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo k_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo l_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo m_emlrtRSI = { 9, "exp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\exp.m" };

static emlrtRSInfo n_emlrtRSI = { 24, "applyScalarFunctionInPlace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 16, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 4, 1, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 10, 30, "labels_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 10, 34, "labels_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 16, 54, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 16, 58, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 16, 83, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 16, 87, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 17, 28, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 17, 32, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 17, 56, "A_mean", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 17, 73, "Q_inv", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 18, 45, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 18, 49, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 18, 74, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 18, 78, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 19, 28, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 19, 32, "img_target", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 19, 57, "A_mean", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 28, 13, "w", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 28, 17, "w", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 28, 9, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtDCInfo emlrtDCI = { 4, 16, "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  4 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 14, 34, "A_mean", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 14, 61, "A_mean", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 22, 17, "logw", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 16, 13, "logw", "distance2",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\distance2.m",
  0 };

/* Function Definitions */
void distance2(const emlrtStack *sp, const emxArray_real_T *Q_inv, const
               emxArray_real_T *img_target, const emxArray_real_T *A_mean,
               int32_T numlabels_target, const emxArray_int32_T *labels_target,
               real_T r_2, emxArray_real_T *w)
{
  emxArray_real_T *logw;
  int32_T j;
  int32_T i;
  int32_T ix;
  int32_T ixstart;
  int32_T pos;
  emxArray_int32_T *r0;
  emxArray_real_T *r1;
  emxArray_real_T *varargin_1;
  int32_T pos2;
  int32_T aux;
  boolean_T overflow;
  int32_T n;
  real_T mtmp;
  boolean_T exitg1;
  int64_T i0;
  real_T b[25];
  real_T dv0[5];
  real_T b_b[5];
  real_T y[5];
  int32_T iv0[1];
  real_T dv1[5];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &logw, 2, &b_emlrtRTEI, true);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  j = img_target->size[1];
  i = img_target->size[0];
  ix = logw->size[0] * logw->size[1];
  logw->size[0] = 1;
  ixstart = numlabels_target;
  if (!(ixstart >= 0)) {
    emlrtNonNegativeCheckR2012b(ixstart, &emlrtDCI, sp);
  }

  logw->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)logw, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(ixstart >= 0)) {
    emlrtNonNegativeCheckR2012b(ixstart, &emlrtDCI, sp);
  }

  for (ix = 0; ix < ixstart; ix++) {
    logw->data[ix] = 0.0;
  }

  ix = w->size[0] * w->size[1] * w->size[2];
  w->size[0] = numlabels_target;
  w->size[1] = img_target->size[0];
  w->size[2] = img_target->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)w, ix, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = numlabels_target * img_target->size[0] * img_target->size[1];
  for (ix = 0; ix < ixstart; ix++) {
    w->data[ix] = 0.0;
  }

  pos = 0;
  emxInit_int32_T(sp, &r0, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &r1, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &emlrtRTEI, true);
  while (pos <= i - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
    pos2 = 0;
    while (pos2 <= j - 1) {
      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
      ix = labels_target->size[0];
      ixstart = pos + 1;
      if (!((ixstart >= 1) && (ixstart <= ix))) {
        emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &emlrtBCI, sp);
      }

      ix = labels_target->size[1];
      ixstart = pos2 + 1;
      if (!((ixstart >= 1) && (ixstart <= ix))) {
        emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &b_emlrtBCI, sp);
      }

      st.site = &emlrtRSI;
      if ((!(1 > numlabels_target)) && (numlabels_target > 2147483646)) {
        b_st.site = &e_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      aux = 1;
      while (aux <= numlabels_target) {
        covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 1);
        ix = A_mean->size[1];
        if (!((aux >= 1) && (aux <= ix))) {
          emlrtDynamicBoundsCheckR2012b(aux, 1, ix, &t_emlrtBCI, sp);
        }

        ix = A_mean->size[1];
        if (!((aux >= 1) && (aux <= ix))) {
          emlrtDynamicBoundsCheckR2012b(aux, 1, ix, &u_emlrtBCI, sp);
        }

        st.site = &b_emlrtRSI;
        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, mpower((1.0 + (real_T)
               pos) / (real_T)i - A_mean->data[A_mean->size[0] * (aux - 1)]) +
                       mpower((1.0 + (real_T)pos2) / (real_T)j - A_mean->data[1
                              + A_mean->size[0] * (aux - 1)]) <= r_2)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);
          ix = img_target->size[0];
          ixstart = pos + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &c_emlrtBCI, sp);
          }

          ix = img_target->size[1];
          ixstart = pos2 + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &d_emlrtBCI, sp);
          }

          ix = img_target->size[0];
          ixstart = pos + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &e_emlrtBCI, sp);
          }

          ix = img_target->size[1];
          ixstart = pos2 + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &f_emlrtBCI, sp);
          }

          ix = img_target->size[0];
          ixstart = pos + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &g_emlrtBCI, sp);
          }

          ix = img_target->size[1];
          ixstart = pos2 + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &h_emlrtBCI, sp);
          }

          ix = A_mean->size[1];
          if (!((aux >= 1) && (aux <= ix))) {
            emlrtDynamicBoundsCheckR2012b(aux, 1, ix, &i_emlrtBCI, sp);
          }

          ix = Q_inv->size[2];
          i0 = labels_target->data[pos + labels_target->size[0] * pos2] + 1LL;
          if (i0 > 2147483647LL) {
            i0 = 2147483647LL;
          } else {
            if (i0 < -2147483648LL) {
              i0 = -2147483648LL;
            }
          }

          n = (int32_T)i0;
          if (!((n >= 1) && (n <= ix))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, ix, &j_emlrtBCI, sp);
          }

          for (ix = 0; ix < 5; ix++) {
            for (ixstart = 0; ixstart < 5; ixstart++) {
              b[ixstart + 5 * ix] = Q_inv->data[(ixstart + Q_inv->size[0] * ix)
                + Q_inv->size[0] * Q_inv->size[1] * (n - 1)];
            }
          }

          dv0[0] = (1.0 + (real_T)pos) / (real_T)i;
          dv0[1] = (1.0 + (real_T)pos2) / (real_T)j;
          dv0[2] = img_target->data[pos + img_target->size[0] * pos2] / 255.0;
          dv0[3] = img_target->data[(pos + img_target->size[0] * pos2) +
            img_target->size[0] * img_target->size[1]] / 255.0;
          dv0[4] = img_target->data[(pos + img_target->size[0] * pos2) +
            (img_target->size[0] * img_target->size[1] << 1)] / 255.0;
          for (ix = 0; ix < 5; ix++) {
            b_b[ix] = -(dv0[ix] - A_mean->data[ix + A_mean->size[0] * (aux - 1)]);
          }

          for (ix = 0; ix < 5; ix++) {
            y[ix] = 0.0;
            for (ixstart = 0; ixstart < 5; ixstart++) {
              y[ix] += b_b[ixstart] * b[ixstart + 5 * ix];
            }
          }

          ix = img_target->size[0];
          ixstart = pos + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &k_emlrtBCI, sp);
          }

          ix = img_target->size[1];
          ixstart = pos2 + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &l_emlrtBCI, sp);
          }

          ix = img_target->size[0];
          ixstart = pos + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &m_emlrtBCI, sp);
          }

          ix = img_target->size[1];
          ixstart = pos2 + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &n_emlrtBCI, sp);
          }

          ix = img_target->size[0];
          ixstart = pos + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &o_emlrtBCI, sp);
          }

          ix = img_target->size[1];
          ixstart = pos2 + 1;
          if (!((ixstart >= 1) && (ixstart <= ix))) {
            emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &p_emlrtBCI, sp);
          }

          ix = A_mean->size[1];
          if (!((aux >= 1) && (aux <= ix))) {
            emlrtDynamicBoundsCheckR2012b(aux, 1, ix, &q_emlrtBCI, sp);
          }

          dv1[0] = (1.0 + (real_T)pos) / (real_T)i;
          dv1[1] = (1.0 + (real_T)pos2) / (real_T)j;
          dv1[2] = img_target->data[pos + img_target->size[0] * pos2] / 255.0;
          dv1[3] = img_target->data[(pos + img_target->size[0] * pos2) +
            img_target->size[0] * img_target->size[1]] / 255.0;
          dv1[4] = img_target->data[(pos + img_target->size[0] * pos2) +
            (img_target->size[0] * img_target->size[1] << 1)] / 255.0;
          for (ix = 0; ix < 5; ix++) {
            b_b[ix] = dv1[ix] - A_mean->data[ix + A_mean->size[0] * (aux - 1)];
          }

          mtmp = 0.0;
          for (ixstart = 0; ixstart < 5; ixstart++) {
            mtmp += y[ixstart] * b_b[ixstart];
          }

          ix = logw->size[1];
          if (!((aux >= 1) && (aux <= ix))) {
            emlrtDynamicBoundsCheckR2012b(aux, 1, ix, &w_emlrtBCI, sp);
          }

          logw->data[aux - 1] = mtmp;
        } else {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);
          ix = logw->size[1];
          if (!((aux >= 1) && (aux <= ix))) {
            emlrtDynamicBoundsCheckR2012b(aux, 1, ix, &v_emlrtBCI, sp);
          }

          logw->data[aux - 1] = rtMinusInf;
        }

        aux++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 0);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);
      st.site = &c_emlrtRSI;
      ix = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = logw->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)varargin_1, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      ixstart = logw->size[0] * logw->size[1];
      for (ix = 0; ix < ixstart; ix++) {
        varargin_1->data[ix] = -logw->data[ix];
      }

      b_st.site = &h_emlrtRSI;
      c_st.site = &i_emlrtRSI;
      if ((varargin_1->size[1] == 1) || (varargin_1->size[1] != 1)) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (overflow) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &d_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      if (varargin_1->size[1] > 0) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &e_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      d_st.site = &j_emlrtRSI;
      ixstart = 1;
      n = varargin_1->size[1];
      mtmp = varargin_1->data[0];
      if (varargin_1->size[1] > 1) {
        if (muDoubleScalarIsNaN(varargin_1->data[0])) {
          e_st.site = &l_emlrtRSI;
          overflow = (varargin_1->size[1] > 2147483646);
          if (overflow) {
            f_st.site = &e_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          ix = 2;
          exitg1 = false;
          while ((!exitg1) && (ix <= n)) {
            ixstart = ix;
            if (!muDoubleScalarIsNaN(varargin_1->data[ix - 1])) {
              mtmp = varargin_1->data[ix - 1];
              exitg1 = true;
            } else {
              ix++;
            }
          }
        }

        if (ixstart < varargin_1->size[1]) {
          e_st.site = &k_emlrtRSI;
          overflow = ((!(ixstart + 1 > varargin_1->size[1])) &&
                      (varargin_1->size[1] > 2147483646));
          if (overflow) {
            f_st.site = &e_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          while (ixstart + 1 <= n) {
            if (varargin_1->data[ixstart] < mtmp) {
              mtmp = varargin_1->data[ixstart];
            }

            ixstart++;
          }
        }
      }

      ixstart = w->size[0];
      ix = r0->size[0];
      r0->size[0] = ixstart;
      emxEnsureCapacity(sp, (emxArray__common *)r0, ix, (int32_T)sizeof(int32_T),
                        &emlrtRTEI);
      for (ix = 0; ix < ixstart; ix++) {
        r0->data[ix] = ix;
      }

      ix = w->size[1];
      ixstart = pos + 1;
      if (!((ixstart >= 1) && (ixstart <= ix))) {
        emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &r_emlrtBCI, sp);
      }

      ix = w->size[2];
      ixstart = pos2 + 1;
      if (!((ixstart >= 1) && (ixstart <= ix))) {
        emlrtDynamicBoundsCheckR2012b(ixstart, 1, ix, &s_emlrtBCI, sp);
      }

      st.site = &d_emlrtRSI;
      ix = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = logw->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)varargin_1, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      ixstart = logw->size[0] * logw->size[1];
      for (ix = 0; ix < ixstart; ix++) {
        varargin_1->data[ix] = logw->data[ix] + mtmp;
      }

      b_st.site = &m_emlrtRSI;
      ix = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = varargin_1->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)r1, ix, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      ixstart = varargin_1->size[0] * varargin_1->size[1];
      for (ix = 0; ix < ixstart; ix++) {
        r1->data[ix] = varargin_1->data[ix];
      }

      c_st.site = &n_emlrtRSI;
      overflow = ((!(1 > varargin_1->size[1])) && (varargin_1->size[1] >
        2147483646));
      if (overflow) {
        d_st.site = &e_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (ixstart = 0; ixstart + 1 <= varargin_1->size[1]; ixstart++) {
        r1->data[ixstart] = muDoubleScalarExp(r1->data[ixstart]);
      }

      iv0[0] = r0->size[0];
      emlrtSubAssignSizeCheckR2012b(iv0, 1, *(int32_T (*)[2])r1->size, 2,
        &emlrtECI, sp);
      ixstart = r0->size[0];
      for (ix = 0; ix < ixstart; ix++) {
        w->data[(r0->data[ix] + w->size[0] * pos) + w->size[0] * w->size[1] *
          pos2] = r1->data[ix];
      }

      pos2++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
    pos++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&varargin_1);
  emxFree_real_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&logw);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (distance2.c) */
