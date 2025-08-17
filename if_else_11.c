//Write a C program to find the largest among three numbers using if-else.//
#include<stdio.h>

int main () {
   float a, b, c;
   printf("Enter the first number:\n");
   scanf("%f", &a);

   printf("Enter the second number:\n");
   scanf("%f", &b);

   printf("Enter the third number:\n");
   scanf("%f", &c);

   if ((a > b) && (a > c)) {
      printf("First number is greatest\n");
   } else if ((b > a) && (b > c)) {
      printf("Second number is greatest\n");
   } else if ((c > a) && (c > b)) {
      printf("Third number is greatest\n");
   } else if (a == b && b == c) {
      printf("All three numbers are equal\n");
   } else {
      printf("Two numbers are equal and greatest\n");
   }

   return 0;
}
