#include<stdio.h>
int main()
{
	int i = 0;
	int a = i++;	// a = 0 
	int b = ++i;	// b = 1
	
	printf("%d %d", a, b);
}
