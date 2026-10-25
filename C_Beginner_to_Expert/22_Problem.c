#include <stdio.h>

int main(){

    File *fp;

    fp = fopen ("student.txt", "a");

    if (fp == NULL){

    }

    printf("file cannot be opened.");
    return 1;

    fprintf(fp, "\nCity: Gorakhpur");

    fclose(fp);
    
    return 0;
}