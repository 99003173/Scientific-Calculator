#include <stdio.h>
#include <math.h>
double exponent(double x)
{
  return exp(x);
}
double natural_logarithm(double x)
{
  return log10(x);
}
double squareroot(double x)
{
    return (sqrt(x));
}
double logarithm(double x)
{
  return log10(x);
}
double power(double x,double y)
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
double Mean(int a[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
      sum += a[i];
  return (double)sum / (double)n;
}
int main()
{
  int a[]={1,2,3};
  printf("%lf",Mean(a,3));
  return 0;
}

