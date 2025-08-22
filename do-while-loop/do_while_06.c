//User se ek number lo aur uska reverse number print karo using do while loop.//
#include<stdio.h>
int main ()
{
    int  n , original ,digit ,  reverse =0; 

    printf("enter the number :\n ");
    scanf("%d",&n ) ; 
     original = n ;
    do
    {
        digit=n%10 ;
        reverse= reverse*10 + digit;
        n=n/10;

    } while (n>0);
    printf("reverse of %d =%d \n  ", original , reverse);
    return 0 ;

}