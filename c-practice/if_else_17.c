/*Question 11:
Ek number input lo. Check karo —

Agar number 3 se divisible hai → print: "Divisible by 3"

Agar number 5 se divisible hai → print: "Divisible by 5"

Agar 3 aur 5 dono se divisible hai → print: "Divisible by both 3 and 5"

Agar kisi se nahi hai → print: "Not divisible by 3 or 5"*/
#include<stdio.h>
int main() {
    int num;

    printf("Enter the number:\n");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is divisible by both 3 and 5\n", num);
    } else if (num % 3 == 0) {
        printf("%d is divisible by 3\n", num);
    } else if (num % 5 == 0) {
        printf("%d is divisible by 5\n", num);
    } else {
        printf("%d is not divisible by 3 or 5\n", num);
    }

    return 0;
}
