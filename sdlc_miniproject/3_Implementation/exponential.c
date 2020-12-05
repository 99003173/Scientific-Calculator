#include <stdio.h>
#include <math.h>
double exponent()
{
  double x = 8.0;
  return exp(x);
}
double natural_logarithm()
{
  double x = 8.0;
  return log10(x);
}
double logarithm()
{
  double x = 8.0;
  return log10(x);
}
int power()
{
  int x = 8;
  int y = 2;
  return  pow(x,y);
}
int decimal_to_bin()
{
  int decimal=10;
  if (decimal== 0)
    return 0;
  else
    return (decimal % 2 + 10*decimal_to_bin(decimal / 2));
}
int main()
{
  printf("%d",decimal_to_bin());
  return 0;
}

