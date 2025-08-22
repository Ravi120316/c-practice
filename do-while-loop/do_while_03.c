//User se ek number n lo aur uski table print karo using do while loop.//
#include<stdio.h>
int main ()
{
    int i=1 , n , table=1 ;
    printf("enter the number : \n");
    scanf("%d",&n);

    do
    {
       table=i*n ;
       printf("table of %d = %d \n ", n , table );
       i++ ;

    } while (i<=10);

    

    return 0 ;

    
}