/*Question 13:

Ek number input lo. Check karo:

Agar 2 aur 7 dono se divisible hai → print: Divisible by both 2 and 7

Agar sirf 2 se divisible hai → print: Divisible by 2

Agar sirf 7 se divisible hai → print: Divisible by 7

Agar kisi se bhi divisible nahi hai → print: Not divisible by 2 or 7*/
#include<stdio.h>
int main ()
{
    int num;
    printf("enter the number: \n ");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 7 == 0) {
        printf("%d is divisible by 2 and 7 \n", num);
    } else if (num % 2 == 0) {
        printf("%d is divisible by 2 \n", num);
    } else if (num % 7 == 0) {
        printf("%d is divisible by 7 \n", num);
    } else {
        printf("%d is not divisible by 2 and 7 \n", num);
    }

    return 0;
}
