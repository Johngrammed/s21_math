#include "s21_math_test.h"

#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(test_cos) {
  ck_assert_ldouble_eq_tol(s21_cos(2 * S21_PI), cos(2 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(3 * S21_PI), cos(3 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI / 2), cos(S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(3 * S21_PI / 2), cos(3 * S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI), cos(S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI), cos(-S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(1000 * S21_PI), cos(1000 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI / 4), cos(-S21_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-1000 * S21_PI), cos(-1000 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI / 4), cos(S21_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI / 6), cos(-S21_PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(2 * S21_PI + 1e-6), cos(2 * S21_PI + 1e-6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-2 * S21_PI - 1e-6), cos(-2 * S21_PI - 1e-6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(0.55), cos(0.55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-0.999999), cos(-0.999999), 1e-6);
  ck_assert_ldouble_eq_tol(s21_cos(-1), cos(-1), 1e-6);
  ck_assert_ldouble_nan(s21_cos(NAN));
  ck_assert_ldouble_nan(s21_cos(INFINITY));
  ck_assert_ldouble_nan(s21_cos(-INFINITY));
  {
    double x = 0.4;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = -0.4;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = 0;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = 1;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = -1;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = 598987986;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = -5938409234;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = 0.123456789012345678901234567890;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = S21_PI;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = 1 + 1e-6;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  {
    double x = -1 - 1e-6;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), 1e-6);
  }
  ck_assert_ldouble_nan(s21_cos(S21_INF));
  ck_assert_ldouble_nan(s21_cos(S21_NAN));
  ck_assert_ldouble_nan(s21_cos(-S21_INF));
}
END_TEST

START_TEST(test_sin) {
  ck_assert_ldouble_eq_tol(s21_sin(2 * S21_PI), sin(2 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3 * S21_PI), sin(3 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 2), sin(S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(3 * S21_PI / 2), sin(3 * S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI), sin(S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI), sin(-S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(1000 * S21_PI), sin(1000 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI / 4), sin(-S21_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-1000 * S21_PI), sin(-1000 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 4), sin(S21_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI / 6), sin(-S21_PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(2 * S21_PI + 1e-6), sin(2 * S21_PI + 1e-6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-2 * S21_PI - 1e-6), sin(-2 * S21_PI - 1e-6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(0.55), sin(0.55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-0.999999), sin(-0.999999), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sin(-1), sin(-1), 1e-6);
  ck_assert_ldouble_nan(s21_sin(NAN));
  ck_assert_ldouble_nan(s21_sin(INFINITY));
  ck_assert_ldouble_nan(s21_sin(-INFINITY));
  {
    double x = 2.523;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
  }
  {
    double x = -2.523;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
  }
  {
    double x = 923456789;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
  }
  {
    double x = -923456789;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
  }
  {
    double x = 0;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
  }
  {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_sin(x));
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_nan(s21_sin(x));
  }
  {
    double x = 0.12345678901234567890;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
  }
}
END_TEST

START_TEST(test_abs) {
  ck_assert_int_eq(s21_abs(0), 0);
  ck_assert_int_eq(s21_abs(1), 1);
  ck_assert_int_eq(s21_abs(-1), 1);
  ck_assert_int_eq(s21_abs(5), abs(5));
  ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647));
  ck_assert_int_eq(s21_abs(-0xA13), abs(-0xA13));
  ck_assert_int_eq(s21_abs(13), abs(13));
  ck_assert_int_eq(s21_abs(-0), abs(-0));
  ck_assert_int_eq(s21_abs(-05), abs(-05));
  ck_assert_int_eq(s21_abs(-00002345670), abs(-00002345670));
  ck_assert_int_eq(s21_abs(123456789), abs(123456789));
  ck_assert_int_eq(s21_abs(100), abs(100));
  ck_assert_int_eq(s21_abs(-100), abs(-100));
  ck_assert_int_eq(s21_abs(0), abs(0));
}
END_TEST

START_TEST(test_fabs) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.), fabs(0.), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1.), fabs(1.), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.), fabs(-1.), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1.5), fabs(1.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.5), fabs(-1.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1e-6), fabs(1e-6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1e-6), fabs(-1e-6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(1e-9), fabs(1e-9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_fabs(-1e-9), fabs(-1e-9), 1e-6);
  // test nan
  ck_assert_ldouble_nan(s21_fabs(NAN));
  // test inf
  ck_assert_ldouble_eq(S21_INF, fabs(S21_INF));
  // ck_assert_ldouble_infinite(s21_fabs(S21_INF));
  // ck_assert_ldouble_infinite(s21_fabs(-S21_INF));
  ck_assert_ldouble_eq(S21_INF, fabs(-S21_INF));
  ck_assert_ldouble_eq(s21_fabs(1.0), fabs(1.0));
  ck_assert_ldouble_eq(s21_fabs(-1.000005), fabs(-1.000005));
  ck_assert_ldouble_eq(s21_fabs(0.0), fabs(0.0));
  ck_assert_ldouble_eq(s21_fabs(-0.0), fabs(-0.0));
  ck_assert_ldouble_eq(s21_fabs(S21_INF), fabs(S21_INF));
  ck_assert_ldouble_eq(s21_fabs(-S21_INF), fabs(-S21_INF));
  ck_assert_ldouble_nan(s21_fabs(S21_NAN));
  ck_assert_ldouble_eq(s21_fabs(1000.042), fabs(1000.042));
  ck_assert_ldouble_eq(s21_fabs(-1000.042), fabs(-1000.042));
  ck_assert_ldouble_eq(s21_fabs(987633.465), fabs(987633.465));
}
END_TEST

START_TEST(test_ceil) {
  ck_assert_ldouble_eq_tol(s21_ceil(4), ceil(4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(4.8), ceil(4.8), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(4.2), ceil(4.2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-4), ceil(-4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_ceil(-4.5), ceil(-4.5), 1e-6);
  // test nan
  ck_assert_ldouble_nan(s21_ceil(NAN));
  // test inf
  // ck_assert_ldouble_infinite(s21_ceil(S21_INF));
  // ck_assert_ldouble_infinite(s21_ceil(-S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_ceil(S21_INF));
  ck_assert_ldouble_eq(-S21_INF, s21_ceil(-S21_INF));
  {
    double x = 1.0;
    ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 6);
  }
  {
    double x = 0.0;
    ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 6);
  }
  {
    double x = -0.0;
    ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 6);
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
  }
  {
    double x = -S21_INF;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
  }
  {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_ceil(x));
  }
  {
    double x = 4.7;
    ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), 6);
  }
  {
    double x = 4.7323234567890765;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = 4732323456789076.5;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = -4.7323234567890765;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = -4732323456789076.5;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    ck_assert_ldouble_infinite(s21_ceil(S21_INF));
    ck_assert_ldouble_infinite(ceil(S21_INF));
  }
  {
    ck_assert_ldouble_nan(s21_ceil(S21_NAN));
    ck_assert_ldouble_nan(ceil(S21_NAN));
  }
  { ck_assert_ldouble_eq(s21_ceil(0), ceil(0)); }
  {
    double x = 8743517471375471154.34143134134134;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
  }
  {
    double x = -8743517471375471154.34143134134134;
    ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
  }
  { ck_assert_ldouble_eq(ceil(0), s21_ceil(0)); }
  ck_assert_ldouble_eq(ceil(-1234), s21_ceil(-1234));
  ck_assert_ldouble_eq(ceil(1234), s21_ceil(1234));
  ck_assert_ldouble_eq(ceil(1), s21_ceil(1));
  ck_assert_ldouble_eq(ceil(1.7), s21_ceil(1.7));
  ck_assert_int_eq(ceil(-1.7), s21_ceil(-1.7));
  ck_assert_int_eq(floor(-0.7), s21_floor(-0.7));
  ck_assert_ldouble_eq(ceil(14.7), s21_ceil(14.7));
  ck_assert_ldouble_eq(ceil(0.7), s21_ceil(0.7));
  ck_assert_ldouble_eq(ceil(S21_INF), s21_ceil(S21_INF));
  ck_assert_ldouble_eq(ceil(-S21_INF), s21_ceil(-S21_INF));
  {
    double num = DBL_MIN;
    double orig = ceil(num);
    double mmyy = s21_ceil(num);
    ck_assert_ldouble_eq(orig, mmyy);
  }
  {
    double orig = ceil(DBL_MAX);
    double mmyy = s21_ceil(DBL_MAX);
    ck_assert_ldouble_eq(orig, mmyy);
  }
}
END_TEST

START_TEST(test_floor) {
  ck_assert_ldouble_eq_tol(s21_floor(4), floor(4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(4.8), floor(4.8), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(4.2), floor(4.2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-4), floor(-4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_floor(-4.5), floor(-4.5), 1e-6);
  // test nan
  ck_assert_ldouble_nan(s21_floor(NAN));
  // test inf
  // ck_assert_ldouble_infinite(s21_floor(S21_INF));
  // ck_assert_ldouble_infinite(s21_floor(-S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_floor(S21_INF));
  ck_assert_ldouble_eq(-S21_INF, s21_floor(-S21_INF));
  {
    double x = 1.0;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = 0.0;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = -0.0;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_eq(s21_floor(x), floor(x));
  }
  {
    double x = -S21_INF;
    ck_assert_ldouble_eq(s21_floor(x), floor(x));
  }
  {
    double x = NAN;
    ck_assert_ldouble_nan(s21_floor(x));
  }
  {
    double x = -4.7;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = 4.7323234567890765;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = 4732323456789076.5;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = -4.7323234567890765;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  {
    double x = -4732323456789076.5;
    ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), 6);
  }
  ck_assert_ldouble_eq(floor(0), s21_floor(0));
  ck_assert_ldouble_eq(floor(-1234), s21_floor(-1234));
  ck_assert_ldouble_eq(floor(1234), s21_floor(1234));
  ck_assert_ldouble_eq(ceil(1), s21_ceil(1));
  ck_assert_ldouble_eq(floor(1.7), s21_floor(1.7));
  ck_assert_int_eq(floor(-1.7), s21_floor(-1.7));
  ck_assert_int_eq(floor(-0.7), s21_floor(-0.7));
  ck_assert_ldouble_eq(floor(14.7), s21_floor(14.7));
  ck_assert_ldouble_eq(floor(0.7), s21_floor(0.7));
  ck_assert_ldouble_eq(floor(S21_INF), s21_floor(S21_INF));
  ck_assert_ldouble_eq(floor(-S21_INF), s21_floor(-S21_INF));
  ck_assert_ldouble_nan(s21_floor(S21_NAN));
  ck_assert_ldouble_eq(floor(0.123456907912345), s21_floor(0.123456907912345));
}
END_TEST

START_TEST(test_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(2 * S21_PI), tan(2 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(3 * S21_PI), tan(3 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_PI / 2), tan(S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(3 * S21_PI / 2), tan(3 * S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_PI), tan(S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-S21_PI), tan(-S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(1000 * S21_PI), tan(1000 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-S21_PI / 4), tan(-S21_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-1000 * S21_PI), tan(-1000 * S21_PI), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(S21_PI / 4), tan(S21_PI / 4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-S21_PI / 6), tan(-S21_PI / 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(2 * S21_PI + 1e-6), tan(2 * S21_PI + 1e-6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-2 * S21_PI - 1e-6), tan(-2 * S21_PI - 1e-6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(0.55), tan(0.55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-0.999999), tan(-0.999999), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-1), tan(-1), 1e-6);
  ck_assert_ldouble_nan(s21_tan(NAN));
  ck_assert_ldouble_nan(s21_tan(INFINITY));
  ck_assert_ldouble_nan(s21_tan(-INFINITY));
  ck_assert_ldouble_eq_tol(s21_tan(-S21_PI / 2), tan(-S21_PI / 2), 1e-6);
  {
    double x = 0.4;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = -0.4;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = 0;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = 1;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = -1;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = 400000.23;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = -400000.23;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }

  {
    double x = 0.123456789012345678901234567890;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = S21_PI;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = 1 + 1e-6;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  {
    double x = -1 - 1e-6;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), 1e-6);
  }
  ck_assert_ldouble_nan(s21_tan(S21_INF));
  ck_assert_ldouble_nan(s21_tan(S21_NAN));
  ck_assert_ldouble_nan(s21_tan(-S21_INF));
}
END_TEST

START_TEST(test_atan) {
  ck_assert_ldouble_eq_tol(s21_atan(INFINITY), atan(INFINITY), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(-INFINITY), atan(-INFINITY), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(-0.5), atan(-0.5), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(0.9), atan(0.9), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(-0.9), atan(-0.9), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(0.1), atan(0.1), 1e-06);
  ck_assert_ldouble_eq_tol(s21_atan(-0.1), atan(-0.1), 1e-06);
  ck_assert_ldouble_nan(s21_atan(NAN));
  {
    double x = 0.4;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = -0.4;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = 0;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = -0.0;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = -1;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = 100000000.0;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = -1000000000000000;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = 0.923456789012345678901234567890;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_atan(x));
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
  {
    double x = -S21_INF;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), 1e-6);
  }
}
END_TEST

START_TEST(test_sqrt) {
  ck_assert_ldouble_eq_tol(s21_sqrt(4), sqrt(4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(9), sqrt(9), 1e-6);
  // edge cases
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(2), sqrt(2), 1e-6);
  // infinite and nan
  ck_assert_ldouble_nan(s21_sqrt(NAN));
  // ck_assert_ldouble_infinite(s21_sqrt(S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_sqrt(S21_INF));
  ck_assert_ldouble_nan(s21_sqrt(-S21_INF));

  ck_assert_ldouble_nan(s21_sqrt(-15.01));
  ck_assert_ldouble_eq_tol(s21_sqrt(0.9999), sqrt(0.9999), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(98765432.123), sqrt(98765432.123), 1e-6);

  {
    double x = 1;
    ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
  }
  {
    double x = 0.123456;
    ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
  }
  {
    double x = 0.0;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = -0.0;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = 987565.9874641213656;
    ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), 1e-6);
  }
  {
    double x = S21_PI / 3;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = S21_PI / 6;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = S21_PI / 2;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = 2 * S21_PI / 3;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = 5 * S21_PI / 6;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = S21_PI;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = -1.234567;
    ck_assert_ldouble_nan(s21_sqrt(x));
  }
  {
    double x = 64.;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = 123456789;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = DBL_MIN;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = 4.163435e-34;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = 1e-7;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), 1e-6);
  }
  {
    double x = -121.;
    ck_assert_ldouble_nan(s21_sqrt(x));
  }
  {
    double x = -2.89;
    ck_assert_ldouble_nan(s21_sqrt(x));
  }
  {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_sqrt(x));
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_eq(sqrt(x), s21_sqrt(x));
  }
  {
    double x = -S21_INF;
    ck_assert_ldouble_nan(s21_sqrt(x));
  }
}
END_TEST

START_TEST(test_asin) {
  ck_assert_ldouble_eq_tol(s21_asin(0.55), asin(0.55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.99), asin(-0.99), 1e-6);
  ck_assert_ldouble_nan(s21_asin(-9));
  ck_assert_ldouble_nan(s21_asin(S21_INF));
  ck_assert_ldouble_nan(s21_asin(-S21_INF));
  ck_assert_ldouble_nan(s21_asin(NAN));
  ck_assert_ldouble_eq_tol(s21_asin(1.0), asin(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-0.0), asin(-0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-sqrt(3) / 2), asin(-sqrt(3) / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-sqrt(2) / 2), asin(-sqrt(2) / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-6);
  {
    double x = 0.4;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = -0.4;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = 0.0;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = -0.0;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = -1;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = 5;
    ck_assert_ldouble_nan(s21_asin(x));
  }
  {
    double x = -5;
    ck_assert_ldouble_nan(s21_asin(x));
  }
  {
    double x = 0.123456789012345678901234567890;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = 1 + 1e-16l;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = -1 - 1e-16l;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), 1e-6);
  }
  {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_asin(x));
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_nan(s21_asin(x));
  }
}
END_TEST

START_TEST(test_acos) {
  ck_assert_ldouble_eq_tol(s21_acos(0.55), acos(0.55), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.99), acos(-0.99), 1e-6);
  ck_assert_ldouble_nan(s21_acos(-9));
  ck_assert_ldouble_nan(s21_acos(S21_INF));
  ck_assert_ldouble_nan(s21_acos(-S21_INF));
  ck_assert_ldouble_nan(s21_acos(NAN));
  ck_assert_ldouble_eq_tol(s21_acos(1.0), acos(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.0), acos(0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.0), acos(-0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-sqrt(3) / 2), acos(-sqrt(3) / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-sqrt(2) / 2), acos(-sqrt(2) / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(sqrt(2) / 2), acos(sqrt(2) / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(sqrt(3) / 2), acos(sqrt(3) / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-6);
  {
    double x = 0.999;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), 1e-6);
  }
  {
    double x = 1;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), 1e-6);
  }
  {
    double x = 3.0;
    ck_assert_ldouble_nan(s21_acos(x));
  }
  {
    double x = 0;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), 1e-6);
  }
  {
    double x = -0.001;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), 1e-6);
  }
  {
    double x = -0.9999;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), 1e-6);
  }
  {
    double x = -1 - 1e-16;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), 1e-6);
  }
  {
    double x = 1.001;
    ck_assert_ldouble_nan(s21_acos(x));
  }
  {
    double x = -1.1;
    ck_assert_ldouble_nan(s21_acos(x));
  }
}
END_TEST

START_TEST(test_exp) {
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(2), exp(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-2), exp(-2), 1e-6);
  ck_assert_ldouble_nan(s21_exp(NAN));
  // ck_assert_ldouble_infinite(s21_exp(S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_exp(S21_INF));
  ck_assert_ldouble_eq_tol(s21_exp(-S21_INF), exp(-S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-3.421), exp(-3.421), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(DBL_MIN), exp(DBL_MIN), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1000000), exp(-1000000), 1e-6);
  // ck_assert_ldouble_infinite(s21_exp(1000000));
  ck_assert_ldouble_eq(S21_INF, s21_exp(1000000));
  ck_assert_ldouble_eq_tol(s21_exp(-750), exp(-750), 1e-6);
  {
    double x = 24.67;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
  }
  {
    double x = DBL_MAX;
    ck_assert_ldouble_eq(exp(x), s21_exp(x));
  }
  {
    double x = DBL_MIN;
    ck_assert_ldouble_eq(exp(x), s21_exp(x));
  }
  {
    double x = INT_MAX;
    ck_assert_ldouble_eq(exp(x), s21_exp(x));
  }
  {
    double x = 7.345e-29;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
  }
  {
    double x = -0.767;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
  }
  {
    double x = -13.567;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
  }
  {
    double x = 0.0;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
  }
  {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_exp(x));
  }
  {
    double x = -0.0;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_eq(exp(x), s21_exp(x));
  }
  {
    double x = -S21_INF;
    ck_assert_ldouble_eq(exp(x), s21_exp(x));
  }
}
END_TEST

START_TEST(test_log) {
  ck_assert_ldouble_eq_tol(s21_log(456.789), log(456.789), 1e-6);
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_ldouble_eq_tol(s21_log(0.001), log(0.001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.4), log(0.4), 1e-6);
  ck_assert_ldouble_nan(s21_log(-S21_INF));
  // ck_assert_ldouble_infinite(s21_log(S21_INF));
  // ck_assert_ldouble_infinite(s21_log(0));
  ck_assert_ldouble_eq(S21_INF, s21_log(S21_INF));
  ck_assert_ldouble_eq(-S21_INF, s21_log(0));
  ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(100), log(100), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(S21_PI / 3), log(S21_PI / 3), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(9.234578353457e-6), log(9.234578353457e-6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_log(9.234578353457e6), log(9.234578353457e6),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1234567.000000004), log(1234567.000000004),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1.1e-16), log(1.1e-16), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1.1e-45), log(1.1e-45), 1e-6);
  {
    double x = 2.523;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), 1e-6);
  }
  {
    double x = DBL_MAX;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), 1e-6);
  }
  {
    double x = DBL_MIN;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), 1e-6);
  }
  {
    double x = 4.3234323e-43;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), 1e-6);
  }
  {
    double x = -3432.12;
    ck_assert_ldouble_nan(s21_log(x));
  }
  {
    double x = 0;
    ck_assert_ldouble_infinite(s21_log(x));
  }
  {
    double x = 1;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), 1e-6);
  }
  {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_log(x));
  }
  {
    double x = -S21_NAN;
    ck_assert_ldouble_nan(s21_log(x));
  }
  {
    double x = S21_INF;
    ck_assert_ldouble_infinite(s21_log(x));
  }
  {
    double x = -S21_INF;
    ck_assert_ldouble_nan(s21_log(x));
  }
}
END_TEST

START_TEST(test_pow) {
  ck_assert_ldouble_eq_tol(s21_pow(456.789, 1.1), pow(456.789, 1.1), 1e-6);
  // ck_assert_ldouble_infinite(s21_pow(S21_INF, 1.1));
  ck_assert_ldouble_eq(S21_INF, s21_pow(S21_INF, 1.1));
  ck_assert_ldouble_nan(s21_pow(NAN, 1.1));
  ck_assert_ldouble_nan(s21_pow(NAN, NAN));
  ck_assert_ldouble_nan(s21_pow(4, NAN));
  // ck_assert_ldouble_infinite(s21_pow(S21_INF, S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_pow(S21_INF, S21_INF));
  ck_assert_ldouble_eq_tol(s21_pow(-16.161435, 9), powl(-16.161435, 9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(4, -2), pow(4, -2), 1e-6);
  ck_assert_ldouble_nan(s21_pow(-10.1261, -0.72));
  // ck_assert_ldouble_infinite(s21_pow(0, -0.33));
  // ck_assert_ldouble_infinite(s21_pow(-0, -0.33));
  ck_assert_ldouble_eq(S21_INF, s21_pow(0, -0.33));
  ck_assert_ldouble_eq(S21_INF, s21_pow(-0, -0.33));
  ck_assert_ldouble_eq_tol(s21_pow(-0, S21_INF), pow(-0, S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0, 123), pow(0, 123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-0, 123), pow(-0, 123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1, S21_INF), pow(-1, S21_INF), 1e-6);
  ck_assert_ldouble_nan(s21_pow(-1, NAN));
  ck_assert_ldouble_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 1e-6);
  ck_assert_ldouble_nan(s21_pow(-123, NAN));
  // ck_assert_ldouble_infinite(s21_pow(-S21_INF, S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_pow(-S21_INF, S21_INF));
  ck_assert_ldouble_eq_tol(s21_pow(-0, 6), pow(-0, 6), 1e-6);
  // ck_assert_ldouble_infinite(s21_pow(2, S21_INF));
  // ck_assert_ldouble_infinite(s21_pow(-S21_INF, 3));
  // ck_assert_ldouble_infinite(s21_pow(-S21_INF, 4));
  ck_assert_ldouble_eq(S21_INF, s21_pow(2, S21_INF));
  ck_assert_ldouble_eq(-S21_INF, s21_pow(-S21_INF, 3));
  ck_assert_ldouble_eq(S21_INF, s21_pow(-S21_INF, 4));
  ck_assert_ldouble_eq_tol(s21_pow(9.99999999e3, 9.95e-4),
                           pow(9.99999999e3, 9.95e-4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(2.1234567, -2), pow(2.1234567, -2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1.23456e-7, 2.21), pow(1.23456e-7, 2.21),
                           1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(2.1, 11), pow(2.1, 11), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(2, 18), pow(2, 18), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0.0, 0.0), pow(0.0, 0.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-S21_INF, -S21_INF), pow(-S21_INF, -S21_INF),
                           1e-6);
  // ck_assert_ldouble_infinite(s21_pow(-S21_INF, 4));
  // ck_assert_ldouble_infinite(s21_pow(-S21_INF, 5));
  ck_assert_ldouble_eq(S21_INF, s21_pow(-S21_INF, 4));
  ck_assert_ldouble_eq(-S21_INF, s21_pow(-S21_INF, 5));
  ck_assert_ldouble_eq_tol(s21_pow(-S21_INF, -5), pow(-S21_INF, -5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-S21_INF, -4), pow(-S21_INF, -4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1, -S21_INF), pow(1, -S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(4, -S21_INF), pow(-S21_INF, -S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(S21_INF, -S21_INF), pow(S21_INF, -S21_INF),
                           1e-6);
  // ck_assert_ldouble_infinite(s21_pow(-S21_INF, S21_INF));
  // ck_assert_ldouble_infinite(s21_pow(-0, -S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_pow(-S21_INF, S21_INF));
  ck_assert_ldouble_eq(S21_INF, s21_pow(-0, -S21_INF));
  ck_assert_ldouble_eq_tol(s21_pow(-0, 0.4367), pow(-0, 0.4367), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1, 5), pow(-1, 5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1, 6), pow(-1, 6), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-3, 3), pow(-3, 3), 1e-6);

  long double exp;
  long double base = -0;
  long double res;
  long double res1;
  for (exp = -10.; exp < 10; exp += 0.1) {
    if (fmod(exp, 2) != 0) {
      res = pow(base, exp);
      res1 = s21_pow(base, exp);
    }
  }
  ck_assert_ldouble_eq_tol(res, res1, 1e-6);

  {
    double num = 134.5;
    double p = 1.4;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = 134.5;
    double p = 20.5e-34;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = 563.23;
    double p = -42.;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -10.1;
    double p = -3.;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -10.1;
    double p = 2.;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -10.1;
    double p = -1.5;
    ck_assert_ldouble_nan(s21_pow(num, p));
  }
  {
    double num = 10.1;
    double p = 0.123;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -27.45;
    double p = 1.0 / 3.0;
    ck_assert_ldouble_nan(s21_pow(num, p));
  }
  {
    double num = 12.34;
    double p = 1;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = 0;
    double p = -12;
    ck_assert_ldouble_infinite(s21_pow(num, p));
    ck_assert_ldouble_infinite(pow(num, p));
  }
  {
    double num = 0;
    double p = 12;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -1;
    ck_assert_ldouble_eq_tol(pow(num, S21_INF), s21_pow(num, S21_INF), 1e-6);
  }
  {
    double num = 0.123;
    double p = -S21_INF;
    ck_assert_ldouble_infinite(s21_pow(num, p));
    ck_assert_ldouble_infinite(pow(num, p));
  }
  {
    double num = 0.123;
    double p = S21_INF;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = 13;
    double p = -S21_INF;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -0.0;
    double p = 12;
    ck_assert_ldouble_eq(pow(num, p), s21_pow(num, p));
  }
  {
    double num = 13;
    double p = S21_INF;
    ck_assert_ldouble_infinite(s21_pow(num, p));
    ck_assert_ldouble_infinite(pow(num, p));
  }
  {
    double num = S21_INF;
    double p = -12;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -S21_INF;
    double p = -13;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = -S21_INF;
    double p = 13;
    ck_assert_ldouble_infinite(s21_pow(num, p));
    ck_assert_ldouble_infinite(pow(num, p));
  }
  {
    double num = -S21_INF;
    double p = -12;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = S21_INF;
    double p = 12;
    ck_assert_ldouble_infinite(s21_pow(num, p));
    ck_assert_ldouble_infinite(pow(num, p));
  }
  {
    double num = DBL_MAX;
    double p = -10;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
  {
    double num = DBL_MIN;
    double p = 10;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), 1e-6);
  }
}
END_TEST

START_TEST(test_fmod) {
  {
    double x = 12.0;
    double y = 4.0;
    ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
  }
  {
    double x = 0.0;
    double y = 5.5;
    ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
  }
  {
    double x = S21_INF;
    double y = 5.5;
    ck_assert_ldouble_nan(s21_fmod(x, y));
  }
  {
    double x = -S21_INF;
    double y = 5.5;
    ck_assert_ldouble_nan(s21_fmod(x, y));
  }
  {
    double x = 5.8;
    double y = 0.0;
    ck_assert_ldouble_nan(s21_fmod(x, y));
  }
  {
    double x = 5.8;
    double y = -0.0;
    ck_assert_ldouble_nan(s21_fmod(x, y));
  }
  {
    double x = 5.8;
    double y = S21_INF;
    ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
  }
  {
    double x = 5.8;
    double y = -S21_INF;
    ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), 1e-6);
  }
  {
    double x = S21_NAN;
    double y = 12.6;
    ck_assert_ldouble_nan(s21_fmod(x, y));
  }
  {
    double x = 5.5;
    double y = S21_NAN;
    ck_assert_ldouble_nan(s21_fmod(x, y));
  }
}
END_TEST

Suite *suite_s21_math(void) {
  Suite *s;
  TCase *tc_tests;

  s = suite_create("test_s21_math_suite");
  tc_tests = tcase_create("s21_math");

  tcase_add_test(tc_tests, test_cos);
  tcase_add_test(tc_tests, test_sin);
  tcase_add_test(tc_tests, test_abs);
  tcase_add_test(tc_tests, test_fabs);
  tcase_add_test(tc_tests, test_ceil);
  tcase_add_test(tc_tests, test_floor);
  tcase_add_test(tc_tests, test_tan);
  tcase_add_test(tc_tests, test_atan);
  tcase_add_test(tc_tests, test_sqrt);
  tcase_add_test(tc_tests, test_asin);
  tcase_add_test(tc_tests, test_acos);
  tcase_add_test(tc_tests, test_exp);
  tcase_add_test(tc_tests, test_log);
  tcase_add_test(tc_tests, test_pow);
  tcase_add_test(tc_tests, test_fmod);

  suite_add_tcase(s, tc_tests);

  return s;
}
int main(void) {
  Suite *s = suite_s21_math();
  SRunner *runner = srunner_create(s);

  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_NORMAL);
  int no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);

  return (no_failed == 0) ? 0 : 1;
}
