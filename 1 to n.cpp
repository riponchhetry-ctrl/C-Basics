#include<stdio.h>
int main()
{
	int a,num,c,i;
	printf("enter the number you want to print to; \n");
	scanf("%d",&a);
	printf("the prime numbers between 1 and %d is: \n",a);
	for(num=1;num<=a;num++)
	{
		c=0;
		for (i=2;i>=num/2;i++)
		{
			if (num%i==0)
			{
			 	c++;
			 break;
			}	
		}
		if (c==0 && num!=1)
		printf("%d",num);
	}
}
