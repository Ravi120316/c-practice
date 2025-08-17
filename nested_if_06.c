//Q. Check whether a character is an alphabet. If yes, check whether it is a vowel or consonant.//
#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Character is an alphabet
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("It is a vowel\n");
        } else {
            printf("It is a consonant\n");
        }
    } else {
        printf("It is not an alphabet\n");
    }

    return 0;
}
