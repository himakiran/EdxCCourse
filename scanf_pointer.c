#include <stdio.h>

//Write your function prototype here
void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;

	// Remeber scanf always takes the pointer of the variable where you want to store the input data.
	// ie int a; scanf("%d",&a);
	// Hence below statement can also be scanf("%d",&age)

	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	elixir(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void elixir(int * input_age){
    if(*input_age < 21)
    *input_age*=2;
    else
    *input_age-=10;
}