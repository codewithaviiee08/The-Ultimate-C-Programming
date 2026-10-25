#include <stdio.h>

int main(){

    // goto

    for(int i=1;i<11;i++){
        if(i==6){
            goto code;
            
        }
        printf("%d",i);
    }

    disha:
    printf("\nApple....");

    code:
    printf("\nOrange....");
    return 0;
}