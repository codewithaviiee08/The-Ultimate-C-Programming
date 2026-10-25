#include <stdio.h>

// 3. Write a program to swap two numbers without using a third variable.

int main(){

    // Delcare and initialize two integer variables.

    int num1 = 12;
    int num2 = 36;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Swapping the values without using a third variable

    num1 = num1 + num2; // Step 1: Add num1 and num2 and store the result in num1
    num2 = num1 - num2; // Step 2: Subtract num2 from the new value of num1 and store the result in num2
    num1 = num1 - num2; // Step 3: Subtract the new value of num2 from the new value of num1 and store the result in num1

    printf("After swapping: num1 = %d, num2 = %d\n" , num1, num2);
    
}