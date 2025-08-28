/*Question 4:

Ek pointer p declare karo jo integer ko point kare.
Pointer ko NULL se initialize karo.
Check karo agar pointer NULL hai → print "Pointer is NULL"
Agar NULL nahi → pointer ke through value print karo*/

#include<stdio.h>
int main () {
    int n ;
    printf("enter the number :\n");
    scanf("%d",&n);

    int *p=&n ;
    if (p==NULL) {
        printf("the value is  null \n ");
     } else { 
        printf("the value of n is %d \n",*p);
     }
     return 0 ; 
}
