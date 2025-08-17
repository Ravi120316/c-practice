//Question 2: Find the Greatest of Two Numbers//
#include <stdio.h>
int main() {
    float a, b;
    printf("Enter the 1st number: ");
    scanf("%f", &a);

    printf("Enter the 2nd number: ");
    scanf("%f", &b);

    if (a > b) {
        printf("A is greatest\n");
    } 
    else if (a < b) {
        printf("B is greatest\n");
    } 
    else {
        printf("Both are equal\n");
    }

    return 0;
}
