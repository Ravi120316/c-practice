//User se ek number n lo aur n se 1 tak reverse counting print karo using do while loop//
#include<stdio.h>
int main ()
{
    int i=0 , n , reverse ;
    
    printf("enter the number : \n ");
    scanf("%d",&n);

    do
    {
        printf("%d \n",n);
        n-- ;

    } while (n>=1);
    return 0 ;

}