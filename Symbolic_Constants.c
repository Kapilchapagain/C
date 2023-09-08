#include <stdio.h>

#define PI  3.14159   // Defining PI as a symbolic constant

int main() {
    float radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    // Calculating the area of the circle using the symbolic constant
    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}


