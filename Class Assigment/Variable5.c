#include <stdio.h>

// 5.Calculate the Simple Interest based on user inputs for Principal, Rate, and Time.

int main(){

    // Simple interest , Princpal, Rate, Time.

    /*
    P = Principal amount
    R = Annual rate of interest (%)
    T = Time in years
    SI = Simple Interest
*/

    float Princpal, Rate, Time, SimpleInterest;

    printf("Enter Princpal Ammount: ");
    scanf("%f" , &Princpal);

    printf("Enter Rate of Interest: ");
    scanf("%f" , &Rate);

    printf("Enter Time (in year): ");
    scanf("%f" , &Time);

    SimpleInterest = (Princpal * Rate * Time) / 100;

   printf("Simple Interest = %.2f\n", SimpleInterest);

    return 0;



}