//User se ek number n lo aur 1 se n tak ke saare odd numbers print karo using for loop//
#include<stdio.h>
int main ()
{
    int i , n ,odd ;

    printf("enter the number :\n");
    scanf("%d",&n);

    for (int i = 1; i < n; i++)
    {
    
        if(i%2!=0) 
           printf("%d=odd \n",i);
      
                  
    }
    printf("\n");


    return 0 ;

}