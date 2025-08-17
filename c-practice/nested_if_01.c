/*Question 1 (Nested if - Medium level):
Take 3 numbers from user.
Find the largest number among them.
Then check if that largest number is even or odd.*/
#include<stdio.h>
int main()
{
    int num1, num2, num3, largest;

    printf("Enter first number:\n");
    scanf("%d", &num1);

    printf("Enter second number:\n");
    scanf("%d", &num2);

    printf("Enter third number:\n");
    scanf("%d", &num3);

    // Step 1: Find the largest number
    if (num1 >= num2 && num1 >= num3)
    {
        largest = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    // Step 2: Check if largest is even or odd
    if (largest % 2 == 0)
    {
        printf("Largest number is %d and it is Even.\n", largest);
    }
    else
    {
        printf("Largest number is %d and it is Odd.\n", largest);
    }

    return 0;
}
