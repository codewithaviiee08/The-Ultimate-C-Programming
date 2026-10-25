#include <stdio.h>

// 8.Write a program to find the perimeter of a rectangle using user-defined dimensions.

/*
Explanation
- length stores the length of the rectangle.
- breadth stores the breadth of the rectangle.
- perimeter = 2 * (length + breadth); calculates the perimeter.
- %.2f displays the result up to two decimal places.
*/

int main(){

    // Formula: Perimeter = 2 × (Length + Breadth).

    float Length , Breadth , Perimeter;

    printf("Enter the length of the Rectangle: ");
    scanf("%f" , &Length);

    printf("Enter the breadth of the Rectangle: ");
    scanf("%f" , &Breadth);

    Perimeter = 2 * (Length + Breadth);

    printf("Enter the Perimeter of the Rectangle = %.2f\n", Perimeter);

    return 0;
}