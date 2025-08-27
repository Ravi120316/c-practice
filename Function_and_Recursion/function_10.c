//Q: Ek number Armstrong hai ya nahi check karo (using function).
#include<stdio.h>
int check_armstrong (int n ) {
    int digit , cube , sum =0;
     while (n>0)
     {
        digit=n%10;
        cube = digit*digit*digit;
        sum=sum+cube;
        n=n/10;

     }
     return sum ;

}

int main () {
    int num , result , original  ;
    printf("enter the number :\n");
    scanf("%d",&num);
     original=num;

    result=check_armstrong(num);
    if(original == result) {
        printf(" this is a armstrong number :\n");

    } else {
        printf(" this is not a armstrong number :\n");
    }
 return 0 ;


}