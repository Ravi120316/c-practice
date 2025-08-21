//Problem: User se ek number n lo aur 1 se n tak ke even numbers print karo.//
#include<stdio.h>
int main ()
{
    int i=1 , n , even ;
     
    printf("enter n  no :\n");
    scanf("%d",&n);

    while (i<=n)
    {
       if(i%2==0)
       printf("%d is a even number .\n",i);
       i++ ;

    }
    return 0 ;

}