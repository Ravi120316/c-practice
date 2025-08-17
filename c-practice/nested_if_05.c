/*Q6. Write a program to check if a number is divisible by 3 or 7, and:

If it is divisible by both, print: "Divisible by both 3 and 7"

If it is divisible only by 3, print: "Divisible by 3 only"

If it is divisible only by 7, print: "Divisible by 7 only"

If it is divisible by neither, print: "Not divisible by 3 or 7"

Also check whether the number is even or odd and print it too.*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0)
    {
        if (num % 7 == 0)
        {
            printf("%d is divisible by both 3 and 7\n", num);
        }
        else
        {
            printf("%d is divisible by 3 only\n", num);
        }
    }
    else
    {
        if (num % 7 == 0)
        {
            printf("%d is divisible by 7 only\n", num);
        }
        else
        {
            printf("%d is not divisible by 3 or 7\n", num);
        }
    }

    // Check even or odd
    if (num % 2 == 0)
    {
        printf("%d is an even number\n", num);
    }
    else
    {
        printf("%d is an odd number\n", num);
    }

    return 0;
}
