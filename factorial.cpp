#include<stdio.h>
int main()
{
	int a,i,x=1;
	printf("enter the number u want to know factorial of: \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		x=x*i;
	}
	printf("factorial is: %d",x);
	return 0;
}
