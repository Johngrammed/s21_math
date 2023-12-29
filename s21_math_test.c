#include "s21_math_test.h"

#include <check.h>
#include <math.h>

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
}
END_TEST

START_TEST(test_abs) {
  ck_assert_int_eq(s21_abs(0), 0);
  ck_assert_int_eq(s21_abs(1), 1);
  ck_assert_int_eq(s21_abs(-1), 1);
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
  ck_assert_ldouble_infinite(s21_fabs(S21_INF));
  ck_assert_ldouble_infinite(s21_fabs(-S21_INF));
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
  ck_assert_ldouble_infinite(s21_ceil(S21_INF));
  ck_assert_ldouble_infinite(s21_ceil(-S21_INF));
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
  ck_assert_ldouble_infinite(s21_floor(S21_INF));
  ck_assert_ldouble_infinite(s21_floor(-S21_INF));
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
  ck_assert_ldouble_infinite(s21_sqrt(S21_INF));
  ck_assert_ldouble_nan(s21_sqrt(-S21_INF));

  ck_assert_ldouble_nan(s21_sqrt(-15.01));
  ck_assert_ldouble_eq_tol(s21_sqrt(0.9999), sqrt(0.9999), 1e-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(98765432.123), sqrt(98765432.123), 1e-6);
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
}
END_TEST

START_TEST(test_exp) {
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(2), exp(2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-2), exp(-2), 1e-6);
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_ldouble_infinite(s21_exp(S21_INF));
  ck_assert_ldouble_eq_tol(s21_exp(-S21_INF), exp(-S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-3.421), exp(-3.421), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(DBL_MIN), exp(DBL_MIN), 1e-6);
  ck_assert_ldouble_eq_tol(s21_exp(-1000000), exp(-1000000), 1e-6);
  ck_assert_ldouble_infinite(s21_exp(1000000));
  ck_assert_ldouble_eq_tol(s21_exp(-750), exp(-750), 1e-6);
}
END_TEST

START_TEST(test_log) {
  ck_assert_ldouble_eq_tol(s21_log(456.789), log(456.789), 1e-6);
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_ldouble_eq_tol(s21_log(0.001), log(0.001), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(0.4), log(0.4), 1e-6);
  ck_assert_ldouble_nan(s21_log(-S21_INF));
  ck_assert_ldouble_infinite(s21_log(S21_INF));
  ck_assert_ldouble_infinite(s21_log(0));
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
}
END_TEST

START_TEST(test_pow) {
  ck_assert_ldouble_eq_tol(s21_pow(456.789, 1.1), pow(456.789, 1.1), 1e-6);
  ck_assert_ldouble_infinite(s21_pow(S21_INF, 1.1));
  ck_assert_ldouble_nan(s21_pow(NAN, 1.1));
  ck_assert_ldouble_nan(s21_pow(NAN, NAN));
  ck_assert_ldouble_nan(s21_pow(4, NAN));
  ck_assert_ldouble_infinite(s21_pow(S21_INF, S21_INF));
  ck_assert_ldouble_eq_tol(s21_pow(-16.161435, 9), powl(-16.161435, 9), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(4, -2), pow(4, -2), 1e-6);
  ck_assert_ldouble_nan(s21_pow(-10.1261, -0.72));
  ck_assert_ldouble_infinite(s21_pow(0, -0.33));
  ck_assert_ldouble_infinite(s21_pow(-0, -0.33));
  ck_assert_ldouble_eq_tol(s21_pow(-0, S21_INF), pow(-0, S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(0, 123), pow(0, 123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-0, 123), pow(-0, 123), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-1, S21_INF), pow(-1, S21_INF), 1e-6);
  ck_assert_ldouble_nan(s21_pow(-1, NAN));
  ck_assert_ldouble_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 1e-6);
  ck_assert_ldouble_nan(s21_pow(-123, NAN));
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, S21_INF));
  ck_assert_ldouble_eq_tol(s21_pow(-0, 6), pow(-0, 6), 1e-6);
  ck_assert_ldouble_infinite(s21_pow(2, S21_INF));
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 3));
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 4));
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
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 4));
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, 5));
  ck_assert_ldouble_eq_tol(s21_pow(-S21_INF, -5), pow(-S21_INF, -5), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(-S21_INF, -4), pow(-S21_INF, -4), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(1, -S21_INF), pow(1, -S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(4, -S21_INF), pow(-S21_INF, -S21_INF), 1e-6);
  ck_assert_ldouble_eq_tol(s21_pow(S21_INF, -S21_INF), pow(S21_INF, -S21_INF),
                           1e-6);
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, S21_INF));
  ck_assert_ldouble_infinite(s21_pow(-0, -S21_INF));
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
