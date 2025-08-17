/*Question 8:

Teen numbers input lo. Check karo —

Agar sab barabar hain → print: All numbers are equal

Agar koi do barabar hain → print: Two numbers are equal

Agar teeno alag hain → print: All numbers are different
*/

#include<stdio.h>
int main ()
{
   float a, b, c;
   printf("enter the first number:\n");
   scanf("%f",&a);

   printf("enter the second number:\n");
   scanf("%f",&b);

   printf("enter the third number:\n");
   scanf("%f",&c);

   if((a>b) && (a>c)){
      printf("first number is greatest ");
   }
   else if ((b>a) && (b>c)) {
      printf("second number is greatest ");
   }
   else if ((c>a)  && (c>b)) {
      printf("third number  is greatest");
   }
   else {
      printf("enter a valid number ");
   }

   return 0;
}
