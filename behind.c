#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

/* Write your function behind() here: */
void behind(int* array, int num){
    int max = 0,i=0;
    for(i=0;i<num;i++){
        if(max < *(array+i)){
            max = *(array+i);
        }
    }
    for(i=0;i<num;i++){
        *(array+i)=(max - *(array+i));
    }

}