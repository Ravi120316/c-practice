/*Q6: Write a program to calculate student grade based on marks.
📌 Marks Range & Grade:
Marks (%)	Grade
90–100	A+
80–89	A
70–79	B
60–69	C
50–59	D
Below 50	Fail*/
#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade: A+\n");
    } else if (marks >= 80) {
        printf("Grade: A\n");
    } else if (marks >= 70) {
        printf("Grade: B\n");
    } else if (marks >= 60) {
        printf("Grade: C\n");
    } else if (marks >= 50) {
        printf("Grade: D\n");
    } else if (marks >= 0 && marks < 50) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid marks! Marks should be between 0 and 100.\n");
    }

    return 0;
}
