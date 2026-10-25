#include <stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // check Positive or Negative (if else statement)

    if(num >= 0)
        printf("The number is positive.\n");
    else
        printf("The number is negative.\n");   

        return 0;
         
}