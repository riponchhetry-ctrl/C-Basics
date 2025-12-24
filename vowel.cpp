#include<stdio.h>
int main()
{
	char a;
	printf("enter the character:");
	scanf("%d",&a);
	if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
		printf("character is vowel");
	else
		printf("character is not vowel");
	return 0;
}
