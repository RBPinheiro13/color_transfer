/*
 * _coder_calcul_final_api.c
 *
 * Code generation for function '_coder_calcul_final_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "calcul_final.h"
#include "_coder_calcul_final_api.h"
#include "calcul_final_emxutil.h"
#include "calcul_final_data.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 1, 1, "_coder_calcul_final_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *w, const
  char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_Br, const
  char_T *identifier, emxArray_real_T *y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *img_target,
  const char_T *identifier, emxArray_real_T *y);
static void emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *w, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(w), &thisId, y);
  emlrtDestroyArray(&w);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_Br, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(C_Br), &thisId, y);
  emlrtDestroyArray(&C_Br);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *img_target,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(img_target), &thisId, y);
  emlrtDestroyArray(&img_target);
}

static void emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)u->data);
  emlrtSetDimensions((mxArray *)y, u->size, 3);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, 3 };

  boolean_T bv0[3] = { true, true, false };

  int32_T iv0[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv0);
  ret->size[0] = iv0[0];
  ret->size[1] = iv0[1];
  ret->size[2] = iv0[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, -1 };

  boolean_T bv1[3] = { true, true, true };

  int32_T iv1[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv1[0],
    iv1);
  ret->size[0] = iv1[0];
  ret->size[1] = iv1[1];
  ret->size[2] = iv1[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  boolean_T bv2[1] = { true };

  int32_T iv2[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv2[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void calcul_final_api(const mxArray *prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *img_target;
  emxArray_real_T *w;
  emxArray_real_T *C_Br;
  emxArray_real_T *C_Bg;
  emxArray_real_T *C_Bb;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T1(&st, &img_target, 3, &f_emlrtRTEI, true);
  emxInit_real_T1(&st, &w, 3, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &C_Br, 1, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &C_Bg, 1, &f_emlrtRTEI, true);
  emxInit_real_T(&st, &C_Bb, 1, &f_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, true, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "img_target", img_target);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "w", w);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "C_Br", C_Br);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "C_Bg", C_Bg);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "C_Bb", C_Bb);

  /* Invoke the target function */
  calcul_final(&st, img_target, w, C_Br, C_Bg, C_Bb);

  /* Marshall function outputs */
  emlrt_marshallOut(img_target, prhs[0]);
  plhs[0] = prhs[0];
  C_Bb->canFreeData = false;
  emxFree_real_T(&C_Bb);
  C_Bg->canFreeData = false;
  emxFree_real_T(&C_Bg);
  C_Br->canFreeData = false;
  emxFree_real_T(&C_Br);
  w->canFreeData = false;
  emxFree_real_T(&w);
  img_target->canFreeData = false;
  emxFree_real_T(&img_target);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_calcul_final_api.c) */
