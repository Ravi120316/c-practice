/*Question 2:
Ek integer variable a banao jiska value user se lo . Ek pointer p banao jo n ko point kare. Fir:
--Pointer ke through  ki value ko 50 se change karo
--n ki nayi value print karo
--Pointer ke through n ki value print karo
Yaha hum pointer se variable ki value modify karna seekhenge*/
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number :\n");
    scanf("%d",&n);

    int *p =&n ;
     *p=50 ;

    printf("the value of n is %d \n",*p);
    return 0 ;
    

}