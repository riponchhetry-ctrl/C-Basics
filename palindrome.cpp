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
	if (a==rev_num(a))
	{
		printf("the number is palindrome");
	}
	else
	{
		printf("number is not palindrome");
	}
	return 0;
}
