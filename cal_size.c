#include <stdio.h>

int main(void){
    int number,result=0,mb=0,kb=0,bytes=0;
    char c;
        scanf("%c %d",&c,&number);
        switch(c){
            case 'c':
            result=(number*sizeof(char));
            break;
            case 'd':
            result=(number*sizeof(double));
            break;
            case 's':
            result=(number*sizeof(short));
            break;
            case 'i':
            result=(number*sizeof(int));
            break;
            default:
            printf("Invalid tracking code type");
            return 0;
            
        }
       
    
    if(result >= 1000000){
        mb = result / 1000000;
        kb = (result % 1000000) / 1000;
        bytes = (result % 1000000) % 1000;
        printf("%d MB and %d KB and %d B \n",mb,kb,bytes);
    } else if( (result < 1000000) && (result > 1000)){
        kb = result / 1000;
        bytes = result % 1000;
        printf("%d KB and %d B \n",kb,bytes);
    } else {
        printf("%d B \n",bytes);
    }
     
    return 0;
}