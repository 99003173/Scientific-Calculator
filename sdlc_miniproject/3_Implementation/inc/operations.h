/**
* @file operations.h
*
*/

#ifndef OPERATIONS_H_INCLUDED
#define OPERATIONS_H_INCLUDED
float sine (float angle);
float cosine (float angle);
float tangent (float angle);
float sine_inv (float val);
float cosine_inv (float val);
float tangent_inv (float val);
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
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
#endif /* #ifndef __OPERATIONS_H__ */