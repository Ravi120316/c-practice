//Ek function banao jo user ka number reverse kare aur return kare.
#include<stdio.h>
int reverse (int n ) {
    int rev=0 , digit ;
    while (n>0)
    {
      digit=n%10;
      rev=rev*10+digit;
      n=n/10;

    }
    return rev;

}
int main  () {
    int n , result ;
    printf("enter the number :\n");
    scanf("%d",&n);

   result=reverse(n);
   printf("reverse of %d is %d :\n",n, result);
   return 0 ;

}