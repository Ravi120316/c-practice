//User se ek number n lo aur 1 se n tak ke cubes print karo using for loop.//
#include<stdio.h>
int main ()
{
    int i , n ,cube ;

    printf("enter the number :\n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        cube=i*i*i;
        printf("cube of %d=%d \n" ,i , cube);
    }
    return 0;
}