//User se ek number n lo aur 1 se n tak ke saare even numbers ka sum  print karo using for loop//
#include<stdio.h>
int main ()
{
    int i , n , even , sum= 0;

    printf("enter the number :\n ");
    scanf("%d",&n);
     
    for (int i = 1; i<=n; i++)
    {
        if(i%2==0)
        sum=sum+i;

    }
    printf("the sum of %d is %d \n",n , sum);

    return 0 ;

}