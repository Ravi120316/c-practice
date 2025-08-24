//User se ek number n lo aur n se 1 tak numbers reverse order me print karo using for loop//
#include<stdio.h>
int main ()
{
    int i , n , inverse ;
    printf("entre the number : \n");
    scanf("%d",&n);

    for ( int i = n; i >= 1; i--)
    {
       printf("%d \n",i);

    }
    return 0 ;

}