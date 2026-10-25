#include <stdio.h>
int main() {
    int a , b;
    int *ptr1 = &a , *ptr2 = &b;

    // add two numbers using pointers with + operator in scanf

    printf("Enter two number: ");
    scanf("%d + %d", &a, &b);

    printf("Sum = %d\n", *ptr1 + *ptr2);

    return 0;
}