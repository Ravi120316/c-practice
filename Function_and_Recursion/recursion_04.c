//Recursion ka use karke factorial nikalna.]
#include<stdio.h>
int factorial (int n ) {
    if(n==0  || n==1)
    return 1 ;

    return n * factorial(n-1) ;

}
int main () {
    int n ;
    printf("enter the number : \n");
    scanf("%d",&n);

    printf("factorial of %d =%d",n,factorial(n));
    return 0 ;
    


}