// 10. Program to merge two arrays into a third array:

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1 = 3, n2 = 3;
    int merged[6];
    int n3 = n1 + n2;

    int i;

    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
