#include <stdio.h>

int main(){

    // Pointer & computer memory

    int a = 10; // 101 a = 10
    int *ptr; // 102 ptr = 101

    ptr = &a;

    printf("Value of a:- %d\n", a);
    printf("Value of a:- %d\n", *ptr);

    // Address of a and ptr

    printf("\nAddress of a:- %d", &a);
    printf("\nAddress of a:- %d", ptr);

    printf("\nAddress of ptr:- %d", &ptr);

    *ptr = 80;

    printf("Value of a:- %d\n",a);
    printf("Value of a:- %d\n", *ptr);

    
}