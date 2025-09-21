/*Q3 — Even or Odd
👉 Topic: Operators & Expressions
Problem:
Ek integer input me diya jayega. Tumhe check karna hai ki even hai ya odd, aur result print karna hai.*/
#include<stdio.h>
int main () {
    int a ,even , odd  ;
    printf("enter the number :\n");
    scanf("%d",&a);

    if(a%2==0) {
      printf("%d is even",a);
    }  else if (a%2!=0) {
        printf("%d is odd ",a);
    }
    return 0 ;

}