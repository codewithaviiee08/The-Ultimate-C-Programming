#include <stdio.h>

void swap(int *a, int *b){

    printf("\nAddress of a:-%p", (void *)a);
    printf("\nAddress of b:-%p", (void *)b);

    int c = *a;
    *a = *b;
    *b = c;

}

int main(){
    // call by Pointer / Address

    int a =10;
    int b = 20;

    printf("\nValue of a:-%d", a);
    printf("\nValue of b:-%d", b);

    printf("\nAddress of a:-%p", (void *)&a);
    printf("\nAddress of b:-%p", (void *)&b);

    swap(&a,&b);

    printf("\nValue of a:-%d", a);
    printf("\nValue of b:-%d", b);

    return 0;
}