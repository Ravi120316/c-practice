/*A company gives bonus to employees based on their years of service and salary.
💼 Conditions:

If employee has worked for 10 or more years:

If salary is less than 10000, bonus is 10% of salary

If salary is 10000 or more, bonus is 8% of salary

If employee has worked for less than 10 years but 5 or more:

Bonus is 5% of salary

If service is less than 5 years, no bonus*/
#include <stdio.h>

int main() {
    int service;
    float salary, bonus;

    printf("Enter your years of service: ");
    scanf("%d", &service);

    printf("Enter your current salary: ");
    scanf("%f", &salary);

    if (service >= 10) {
        if (salary < 10000) {
            bonus = salary * 0.10;
        } else {
            bonus = salary * 0.08;
        }
        printf("Bonus: %.2f\n", bonus);
    } else if (service >= 5) {
        bonus = salary * 0.05;
        printf("Bonus: %.2f\n", bonus);
    } else {
        printf("No bonus for less than 5 years of service.\n");
    }

    return 0;
}
