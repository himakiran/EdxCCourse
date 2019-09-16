#include <stdio.h> //for EOF and FILE among other things.

int main(void){
    double grade=0;
    double our_grade=0;
    int count=1;
    FILE *fileptr;
    fileptr = fopen("gradeComparison.txt","r");
    fscanf(fileptr,"%lf",&our_grade);
    while(fscanf(fileptr,"%lf",&grade)!=EOF){
        count++;
        if(grade > our_grade){
            printf("No %d\n",count);
            return 0;
        }
    }
    printf("Yes\n");
    
}