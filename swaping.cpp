#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter 2 numbers:\n");
	scanf("%d%d",&a,&b);
	printf("before swaping \n");
	printf("\n a=%d ,b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n after swaping");
	printf("\n a=%d,b=%d",a,b);
	return 0;
}
