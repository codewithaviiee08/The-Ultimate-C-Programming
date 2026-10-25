#include <stdio.h>

// 2. Create a program to swap two number using a temporary variable.

int main(){

    // Declare and initialize two integer variables

    int num1 = 6;
    int num2 = 18;
    int temp; // Declare a temporary variable for swapping

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping the values using a temporary variable
    temp = num1; // Store the value of num1 in temp
    num1 = num2; // Assign the value of num2 to num1
    num2 = temp; // Assign the value stored in temp to num2

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;


}

