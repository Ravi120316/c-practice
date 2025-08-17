/*Ek program banao jo check kare ki koi student scholarship ke liye eligible hai ya nahi. Conditions:

Age 18 ya usse zyada honi chahiye.

12th class ke marks 60% ya usse zyada hone chahiye.

Attendance 75% ya usse zyada honi chahiye.

Agar teeno condition pass ho jaati hain to "Eligible for Scholarship" print ho.
Agar koi ek condition fail ho to reason bhi print ho.*/
#include <stdio.h>
int main() {
    int age;
    float marks, attendance;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter 12th class marks (in percentage): ");
    scanf("%f", &marks);

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    if (age >= 18) {
        if (marks >= 60) {
            if (attendance >= 75) {
                printf("✅ Eligible for Scholarship\n");
            } else {
                printf("❌ Not eligible: Attendance less than 75%%\n");
            }
        } else {
            printf("❌ Not eligible: Marks less than 60%%\n");
        }
    } else {
        printf("❌ Not eligible: Age less than 18\n");
    }

    return 0;
}
