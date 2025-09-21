/*⚡ Question (Desi Style Me):
Electricity board ek discount plan laaya hai:
Agar customer ki bill amount ≤ 1000 hai → No Discount
Agar bill ≤ 5000 hai → 10% discount 
Agar bill ≤ 10000 hai → 20% discount 
Agar bill > 10000 hai → 30% discount 
👉Tumhe ek program likhna hai jo:
Bill amount input le.
Total discount calculate kare.
Final bill (after discount) dikhaye.*/
#include<stdio.h>
int main () {
    float amount , bill , discount ;
    printf("enter your amount :\n");
    scanf("%f",&amount);

    if(amount<=1000) {
        printf("no discount ");
        discount=0;
        bill=amount -discount ;
        printf("your final bill will be %f",bill) ;
       
    }  else if (amount<=5000) {
        printf("bonus is 10% ");
        discount=(1000*0)+(0.1*(amount-1000)) ;
        bill=amount-discount ;
        printf("your final bill will be %f",bill) ;
    }   else if (amount<=10000) {
        printf("bouns will be 20%");
        discount=(1000*0)+(4000*0.1)+(0.2*(amount-5000));
         bill=amount -discount ;
         printf("your final bill will be %f",bill) ;
    }  else if (amount>10000) {
        printf("bonus will be %20") ;
        discount=(1000*0)+(4000*0.1)+(5000*0.2)+(0.3*(amount-10000)) ;
         bill=amount -discount ;
        printf("your final bill will be %f",bill) ;
    }
    return 0 ;

}