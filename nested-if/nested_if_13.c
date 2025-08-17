/*Ek company hiring kar rahi hai. Eligibility rules:

Age: 22 se 35 ke beech (inclusive)

Qualification:

Agar candidate ka qualification "developer" hai → Degree "B.Tech" ya "MCA" ho aur experience कम से कम 2 साल ka ho

Agar qualification "designer" hai → Degree "B.Des" ho aur experience कम से कम 1 साल ka ho

Bonus check:

Developer ke liye agar "C" aur "Python" skills dono hain to "High Priority Hire"

Designer ke liye agar "Photoshop" skill hai to "High Priority Hire"

Output: Candidate hired hai ya nahi, aur agar high priority hire hai to uska bhi mention karo.*/
#include <stdio.h>
#include <string.h>

int main() 
{
    int age, experience;
    char jobRole[50], degree[50], language[50];

    // Age input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Job role input
    printf("Enter your job role (developer / designer): ");
    scanf("%s", jobRole);

    // Degree input
    printf("Enter your degree qualification (B.tech / MCA / B.des): ");
    scanf("%s", degree);

    // Language input
    printf("Enter your language qualification (C / python / photoshop): ");
    scanf("%s", language);

    // Experience input
    printf("Enter your years of experience: ");
    scanf("%d", &experience);

    // Eligibility check
    if (age >= 22 && age <= 33) 
    {
        if (strcmp(jobRole, "developer") == 0) 
        {
            if (strcmp(degree, "B.tech") == 0) 
            {
                if (strcmp(language, "C") == 0 || strcmp(language, "python") == 0) 
                {
                    if (experience >= 2) 
                    {
                        printf("You are high priority hired!\n");
                    } 
                    else 
                    {
                        printf("You are hired.\n");
                    }
                } 
                else 
                {
                    printf("For B.tech developers, you must know C or Python.\n");
                }
            } 
            else if (strcmp(degree, "MCA") == 0) 
            {
                if (strcmp(language, "python") == 0) 
                {
                    printf("You are hired as MCA developer.\n");
                } 
                else 
                {
                    printf("MCA developers must know Python.\n");
                }
            } 
            else 
            {
                printf("Invalid degree for developer role.\n");
            }
        } 
        else if (strcmp(jobRole, "designer") == 0) 
        {
            if (strcmp(degree, "B.des") == 0) 
            {
                if (strcmp(language, "photoshop") == 0) 
                {
                    printf("You are hired as designer.\n");
                } 
                else 
                {
                    printf("Designer must know Photoshop.\n");
                }
            } 
            else 
            {
                printf("Invalid degree for designer role.\n");
            }
        } 
        else 
        {
            printf("Invalid job role.\n");
        }
    } 
    else 
    {
        printf("You are not eligible due to age.\n");
    }

    return 0;
}
