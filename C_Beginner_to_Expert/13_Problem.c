# include <stdio.h>

int main(){
    int a = 100;
    int *p = &a;

    // Display the address and value of a using pointer p

    // printf("Address of a: %p\n", p);
    printf("Value of a: %d\n", *p);

    return 0;

}