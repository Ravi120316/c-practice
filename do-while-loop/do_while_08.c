//User se ek number n lo aur uska factorial calculate karo.//
#include<stdio.h>
int main ()
{
    int i=1 , n , fact=1 ;

    printf("enter the number :\n ");
    scanf("%d", &n );

    do
    {
       fact=fact *i ;
       i++ ;

    } while (n>=i);
    printf("factorial of %d = %d", n , fact);
    return 0 ;

}