//User se ek number le aur uska reverse print kare.//
#include<stdio.h>
int main()
{
    int digit , n , reverse=0 ;
     printf("enter the number :\n");
     scanf("%d",&n);


     while (n>0)
     {
       digit=n%10;
       reverse=reverse*10+digit;
       n=n/10;

     }
     printf("reverse =%d",reverse);

     return 0 ;

}