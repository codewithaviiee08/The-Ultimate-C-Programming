#include <stdio.h>

int main(){

    // Factorial 5! = 1*2*3*4*5

    int n = 5;
    int result = 1;

    int i;

    for(i=1;i<n+1;i++){
        result=result*i;
    }

    printf("\nFactorial of %d is %d",n,result);

    // Fibonacci Series 1 1 2 3 5 8 9 10 11 12 13 ...
  //                              f s t
 //                                 f s t
    printf("\n\n1 1 ");

    int firstNumber=1;
    int secondNumber=1;

    for(i=3;i<13;i++){
        int thirdNumber=firstNumber+secondNumber;
        printf("%d ",thirdNumber);
        firstNumber=secondNumber;
        secondNumber=thirdNumber;
    }
    return 0;
}