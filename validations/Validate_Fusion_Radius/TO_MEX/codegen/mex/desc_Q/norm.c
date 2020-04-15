/*
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "norm.h"
#include "blas.h"
#include "lapacke.h"

/* Function Definitions */
real_T norm(const real_T x_data[], const int32_T x_size[2])
{
  real_T y;
  int32_T j;
  boolean_T exitg1;
  real_T s;
  int32_T i;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j <= x_size[1] - 1)) {
    s = 0.0;
    for (i = 0; i < x_size[0]; i++) {
      s += muDoubleScalarAbs(x_data[i + x_size[0] * j]);
    }

    if (muDoubleScalarIsNaN(s)) {
      y = rtNaN;
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

/* End of code generation (norm.c) */
