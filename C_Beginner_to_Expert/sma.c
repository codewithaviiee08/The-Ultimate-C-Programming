// 3.Program to find the element in an array:

#include <stdio.h>

int main(){
    int arr[]= {10,40,55,76,20};
    int min = arr[0];

    int i;
    for(i=1;i<5;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Smallest element: %d\n ",min);
}