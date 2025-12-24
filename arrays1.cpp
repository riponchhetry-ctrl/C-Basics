#include<stdio.h>
int main()
{
	int sz = 0;
	printf("Enter the size of the array: ")
	scanf("%d", &sz);
	//	int size = sizeof(a)/ sizeof(a[0]);  // size of returns the bytes taken by a variable
	
	
	int a[sz], i;
	
	for(i=0; i<sz; i++)
	{
		printf("enter the value of index no. %d ",i);
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<sz;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
