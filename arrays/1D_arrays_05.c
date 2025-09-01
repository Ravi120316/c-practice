//Q5: Find Largest and Smallest Element in an Array
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number of element :\n ");
    scanf("%d",&n);

    int arr[n] ;
    printf("the element are %d \n ",n);
    for (int i = 0; i < n ; i++)
    {
       scanf("%d", &arr[i]);

    }
     int largest = arr[0] ;
     int smallest = arr[0] ;

     for (int i = 0; i < n; i++)
     {
        if (arr[i] > largest)
        {
           largest=arr[i] ;
        }
         if (arr[i]<smallest)
         {
            smallest=arr[i] ;
         }
         
     }
     printf("the smallest element =%d \n",smallest);
     printf("the ggeatest element =%d \n",largest) ;

     return 0 ; 
    

}