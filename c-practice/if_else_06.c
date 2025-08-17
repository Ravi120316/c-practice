//Question 3: Check whether a number is divisible by 3 and 5 both//
#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("Number is divisible by both 3 and 5\n");
    } 
    else if (num % 3 == 0) {
        printf("Number is divisible by 3 only\n");
    } 
    else if (num % 5 == 0) {
        printf("Number is divisible by 5 only\n");
    } 
    else {
        printf("Number is not divisible by 3 or 5\n");
    }

    return 0;
}
