/*Ek integer variable a aur b banao, jinka initial value 10 aur 20 ho.
Do pointers p1 aur p2 banao jo a aur b ko point kare.
Pointers ke through a aur b ki values ko swap karo.
Swap ke baad dono values print karo.*/
#include<stdio.h>
int main () {
    int a=10 ,b=20 ;
    int *p1 =&a ;
    int  *p2 =&b ;

    int temp ;
    temp=*p1;
    *p1=*p2 ;
    *p2=temp;
     
    printf("the value of a and b =%d and %d ",*p1 ,*p2);
    return 0 ;
    
}