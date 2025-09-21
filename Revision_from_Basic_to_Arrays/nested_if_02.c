/*Q7 — Leap Year Check
👉 Topic: Nested if (Control Statements)
Problem:
User se ek year input lo aur check karo ki wo Leap Year hai ya nahi.*/
#include<stdio.h>
int main () {
    int year , leap_year ;
    printf("enter the year :\n");
    scanf("%d",&year);

    if(year %400==0) {
        printf("this is a leap year ");
    } else if (year%100==0) {
        printf("this is not a leap year ");
    }  else if (year%4==0) {
        printf("this is a leap year ");
    }  else {
        printf("this is not a leap year ");
    }
return 0 ;
}