#include<stdio.h>
#include<math.h>
int main()
{
double a,p,i,t;
printf("enter the principal amount:\n");
scanf("%lf",&p);
printf("enter the rate of intrest:\n");
scanf("%lf",&i);
printf("enter the time:\n");
scanf("%lf",&t);
a=p * pow((1+i/100),t);
printf("compount intrest is : %2lf",a);
return 0;
}
