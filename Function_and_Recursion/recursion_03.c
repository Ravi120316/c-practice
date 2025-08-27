//Recursion ka use karke 1 se n tak numbers ka sum nikalo.
#include<stdio.h>
int sum (int n ) {
    

    if(n==0)
    return 0 ;
    return n +sum(n-1);


}
int main () {
    int n ;
    printf("enter the number :\n");

    scanf("%d",&n);

    printf("sum=%d",sum(n));
    return 0 ;
    
}