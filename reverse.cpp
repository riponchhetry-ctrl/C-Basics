#include<stdio.h>
int rev_num(int num)
{
	int rev=0;
	while (num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	return rev;
}
int main ()
{
	int a;
	printf("enter the number you want to check:");
	scanf("%d",&a);
	printf("reverse of %d is:%d",a,rev_num(a));
	return 0;
}
