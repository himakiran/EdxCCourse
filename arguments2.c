#include <stdio.h>
#include <stdlib.h> //for atoi and atof
//#include <string.h> //for strcompare eg strcompare(argv[2],'-e')=0 if the strings are same

int main(int argc, char ** argv){
    int no_of_plants;
    double cost_of_plant;
    if(argc!=3){
        printf("Invalid input.\n");
    }
    else {
        no_of_plants = atoi(argv[1]);
        cost_of_plant = atof(argv[2]);
        printf("%d plants for %0.2f dollars each cost %0.2f dollars.\n",no_of_plants,cost_of_plant,no_of_plants*cost_of_plant);
        
    }
}

