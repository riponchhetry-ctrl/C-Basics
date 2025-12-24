#include<stdio.h>
int main()
{
	int p,i,t,s;
	printf("enter the princple amount, rate of intrest and time \n");
	scanf("%d%d%d",&p,&i,&t);
	s=(p*i*t)/100;
	printf("simple intrest is: %d \n",s);
	return 0;
}
