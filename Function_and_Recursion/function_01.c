//Ek function banao jo 2 numbers ka sum return kare.
#include<stdio.h>
int sum (int a , int b )  {
    return a+b ;
}

int main () {


int a , b , result ;
   printf("enter two number :\n");
   scanf("%d %d",&a,&b);

   result=sum(a,b);
   printf("%d",result);

   return 0 ;


}