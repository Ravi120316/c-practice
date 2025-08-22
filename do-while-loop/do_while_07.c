//User se ek number lo, uska reverse nikal ke check karo ki original aur reverse same hai ya nahi.//
#include<stdio.h>
int main ()
{
    int  n , digit , original , inverse=0 ;

     printf("enter the number :\n ");
     scanf("%d",&n);

     original=n ;

     do
     {
       digit=n%10;
      inverse= inverse*10+digit;
      n=n/10;
      
     } while (n>0);
      
     if(inverse==original)
     {
        printf("this is a  Palindrome number\n  ");

     }  else {
        printf(" this is not a  Palindrome number  ");

     }
     return 0 ;
     
}