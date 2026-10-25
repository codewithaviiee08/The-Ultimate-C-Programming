#include <stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    //  find the greater number (if else statement)

    if(a > b)
        printf("%d is greater than %d\n", a, b);
    else if(b > a)
        printf("%d is greater than %d\n", b, a);
    else
        printf("Both numbers are equal.\n");

    return 0;
}