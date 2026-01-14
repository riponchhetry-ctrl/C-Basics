#include<stdio.h>
int factorial (int start, int number){

    if(start == number){
        return number;
    }

    int x = start * factorial(start + 1, number);
    return x;
}

int main(){
    int number,answer;
    printf("enter the number: ");
    scanf("%d",&number);
    answer=factorial(1, number);
    printf("factorial is: %d", answer);
    return 0;
}