#include <stdio.h>

void swap(int &a,int &b){

    printf("\nValue of a:-%d", a);
    printf("\nValue of b:-%d", b);

    int c;
    c = a;
    a = b;
    b = c;

}

int main(){

    // call by Reference

    int a =10;
    int b = 20;

    printf("\nValue of a:-%d", a);
    printf("\nValue of b:-%d", b);

    printf("\nAddress of a:-%d", &a);
    printf("\nAddress of b:-%d", &b);

    swap(a,b);

    printf("\nValue of a:-%d", a);
    printf("\nValue of b:-%d", b);

    return 0;

}