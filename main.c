#include <check.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#include "s21_math.h"

int main() {
  long double sinx = NAN;
  double expi = 0;
  printf("s21_ceil = \t%Lf\n", s21_ceil(sinx));
  printf("ceil = \t%lf\n", ceil(sinx));

  printf("s21_floor = \t%Lf\n", s21_floor(sinx));
  printf("floor = \t%lf\n\n\n", floor(sinx));

  printf("s21_fabs = %lf\n", fabs(-S21_INF));

  printf("s21_sin = %0.6Lf\n", s21_sin(sinx));
  printf("org_sin = %0.6lf\n", sin(sinx));

  printf("s21_cos = %0.6Lf\n", s21_cos(sinx));
  printf("org_cos = %0.6lf\n", cos(sinx));

  printf("s21_tan = %0.6Lf\n", s21_tan(sinx));
  printf("org_tan = %0.6lf\n", tan(sinx));

  printf("s21_atan = %0.32Lf\n", s21_atan(sinx));
  printf("org_atan = %0.32lf\n", atan(sinx));

  printf("s21_sqrt = %0.6Lf\n", s21_sqrt(sinx));
  printf("org_sqrt = %0.6lf\n", sqrt(sinx));

  printf("s21_asin = %0.6Lf\n", s21_asin(sinx));
  printf("org_asin = %0.6lf\n", asin(sinx));

  printf("s21_acos = %0.6Lf\n", s21_acos(sinx));
  printf("org_acos = %0.6lf\n", acos(sinx));

  printf("s21_exp = %0.6Lf\n", s21_exp(sinx));
  printf("org_exp = %0.6f\n", exp(sinx));

  printf("s21_log = %0.6Lf\n", s21_log(sinx));
  printf("org_log = %0.6lf\n", log(sinx));

  printf("org_pow = %0.6lf\n", pow(sinx, expi));
  printf("s21_pow = %0.6Lf\n", s21_pow(sinx, expi));

  return 0;
}