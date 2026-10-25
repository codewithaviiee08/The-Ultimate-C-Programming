// 6. Program to count the number of even and odd elements in an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int evenCount = 0, oddCount = 0;

    int i;


    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);
    return 0;
}