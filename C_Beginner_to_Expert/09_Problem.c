#include <stdio.h>

void swap(int a,int b){
    int c;
    c = a;
    a = b;
    b = c;

}

int main(){

    // call by value 


    int a =10;
    int b = 20;

    printf("\nValue of a:-%d", a);
    printf("\nValue of b:-%d", b);

    printf("\nAddress of a:-%p", &a);

    swap(a,b);

    printf("\nValue of a:-%d", a);
    printf("\nValue of b:-%d", b);

    return 0;



}