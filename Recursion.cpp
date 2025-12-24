#include<stdio.h>

// Recursion ==> function calling itself
// Q. Print 1 to 100 without using loop

void print_1_to_100(int num) {
//	if(num <= 100) {
//		printf("%d ", num);
//		print_1_to_100(num + 1);
//	} else return ;

	if(num > 100) return;
	else {
		printf("%d ", num);
		print_1_to_100(num + 1);
	}
}

int main() {
	print_1_to_100(1);
}
