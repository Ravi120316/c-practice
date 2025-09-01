//Q2: Take 5 integers as input from the user and print them.
#include<stdio.h>
int main () {
    int arr[5] ;
    printf("enter the number: \n");
    for (int i = 0; i <5; i++) {
        scanf("%d",&arr[i]) ;

    }
      
    printf("you entered :\n") ;
    for (int i = 0; i <5; i++)
    {
       printf("%d /n ",arr[i]);

    }
    return 0 ;
}