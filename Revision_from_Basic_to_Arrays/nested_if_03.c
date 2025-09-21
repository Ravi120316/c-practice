//Write a C program to find whether a given character is a vowel or consonant.
#include<stdio.h>
int main () {
    char letter  ;
    printf("enter the letter :\n");
    scanf("%c",&letter);

    if(letter=='a' || letter=='e' || letter=='i'|| letter=='o'|| letter=='u' || letter=='A' ||letter=='E' ||letter=='I' ||letter=='O' || letter=='U') {
        printf("this is a vowel letter ");
    }  else if (letter>='a' && letter<='z' &&letter>='A' && letter<='Z')  {
        printf("this a consonant letter ");

    }  else {
        printf("thia a invalid operation");
    }
    return 0 ;
}