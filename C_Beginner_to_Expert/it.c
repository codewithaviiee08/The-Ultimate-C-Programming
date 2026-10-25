// 13. Program to find the intersection of two arrays:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = 5, n2 = 5;
    int intersection[5];
    int count = 0;

    int i;

    for (i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection[count++] = arr1[i];
                break;
            }
        }
    }

    printf("Intersection of arrays: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", intersection[i]);
    }

    return 0;
}