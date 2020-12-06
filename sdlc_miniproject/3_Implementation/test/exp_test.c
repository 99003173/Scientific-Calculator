#include<stdio.h>
#include<stdlib.h>
#include "unity_header.h"
#include "unity_internal.h"
#include "test_header.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
float exponent(float x);
float natural_logarithm(float x);
float logarithm(float x);
float squareroot(float x);
float power(float x,float y);
int decimal_to_bin(int decimal);
float Mean(int a[], int n);
int variance(int a[], int n);
float standardDeviation(int arr[],int n);

void test_exponent(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(148.413162, exponent(5.0), "values is not Expected");
}
void test_natural_log(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(1.609438, natural_logarithm(5.0), "values is not Expected");
}
void test_log_ten(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.698970, logarithm(5.0), "values is not Expected");
}
void test_square_root(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(2.236068, squareroot(5.0), "values is not Expected");
}
void test_power(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(25.000000, power(5.0,2.0), "values is not Expected");
}
void test_decimal_to_bin(void)
{
    TEST_ASSERT_EQUAL_INT_MESSAGE(111000, decimal_to_bin(56), "values is not Expected");
}
void test_mean(void)
{
    int array[]={1,7,8,9};
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(6.250000, Mean(array,4), "values is not Expected");
}
void test_variance(void)
{
    int array[]={1,7,8,9};
    TEST_ASSERT_EQUAL_INT_MESSAGE(9, variance(array,4),"values is not Expected");
}
void test_SD(void)
{
    int array[]={1,7,8,9};
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(3.000000, standardDeviation(array,4), "values is not Expected");
}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_exponent);
  RUN_TEST(test_variance);
  RUN_TEST(test_natural_log);
  RUN_TEST(test_square_root);
  RUN_TEST(test_log_ten);
  RUN_TEST(test_power);
  RUN_TEST(test_mean);
  RUN_TEST(test_variance);
  RUN_TEST(test_SD);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
