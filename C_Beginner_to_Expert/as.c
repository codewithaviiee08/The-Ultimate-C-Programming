// 12. Program to check if an array is sorted in ascending order:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int isSorted = 1;  // Assume the array is sorted

    int i;

    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = 0;  // Not sorted
            break;
        }
    }

    if (isSorted) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted in ascending order.\n");
    }

    return 0;
}