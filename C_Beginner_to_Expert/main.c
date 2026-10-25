// 1.Program to find the sum of elements in an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    int i;

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    return 0;
}