#include <check.h>
#include "math.h"
#include "s21_math.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include "s21_math_test.h"

int main(void) {
    run_tests();
    return 0;
}

void run_testcase(Suite *testcase) {
    static int counter = 1;
    if (counter > 1) counter++;
    SRunner *sr = srunner_create(testcase);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    srunner_free(sr);
}

void run_tests(void) {
    Suite *list_cases[] = {
        suite_s21_cos(), NULL};

        for (Suite **current_testcase = list_cases; *current_testcase != NULL; current_testcase++) {
            run_testcase(*current_testcase);
        }
    }
