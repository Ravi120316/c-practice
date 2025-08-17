/*Ek program banao jo user se ek number le,
aur 1 se lekar us number tak ke odd numbers ka sum nikale.

Example:*/
#include <stdio.h>
int main() {
    int i = 1, n, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 != 0) { // odd check
            printf("%d is an odd number\n", i);
            sum = sum + i;
        }
        i++;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}
