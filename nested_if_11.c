/*Ek bank loan approve tab karega jab:

Applicant ki age 21 ya usse zyada ho.

Applicant ka monthly income ₹25,000 ya usse zyada ho.

Applicant ka CIBIL score 750 ya usse zyada ho.

Task:
Nested if ka use karke check karo ki user loan ke liye eligible hai ya nahi,
aur har fail case ka alag message do.*/
#include<stdio.h>

int main () 
{
    int age , monthly_income , CIBIL_score ;
    
    printf("Enter your age :\n");
    scanf("%d", &age);

    printf("Enter your monthly salary :\n");
    scanf("%d", &monthly_income);

    printf("Enter your CIBIL score :\n");
    scanf("%d", &CIBIL_score);

    if (age >= 21)  
    {
        if (monthly_income >= 25000)   
        {
            if (CIBIL_score >= 750)  
            {
                printf("✅ Loan Approved! You meet all the criteria.\n");
            }  
            else 
            {
                printf("❌ Not eligible: CIBIL score must be at least 750.\n");
            }
        }   
        else   
        {
            printf("❌ Not eligible: Monthly salary must be at least ₹25,000.\n"); 
        }
    }   
    else 
    {
        printf("❌ Not eligible: Age must be at least 21.\n");
    }

    return 0;
}
