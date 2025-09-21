/*Q1 — Sum & Average (Basics)
Problem:
Input me 3 integers A B C diye jayenge (ek hi line me, space-separated).
Output me:
pehle sum print karo
phir average (2 decimal places) print karo*/
#include<stdio.h>
#include<math.h>

int main () {
    int a, b, c ,sum=0 ,average =0 ;

    printf("enter the three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    sum=a+b+c ;
    printf("the sum of the three  numbers  a,b,c is %d : \n",sum);

    average =sum/3 ;
    printf("the average of three numbers a ,b ,c  is %d ", average);

    
    return 0 ; 



}
