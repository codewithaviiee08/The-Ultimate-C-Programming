#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a;

    // change value of a using pointer

    *ptr = 50;

    printf("New Value of a: %d\n", a);
    return 0;
}