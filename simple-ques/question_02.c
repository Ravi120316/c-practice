// find surface area of cylinder //
#include <stdio.h>

int main () {
    float radius, surfacearea, height;
    const float pi = 3.14 ;

    printf("Enter the radius of cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of cylinder: ");
    scanf("%f", &height);

    surfacearea = 2 * pi * radius * (height + radius);

    printf("Surface area of cylinder is = %f\n", surfacearea);

    return 0;
}

