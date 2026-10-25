#include <stdio.h>

// add two numbers using pointers

int main() {
    int a, b;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", *ptr1 + *ptr2);

    return 0;
}