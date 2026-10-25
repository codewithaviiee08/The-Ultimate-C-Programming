#include <stdio.h>

//7.Accept the side length of a cube and find its volume.

/*
Explanation
- float side, volume; declares variables to store the side length and volume.
- scanf() accepts the side length from the user.
- volume = side * side * side; calculates the cube's volume.
- %.2f displays the result up to two decimal places.
*/

int main(){

    float side, volume;

    printf("Enter the side length of a cube: ");
    scanf("%f" , &side);

    volume = side * side * side;

    printf("Volume of the cube = %.2f\n " , volume);

    return 0;
}