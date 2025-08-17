//n number input lo, aur while loop ka use karke uske digits ka sum nikal ke print kar//
#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0) {
        sum = sum + n % 10; // last digit add
        n = n / 10;         // last digit remove
    }

    printf("Sum = %d", sum);
    return 0;
}
