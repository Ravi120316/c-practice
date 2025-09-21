/*Revision Question
👉 Write a C program to input marks of 5 subjects.
Calculate total marks and percentage.
Print grade as per percentage:
>= 90 → Grade A
>= 75 → Grade B
>= 50 → Grade C
>= 35 → Grade D
< 35 → Fail
Also check if percentage is >= 60 and <= 100, then give message "You are eligible for scholarship"*/
#include<stdio.h>
int main () {
    float marks , total=500, total_obtained_marks  , percentage, grade ,s1,s2,s3,s4,s5 ;
    printf("enter your marks in subject 1st:\n ");
    scanf("%f",&s1);
    
    printf("enter your marks in subject 2nd:\n ");
    scanf("%f",&s2);

    printf("enter your marks in subject 3rd:\n ");
    scanf("%f",&s3);

    printf("enter your marks in subject 4th:\n ");
    scanf("%f",&s4);

    printf("enter your marks in subject 5th:\n ");
    scanf("%f",&s5);

    total_obtained_marks = s1+s2+s3+s4+s5;
    printf("total obtained marks is %f ot of %f \n",total_obtained_marks ,total);

    percentage=(total_obtained_marks/total)*100 ;

    printf("total percentage =%f \n", percentage);

    if(percentage>=90) {
        printf("Grade A\n");


    } 
    else if (percentage>=75) {
        printf("Grade B \n");


    }  else if (percentage>=50) {
        printf("Grade C\n");


    } else if (percentage>=35) {
        printf("Grade D\n");


    } else if (percentage<35) {
        printf("Fail\n");

    } 

    if(percentage>=60 && percentage<=100) {
        printf("You are eligible for scholarship");


    }  else {
        printf("You are not eligible for scholarship");

    }
    return 0 ;

}