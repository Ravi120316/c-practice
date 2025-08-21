//Ek number lo aur check karo ki palindrome number hai ya nahi.//
#include<stdio.h>
  int main () {


int digit , n , reverse =0 , original ;
 
printf("enter the number :\n");
scanf("%d",&n);

original=n;

while (n>0)
{
   digit=n%10;
   reverse=reverse*10+digit;
   n=n/10;
}
    if(reverse==original) 
        printf("this is a palindrome number:\n") ;
      else 
        printf("this is not a palindrome number:\n ") ;
    
  return 0 ;
}
