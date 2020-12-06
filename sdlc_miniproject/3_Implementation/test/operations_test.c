#include<stdio.h>
#include<stdlib.h>
#include "unity_header.h"
#include "unity_internal.h"
#include "test_header.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
float sine (float angle);
float cosine (float angle);
float tangent (float angle);
float sine_inv (float val);
float cosine_inv (float val);
float tangent_inv (float val);
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
int rem(int a,int b);
float exponent(float x);
float natural_logarithm(float x);
float logarithm(float x);
float squareroot(float x);
float power(float x,float y);
int decimal_to_bin(int decimal);
float Mean(int a[], int n);
int variance(int a[], int n);
float standardDeviation(int arr[],int n);
int menu_option(int s);

void test_sine(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.5, sine(30.0), "values is not Expected");
}
void test_cosine(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.500000, sine(60.0), "values is not Expected");
}
void test_tangent(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(-6.405331, tan(30.0), "values is not Expected");
}
void test_sine_inv(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(30.000000, sine_inv(0.5), "values is not Expected");
}
void test_cosine_inv(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(60.000000, cosine_inv(0.5), "values is not Expected");
}
void test_tangent_inv(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(45.000000, tangent_inv(1.0), "values is not Expected");
}
void test_add(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(5, add(2,3), "values is not Expected");
}
void test_subtract(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(5, subtract(8,3), "values is not Expected");
}
void test_multiply(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(6, multiply(2,3), "values is not Expected");
}
void test_divide(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(5, divide(15,3), "values is not Expected");
}
void test_rem(void)
{
    TEST_ASSERT_EQUAL_FLOAT_MESSAGE(5, add(11,6), "values is not Expected");
}
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
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_tangent);
  RUN_TEST(test_sine_inv);
  RUN_TEST(test_cosine_inv);
  RUN_TEST(test_tangent_inv);  
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_rem);
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
