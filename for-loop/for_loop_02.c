//User se ek number n lo aur 1 se n tak numbers ka sum nikal ke print karo using for loop //
#include<stdio.h>
int main ()
{
    int i , n , sum =0 ;
    printf("enter the number :\n ");
    scanf("%d",&n);

    for (int i = 0; i<=n; i++)
    {
       sum=sum+i; 
    }
    printf("sum of %d =%d", n , sum );
     return 0 ;
     
}