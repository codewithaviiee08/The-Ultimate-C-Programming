#include <stdio.h>

int main(){
    int a = 10;
    int *ptr = &a;

// Print value using Pointer

    printf("Value of a: %d\n", a);
    printf("Value of a using pointer: %d\n", *ptr);

    return 0;
}