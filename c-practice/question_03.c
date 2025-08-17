// find voluume of cone //
#include <stdio.h>

int main() {
    float radius, height, volume;
    const float pi = 3.14;

    printf("Enter the radius of the cone: ");
    scanf("%f", &radius);

    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    volume = (1.0 / 3) * pi * radius * radius * height;

    printf("Volume of cone is = %.2f\n", volume);

    return 0;
}
