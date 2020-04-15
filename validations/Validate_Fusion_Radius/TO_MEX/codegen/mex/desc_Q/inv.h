/*
 * inv.h
 *
 * Code generation for function 'inv'
 *
 */

#ifndef INV_H
#define INV_H

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
extern void invNxN(const emlrtStack *sp, const real_T x_data[], const int32_T
                   x_size[2], real_T y_data[], int32_T y_size[2]);

#endif

/* End of code generation (inv.h) */
