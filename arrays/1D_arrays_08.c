/*Q6: Copy all elements from one array to another
📌 Logic
Ek array arr1[] me user se elements input lena hai.
Ek dusra array arr2[] banana hai.
Har element ko ek loop se copy kar dena hai.
Last me dono arrays ko print karna hai.*/
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number :\n ");
    scanf("%d",&n);

    int arr1[n] , arr2[n] ;
     printf("the elements are %d \n ",n);
     for (int  i = 0; i < n; i++)
     {
       scanf("%d",&arr1[i]);

     }
     for (int i = 0; i < n; i++)
     {
       arr2[i] = arr1[i]  ;

     }
     printf("original array :\n");
     for (int i = 0; i < n; i++)
     {
       printf("%d \n",arr1[i]);
     }
     printf("copied array :\n");
     for (int i = 0; i < n; i++)
     {
        printf("%d \n",arr2[i]);
     }
     
   return 0 ;
}

