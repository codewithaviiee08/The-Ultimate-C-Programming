// 19. Program to find the transpose of a matrix:

#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transpose[3][3];
    int rows = 3, cols = 3;

    int i;

    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
