//Ek function banao jo 2 numbers ka maximum return kare.
#include<stdio.h>
int maximum (int a , int b ) {
    if(a>b) 
       return a ;

       else

       return b ; 
}

    
    int main ()  {
        int a , b , result ; 

        printf("enter the two number :\n ");
        scanf("%d %d ",&a, &b);

        result=maximum(a,b);
        printf("%d \n",result );
    
    return 0 ;
}