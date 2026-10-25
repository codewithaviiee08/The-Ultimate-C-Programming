// 8. Program to find the frequency of a given element in an array:

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = 7;
    int searchElement = 2;
    int frequency = 0;

    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            frequency++;
        }
    }

    printf("Frequency of %d: %d\n", searchElement, frequency);
    return 0;
}
