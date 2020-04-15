/*
 * desc_Q.c
 *
 * Code generation for function 'desc_Q'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "mpower.h"
#include "desc_Q_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "warning.h"
#include "norm.h"
#include "inv.h"
#include "cov.h"
#include "desc_Q_data.h"
#include "blas.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRSInfo b_emlrtRSI = { 27, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRSInfo c_emlrtRSI = { 28, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRSInfo d_emlrtRSI = { 30, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRSInfo e_emlrtRSI = { 31, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRSInfo n_emlrtRSI = { 22, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo o_emlrtRSI = { 21, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo ib_emlrtRSI = { 42, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo jb_emlrtRSI = { 46, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo kb_emlrtRSI = { 40, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRSInfo lb_emlrtRSI = { 113, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtMCInfo d_emlrtMCI = { 52, 19, "flt2str",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 29, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 5, 1, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 9, 5, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 14, 24, "labels", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 14, 28, "labels", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 19, 46, "img_target", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 19, 50, "img_target", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 18, 21, "A_i", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 19, 21, "A_i", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 31, 14, "A_mean", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 30, 15, "Q_inv", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 30, 5, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 14, 15, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 17, 15, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 21, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 30, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtDCInfo emlrtDCI = { 4, 19, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  4 };

static emlrtDCInfo b_emlrtDCI = { 9, 17, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  1 };

static emlrtDCInfo c_emlrtDCI = { 9, 17, "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  4 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 9, 17, "count", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 18, 21, "c", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 19, 21, "c", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 20, 26, "c", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 20, 17, "c", "desc_Q",
  "C:\\Users\\rodri\\Documents\\ENSEIRB\\S8\\Projet_Thematique\\18_03_Validate_Fusion_Radius\\TO_MEX\\desc_Q.m",
  0 };

static emlrtRSInfo nb_emlrtRSI = { 52, "flt2str",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 2, pArrays, "sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, ret, 14);
  emlrtDestroyArray(&src);
}

void desc_Q(const emlrtStack *sp, const emxArray_real_T *img_target, const
            emxArray_int32_T *labels, int32_T numlabels, const emxArray_real_T
            *count, real_T par_s, real_T par_c, emxArray_real_T *A_mean,
            emxArray_real_T *Q_inv)
{
  boolean_T b0;
  int32_T j;
  int32_T i;
  int32_T i0;
  int32_T i1;
  int32_T b_i;
  emxArray_real_T *c;
  int32_T y;
  emxArray_real_T *A_i;
  emxArray_real_T *b_A_i;
  emxArray_real_T *c_A_i;
  real_T n1x;
  int32_T pos;
  int32_T pos2;
  real_T X_i_data[4];
  int32_T X_i_size[2];
  int64_T i2;
  real_T C_i_data[9];
  int32_T C_i_size[2];
  int32_T vlen;
  int8_T unnamed_idx_0;
  int8_T unnamed_idx_1;
  int32_T x_size[2];
  real_T x_data[25];
  int32_T k;
  int32_T xoffset;
  real_T xinv_data[25];
  real_T n1xinv;
  real_T rc;
  const mxArray *b_y;
  char_T u[6];
  static const char_T rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 6 };

  int32_T iv1[2];
  const mxArray *c_y;
  boolean_T b1;
  char_T cv0[14];
  real_T d_y[5];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b0 = false;
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  j = img_target->size[1];
  i = img_target->size[0];
  i0 = Q_inv->size[0] * Q_inv->size[1] * Q_inv->size[2];
  Q_inv->size[0] = 5;
  Q_inv->size[1] = 5;
  i1 = numlabels;
  if (!(i1 >= 0)) {
    emlrtNonNegativeCheckR2012b(i1, &emlrtDCI, sp);
  }

  Q_inv->size[2] = i1;
  emxEnsureCapacity(sp, (emxArray__common *)Q_inv, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = numlabels;
  if (!(i0 >= 0)) {
    emlrtNonNegativeCheckR2012b(i0, &emlrtDCI, sp);
  }

  b_i = 25 * i0;
  for (i0 = 0; i0 < b_i; i0++) {
    Q_inv->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &c, 2, &b_emlrtRTEI, true);
  i0 = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = numlabels;
  emxEnsureCapacity(sp, (emxArray__common *)c, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < numlabels; i0++) {
    c->data[i0] = 1.0;
  }

  i0 = A_mean->size[0] * A_mean->size[1];
  A_mean->size[0] = 5;
  A_mean->size[1] = numlabels;
  emxEnsureCapacity(sp, (emxArray__common *)A_mean, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  b_i = 5 * numlabels;
  for (i0 = 0; i0 < b_i; i0++) {
    A_mean->data[i0] = 0.0;
  }

  st.site = &emlrtRSI;
  if ((!(1 > numlabels)) && (numlabels > 2147483646)) {
    b_st.site = &f_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  y = 1;
  emxInit_real_T(sp, &A_i, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A_i, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_A_i, 2, &emlrtRTEI, true);
  while (y <= numlabels) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
    i0 = A_i->size[0] * A_i->size[1];
    i1 = count->size[0];
    if (!((y >= 1) && (y <= i1))) {
      emlrtDynamicBoundsCheckR2012b(y, 1, i1, &i_emlrtBCI, sp);
    }

    n1x = count->data[y - 1];
    if (!(n1x >= 0.0)) {
      emlrtNonNegativeCheckR2012b(n1x, &c_emlrtDCI, sp);
    }

    if (n1x != (int32_T)muDoubleScalarFloor(n1x)) {
      emlrtIntegerCheckR2012b(n1x, &b_emlrtDCI, sp);
    }

    A_i->size[0] = (int32_T)n1x;
    A_i->size[1] = 5;
    emxEnsureCapacity(sp, (emxArray__common *)A_i, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i0 = count->size[0];
    if (!((y >= 1) && (y <= i0))) {
      emlrtDynamicBoundsCheckR2012b(y, 1, i0, &i_emlrtBCI, sp);
    }

    n1x = count->data[y - 1];
    if (!(n1x >= 0.0)) {
      emlrtNonNegativeCheckR2012b(n1x, &c_emlrtDCI, sp);
    }

    if (n1x != (int32_T)muDoubleScalarFloor(n1x)) {
      emlrtIntegerCheckR2012b(n1x, &b_emlrtDCI, sp);
    }

    b_i = (int32_T)n1x * 5;
    for (i0 = 0; i0 < b_i; i0++) {
      A_i->data[i0] = 0.0;
    }

    pos = 0;
    while (pos <= i - 1) {
      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
      pos2 = 0;
      while (pos2 <= j - 1) {
        covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 1);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);
        i0 = labels->size[0];
        i1 = pos + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
        }

        i0 = labels->size[1];
        i1 = pos2 + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &b_emlrtBCI, sp);
        }

        i2 = y - 1LL;
        if (i2 > 2147483647LL) {
          i2 = 2147483647LL;
        } else {
          if (i2 < -2147483648LL) {
            i2 = -2147483648LL;
          }
        }

        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, labels->data[pos +
                       labels->size[0] * pos2] == (int32_T)i2)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);
          vlen = A_i->size[0];
          i0 = c->size[1];
          i2 = labels->data[pos + labels->size[0] * pos2] + 1LL;
          if (i2 > 2147483647LL) {
            i2 = 2147483647LL;
          } else {
            if (i2 < -2147483648LL) {
              i2 = -2147483648LL;
            }
          }

          i1 = (int32_T)i2;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &j_emlrtBCI, sp);
          }

          i0 = (int32_T)c->data[i1 - 1];
          if (!((i0 >= 1) && (i0 <= vlen))) {
            emlrtDynamicBoundsCheckR2012b(i0, 1, vlen, &e_emlrtBCI, sp);
          }

          b_i = i0 - 1;
          A_i->data[b_i] = (1.0 + (real_T)pos) / (real_T)i;
          A_i->data[b_i + A_i->size[0]] = (1.0 + (real_T)pos2) / (real_T)j;
          i0 = img_target->size[0];
          i1 = pos + 1;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
          }

          i0 = img_target->size[1];
          i1 = pos2 + 1;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, sp);
          }

          vlen = A_i->size[0];
          i0 = c->size[1];
          i2 = labels->data[pos + labels->size[0] * pos2] + 1LL;
          if (i2 > 2147483647LL) {
            i2 = 2147483647LL;
          } else {
            if (i2 < -2147483648LL) {
              i2 = -2147483648LL;
            }
          }

          i1 = (int32_T)i2;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &k_emlrtBCI, sp);
          }

          b_i = (int32_T)c->data[i1 - 1];
          if (!((b_i >= 1) && (b_i <= vlen))) {
            emlrtDynamicBoundsCheckR2012b(b_i, 1, vlen, &f_emlrtBCI, sp);
          }

          for (i0 = 0; i0 < 3; i0++) {
            A_i->data[(b_i + A_i->size[0] * (2 + i0)) - 1] = img_target->data
              [(pos + img_target->size[0] * pos2) + img_target->size[0] *
              img_target->size[1] * i0] / 255.0;
          }

          i0 = c->size[1];
          i2 = labels->data[pos + labels->size[0] * pos2] + 1LL;
          if (i2 > 2147483647LL) {
            i2 = 2147483647LL;
          } else {
            if (i2 < -2147483648LL) {
              i2 = -2147483648LL;
            }
          }

          i1 = (int32_T)i2;
          if (!((i1 >= 1) && (i1 <= i0))) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &l_emlrtBCI, sp);
          }

          i0 = c->size[1];
          i2 = labels->data[pos + labels->size[0] * pos2] + 1LL;
          if (i2 > 2147483647LL) {
            i2 = 2147483647LL;
          } else {
            if (i2 < -2147483648LL) {
              i2 = -2147483648LL;
            }
          }

          k = (int32_T)i2;
          if (!((k >= 1) && (k <= i0))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i0, &m_emlrtBCI, sp);
          }

          c->data[k - 1] = c->data[i1 - 1] + 1.0;
        }

        pos2++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 0);
      pos++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);
    b_i = A_i->size[0];
    i0 = c_A_i->size[0] * c_A_i->size[1];
    c_A_i->size[0] = b_i;
    c_A_i->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)c_A_i, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < 2; i0++) {
      for (i1 = 0; i1 < b_i; i1++) {
        c_A_i->data[i1 + c_A_i->size[0] * i0] = A_i->data[i1 + A_i->size[0] * i0];
      }
    }

    st.site = &b_emlrtRSI;
    cov(&st, c_A_i, X_i_data, X_i_size);
    b_i = A_i->size[0];
    i0 = b_A_i->size[0] * b_A_i->size[1];
    b_A_i->size[0] = b_i;
    b_A_i->size[1] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b_A_i, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < 3; i0++) {
      for (i1 = 0; i1 < b_i; i1++) {
        b_A_i->data[i1 + b_A_i->size[0] * i0] = A_i->data[i1 + A_i->size[0] * (2
          + i0)];
      }
    }

    st.site = &c_emlrtRSI;
    b_cov(&st, b_A_i, C_i_data, C_i_size);
    i0 = Q_inv->size[2];
    if (!((y >= 1) && (y <= i0))) {
      emlrtDynamicBoundsCheckR2012b(y, 1, i0, &h_emlrtBCI, sp);
    }

    st.site = &d_emlrtRSI;
    n1x = mpower(par_s);
    b_i = X_i_size[0] * X_i_size[1];
    for (i0 = 0; i0 < b_i; i0++) {
      X_i_data[i0] *= n1x;
    }

    st.site = &d_emlrtRSI;
    n1x = mpower(par_c);
    b_i = C_i_size[0] * C_i_size[1];
    for (i0 = 0; i0 < b_i; i0++) {
      C_i_data[i0] *= n1x;
    }

    unnamed_idx_0 = (int8_T)(X_i_size[0] + C_i_size[0]);
    unnamed_idx_1 = (int8_T)(X_i_size[1] + C_i_size[1]);
    x_size[0] = unnamed_idx_0;
    x_size[1] = unnamed_idx_1;
    b_i = unnamed_idx_0 * unnamed_idx_1;
    for (i0 = 0; i0 < b_i; i0++) {
      x_data[i0] = 0.0;
    }

    b_i = X_i_size[1];
    for (i0 = 0; i0 < b_i; i0++) {
      vlen = X_i_size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        x_data[i1 + unnamed_idx_0 * i0] = X_i_data[i1 + X_i_size[0] * i0];
      }
    }

    if (X_i_size[0] + 1 > X_i_size[0] + C_i_size[0]) {
      i0 = 1;
    } else {
      i0 = X_i_size[0] + 1;
    }

    if (X_i_size[1] + 1 > X_i_size[1] + C_i_size[1]) {
      i1 = 1;
    } else {
      i1 = X_i_size[1] + 1;
    }

    b_i = C_i_size[1];
    for (k = 0; k < b_i; k++) {
      vlen = C_i_size[0];
      for (xoffset = 0; xoffset < vlen; xoffset++) {
        x_data[((i0 + xoffset) + unnamed_idx_0 * ((i1 + k) - 1)) - 1] =
          C_i_data[xoffset + C_i_size[0] * k];
      }
    }

    st.site = &d_emlrtRSI;
    if (unnamed_idx_0 == unnamed_idx_1) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &f_emlrtRTEI, "Coder:MATLAB:square", 0);
    }

    b_st.site = &o_emlrtRSI;
    invNxN(&b_st, x_data, x_size, xinv_data, X_i_size);
    b_st.site = &n_emlrtRSI;
    n1x = norm(x_data, x_size);
    n1xinv = norm(xinv_data, X_i_size);
    rc = 1.0 / (n1x * n1xinv);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      c_st.site = &ib_emlrtRSI;
      warning(&c_st);
    } else {
      if (muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) {
        c_st.site = &jb_emlrtRSI;
        for (i0 = 0; i0 < 6; i0++) {
          u[i0] = rfmt[i0];
        }

        b_y = NULL;
        m0 = emlrtCreateCharArray(2, iv0);
        emlrtInitCharArrayR2013a(&c_st, 6, m0, &u[0]);
        emlrtAssign(&b_y, m0);
        c_y = NULL;
        m0 = emlrtCreateDoubleScalar(rc);
        emlrtAssign(&c_y, m0);
        d_st.site = &nb_emlrtRSI;
        emlrt_marshallIn(&d_st, b_sprintf(&d_st, b_y, c_y, &d_emlrtMCI),
                         "sprintf", cv0);
        c_st.site = &jb_emlrtRSI;
        b_warning(&c_st, cv0);
      }
    }

    if (!b0) {
      for (b_i = 0; b_i < 2; b_i++) {
        iv1[b_i] = 5;
      }

      b0 = true;
    }

    emlrtSubAssignSizeCheckR2012b(iv1, 2, X_i_size, 2, &emlrtECI, sp);
    for (i0 = 0; i0 < 5; i0++) {
      for (i1 = 0; i1 < 5; i1++) {
        Q_inv->data[(i1 + Q_inv->size[0] * i0) + Q_inv->size[0] * Q_inv->size[1]
          * (y - 1)] = xinv_data[i1 + 5 * i0];
      }
    }

    st.site = &e_emlrtRSI;
    b1 = (A_i->size[0] != 1);
    if (b1) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &g_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    b1 = !isequal(A_i);
    if (b1) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
        "Coder:toolbox:UnsupportedSpecialEmpty", 0);
    }

    b1 = !isequal(A_i);
    if (b1) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &i_emlrtRTEI,
        "Coder:toolbox:UnsupportedSpecialEmpty", 0);
    }

    b_st.site = &kb_emlrtRSI;
    if (A_i->size[0] == 0) {
      for (i0 = 0; i0 < 5; i0++) {
        d_y[i0] = 0.0;
      }
    } else {
      vlen = A_i->size[0];
      for (b_i = 0; b_i < 5; b_i++) {
        xoffset = b_i * vlen;
        n1x = A_i->data[xoffset];
        c_st.site = &lb_emlrtRSI;
        if ((!(2 > vlen)) && (vlen > 2147483646)) {
          d_st.site = &f_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (k = 2; k <= vlen; k++) {
          n1x += A_i->data[(xoffset + k) - 1];
        }

        d_y[b_i] = n1x;
      }
    }

    vlen = A_i->size[0];
    b_i = A_mean->size[1];
    if (!((y >= 1) && (y <= b_i))) {
      emlrtDynamicBoundsCheckR2012b(y, 1, b_i, &g_emlrtBCI, sp);
    }

    for (i0 = 0; i0 < 5; i0++) {
      A_mean->data[i0 + A_mean->size[0] * (y - 1)] = d_y[i0] / (real_T)vlen;
    }

    y++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&c_A_i);
  emxFree_real_T(&b_A_i);
  emxFree_real_T(&A_i);
  emxFree_real_T(&c);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (desc_Q.c) */
