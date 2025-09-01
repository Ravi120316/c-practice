/*✅ Q7: Search an element in an array (Linear Search)
👉 User से array लेना है, फिर एक target element input करना है, और check करना है कि वो array में है या नहीं। अगर है तो उसकी position बताओ, अगर नहीं है तो message print करो*/

#include<stdio.h>
int main () {
    int n , target , found=0 ;
    printf("enter the numnber of element :\n");
    scanf("%d",&n);
   int arr [n];
   printf("the elements are %d \n",n);
   for (int i = 0; i < n; i++)
   {
     scanf("%d",&arr[i]);

   }  
   printf("enter the element to search :\n");
   scanf("%d",&target);

   for (int i = 0; i < n; i++)
   {
     if(arr[i] == target) {
        printf("element %d is found at opoistion %d \n",target,i);
        found=1 ;
     }
   }

   if(!found) {
    printf("element %d is not in array \n",target) ;
   }
    return 0 ;

   
} 