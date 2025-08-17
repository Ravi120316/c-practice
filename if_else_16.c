/*Question 10:

Ek character input lo. Check karo:

Agar capital letter hai (A-Z) → print "It is an uppercase letter."

Agar small letter hai (a-z) → print "It is a lowercase letter."

Agar digit hai (0-9) → print "It is a digit."

Warna print "It is a special character."*/
#include<stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c is important

    if (ch >= 'a' && ch <= 'z') {
        printf("It is a lowercase letter.\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("It is an uppercase letter.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("It is a digit.\n");
    } else {
        printf("It is a special character.\n");
    }

    return 0;
}
