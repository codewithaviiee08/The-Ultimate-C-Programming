#include <stdio.h>

int main(){

    //  Pointer --> C,C++

    int a=10;
    int *ptr; // pointer variable

    ptr = &a; // address of a is assigned to ptr

  printf("\nValue of a:-%d", a);
  printf("\nValue of a:-%d", *ptr); // dereferencing pointer

  printf("\nAddress of a:-%p", &a);
  printf("\nAddress of a:-%p", ptr); // address of a is stored      

    printf("\nAddress of ptr:-%p", &ptr); // address of pointer variable

    *ptr = 20; // changing value of a using pointer

    printf("\nValue of a:-%d", a);
    printf("\nValue of a:-%d", *ptr); // dereferencing pointer

    return 0;



}