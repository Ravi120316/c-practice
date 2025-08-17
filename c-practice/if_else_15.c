/*Question 12:

 Ek number input lo aur check karo ki kya vo 3 aur 5 dono se divisible hai ya nahi.

Agar haan → print "Divisible by both 3 and 5"

Agar nahi → print "Not divisible by both 3 and 5"
*/
#include<stdio.h>

int main () {
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("%d is divisible by both 3 and 5\n", num);
    } else {
        printf("%d is not divisible by both 3 and 5\n", num);
    }

    return 0;
}
