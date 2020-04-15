/*
 * distance2.h
 *
 * Code generation for function 'distance2'
 *
 */

#ifndef DISTANCE2_H
#define DISTANCE2_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "distance2_types.h"

/* Function Declarations */
extern void distance2(const emlrtStack *sp, const emxArray_real_T *Q_inv, const
                      emxArray_real_T *img_target, const emxArray_real_T *A_mean,
                      int32_T numlabels_target, const emxArray_int32_T
                      *labels_target, real_T r_2, emxArray_real_T *w);

#endif

/* End of code generation (distance2.h) */
