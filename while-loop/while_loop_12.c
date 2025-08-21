//Problem: User se ek number n lo aur 1 se n tak odd sum aur even sum calculate karo.//

#include<stdio.h>
int main()

{
    int  i=1 , n , oddsum =0, evensum=0 ;
      
    printf("enter the number :\n ");
    scanf("%d",&n);

    while (i<=n)

    {
      if(i%2==0)
      {
        evensum=evensum+i   ;

      } else {
        oddsum=oddsum+i;

      }  
         i++ ;
         

    }

    printf("sum of evensum=%d \n",evensum);
         printf("sumof oddsum = %d \n ",oddsum);
    return 0;
}
