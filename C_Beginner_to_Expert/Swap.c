#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swaping two numbers using pointers

int main(){
    int x , y;

    printf("Enter two number: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping: \n");
    printf("x = %d, y = %d\n", x, y);

    return 0;

}