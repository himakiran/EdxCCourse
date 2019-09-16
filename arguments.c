//Passing arguments to the prgram in C

#include <stdio.h>

int main(int argc, char ** argv){
    int i=0;
    for(i=0;i<argc;i++){
        printf(" The %d argument is %s\n",i,argv[i]);
    }
}