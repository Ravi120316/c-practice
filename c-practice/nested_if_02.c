//Enter a number and check whether it is divisible by 3 or 5. If it is divisible by both, print 'Divisible by both'. If divisible by only one, specify which one. Also check if the number is positive or negative."//
#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 || num % 5 == 0) {
        if (num % 3 == 0 && num % 5 == 0) {
            printf("%d is divisible by both 3 and 5\n", num);
        } else if (num % 3 == 0) {
            printf("%d is divisible by 3\n", num);
        } else {
            printf("%d is divisible by 5\n", num);
        }

        if (num > 0) {
            printf("%d is a positive number\n", num);
        } else if (num < 0) {
            printf("%d is a negative number\n", num);
        } else {
            printf("Number is zero\n");
        }

    } else {
        printf("%d is not divisible by 3 or 5\n", num);
    }

    return 0;
}
