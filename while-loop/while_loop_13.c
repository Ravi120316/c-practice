//User se ek number n lo aur uska multiplication table (1 to 10 tak) print karo while loop se.//
#include<stdio.h>
int main ()
{
    int i=1 , n , table ;
    printf(" enter the number whose table you want : \n");
    scanf("%d",&n);

    while (i<=10)
    {
        table=n*i;
        
        printf(" %d * %d =%d \n ", n ,  i , table );
          i++ ;
    }
    return 0;
}