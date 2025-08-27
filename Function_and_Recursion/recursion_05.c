//Recursion ka use karke Fibonacci series nikalna.
#include<stdio.h>
int fibnacci (int n) {
    if(n==0)
    return 0 ;
    else if (n==1)
    return 1;
    else 
    return fibnacci(n-1) + fibnacci(n-2);

    
}
int main () {
    int i , n ;
    printf("enter the  number :\n ") ;
    scanf("%d",&n);

    printf("fibonacchi series :");
    for (int  i = 0; i <= n; i++)
    {
       printf("%d \n ",fibnacci(i)) ;

    }
    
  return 0 ;

}