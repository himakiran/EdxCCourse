#include <stdio.h>

int main(void){
    
   
    char sentence[68][40];
    int c,i=0,j=0,no_of_words=0;

    while (1){
        c = getchar();
        if(c != ' '){
            sentence[j][i++]=c;
        }
        else{
            sentence[j][i]='\0';
            j+=1;
            //printf("The %dth word is %s",j-1,sentence[j-1]);
            i=0;
        }
        if(c == '\n')
        break;    
    }
    
    sentence[j][i-1]='\0';
    //printf("The %dth word is %s",j-1,sentence[j-1]);
    i=0;
    //printf("The value of j is %d",j);
    no_of_words = j;
    i=0;
    for(i=0;i<=j;i++){
    printf("%s ",sentence[j-i]);
    }
}