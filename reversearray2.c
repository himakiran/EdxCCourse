#include <stdio.h>
void reverse_array(int*);
void swap(int*, int*);
int main(void){
    
    int i=0;
    int arr[6],temp=0;
    for(i=0;i<6;i++){
        scanf("%d",&temp);
        arr[i]=temp;
    }
    reverse_array(arr);
    for(i=0;i<6;i++){
         printf("%d ",arr[i]);
    }
   
}
void reverse_array(int* array){
    int j=0;
    for(j=0;j<3;j++){
        swap(array+j,array+(5-j));
    }
}

void swap(int* a, int*b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}