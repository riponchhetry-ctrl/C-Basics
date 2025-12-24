#include<stdio.h>
struct Student{
	char name[6];  // it accepts string of 5 characters long because last character is '\0'
	int roll_no;
	char address[6];
};
int main ()
{
	Student s[2];
	for (int i=0; i<2; i++){
		printf("enter the name:");
		scanf("%s", &s[i].name);
	}
	
	for(int i=0; i<2; i++) {
		printf("The name of the student is: %s \n", s[i].name);
	}
	return 0;
}

