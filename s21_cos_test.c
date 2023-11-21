#include "s21_math_test.h"
#include <stdio.h>

START_TEST(test_1) {
        if (fabsl(s21_cos(2 * M_PI) - cos(2 * M_PI)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", 2*M_PI);
    }

}   END_TEST

START_TEST(test_2) {
        if (fabsl(s21_cos(3 * M_PI) + cos(3 * M_PI)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", 3*M_PI);
    }

}   END_TEST

START_TEST(test_3) {
        if (fabsl(s21_cos(M_PI / 2) - cos(M_PI / 2)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", M_PI / 2);
    }

}   END_TEST

START_TEST(test_4) {
        if (fabsl(s21_cos(3 * M_PI / 2) - cos(3 * M_PI / 2)) <= 1e-6){

        printf(" [PASS] Test: cos(%lf) \n", 3 * M_PI / 2);
    }

}   END_TEST

Suite *suite_s21_cos(void) {

    Suite *s;
    TCase *tc_core;

    s = suite_create("test_suite");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_1);
    tcase_add_test(tc_core, test_2);
    tcase_add_test(tc_core, test_3);
    tcase_add_test(tc_core, test_4);
    
    suite_add_tcase(s, tc_core);
    return s;
}
