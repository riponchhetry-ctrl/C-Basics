#include<stdio.h>
int GCD(int a,int b)
{
	int result=((a>b)?a:b);
	while(result>0)
	{
		if(a%result==0&&b%result==0)
			break;
		result--;
	}
	return result;
}
int main()
{
	int x,y;
	printf("enter the numbers you want to check: \n");
	scanf("%d%d",&x,&y);
	printf("the GCD of %d and %d is: %d",x,y,GCD(x,y));
	return 0;
}
