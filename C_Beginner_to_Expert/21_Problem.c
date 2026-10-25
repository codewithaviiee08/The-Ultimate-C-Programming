# include <stdio.h>

int main(){

    FILE *fP;
    char ch;

    fP = fopen("Student.txt", "r");

    if (fP == NULL){

    }

    // Read data from the file
    
    printf("File cannot be opened. ");
    return 1;

    while ((ch = fgetc(fP)) != EOF){
        printf("%c", ch);
    }
    fclose(fP);

    return 0;
}