//Problem: User se ek number n lo aur 1 se n tak ka sum nikal ke print karo.//
#include<stdio.h>
int main()
{
  int    i = 1 , n , sum=0 ;
  printf("enter the number n :\n");
  scanf("%d",&n);

  while (i<=n)
  {
    sum=i+sum;
    i++;
  }
  printf("sum of 1 to %d =%d",n , sum);

  return 0;
  

}