/*📘 Q6 — Largest of Three Numbers
👉 Topic: Control Statements (if-else ladder / nested if)
Problem:
3 integer numbers input lo.
Jo sabse bada hoga usse print karo.
Agar numbers equal hain to "All numbers are equal" print karo.*/
#include<stdio.h>
int main () {
    int a,b,c, largest, equal ;

    printf("enter the first no :\n");
    scanf("%d",&a);

    printf("enter the second no :\n");
    scanf("%d",&b);

    printf("enter the third no :\n");
    scanf("%d",&c);

    if((a>b ) && (a>c)) {
       printf("A is largest");
    
    }
    else if ((b>a) && (b>c)) {
        printf("B is largest ");

    } else if ((c>a) && (c>b)) {
        printf("c is largest ");

    } else if  (a==b && b==c) {
        printf("all numbers are equal ");

    }
    return 0 ;
    

}