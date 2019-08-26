#include <stdio.h>
int min(int,int);
int main(void){
    int a,temp=1000;
    int i,repeats, result;
    scanf("%d",&repeats);
    for(i=0;i<repeats;i++){
        scanf("%d",&a);
        result=min(a,temp);
        result=min(temp,result);
        temp=result;
    }
    result=temp;
    printf("%d",result);
}

int min(int a, int b){
    if(a <= b){
        return a;
    }
    else
    return b;
}