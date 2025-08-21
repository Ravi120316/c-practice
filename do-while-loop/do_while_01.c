//User se ek number n lo, aur do-while loop ka use karke 1 se n tak ke numbers print karo.//
#include<stdio.h>
int main()
{
    int i=0 , n ;
    
    printf("enter the number :\n");
    scanf("%d",&n);

    do
    {
      printf("%d",i);
      i++ ;

    } while (i<=n);
    return 0;
    
}