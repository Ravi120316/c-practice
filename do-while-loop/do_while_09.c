//Question 9: Armstrong Number using do while loop//
#include<stdio.h>
int main ()
{
    int  i=1 , n , cube , sum=0 , original , digit  ;
    
    printf("enter the number : \n ");
    scanf("%d",&n );
  original= n ;

    do
    {
       digit=n%10;
       cube=digit*digit*digit;
       sum=cube+sum;
       n=n/10;

    } while (i<=n);

    if(sum==original) {
        printf(" this is a armstrong number \n ");
    }  else {
        printf("this is not a armstrong number \n ");

    }
    return  0 ; 


}