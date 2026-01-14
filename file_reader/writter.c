#include<stdio.h>
int  main(){
    FILE *fp = fopen("practice.txt","r");
    char input[100];
    char read_file[100];
    printf("enter the line you want to enter:");
    // gets(input);
    
    if (fp==NULL){
        printf("error in opening file \n");
        return 1;
    }

    // fprintf(fp, input);

    // printf(fgets(read_file, sizeof(read_file), fp)); 
    // printf(fgets(read_file, sizeof(read_file), fp)); 
    // printf(fgets(read_file, sizeof(read_file), fp)); 
    // if(fgets(read_file, sizeof(read_file), fp) == NULL){
    //     printf("NULL");
    // } 
    
    while(fgets(read_file, sizeof(read_file), fp) != NULL) {
        printf("%s", read_file);
    }

    fclose(fp);
    return 0;
}