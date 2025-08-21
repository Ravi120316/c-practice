//User se ek number n lo aur uske digits count karo.//
#include<stdio.h>
int main ()
{
    int i , n , count =0  , digit ;

    printf(" enter the number :\n");
    scanf("%d",&n);

    while (n>0)
    {
       count++ ;
       n=n/10;

    }
    printf("the count of number is = %d :\n",count);
    return 0 ;

}