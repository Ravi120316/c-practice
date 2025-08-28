/*Question 5:

Ek function banao:
void update(int *ptr)
Ye function pointer ke through variable ki value 100 se update kare
Main function me ek integer a = 10 banao
Pointer ke through function ko a pass karo
Function call ke baad a ki nayi value print karo*/
#include<stdio.h>
 void update(int *ptr) {
 *ptr=100 ; 

 }
 int main () {
    int a =20 ;
    printf("before update a=%d \n",a);
    update(&a) ;
    printf("after update a= %d \n",a );

    return 0 ;

 }


