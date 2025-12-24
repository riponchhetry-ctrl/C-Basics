#include<stdio.h>
const char* abc (int x)
{
	if (x>0)
	{
		return "worked";
	}
}
int main()
{
	int a;
	printf("enter the numer:");
	scanf("%d",&a);
	printf("\n code %s",abc(a));
	return 0;
}
