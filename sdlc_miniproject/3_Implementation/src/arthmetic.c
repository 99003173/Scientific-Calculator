#include <stdio.h>
#include <math.h>
#define PI 3.141

 double sine (double angle)
 {
     double rad=angle*(PI/180);
     return sin(rad);
 }

 double cosine (double angle)
 {
     double rad=angle*(PI/180);
     return cos(rad);
 }

 double tangent (double angle)
 {
     double rad=angle*(PI/180);
     return tan(rad);
 }

 double sine_inv (double val)
 {
     double rad=asin(val);
     return rad*(180/PI);
 }

 double cosine_inv (double val)
 {
     double rad=acos(val);
     return rad*(180/PI);
 }

 double tangent_inv (double val)
 {
     double rad=atan(val);
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

int main()
{
    int a,b,s;
    double angle,value;

    printf("select trignometric operation");
    scanf("%d",&s);

    printf("Angle :");
    scanf("%lf",&angle);
    double val=sine(angle);

    printf("Value :");
    scanf("%lf",&value);
    double ang=sine_inv(value);

    printf("Sine of %lf is : %lf",angle,val);
    printf(" Sine inverse of %lf is : %lf",value,ang);

    printf("select arthmetic operation");
    scanf("%d",&s);

    printf("Numbers :");
    scanf("%d %d",&a,&b);

    printf("add %d & %d to get %d",a,b,add(a,b));
    printf("subtract %d & %d to get %d",a,b,subtract(a,b));
    printf("multiply %d & %d to get %d",a,b,multiply(a,b));
    printf("divide %d & %d to get %d",a,b,divide(a,b));
    printf("remainder %d & %d to get %d",a,b,rem(a,b));
}