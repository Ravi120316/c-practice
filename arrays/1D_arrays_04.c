//User se n elements input lo aur average calculate karke print karo
#include<stdio.h>
int main () {
    int  n ;
    printf("enter the number of elements : \n");
    scanf("%d",&n) ;

    int arr[n] ;
    printf("enter the %d element ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
     int sum =0 ;
     for (int  i = 0; i < n; i++)
     {
       sum=sum+arr[i] ;

     }
     float  average =0 ;
     average=sum/(float)n ;

     printf("the average of %d is %f",n, average);


    return 0 ;
    
}