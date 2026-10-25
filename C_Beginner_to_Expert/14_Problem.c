# include <stdio.h>

int main(){
    int a = 151;
    int b = 221;
    int c = 300;


    int *p = &a;
    int *q = &b;
    int *r = &c;

    (*p)++; // Increment the value of a using pointer p
    (*q)++; // Increment the value of b using pointer q
    (*r)++; // Increment the value of c using pointer r

    printf("Value = %d\n", a); // Display the updated value of a
    printf("Value = %d\n", b); // Display the updated value of b
    printf("Value = %d\n", c); // Display the updated value of c

    return 0;

}