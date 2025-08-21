//Problem: User se ek number n lo aur 1 se n tak ke odd numbers print karo.//
#include<stdio.h>
int main()
{
    int i=1 , n , odd ;
    printf("enter number N :\n");
    scanf("%d",&n);

    while (i<=n)
    {
        if(i%2!=0)
        printf("%d is a odd number .\n",i);
        i++;
    }
   

    return 0;

}