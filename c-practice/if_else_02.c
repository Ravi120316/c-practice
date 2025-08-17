// Find Greatest of 3 Numbers //
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b) && (a > c)) {
        printf("a is the greatest\n");
    } else if ((b > a) && (b > c)) {
        printf("b is the greatest\n");
    } else if ((c > a) && (c > b)) {
        printf("c is the greatest\n");
    } else {
        printf("There is a tie between two or more numbers.\n");
    }

    return 0;
}
