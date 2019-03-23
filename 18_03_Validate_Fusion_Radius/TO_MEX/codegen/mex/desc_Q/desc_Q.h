/*
 * desc_Q.h
 *
 * Code generation for function 'desc_Q'
 *
 */

#ifndef DESC_Q_H
#define DESC_Q_H

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
#include "desc_Q_types.h"

/* Function Declarations */
extern void desc_Q(const emlrtStack *sp, const emxArray_real_T *img_target,
                   const emxArray_int32_T *labels, int32_T numlabels, const
                   emxArray_real_T *count, real_T par_s, real_T par_c,
                   emxArray_real_T *A_mean, real_T Q_inv[8475]);

#endif

/* End of code generation (desc_Q.h) */
