#include <stdio.h>
int main() {
    //! showMemory(start=65520)
    int arr[3] = {15, 16, 17};
    printf("%p\n",arr);
    int * ptr = arr;

    * ptr = 2; // * arr   0R  arr[0]

    // The below statement adds 1 byte and not number one to the ptr address. Hence it points to the next 
    // array item location. And that is the significance of brackets and * outside.

    * (ptr + 1) = 3; // * (arr + 1)   OR  arr[1]
    * (ptr + 2) = 5;// * (arr + 2)   OR arr[2]
    
    return 0;
}