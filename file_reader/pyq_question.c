#include<stdio.h>
int main(){
    int a[20],i,x;
    
    for (i=0;i<5;i++){
        printf("enter the number at intex number %d: ",i);
        scanf("%d",&a[i]);
        
    }
    printf("entred array is:");
    for (i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
    
    int max=a[0];
    for (i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\n maximum value is:%d",max);
    return 0;
}