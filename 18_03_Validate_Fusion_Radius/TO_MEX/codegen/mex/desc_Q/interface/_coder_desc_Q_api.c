/*
 * _coder_desc_Q_api.c
 *
 * Code generation for function '_coder_desc_Q_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "_coder_desc_Q_api.h"
#include "desc_Q_emxutil.h"
#include "desc_Q_data.h"
#include "blas.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI = { 1, 1, "_coder_desc_Q_api", "" };

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *img_target,
  const char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *labels,
  const char_T *identifier, emxArray_int32_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_int32_T *y);
static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *numlabels,
  const char_T *identifier);
static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *count, const
  char_T *identifier, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *par_s,
  const char_T *identifier);
static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_int32_T *ret);
static int32_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv10[3] = { 0, 0, 0 };

  y = NULL;
  m4 = emlrtCreateNumericArray(3, iv10, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m4, (void *)u->data);
  emlrtSetDimensions((mxArray *)m4, u->size, 3);
  emlrtAssign(&y, m4);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *img_target,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(img_target), &thisId, y);
  emlrtDestroyArray(&img_target);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *labels,
  const char_T *identifier, emxArray_int32_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(labels), &thisId, y);
  emlrtDestroyArray(&labels);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv9[2] = { 0, 0 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv9, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m3, (void *)u->data);
  emlrtSetDimensions((mxArray *)m3, u->size, 2);
  emlrtAssign(&y, m3);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_int32_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static int32_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *numlabels,
  const char_T *identifier)
{
  int32_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(numlabels), &thisId);
  emlrtDestroyArray(&numlabels);
  return y;
}

static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *count, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(count), &thisId, y);
  emlrtDestroyArray(&count);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  q_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *par_s,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = l_emlrt_marshallIn(sp, emlrtAlias(par_s), &thisId);
  emlrtDestroyArray(&par_s);
  return y;
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { -1, -1, 3 };

  boolean_T bv0[3] = { true, true, false };

  int32_T iv11[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv11);
  ret->size[0] = iv11[0];
  ret->size[1] = iv11[1];
  ret->size[2] = iv11[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_int32_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv1[2] = { true, true };

  int32_T iv12[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "int32", false, 2U, dims, &bv1[0],
    iv12);
  ret->size[0] = iv12[0];
  ret->size[1] = iv12[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (int32_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static int32_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  boolean_T bv2[1] = { true };

  int32_T iv13[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv2[0],
    iv13);
  ret->size[0] = iv13[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void desc_Q_api(const mxArray * const prhs[6], const mxArray *plhs[2])
{
  emxArray_real_T *img_target;
  emxArray_int32_T *labels;
  emxArray_real_T *count;
  emxArray_real_T *A_mean;
  emxArray_real_T *Q_inv;
  int32_T numlabels;
  real_T par_s;
  real_T par_c;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T1(&st, &img_target, 3, &e_emlrtRTEI, true);
  emxInit_int32_T(&st, &labels, 2, &e_emlrtRTEI, true);
  emxInit_real_T2(&st, &count, 1, &e_emlrtRTEI, true);
  emxInit_real_T(&st, &A_mean, 2, &e_emlrtRTEI, true);
  emxInit_real_T1(&st, &Q_inv, 3, &e_emlrtRTEI, true);

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "img_target", img_target);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "labels", labels);
  numlabels = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "numlabels");
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "count", count);
  par_s = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "par_s");
  par_c = k_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "par_c");

  /* Invoke the target function */
  desc_Q(&st, img_target, labels, numlabels, count, par_s, par_c, A_mean, Q_inv);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(A_mean);
  plhs[1] = b_emlrt_marshallOut(Q_inv);
  Q_inv->canFreeData = false;
  emxFree_real_T(&Q_inv);
  A_mean->canFreeData = false;
  emxFree_real_T(&A_mean);
  count->canFreeData = false;
  emxFree_real_T(&count);
  labels->canFreeData = false;
  emxFree_int32_T(&labels);
  img_target->canFreeData = false;
  emxFree_real_T(&img_target);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_desc_Q_api.c) */
