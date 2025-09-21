/*Q2 — Largest of Two Numbers (Using Conditional Operator ?:)
Problem:
Do integers input me diye jayenge. Tumhe conditional operator (?:) ka use karke unme se bada number print karna hai.*/

#include<stdio.h>
int main() {
    int a , b , greatest  ;

    printf("enter the two numbers :\n");
    scanf("%d %d",&a,&b);
    
    if(a>b){
        printf("greatest=%d",a);
    }  else if (b>a) {
        printf("greatest =%d",b);

    }
    return 0 ;
}