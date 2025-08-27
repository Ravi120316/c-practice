//Ek function banao jo factorial calculate kare aur usko return kare.
#include<stdio.h>
int factorial(int n ) {
    int fact=1 , i ;
    do
    {
       fact=fact*i ;
        i++;
    } while (n>=i);
    
    
    return fact;
} 


int main () {
    int i , n , result  ;
    printf("enter the number :\n");
    scanf("%d",&n);

   result=factorial(n);
   printf("factorial=%d \n",result);
   return 0 ;

}