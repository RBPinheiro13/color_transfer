/*
 * inv.c
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "desc_Q.h"
#include "inv.h"
#include "xgetrf.h"
#include "blas.h"
#include "lapacke.h"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 172, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo q_emlrtRSI = { 173, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo r_emlrtRSI = { 176, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo s_emlrtRSI = { 179, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo t_emlrtRSI = { 182, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

static emlrtRSInfo u_emlrtRSI = { 189, "inv",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"
};

/* Function Definitions */
void invNxN(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2],
            real_T y_data[], int32_T y_size[2])
{
  int32_T n;
  int32_T yk;
  int32_T pipk;
  real_T b_x_data[25];
  int32_T ipiv_data[5];
  int32_T ipiv_size[2];
  int32_T p_data[5];
  int32_T k;
  real_T alpha1;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  n = x_size[0];
  y_size[0] = x_size[0];
  y_size[1] = x_size[1];
  yk = x_size[0] * x_size[1];
  for (pipk = 0; pipk < yk; pipk++) {
    y_data[pipk] = 0.0;
  }

  yk = x_size[0] * x_size[1];
  for (pipk = 0; pipk < yk; pipk++) {
    b_x_data[pipk] = x_data[pipk];
  }

  st.site = &p_emlrtRSI;
  xgetrf(&st, x_size[0], x_size[0], b_x_data, x_size[0], ipiv_data, ipiv_size);
  st.site = &q_emlrtRSI;
  p_data[0] = 1;
  yk = 1;
  for (k = 2; k <= x_size[0]; k++) {
    yk++;
    p_data[k - 1] = yk;
  }

  for (k = 0; k < ipiv_size[1]; k++) {
    if (ipiv_data[k] > 1 + k) {
      pipk = p_data[ipiv_data[k] - 1];
      p_data[ipiv_data[k] - 1] = p_data[k];
      p_data[k] = pipk;
    }
  }

  st.site = &r_emlrtRSI;
  for (k = 0; k + 1 <= n; k++) {
    yk = p_data[k] - 1;
    y_data[k + y_size[0] * (p_data[k] - 1)] = 1.0;
    st.site = &s_emlrtRSI;
    for (pipk = k; pipk + 1 <= n; pipk++) {
      if (y_data[pipk + y_size[0] * yk] != 0.0) {
        st.site = &t_emlrtRSI;
        for (i = pipk + 1; i + 1 <= n; i++) {
          y_data[i + y_size[0] * yk] -= y_data[pipk + y_size[0] * yk] *
            b_x_data[i + x_size[0] * pipk];
        }
      }
    }
  }

  st.site = &u_emlrtRSI;
  alpha1 = 1.0;
  DIAGA = 'N';
  TRANSA = 'N';
  UPLO = 'U';
  SIDE = 'L';
  m_t = (ptrdiff_t)x_size[0];
  n_t = (ptrdiff_t)x_size[0];
  lda_t = (ptrdiff_t)x_size[0];
  ldb_t = (ptrdiff_t)x_size[0];
  dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &alpha1, &b_x_data[0], &lda_t,
        &y_data[0], &ldb_t);
}

/* End of code generation (inv.c) */
