#include<stdio.h>
int main ()
{

	int a,i,c=0;
	printf("enter the number: \n");
	scanf("%d",&a);
	for (i=2;i<a/2;i++)
	{
		if (a%i==0)
		{
			c++;
			if (c>2)
			{
				printf("number is not prime");
			}
			else
			{
				printf("number is prime");
				break;
			}
		}
	}
	return 0;
}
