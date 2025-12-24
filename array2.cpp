#include<stdio.h>
#define sz 10
int main()
{
	char a[sz][2];
	for(int i=0;i<2;i++)
	{
		printf("enter the names:");
		for(int j=0;j<sz;j++)
		{

			scanf("%c",&a[j][i]);
		}
	}
	return 0;
}
