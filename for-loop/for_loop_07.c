//User se ek number n lo aur 1 se n tak ke squares print karo using for loop.//
#include<stdio.h>
int main ()
{
    int i , n ,square ;
    printf("enter the number :\n");
    scanf("%d",&n);

    for (int i = 1; i <= n ; i++)
    {
        square=i*i ;
        printf("square of %d =%d \n",i , square);

    }
    return 0;
    
}