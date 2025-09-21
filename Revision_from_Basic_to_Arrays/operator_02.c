/*Q4 — Simple Interest

👉 Topic: Operators & Expressions

Problem:
Tumhe Principal (P), Rate of Interest (R), aur Time (T) input dena hai.
Formula use karke Simple Interest (SI) nikalna hai:*/  
#include <stdio.h>
int main() {
    float p, r, t, si = 0;

    printf("Enter the principal amount:\n");
    scanf("%f", &p);

    printf("Enter the time (in years):\n");
    scanf("%f", &t);

    printf("Enter the rate of interest:\n");
    scanf("%f", &r);

    si = (p * r * t) / 100;   // correct formula
    printf("The simple interest on the amount is %.2f\n", si);

    return 0;
}
