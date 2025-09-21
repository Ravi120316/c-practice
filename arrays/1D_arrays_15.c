//Ek program likho jo user se n elements input le aur array ko reverse order me print kare.
#include<stdio.h>
int main () {
    int n ;
    printf("enter the number of elements :\n") ;
    scanf("%d",&n) ;

    int arr[n];
    printf("entered elements are :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("reversed array = \n");
   for (int i = n-1; i >= 0; i--)
   {
    printf("%d \n",arr[i]);

   }
   return 0 ;

   
}
