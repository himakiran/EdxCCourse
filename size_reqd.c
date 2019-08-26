#include <stdio.h>

int main(void){
    int repeats,i,number,result=0;
    char c;
    
    scanf("%d",&repeats);
    for(i=0;i<repeats;i++){
        scanf("%d %c",&number,&c);
        switch(c){
            case 'c':
            result+=(number*1);
            break;
            case 'd':
            result+=(number*8);
            break;
            case 'f':
            result+=(number*4);
            break;
            case 'i':
            result+=(number*4);
            break;
            default:
            printf("Invalid tracking code type");
            return 0;
            
        }
       
    }
     printf("%d bytes",result);
    return 0;
}