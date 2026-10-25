#include <stdio.h>

int main(){

    // File handling in C

    FILE *f;

    // r ----> Read mode
    // w ----> Write mode
    // a ----> Append mode

    f = fopen("test.txt", "a");

    fprintf(f, "\nThis is a test line....");

    fclose(f);

    f=fopen("code.txt", "r");

    char data[100];

    while(fgets(data, 100, f) != NULL){
        printf("%s", data);
    }

    fclose(f);

    return 0;
}