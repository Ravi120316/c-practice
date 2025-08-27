//Ek function banao jo kisi number ka multiplication table (table) print kare
#include<stdio.h>
int table (int n) {
    int  table=1 ;
    for (int i = 1; i <=10; i++)
    {
       printf("%d*%d=%d \n",i,n, i*n);
    }
    return table;

}
 
int main () {
    int  n;
    printf("enter the number \n");
    scanf("%d",&n);
    table(n);
    return 0 ;

}