//Ek integer variable a banao jiska value 10 ho.
// Ek pointer p banao jo a ko point kare. Fir:
//a ki value print karo
//a ka address print karo
//Pointer p ka value (address) print karo
//Pointer ke through a ki value print karo

#include<stdio.h>
int main () {
    int a=10 ;
    int *p= &a ;

    printf("the value of a is %d \n",a);
    printf("the address of a is %p \n",&a);
    printf("the address of *p is %p \n",&a);
    printf(" the value of a is %d \n", *p);
    return 0; 
}