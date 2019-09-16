#include <stdio.h> // for FILE among others reqd

int main(int argc, char**argv){
    FILE *file_ptr;
    int number_of_students,i;
    double sum=0,grade;
    file_ptr = fopen("studentGrades.txt","r");
    fscanf(file_ptr,"%d",&number_of_students);
    for(i=0;i<number_of_students;i++){
       fscanf(file_ptr,"%lf",&grade); 
       sum+=grade;
    }
    printf("%0.2lf\n",(sum/(double)number_of_students));
    fclose(file_ptr);
}
