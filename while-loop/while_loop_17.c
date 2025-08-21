//User se ek number n lo aur check karo ki wo Armstrong number hai ya nahi.//
#include<stdio.h>
int main () {
    int i , n , main , original , digit , sum =0 ;
    printf(" enter the number :\n");
    scanf("%d",&n);
     original=n;

     while (n>0)
     {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
     }
     if(sum==original)
     printf("this is a armstrong number \n") ;
     else 
     printf("this is not a armstrong number \n");
     return 0;
     }