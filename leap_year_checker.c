#include<stdio.h>

int leap_year(int year){
    if (year %4==0){
        if (year%100 !=0)
        {
            printf("\n year is a leap year...");

        }
        else{
            if(year % 400 ==0){
                printf("\n year is leap year....");
            }
            else{
                printf("\n lear is not a leap year...");
            }
        } 
    }
    else if (year%400 ==0){
        printf("\n year is leap year...");
    }
    
    
    else{
        printf("\n year is not a leap year...");
    }

}

int main(){
    int year;
    printf("\n enter the year you want to check: ");
    if( scanf("%d",&year)!=1 || year<0){
        printf("\n enter positive number only...");
         
    }
    else
        leap_year(year);
}