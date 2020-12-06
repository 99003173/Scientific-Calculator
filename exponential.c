#include <stdio.h>
#include <math.h>

float exponent(float x)
{
  return exp(x);
}
float natural_logarithm(float x)
{
  return log(x);
}
float squareroot(float x)
{
    return (sqrt(x));
}
float logarithm(float x)
{
  return log10(x);
}
float power(float x,float y)
{
  return  pow(x,y);
}
int decimal_to_bin(int decimal)
{
  if (decimal== 0)
    return 0;
  else
    return (decimal % 2 + 10*decimal_to_bin(decimal / 2));;
}
float Mean(int a[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
      sum += a[i];
  return (float)sum / (float)n;
}
int variance(int a[], int n)
{
  int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    float mean = (float)sum /(float)n;
    float sqDiff = 0;
    for (int i = 0; i < n; i++)
        sqDiff += (a[i] - mean)*(a[i] - mean);
    return sqDiff / n;
}
float standardDeviation(int arr[],int n)
{
  return sqrt(variance(arr, n));
}

