//User se ek number lo aur uske digits ka sum nikal ke print karo using do while loop//
#include<stdio.h>
int main ()
{
    int i =1 , n ,  original , digit , sum=0 ;

    printf("enter the number :\n");
    scanf("%d",&n);
   original = n ;
    do
    {
       digit=n%10;
       sum = sum+digit ;
       n=n/10; 

    } while (i<=n);

    printf("the sum of digit of %d =%d", original , sum );

    return 0 ;

    
}