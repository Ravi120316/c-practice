/*Question 9:
Ek number input lo aur check karo —
Kya vo number positive hai, negative hai ya zero?

➤ Problem Statement (Hindi):

User se ek number lo aur output do:

Agar number > 0 ho → "Positive number"

Agar number < 0 ho → "Negative number"

Agar number 0 ho → "Number is zero"*/
#include<stdio.h> 
int main ()
{
    float num ;
     printf("enter the number \n");
      scanf("%f",&num);
      if (num>0) 
      { 
        printf("number is positive");
     } else if (num<0) 
     { printf("number is negative"); 
    } else
     { printf("number is zero"); }
     return 0;
     
}