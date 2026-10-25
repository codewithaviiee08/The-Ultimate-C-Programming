#include <stdio.h>

int main(){
    

    int a[10]={1,2,3,4,5,6,7,8,9,10};

    a[6]=44;
    a[2]=88;

    int i;

    for (i=0;i<10;i++){
        printf("\nValue of a[%d] is %d",i,a[i]);
    }

    printf("\n*******************\n");

    int b[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    b[2][2]=99;

    int row,column;

    for(row=0; row<3; row++){
        for(column=0; column<3; column++){
            printf("%d ",b[row][column]);
        }
        printf("\n");
    }
}