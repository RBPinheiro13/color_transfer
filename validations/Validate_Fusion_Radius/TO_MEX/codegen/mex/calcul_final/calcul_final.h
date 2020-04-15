/*
 * calcul_final.h
 *
 * Code generation for function 'calcul_final'
 *
 */

#ifndef CALCUL_FINAL_H
#define CALCUL_FINAL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "calcul_final_types.h"

/* Function Declarations */
extern void calcul_final(const emlrtStack *sp, emxArray_real_T *img_target,
  const emxArray_real_T *w, const emxArray_real_T *C_Br, const emxArray_real_T
  *C_Bg, const emxArray_real_T *C_Bb);

#endif

/* End of code generation (calcul_final.h) */
