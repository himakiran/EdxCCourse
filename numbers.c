#include <stdio.h>

void main(void){
    int numbers[] = {1,2,3,4,5};
    printf("%d ",*(numbers+4));
    printf("%d ::",*numbers+2);

    printf("%d ",numbers[10]);
    
}