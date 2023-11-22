#ifndef S21_MATH_TEST_H_
#define S21_MATH_TEST_H_

#include "check.h"
#include <math.h>

#include "s21_math.h"

Suite *suite_s21_cos(void);
Suite *suite_s21_sin(void);

void run_tests(void);
void run_testcase(Suite *testcase);

#endif