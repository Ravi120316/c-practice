/*Electricity bill calculate करना है इस rule से:
Units ≤ 100 → ₹1 per unit
101 – 200 → ₹2 per unit
201 – 300 → ₹3 per unit
300 → ₹5 per unit*/
#include<stdio.h>
int main () {
 int  unit ,rate ,  bill ;
    printf("enter the amount of units that are consumed :\n") ;
    scanf("%d",&unit );

    if(unit<=100) {
        rate=1;
        printf("rate will be ₹1 per unit ");
        bill=rate*unit ;
        printf("the final bill will be %d",bill);

    }  else if ( unit <=200 ) {
        rate= 2;
        printf("rate will be ₹2 per unit ");
        bill=(100*1)+(unit -100)*2 ;
        printf("final bill will be %d",bill);

    }  else if ( unit <=300) {
        rate= 3;
        printf("rate will be ₹3 per unit ");
        bill=(100*1)+(100*2)+(unit-200)*3;
        printf("final bill will be %d",bill);
    } else if (unit>300) {
         rate= 4;
        printf("rate will be ₹4 per unit ");
        bill=(100*1)+(100*2)+(100*3)+(unit-300)*4;
        printf("final bill will be %d",bill);
    }
    return 0 ;

}