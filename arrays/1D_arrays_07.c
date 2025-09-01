//Q7: Reverse an Array  .User se n elements input lo aur array ko reverse karke print karo.
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number :\n");
    scanf("%d",&n);

    int arr[n];
    printf("the elements are %d \n",n);
    for (int i = 0; i <n; i++)
    {
       scanf("%d",&arr[i]);

    }
    printf("the reverse of the array is :\n");
    for (int i = n-1; i >= 0; i--)
    {
       printf("%d \n",arr[i]);

    }
    printf("\n");
    return 0 ;

    

}