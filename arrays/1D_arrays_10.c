//User se n numbers input lena hai aur unko waapas print karna hai.
#include<stdio.h>
int main () {
    int n ;
    printf("enter the n elements \n");
    scanf("%d",&n);
     
    int arr[n] ;
    printf("enter the number of elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d \n",&arr[i]) ;
    }
    printf("you entered :\n") ;
    for (int i = 0; i < n ; i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0 ;


}

