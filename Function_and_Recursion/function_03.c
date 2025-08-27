//Ek function banao jo check kare ki number Even hai ya Odd.
#include<stdio.h>
int chech_even_or_odd (int n ) {
    if(n%2==0)
   printf("%d is a even \n",n);
   else 
   printf("%d is odd \n",n);


} 

int main () {
    int n , result ;
    printf("enter the number :\n");
    scanf("%d",&n);

    chech_even_or_odd(n) ;
    return 0 ;
    


}