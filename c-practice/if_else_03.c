/* calculate  electricity bill if 
unit       rates
0-100        1.5
101-200      2
201-300      3
301-above    5 */
#include <stdio.h>

int main() {
    float bill, rate, unit;

    printf("Enter the amount of unit that is consumed: ");
    scanf("%f", &unit);

    if ((unit > 0) && (unit <= 100)) {
        rate = 1.5;
    } else if ((unit >= 101) && (unit <= 200)) {
        rate = 2.0;
    } else if ((unit >= 201) && (unit <= 300)) {
        rate = 3.0;
    } else if ((unit >= 301) && (unit <= 1000000)) {
        rate = 5.0;
    } else {
        printf("Invalid unit entered!\n");
        return 1;
    }

    bill = unit * rate;

    printf("The rate is : %f\n", rate);
    printf("The total bill is : %f\n", bill);

    return 0;
}
