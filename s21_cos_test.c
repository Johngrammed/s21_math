#include "s21_math_test.h"
#include <stdio.h>

START_TEST(test_cos_1) {
        if (fabsl(s21_cos(2 * M_PI) - cos(2 * M_PI)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", 2*M_PI);
    }

}   END_TEST

START_TEST(test_cos_2) {
        if (fabsl(s21_cos(3 * M_PI) - cos(3 * M_PI)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", 3*M_PI);
    }

}   END_TEST

START_TEST(test_cos_3) {
        if (fabsl(s21_cos(M_PI / 2) - cos(M_PI / 2)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", M_PI / 2);
    }

}   END_TEST

START_TEST(test_cos_4) {
        if (fabsl(s21_cos(3 * M_PI / 2) - cos(3 * M_PI / 2)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", 3 * M_PI / 2);
    }

}   END_TEST

START_TEST(test_cos_5)
{
    if (fabsl(s21_cos(0) - cos(0)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", 0.0);
    }
} END_TEST

START_TEST(test_cos_6)
{
    if (fabsl(s21_cos(M_PI) - cos(M_PI)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", M_PI);
    }
} END_TEST

START_TEST(test_cos_7)
{
    if (fabsl(s21_cos(-M_PI) - cos(-M_PI)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", -M_PI);
    }
} END_TEST

START_TEST(test_cos_8)
{
    if (fabsl(s21_cos(1000 * M_PI) - cos(1000 * M_PI)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", 1000 * M_PI);
    }
} END_TEST

START_TEST(test_cos_9)
{
    if (fabsl(s21_cos(-M_PI / 4) - cos(-M_PI / 4)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", -M_PI / 4);
    }
} END_TEST

START_TEST(test_cos_10)
{
    if (fabsl(s21_cos(-1000 * M_PI) - cos(-1000 * M_PI)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", -1000 * M_PI);
    }
} END_TEST

START_TEST(test_cos_11)
{
    if (fabsl(s21_cos(M_PI / 4) - cos(M_PI / 4)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", M_PI / 4);
    }
} END_TEST

START_TEST(test_cos_12)
{
    if (fabsl(s21_cos(-M_PI / 6) - cos(-M_PI / 6)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf)\n", -M_PI / 6);
    }
} END_TEST

START_TEST(test_cos_13)
{
    if (fabsl(s21_cos(2 * M_PI + 1e-6) - cos(2 * M_PI + 1e-6)) <= 1e-6 &&
        fabsl(s21_cos(-2 * M_PI - 1e-6) - cos(-2 * M_PI - 1e-6)) <= 1e-6) {
        printf(" [PASS] Test: cos(%lf) and cos(%lf)\n", 2 * M_PI + 1e-6, -2 * M_PI - 1e-6);
    }
} END_TEST

START_TEST(cos_1) {
  double num = 0.55;
  long double orig_res = s21_cos(num), our_res = s21_cos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_2) {
  double num = -0.999999;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_3) {
  double num = 628;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_4) { ck_assert_float_eq(s21_cos(0), cos(0)); }
END_TEST

START_TEST(cos_5) { ck_assert_float_eq(s21_cos(-1), cos(-1)); }
END_TEST

START_TEST(cos_6) {
  double num = NAN;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_7) {
  double num = INFINITY;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_8) {
  double num = -INFINITY;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_9) {
  double x = 0;
  ck_assert_double_eq_tol(s21_cos(x), cosl(x), 1e-06);
}
END_TEST

START_TEST(cos_10) {
  ck_assert_ldouble_nan(s21_cos(-INFINITY));
  ck_assert_ldouble_nan(cosl(-INFINITY));
}
END_TEST

START_TEST(cos_11) {
  ck_assert_ldouble_nan(s21_cos(INFINITY));
  ck_assert_ldouble_nan(cosl(INFINITY));
}
END_TEST

START_TEST(cos_12) {
  ck_assert_ldouble_nan(s21_cos(NAN));
  ck_assert_ldouble_nan(cosl(NAN));
}
END_TEST

START_TEST(cos_13) { ck_assert_double_eq_tol(s21_cos(0.0), cosl(0.0), 1e-06); }
END_TEST

START_TEST(cos_14) {
  ck_assert_double_eq_tol(s21_cos(M_PI / 4), cosl(M_PI / 4), 1e-06);
}
END_TEST

START_TEST(cos_15) {
  ck_assert_double_eq_tol(s21_cos(M_PI / 6), cosl(M_PI / 6), 1e-06);
}
END_TEST

START_TEST(cos_16) {
  ck_assert_double_eq_tol(s21_cos(M_PI / 3), cosl(M_PI / 3), 1e-06);
}
END_TEST

START_TEST(cos_17) {
  ck_assert_double_eq_tol(s21_cos(M_PI / 2), cosl(M_PI / 2), 1e-06);
}
END_TEST

START_TEST(cos_18) {
  ck_assert_double_eq_tol(s21_cos(3 * M_PI / 2), cosl(3 * M_PI / 2), 1e-06);
}
END_TEST

START_TEST(cos_19) {
  ck_assert_double_eq_tol(s21_cos(2 * M_PI), cosl(2 * M_PI), 1e-06);
}
END_TEST

START_TEST(cos_20) {
  ck_assert_double_eq_tol(s21_cos(174.532925199433), cosl(174.532925199433),
                          1e-06);
}
END_TEST

START_TEST(cos_21) {
  ck_assert_double_eq_tol(s21_cos(-174.532925199433), cosl(-174.532925199433),
                          1e-06);
}
END_TEST

Suite *suite_s21_cos(void) {

    Suite *s;
    TCase *tc_cos;

    s = suite_create("test_cos_suite");
    tc_cos = tcase_create("cos");

    tcase_add_test(tc_cos, test_cos_1);
    tcase_add_test(tc_cos, test_cos_2);
    tcase_add_test(tc_cos, test_cos_3);
    tcase_add_test(tc_cos, test_cos_4);
    tcase_add_test(tc_cos, test_cos_5);
    tcase_add_test(tc_cos, test_cos_6);
    tcase_add_test(tc_cos, test_cos_7);
    tcase_add_test(tc_cos, test_cos_8);
    tcase_add_test(tc_cos, test_cos_9);
    tcase_add_test(tc_cos, test_cos_10);
    tcase_add_test(tc_cos, test_cos_11);
    tcase_add_test(tc_cos, test_cos_12);
    tcase_add_test(tc_cos, test_cos_13);
    tcase_add_test(tc_cos, cos_1);
    tcase_add_test(tc_cos, cos_2);
    tcase_add_test(tc_cos, cos_3);
    tcase_add_test(tc_cos, cos_4);
    tcase_add_test(tc_cos, cos_5);
    tcase_add_test(tc_cos, cos_6);
    tcase_add_test(tc_cos, cos_7);
    tcase_add_test(tc_cos, cos_8);
    tcase_add_test(tc_cos, cos_9);
    tcase_add_test(tc_cos, cos_10);
    tcase_add_test(tc_cos, cos_11);
    tcase_add_test(tc_cos, cos_12);
    tcase_add_test(tc_cos, cos_13);
    tcase_add_test(tc_cos, cos_14);
    tcase_add_test(tc_cos, cos_15);
    tcase_add_test(tc_cos, cos_16);
    tcase_add_test(tc_cos, cos_17);
    tcase_add_test(tc_cos, cos_18);
    tcase_add_test(tc_cos, cos_19);
    tcase_add_test(tc_cos, cos_20);
    tcase_add_test(tc_cos, cos_21);
    
    suite_add_tcase(s, tc_cos);
    return s;
}
