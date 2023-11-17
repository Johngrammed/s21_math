#include <float.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#include "s21_math.h"

int main() {
  /*
  double x = 0.1;
  double y = 5;
  int x1 = -325;

  printf("abs = %d\n", s21_abs(x1));
  printf("fabs = %Lf\n", s21_fabs(x));

  printf("s21_fmod = %Lf\n", s21_fmod(x, y));
  printf("s21_fmod = %lf\n", fmod(x, y));

  printf("s21_ceil = \t%Lf\n", s21_ceil(x));
  printf("ceil = \t%lf\n", ceil(x));

  printf("s21_floor = \t%Lf\n", s21_floor(x));
  printf("floor = \t%lf\n\n\n", floor(x));

  */
  double sinx = 3 * M_PI / 2;
  double expi = -0.24;
  /*for (double i = 0; i <=360; i += 0.1){
      printf("sin = %0.10lf, s21_sin = %0.10Lf, eq? = %d\n", sin(i), s21_sin(i),
  sin(i) == s21_sin(i));
  }
  */
  printf("s21_sin = %0.6Lf\n", s21_sin(sinx));
  printf("org_sin = %0.6lf\n", sin(sinx));

  printf("s21_cos = %0.6Lf\n", s21_cos(sinx));
  printf("org_cos = %0.6lf\n", cos(sinx));

  printf("s21_tan = %0.6Lf\n", s21_tan(sinx));
  printf("org_tan = %0.6lf\n", tan(sinx));

  printf("s21_atan = %0.6Lf\n", s21_atan(sinx));
  printf("org_atan = %0.6lf\n", atan(sinx));

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