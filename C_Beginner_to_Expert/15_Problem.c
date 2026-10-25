# include <stdio.h>

void swap (int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function to swap the values of a and b
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}