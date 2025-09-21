/*A company gives bonus to employees based on their years of service as follows:
If service years ≤ 5 → Bonus = 5% of salary
If service years ≤ 10 → Bonus = 10% of salary 
If service years ≤ 15 → Bonus = 15% of salary 
If service years > 15 → Bonus = 20% of salary 

👉 Write a program in C that takes basic salary and years of service as input, and then calculates the total bonus earned.*/

#include<stdio.h>
int main () {
    
    float service,  bonus , salary ;
    printf("enter the timing of your services (in years ) :\n");
    scanf("%f" ,&service);
    printf("enter your salary :\n");
    scanf("%f",&salary);

     if (service<=5) {
        bonus=salary*service*0.05 ;
        printf("bounus will be %f",bonus);
     }   else if (service<=10)  {
      bonus=(salary*5*0.05) + (salary*0.1*(service-5)) ;
      printf("bonus will be %f",bonus);
     }   else if (service<=15)  {
        bonus=(salary*5*0.05) + (salary*5*0.1)+(salary*0.15*(service-10)) ;
        printf("bonus will be %f",bonus);
     }  else if (service>15)  {
      bonus=(salary*5*0.05)+(salary*5*0.1) +(salary*5*0.15) +(salary*0.2*(service-15)) ;
      printf("bonus will be %f",bonus);
     }
     
     return 0 ;
}