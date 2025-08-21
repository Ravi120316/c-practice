//Do number input lo, unka LCM find karo using while loop.//
#include<stdio.h>
int main ()
{
    int   a , b,  lcm ;

    printf("enter the two number :\n");
    scanf("%d %d ", &a ,  &b);

    if(a>b)
    lcm=a;
    else 
    lcm=b;

    while (1)
    {
       if(lcm%a==0 && lcm%b==0)

       {
        printf("the lcm of %d and %d = %d",a,b , lcm);
        break;
       }
       lcm ++ ;

    }
    return 0 ; 
}