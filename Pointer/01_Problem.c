#include <stdio.h>

int main(){
    // int Length = 3;
    // int Breadth = 4;
    int Length, Breadth;

    printf("Enter length\n");
    scanf("%d", &Length);

    printf("Enter breadth\n");
    scanf("%d", &Breadth);

    printf("Area of rectangle is: %d\n", Length * Breadth);

    return 0;

}