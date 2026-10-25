// 9. Program to find the second largest element in an array:

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56};
    int n = 5;
    int firstMax = arr[0], secondMax = arr[0];

    int i;

    for (i = 1; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondMax);
    return 0;
}