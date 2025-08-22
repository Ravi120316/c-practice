//User se ek number n lo aur 1 se n tak ke numbers ka sum nikal ke print karo using do while loop...
#include<stdio.h>
int main ()
{
    int i=1 , n , sum=0 ;
    printf("enter the number :\n");
    scanf("%d",&n);

    do
    {
       sum=sum+i;
       i++ ;
       
    } while (i<=n);

    printf("sum of 1 to %d = %d ",n , sum );
    
    return 0 ;

}
