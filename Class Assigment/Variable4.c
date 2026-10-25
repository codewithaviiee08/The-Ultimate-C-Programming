#include <stdio.h>

// 4. Accept the radius of a circle and calculate its area (Using a third variable).

int main()
{
    float radius, pi, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    pi = 3.1416;
    area = pi * radius * radius;

    printf("Area of the circle: %.2f\n", area);

    return 0;
}