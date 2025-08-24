//User se ek number n lo aur uska factorial nikal ke print karo using for loop.//
#include<stdio.h>
int main ()
{
    int i , n , fact=1 ;
    printf("enter the number :\n ");
    scanf("%d",&n );

    for (int i =1 ; i <=n; i++)
    {
      fact=fact*i; 
    }
    printf("factorial of %d =%d",n,fact);
    return 0 ;
}