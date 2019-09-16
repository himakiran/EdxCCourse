#include <stdio.h>

int main(void){
    
    FILE *fileptr;
    int input_grade;
    int last_grade;
    scanf("%d",&input_grade);
    fileptr = fopen("myGrades.txt","r");
    while(fscanf(fileptr,"%d",&last_grade)!=EOF){
        
    }
    //printf("%d ",last_grade);
    fclose(fileptr);
    if(input_grade!=last_grade){
        fileptr = fopen("myGrades.txt","a");
        fprintf(fileptr," %d",input_grade);
        fclose(fileptr);
    }
    
    fileptr = fopen("myGrades.txt","r");
    while(fscanf(fileptr,"%d",&last_grade)!=EOF){
    printf("%d ",last_grade);}
    fclose(fileptr);
}