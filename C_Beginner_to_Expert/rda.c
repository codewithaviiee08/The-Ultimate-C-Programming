// 11. Program to remove duplicates from an array:

#include <stdio.h>

int main() {
    int arr[] = {11,12,13,14,15,16,17};
    int n = 7;
    int unique[7];
    int newSize = 0;

    int i;

    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Array with duplicates removed: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}