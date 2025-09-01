//Q3: Find the sum of all elements in an array.
#include<stdio.h>
int main () 
{
    int n  ;
   printf("enter the number :\n");
   scanf("%d",&n);

   int arr[n] ;
   printf("enter the %d element ",n);
   for (int i = 0; i <n; i++)
   {
     scanf("%d",&arr[i]);

   }
  int sum =0 ;
 
  for (int i = 0; i < n; i++)
  {
    sum=sum+arr[i];
  }
  
  printf("the sum of elements =%d",sum);

  return  0 ;


   
}