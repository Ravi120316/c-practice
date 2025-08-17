//Sum of first N natural numbers using while loop//
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a number N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;  // add current number to sum
        i++;            // move to next number
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
