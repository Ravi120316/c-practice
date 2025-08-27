//Recursion ka use karke n se 1 tak numbers print karo.
#include<stdio.h>
void print_reverse(int n ) {
    if(n==0)
    return ;

    printf("%d \n",n);
    print_reverse(n-1);

}

int main () {
    int n ;
    printf("enter the number \n");
    scanf("%d",&n);

    print_reverse(n);
    return 0;

}