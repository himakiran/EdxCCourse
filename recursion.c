#include <stdio.h>

int sumOfDigits(int d);

int main(void){
    int input,result;
    scanf("%d",&input);
    result=sumOfDigits(input);
    printf("%d",result);
}
int sumOfDigits(int number){
    int quotient,remainder;
    remainder = number % 10; // gets the right most digit
    quotient = number / 10;  // gets the number sans the rightmost digit
    if(quotient==0){
        return remainder;
    }
    else{
    return remainder + sumOfDigits(quotient);
    }
}