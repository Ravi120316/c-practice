//Recursion ka use karke 1 se n tak ke numbers print karo.
#include<stdio.h>
int print_number (int n ) {
    if(n==0)
    return 0 ;

    print_number(n-1);
    printf("%d\n",n);
} 

int main () {
    int n  ;
    printf("enter the number :\n");
    scanf("%d",&n);

    print_number(n);
    return 0 ;

}