#include <stdio.h>

// 6. Write a program to store and display the ASCII value of a character variable.

/*
Explanation
- char ch; — Declares a character variable.
- scanf("%c", &ch); — Takes a character as input.
- printf("%d", ch); — Displays the integer value of the character, which corresponds to its ASCII value for standard ASCII characters.
*/

int main(){

    // Store and display the ACII Value in Variable.

    char ch;

    printf("Character : ");
    scanf("%c" ,&ch);

    printf("character = %c\n" , ch);
    printf("ASCII Value = %d\n" , ch);


    
}