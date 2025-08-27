//Ek function banao jo 1 se n tak ke natural numbers ka sum return kare.
#include<stdio.h>
int sum_of_natual_numbers  (int n) {
    int sum=0 ;
    for (int i = 0; i <= n; i++)
    {
       sum=sum+i;

    }
    return sum;

}

int main () {
    int num , result ;
    printf("enter the number :\n");
    scanf("%d",&num);

    result=sum_of_natual_numbers(num);
    printf("sum of natural numbers is %d ",result);


    return 0 ;

}