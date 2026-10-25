#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
    int a = 15;
    int b = 25;

    swap(&a, &b); // Call the swap function to swap the values of a and b

    printf("a = %d, b = %d\n", a, b); // Display the swapped values of a and b
    printf("b = %d, a = %d\n", b, a); // Display the swapped values of b and a

// Swap without Returning a value
    printf("a = %d\n", a);
    printf("b = %d\n", b);


    return 0;
}