/*Ek company customer ke mobile plan select karne ke liye eligibility check kar rahi hai.

Rules:

Age: Customer ki age 18 se 65 ke beech honi chahiye.

Plan Type: prepaid ya postpaid ho sakta hai.

Prepaid Plan ke liye:

Network: sirf "Airtel" ya "Jio" allow hai.

Balance kam se kam ₹100 hona chahiye.

Postpaid Plan ke liye:

Network: sirf "Vodafone" ya "BSNL" allow hai.

Monthly Bill limit ₹500 se zyada nahi hona chahiye.*/
#include <stdio.h>
#include <string.h>

int main() {
    int age, bill;
    char plan[50], network[50];

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Enter your plan type (prepaid/postpaid):\n");
    scanf("%s", plan);

    printf("Enter the network you use (jio/airtel/vodafone/bsnl):\n");
    scanf("%s", network);

    printf("Enter your balance (if prepaid) or monthly bill (if postpaid):\n");
    scanf("%d", &bill);

    if (age >= 18 && age <= 65) {
        
        if (strcmp(plan, "prepaid") == 0) {
            if (strcmp(network, "jio") == 0 || strcmp(network, "airtel") == 0) {
                if (bill >= 100) {
                    printf("You are eligible for this plan\n");
                } else {
                    printf("Your balance must be above ₹100\n");
                }
            } else {
                printf("Your network must be Jio or Airtel\n");
            }
        }

        else if (strcmp(plan, "postpaid") == 0) {
            if (strcmp(network, "vodafone") == 0 || strcmp(network, "bsnl") == 0) {
                if (bill <= 500) {
                    printf("You are eligible for this plan\n");
                } else {
                    printf("Your monthly bill must not be above ₹500\n");
                }
            } else {
                printf("Your network must be Vodafone or BSNL\n");
            }
        }

        else {
            printf("Invalid plan! Select only prepaid or postpaid\n");
        }

    } else {
        printf("Invalid age! Age must be between 18 and 65\n");
    }

    return 0;
}
