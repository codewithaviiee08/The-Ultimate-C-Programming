// 2.Program to find the largest element in an array:

#include <stdio.h>

int main(){
    int arr[]= {14,42,72,22,53};
    int max = arr[0];

    int i;
    for(i=1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    

    printf("Largest element: %d\n",max);
}