// Q. Check whether a given year is a Leap Year or Not. //
#include<stdio.h>
int main () {
    int year ;
    printf("enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0) {
        printf("this is a leap year\n");
    } 
    else if (year % 100 == 0) {
        printf("this is not a leap year\n");
    } 
    else if (year % 4 == 0) {
        printf("this is a leap year\n");
    } 
    else {
        printf("please enter a valid year\n");
    }

    return 0;
}
