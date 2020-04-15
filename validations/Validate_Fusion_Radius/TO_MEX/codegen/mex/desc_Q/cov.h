/*
 * cov.h
 *
 * Code generation for function 'cov'
 *
 */

#ifndef COV_H
#define COV_H

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
extern void b_cov(const emlrtStack *sp, const emxArray_real_T *x, real_T
                  xy_data[], int32_T xy_size[2]);
extern void cov(const emlrtStack *sp, const emxArray_real_T *x, real_T xy_data[],
                int32_T xy_size[2]);

#endif

/* End of code generation (cov.h) */
