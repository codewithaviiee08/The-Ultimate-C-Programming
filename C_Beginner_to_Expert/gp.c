// 16. Program to rotate an array to the right by a given number of positions:

#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    int temp[k];

    int i;

    // Copy the last k elements to a temporary array
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the temporary array back to the original array
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2; // Number of positions to rotate

    rightRotate(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
