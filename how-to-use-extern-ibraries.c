// To compile this prog using inbuilt math lib  we need to use the syntax
// gcc -std=c11 -Wall -fmax-errors=10 -Wextra math.c <path-of-math-lib> -o math
// <path-of-math-lib> could be like for eg /usr/lib/libm.a  where libm.a is the compiled definition of the pow function declaration.
// To add multiple libraries we can separate the absolute paths of the libs by space
// we can also put the syntax using relative path as follows
// gcc -std=c11 -Wall -fmax-errors=10 -Wextra math.c -lm -o math  ie l for lib and m for m in libm.a



#include <stdio.h>

double pow(double,double);

int main(void){
    double a=2.5;
    printf("%1.1f squared is %2.3f\n",a,pow(a,2.0));
    return 0;
}