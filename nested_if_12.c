/*Ek company internship dene ke liye applicants ka selection kar rahi hai.
Eligibility rules:

Age: 18 se 30 ke beech (inclusive)

Qualification:

Agar candidate ka qualification B.Tech hai → CGPA at least 7.0 hona chahiye.

Agar candidate ka qualification MCA hai → CGPA at least 6.5 hona chahiye.

Agar upar dono conditions pass ho jaati hain → "Selected for internship" print karo.

Agar koi condition fail hoti hai → reason print karo.*/
#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char qualification[10];
    float cgpa;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your qualification (BTECH/MCA): ");
    scanf("%s", qualification);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    if (age >= 18 && age <= 30) {
        if (strcmp(qualification, "BTECH") == 0) {
            if (cgpa >= 7.0) {
                printf("Selected for internship\n");
            } else {
                printf("CGPA must be at least 7.0 for BTECH students\n");
            }
        }
        else if (strcmp(qualification, "MCA") == 0) {
            if (cgpa >= 6.5) {
                printf("Selected for internship\n");
            } else {
                printf("CGPA must be at least 6.5 for MCA students\n");
            }
        }
        else {
            printf("Invalid qualification. Only BTECH or MCA allowed.\n");
        }
    } 
    else {
        printf("Age must be between 18 and 30.\n");
    }

    return 0;
}
