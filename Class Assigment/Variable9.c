#include <stdio.h>

// 9.Calculate the Gross Salary of an employee (Basic + HRA + DA variables).

int main(){

    float basic , hra , da , grossSalary;

    printf("Enter basic salary: ");
    scanf("%f" , &basic);

    printf("Enter the HRA: ");
    scanf("%f" , &hra);

    printf("Enter the DA: ");
    scanf("%f" , &da);

    grossSalary = basic + hra + da;

    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}