#include <stdio.h>
#include <math.h>
#define PI 3.141
int menu_options(int a);
 float sine (float angle)
 {
     float rad=angle*(PI/180);
     return sin(rad);
 }

 float cosine (float angle)
 {
     float rad=angle*(PI/180);
     return cos(rad);
 }

 float tangent (float angle)
 {
     float rad=angle*(PI/180);
     return tan(rad);
 }

 float sine_inv (float val)
 {
     float rad=asin(val);
     return rad*(180/PI);
 }

 float cosine_inv (float val)
 {
     float rad=acos(val);
     return rad*(180/PI);
 }

 float tangent_inv (float val)
 {
     float rad=atan(val);
     return rad*(180/PI);
 }

int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    return a-b;
}

int multiply(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
    return a/b;
}

int rem(int a,int b)
{
    return a%b;
}

float exponent(int x)
{
  return exp(x);
}

float natural_logarithm(int x)
{
  return log10(x);
}

float squareroot(float x)
{
    return sqrt(x);
}
float logarithm(int x)
{
  return log10(x);
}

float power(float x,float y)
{
  return  pow(x,y);
}

int decimal_to_bin(int decimal)
{
  if (decimal == 0)
    return 0;
  else
    return (decimal % 2 + 10*decimal_to_bin(decimal / 2));;
}

float Mean(int a[],int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
      sum += a[i];
  return (float)sum / (float)n;
}

int variance(int a[],int n)
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
  return sqrt(variance(arr,n));

}

int menu_option(int s)
{
    int a,b,st,sa,n,d[10];
    float angle,value,ang,val,e,f;

    switch(s)
    {
        case 1: printf("\n\t\t\t Choose Trignometric Operation");
                printf("\n\t\t\t 1)Sine");
                printf("\n\t\t\t 2)Cosine");
                printf("\n\t\t\t 3)Tangent");
                printf("\n\t\t\t 4)Sine Inverse");
                printf("\n\t\t\t 5)Cosine Inverse");
                printf("\n\t\t\t 6)Tan Inverse");
                printf("\n\t\t\t Enter Your Choice:");
                scanf("%d",&st);

                switch(st)
                {
                        case 1: printf("Angle :");
                                scanf("%f",&angle);
                                val=sine(angle);
                                printf("Sine of %f is : %f",angle,val);
                                break;

                        case 2: printf("Angle :");
                                scanf("%f",&angle);
                                val=cosine(angle);
                                printf("Cosine of %f is : %f",angle,val);
                                break;

                        case 3: printf("Angle :");
                                scanf("%f",&angle);
                                val=tangent(angle);
                                printf("Tangent of %f is : %f",angle,val);
                                break;

                        case 4: printf("Value :");
                                scanf("%f",&value);
                                ang=sine_inv(value);
                                printf("Sine Inverse of %f is : %f",value,ang);
                                break;

                        case 5: printf("Value :");
                                scanf("%f",&value);
                                ang=sine_inv(value);
                                printf("Cosine Inverse of %f is : %f",value,ang);
                                break;

                        case 6: printf("Value :");
                                scanf("%f",&value);
                                ang=sine_inv(value);
                                printf("Tangent Inverse of %f is : %f",value,ang);
                                break;
                }
                break;
        case 2: printf("\n\t\t\t Choose Arthmetic Operation");
                printf("\n\t\t\t 1)Add");
                printf("\n\t\t\t 2)Subtract");
                printf("\n\t\t\t 3)Multiply");
                printf("\n\t\t\t 4)Divide");
                printf("\n\t\t\t 5)Remainder");
                printf("\n\t\t\t Enter Your Choice:");
                scanf("%d",&sa);

                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);

                switch(sa)
                {
                        case 1: printf("Add %d & %d to get %d",a,b,add(a,b));
                                break;

                        case 2: printf("Subtract %d & %d to get %d",a,b,subtract(a,b));
                                break;

                        case 3: printf("Multiply %d & %d to get %d",a,b,multiply(a,b));
                                break;

                        case 4: printf("Divide %d & %d to get %d",a,b,divide(a,b));
                                break;

                        case 5: printf("Remainder of %d & %d to get %d",a,b,rem(a,b));
                                break;
                }
                break;
        case 3: printf("\n\t\t\t Choose Other Operation");
                printf("\n\t\t\t 1)Exponential");
                printf("\n\t\t\t 2)Natural Logarithm");
                printf("\n\t\t\t 3)Decimal Logarithm");
                printf("\n\t\t\t 4)Power");
                printf("\n\t\t\t 5)Decimal To Binary Conversion");
                printf("\n\t\t\t 6)Mean");
                printf("\n\t\t\t 7)Variance");
                printf("\n\t\t\t 8)Standard Deviation");
                printf("\n\t\t\t 9)Square Root");
                printf("\n\t\t\t Enter Your Choice:");
                scanf("%d",&st);

                switch(st)
                {
                        case 1: printf("exponent :");
                                scanf("%f",&e);
                                printf("Exponential value : %f",exponent(e));
                                break;

                        case 2: printf("Value :");
                                scanf("%f",&e);
                                printf("Natural log of %f : %f",e,natural_logarithm(e));
                                break;

                        case 3: printf("Value :");
                                scanf("%f",&e);
                                printf("Decimal log of %f : %f",e,logarithm(e));
                                break;

                        case 4: printf("Enter number and its power :");
                                scanf("%f %f",&e,&f);
                                printf("%f raised to %f is : %f",e,f,power(e,f));
                                break;

                        case 5: printf("Decimal value :");
                                scanf("%d",&a);
                                printf("Binary of %d is : %d",a,decimal_to_bin(a));
                                break;

                        case 6: printf("enter number of elements in  array :");
                                scanf("%d",&n);
                                for(int i = 0; i < n; ++i)
                                {
                                    scanf("%d", &d[i]);
                                }
                                printf("Mean is %f",Mean(d,n));
                                break;

                        case 7: printf("enter number of elements in  array :");
                                scanf("%d",&n);
                                for(int i = 0; i < n; ++i)
                                {
                                    scanf("%d", &d[i]);
                                }
                                printf("Variance is %d",variance(d,n));
                                break;

                        case 8: printf("enter number of elements in  array :");
                                scanf("%d",&n);
                                for(int i = 0; i < n; ++i)
                                {
                                    scanf("%d", &d[i]);
                                }
                                printf("Standard Deviation is of %f",standardDeviation(d,n));
                                break;

                        case 9: printf("Enter value :");
                                scanf("%f",&e);
                                printf("Square root of %f is : %f",e,squareroot(e));
                                break;
                }
                break;
    }
}
