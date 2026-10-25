#include <stdio.h>

int main(){
    int a , b;

    printf("Enter two number:");
    scanf("%d %d",&a , &b);

    // Find Largest Number

    if(a > b)
    printf("%d is largest",a);
    printf("%d is largest ",b);

    return 0;
}