#include <stdio.h> 

int main(){

    // Loop statments

    // for Loop
    // WHILE Loop
    // DO WHILE Loop

    int i=1;
    
    for( i=1;i<11;i++){
        printf("\n2 * %d = %d ",i,2*i);
    }

    i=1;
    while(i<11){
        printf("\n3 * %d = %d ",i,3*i);
        i++;
    }

    i=1;
    do{
        printf("\n4 * %d = %d ",i,4*i);
        i++;
    } while (i<11);
}
