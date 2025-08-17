/*Q1. Program to Calculate Area of a Circle
📌 Formula:
Area=π×r×r
(π = 3.14)*/

#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14;

    // User input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Area calculation
    area = PI * radius * radius;

    // Output
    printf("Area of the circle = %.2f\n", area);

    return 0;
}
