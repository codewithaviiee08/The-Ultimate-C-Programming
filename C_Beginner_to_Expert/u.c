// 14. Program to find the union of two arrays:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int unionArray[10];
    int count = 0;

    int i;

    // Add elements from the first array to the unionArray
    for (i = 0; i < n1; i++) {
        unionArray[count++] = arr1[i];
    }

    // Add elements from the second array to the unionArray if they are not already present
    for (int i = 0; i < n2; i++) {
        int isAlreadyPresent = 0;
        for (int j = 0; j < count; j++) {
            if (arr2[i] == unionArray[j]) {
                isAlreadyPresent = 1;
                break;
            }
        }
        if (!isAlreadyPresent) {
            unionArray[count++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", unionArray[i]);
    }

    return 0;
}