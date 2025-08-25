//User se ek number n lo aur uska table reverse order me (10 se 1 tak) print karo using for loop.//
#include<stdio.h>
int main ()
{
    int i , n , reverse , table ;

    printf("enter the number :\n");
    scanf("%d",&n);

    for (int i =10; i >=1; i--)
    {
       table=n*i;
       printf("%d*%d=%d \n",n,i,table);
    }
    return 0 ;
    
}