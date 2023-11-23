#include "s21_math_test.h"

#include <check.h>

START_TEST(test_cos) {
  ck_assert_double_eq_tol(s21_cos(2 * S21_PI), cos(2 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_cos(3 * S21_PI), cos(3 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_cos(S21_PI / 2), cos(S21_PI / 2), 1e-6);
  ck_assert_double_eq_tol(s21_cos(3 * S21_PI / 2), cos(3 * S21_PI / 2), 1e-6);
  ck_assert_double_eq_tol(s21_cos(0), cos(0), 1e-6);
  ck_assert_double_eq_tol(s21_cos(S21_PI), cos(S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_cos(-S21_PI), cos(-S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_cos(1000 * S21_PI), cos(1000 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_cos(-S21_PI / 4), cos(-S21_PI / 4), 1e-6);
  ck_assert_double_eq_tol(s21_cos(-1000 * S21_PI), cos(-1000 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_cos(S21_PI / 4), cos(S21_PI / 4), 1e-6);
  ck_assert_double_eq_tol(s21_cos(-S21_PI / 6), cos(-S21_PI / 6), 1e-6);
  ck_assert_double_eq_tol(s21_cos(2 * S21_PI + 1e-6), cos(2 * S21_PI + 1e-6),
                          1e-6);
  ck_assert_double_eq_tol(s21_cos(-2 * S21_PI - 1e-6), cos(-2 * S21_PI - 1e-6),
                          1e-6);
  ck_assert_double_eq_tol(s21_cos(0.55), cos(0.55), 1e-6);
  ck_assert_double_eq_tol(s21_cos(-0.999999), cos(-0.999999), 1e-6);
  ck_assert_double_eq_tol(s21_cos(-1), cos(-1), 1e-6);
  ck_assert_double_nan(s21_cos(NAN));
  ck_assert_double_nan(s21_cos(INFINITY));
  ck_assert_double_nan(s21_cos(-INFINITY));
}
END_TEST

START_TEST(test_sin) {
ck_assert_double_eq_tol(s21_sin(2 * S21_PI), sin(2 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_sin(3 * S21_PI), sin(3 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_sin(S21_PI / 2), sin(S21_PI / 2), 1e-6);
  ck_assert_double_eq_tol(s21_sin(3 * S21_PI / 2), sin(3 * S21_PI / 2), 1e-6);
  ck_assert_double_eq_tol(s21_sin(0), sin(0), 1e-6);
  ck_assert_double_eq_tol(s21_sin(S21_PI), sin(S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_sin(-S21_PI), sin(-S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_sin(1000 * S21_PI), sin(1000 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_sin(-S21_PI / 4), sin(-S21_PI / 4), 1e-6);
  ck_assert_double_eq_tol(s21_sin(-1000 * S21_PI), sin(-1000 * S21_PI), 1e-6);
  ck_assert_double_eq_tol(s21_sin(S21_PI / 4), sin(S21_PI / 4), 1e-6);
  ck_assert_double_eq_tol(s21_sin(-S21_PI / 6), sin(-S21_PI / 6), 1e-6);
  ck_assert_double_eq_tol(s21_sin(2 * S21_PI + 1e-6), sin(2 * S21_PI + 1e-6),
                          1e-6);
  ck_assert_double_eq_tol(s21_sin(-2 * S21_PI - 1e-6), sin(-2 * S21_PI - 1e-6),
                          1e-6);
  ck_assert_double_eq_tol(s21_sin(0.55), sin(0.55), 1e-6);
  ck_assert_double_eq_tol(s21_sin(-0.999999), sin(-0.999999), 1e-6);
  ck_assert_double_eq_tol(s21_sin(-1), sin(-1), 1e-6);
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(s21_sin(INFINITY));
  ck_assert_double_nan(s21_sin(-INFINITY));
}
END_TEST

START_TEST(test_abs){
ck_assert_int_eq(s21_abs(0), 0);
ck_assert_int_eq(s21_abs(1), 1);
ck_assert_int_eq(s21_abs(-1), 1);
}
END_TEST

START_TEST(test_fabs){
ck_assert_double_eq_tol(s21_fabs(0.), fabs(0.), 1e-6);
ck_assert_double_eq_tol(s21_fabs(1.), fabs(1.),1e-6);
ck_assert_double_eq_tol(s21_fabs(-1.), fabs(-1.),1e-6);
ck_assert_double_eq_tol(s21_fabs(1.5), fabs(1.5),1e-6);
ck_assert_double_eq_tol(s21_fabs(-1.5), fabs(-1.5),1e-6);
ck_assert_double_eq_tol(s21_fabs(1e-6), fabs(1e-6),1e-6);
ck_assert_double_eq_tol(s21_fabs(-1e-6), fabs(-1e-6),1e-6);
ck_assert_double_eq_tol(s21_fabs(1e-9), fabs(1e-9),1e-6);
ck_assert_double_eq_tol(s21_fabs(-1e-9), fabs(-1e-9),1e-6);
//test nan 
ck_assert_double_nan(s21_fabs(NAN));
//test inf
ck_assert_double_infinite(s21_fabs(S21_INF));
ck_assert_double_infinite(s21_fabs(-S21_INF));
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

  suite_add_tcase(s, tc_tests);
  
  return s;
}
int main(void) {
  Suite *s = suite_s21_math();
  SRunner *runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  int no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? 0 : 1;
}
