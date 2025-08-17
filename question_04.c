// calculate the electricity bill// 
#include <stdio.h>

int main() {
    float units, bill;
    const float rate_per_unit = 2.5;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    bill = units * rate_per_unit;

    printf("Your total electricity bill is ₹%.2f\n", bill);

    return 0;
}
