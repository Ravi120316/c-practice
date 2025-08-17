/*Question (Nested If):

Ek number input lo (year). Batana hai ki ye leap year hai ya nahi.

📘 Leap Year Rule:

Agar year 400 se divisible hai → Leap year ✅

Agar 100 se divisible hai, but 400 se nahi → Not a leap year ❌

Agar 4 se divisible hai, but 100 se nahi → Leap year ✅

Baaki sab → Not a leap year ❌*/
#include <stdio.h>

int main() {
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
