//Question 1 Write a program to check whether a number is even or odd.//
#include<stdio.h>
int main ()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }

    return 0;
}
