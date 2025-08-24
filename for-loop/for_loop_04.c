//User se ek number n lo aur uska table (pahada) print karo using for loop.//
#include<stdio.h>
int main ()
{
    int i , n , table ;
    printf("enter the number :\n ");
    scanf("%d",&n);

    for (int i = 1; i <=10; i++)
    {
        table=i*n;
        printf("%d*%d=%d\n ",i,n, table);

    }
    return 0 ; 
}