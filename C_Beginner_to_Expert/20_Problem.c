# include <stdio.h>

int main(){

    FILE *file;

    file = fopen("Student.txt", "w");

    if(file == NULL){

        printf("File cannot be opened. ");
        return 1;
    }

    // Write data to the file

    fprintf(file, "Name: Abhijeet\n");
    fprintf(file, "Course: Computer Science\n");
    fprintf(file, "Age : 25\n");

    fclose(file);

    printf("Data written to the file successfully. ");

    return 0;
}