/*Write a program to input three angles of a triangle and check:

Whether the triangle is valid.

If valid, check whether it is:

Equilateral triangle

Isosceles triangle

Scalene triangle*/
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter three angles of the triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("Triangle is valid.\n");

        if (angle1 == angle2 && angle2 == angle3) {
            printf("It is an Equilateral triangle.\n");
        } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            printf("It is an Isosceles triangle.\n");
        } else {
            printf("It is a Scalene triangle.\n");
        }

    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
