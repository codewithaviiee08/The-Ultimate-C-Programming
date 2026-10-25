// 7. Program to copy one array to another:

#include <stdio.h>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];
    int n = 5;

    int i;

    for (i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}