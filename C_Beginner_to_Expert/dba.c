// 15. Program to find the difference between two arrays:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int difference[5];
    int count = 0;

    int i;

    // Find elements that are in arr1 but not in arr2
    for (i = 0; i < n1; i++) {
        int isNotInArr2 = 1;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                isNotInArr2 = 0;
                break;
            }
        }
        if (isNotInArr2) {
            difference[count++] = arr1[i];
        }
    }

    printf("Difference of arrays: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", difference[i]);
    }

    return 0;
}
