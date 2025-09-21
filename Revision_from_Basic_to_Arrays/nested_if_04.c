/*Question (Topic: Nested if – Marks & Grade)
Ek program banao jo student ke marks (0–100) input lega aur uske basis pe grade print kare:
90–100 → Grade A
75–89 → Grade B
50–74 → Grade C
35–49 → Grade D
Below 35 → Fail
Invalid input agar marks 0 se kam ya 100 se zyada diye gaye ho.*/
#include<stdio.h>
int main () {
    int marks ;
    printf("enter  the marks :\n");
    scanf("%d",&marks);
    if (marks>100 || marks <0) {
        printf("invalid marks ");
    }
      else if(marks<=100 && marks>=90) {
        printf("grade A");
     } else if (marks<=89 && marks>=75) {
        printf("grade B");

     } else if (marks<=74 && marks>=50) {
        printf("grade C");

     } else if (marks<=49 && marks>=35) {
        printf("grade D");
     } else if (marks<35) {
        printf("fail") ;
     } 
     return 0 ;
}