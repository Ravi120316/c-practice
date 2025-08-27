//Ek function banao jo number ke digits ka sum return kare.

#include<stdio.h>
int sum_of_digit (int n ) {
    int  sum=0 , digit  ;
    while (n>0)
    {
       digit=n%10;
       sum=sum +digit ;
       n=n/10;
        
    }
    return sum;

}
int main () {
     int num , result ;
     printf("enter the number :\n");
     scanf("%d",&num);

     result=sum_of_digit(num);
     printf("sum of %d =%d",num , result);

     return 0 ;



}