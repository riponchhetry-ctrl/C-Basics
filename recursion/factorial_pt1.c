#include<stdio.h>
int factorial (int number){

    if(number==1){
        return 1;
    }

    int x=number*factorial(number-1);
    return x;
}

int main(){
    int number,answer;
    printf("enter the number: ");
    scanf("%d",&number);
    answer=factorial(number);
    printf("factorial is: %d", answer);
    return 0;
}