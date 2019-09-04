#include <stdio.h>

int main(void){
    
   
    char sentence[68][40];
    int i=0,j=0,r,no_of_words=0;
    int resultOfComparison;
    char c;

    while (1){
        c = scanf("%c",&c);
        r = scanf ("%c", &c);
        resultOfComparison = (r != -1) && (c != ' ');
        if(resultOfComparison==1){
            sentence[j][i++]=c;
        }
        else{
            sentence[j][i]='\0';
            j+=1;
            //printf("The %dth word is %s",j-1,sentence[j-1]);
            i=0;
        }
        resultOfComparison = 1 && (c != '\n');
        if(resultOfComparison!=1)
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