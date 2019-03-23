/*
 * calcul_final.c
 *
 * Code generation for function 'calcul_final'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "calcul_final.h"
#include "calcul_final_emxutil.h"
#include "sum.h"
#include "bsxfun.h"
#include "calcul_final_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7, "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m"
};

static emlrtRSInfo b_emlrtRSI = { 8, "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m"
};

static emlrtRSInfo c_emlrtRSI = { 9, "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 25, "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 7, 56, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 7, 60, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 7, 81, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 7, 85, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 8, 56, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 8, 60, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 8, 81, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 8, 85, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 9, 56, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 9, 60, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 9, 81, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 9, 85, "w", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 7, 20, "img_target", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 7, 24, "img_target", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 8, 20, "img_target", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 8, 24, "img_target", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 9, 20, "img_target", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 9, 24, "img_target", "calcul_final",
  "C:\\\\Users\\\\rodri\\\\Documents\\\\ENSEIRB\\\\S8\\\\Projet_Th\xc3\xa9matique\\\\SLIC_mex\\\\SLIC_mex\\\\18_03_Validate_Fusion_Radius\\\\TO_MEX\\\\calcul_final.m",
  0 };

/* Function Definitions */
void calcul_final(const emlrtStack *sp, emxArray_real_T *img_target, const
                  emxArray_real_T *w, const emxArray_real_T *C_Br, const
                  emxArray_real_T *C_Bg, const emxArray_real_T *C_Bb)
{
  int32_T j;
  int32_T i;
  int32_T pos;
  emxArray_real_T *r0;
  emxArray_real_T *b_w;
  emxArray_real_T *c_w;
  emxArray_real_T *d_w;
  emxArray_real_T *e_w;
  emxArray_real_T *f_w;
  emxArray_real_T *g_w;
  int32_T pos2;
  int32_T loop_ub;
  int32_T i2;
  real_T x;
  real_T y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  j = img_target->size[1];
  i = img_target->size[0];
  pos = 1;
  emxInit_real_T(sp, &r0, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_w, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_w, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &d_w, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &e_w, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &f_w, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &g_w, 1, &emlrtRTEI, true);
  while (pos - 1 <= i - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
    pos2 = 1;
    while (pos2 - 1 <= j - 1) {
      covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
      loop_ub = w->size[0];
      i2 = w->size[2];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &b_emlrtBCI, sp);
      }

      i2 = w->size[1];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &emlrtBCI, sp);
      }

      i2 = g_w->size[0];
      g_w->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)g_w, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        g_w->data[i2] = w->data[(i2 + w->size[0] * (pos - 1)) + w->size[0] *
          w->size[1] * (pos2 - 1)];
      }

      st.site = &emlrtRSI;
      bsxfun(&st, g_w, C_Br, r0);
      st.site = &emlrtRSI;
      x = sum(&st, r0);
      loop_ub = w->size[0];
      i2 = w->size[2];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &d_emlrtBCI, sp);
      }

      i2 = w->size[1];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &c_emlrtBCI, sp);
      }

      i2 = f_w->size[0];
      f_w->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)f_w, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        f_w->data[i2] = w->data[(i2 + w->size[0] * (pos - 1)) + w->size[0] *
          w->size[1] * (pos2 - 1)];
      }

      st.site = &emlrtRSI;
      y = sum(&st, f_w);
      i2 = img_target->size[0];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &m_emlrtBCI, sp);
      }

      i2 = img_target->size[1];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &n_emlrtBCI, sp);
      }

      img_target->data[(pos + img_target->size[0] * (pos2 - 1)) - 1] = x / y;
      loop_ub = w->size[0];
      i2 = w->size[2];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &f_emlrtBCI, sp);
      }

      i2 = w->size[1];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &e_emlrtBCI, sp);
      }

      i2 = e_w->size[0];
      e_w->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)e_w, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        e_w->data[i2] = w->data[(i2 + w->size[0] * (pos - 1)) + w->size[0] *
          w->size[1] * (pos2 - 1)];
      }

      st.site = &b_emlrtRSI;
      bsxfun(&st, e_w, C_Bg, r0);
      st.site = &b_emlrtRSI;
      x = sum(&st, r0);
      loop_ub = w->size[0];
      i2 = w->size[2];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &h_emlrtBCI, sp);
      }

      i2 = w->size[1];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &g_emlrtBCI, sp);
      }

      i2 = d_w->size[0];
      d_w->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)d_w, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        d_w->data[i2] = w->data[(i2 + w->size[0] * (pos - 1)) + w->size[0] *
          w->size[1] * (pos2 - 1)];
      }

      st.site = &b_emlrtRSI;
      y = sum(&st, d_w);
      i2 = img_target->size[0];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &o_emlrtBCI, sp);
      }

      i2 = img_target->size[1];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &p_emlrtBCI, sp);
      }

      img_target->data[((pos + img_target->size[0] * (pos2 - 1)) +
                        img_target->size[0] * img_target->size[1]) - 1] = x / y;
      loop_ub = w->size[0];
      i2 = w->size[2];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &j_emlrtBCI, sp);
      }

      i2 = w->size[1];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &i_emlrtBCI, sp);
      }

      i2 = c_w->size[0];
      c_w->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)c_w, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        c_w->data[i2] = w->data[(i2 + w->size[0] * (pos - 1)) + w->size[0] *
          w->size[1] * (pos2 - 1)];
      }

      st.site = &c_emlrtRSI;
      bsxfun(&st, c_w, C_Bb, r0);
      st.site = &c_emlrtRSI;
      x = sum(&st, r0);
      loop_ub = w->size[0];
      i2 = w->size[2];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &l_emlrtBCI, sp);
      }

      i2 = w->size[1];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &k_emlrtBCI, sp);
      }

      i2 = b_w->size[0];
      b_w->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_w, i2, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_w->data[i2] = w->data[(i2 + w->size[0] * (pos - 1)) + w->size[0] *
          w->size[1] * (pos2 - 1)];
      }

      st.site = &c_emlrtRSI;
      y = sum(&st, b_w);
      i2 = img_target->size[0];
      if (!((pos >= 1) && (pos <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos, 1, i2, &q_emlrtBCI, sp);
      }

      i2 = img_target->size[1];
      if (!((pos2 >= 1) && (pos2 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(pos2, 1, i2, &r_emlrtBCI, sp);
      }

      img_target->data[((pos + img_target->size[0] * (pos2 - 1)) +
                        (img_target->size[0] * img_target->size[1] << 1)) - 1] =
        x / y;
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

  emxFree_real_T(&g_w);
  emxFree_real_T(&f_w);
  emxFree_real_T(&e_w);
  emxFree_real_T(&d_w);
  emxFree_real_T(&c_w);
  emxFree_real_T(&b_w);
  emxFree_real_T(&r0);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (calcul_final.c) */
