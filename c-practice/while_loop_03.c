//Multiplication Table of a given number//
#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Enter a number to print its table: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
