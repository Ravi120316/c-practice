/*Ek C program banao jo student ka result nikalta hai:

User se marks of 3 subjects input lo.

Total aur percentage nikaalo.

Condition:

Agar kisi bhi subject me marks 33 se kam hai → "Fail"

Agar percentage >= 80 → "Grade A+"

Agar percentage >= 60 → "Grade A"

Agar percentage >= 50 → "Grade B"

Agar percentage >= 40 → "Grade C"

Agar percentage >= 33 → "Grade D"

Agar pass hua aur saare subject ke marks >= 90 → "Excellent in all subjects"*/
#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, total, percentage;

    printf("Enter marks of sub1 : ");
    scanf("%f", &sub1);

    printf("Enter marks of sub2 : ");
    scanf("%f", &sub2);

    printf("Enter marks of sub3 : ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    printf("Total marks = %.2f\n", total);

    percentage = (total / 300) * 100;
    printf("Percentage = %.2f\n", percentage);

    // Pass condition
    if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        // Excellent check
        if (sub1 >= 90 && sub2 >= 90 && sub3 >= 90)
        {
            printf("Excellent in all subjects\n");
        }

        // Grade check
        if (percentage >= 90)
            printf("Grade A+\n");
        else if (percentage >= 80)
            printf("Grade A\n");
        else if (percentage >= 60)
            printf("Grade B\n");
        else if (percentage >= 50)
            printf("Grade C\n");
        else if (percentage >= 40)
            printf("Grade D\n");
        else
            printf("Grade E\n");
    }
    else
    {
        printf("Fail in the exam\n");
    }

    return 0;
}
