/*Ek customer ka electricity bill banana hai. Units ke hisaab se rate change hota hai:

Units Consumed	Rate per Unit
0 – 100	₹5
101 – 200	₹7
201 – 300	₹10
Above 300	₹15*/
#include<stdio.h>

int main() {
    int units, paid;
    float rate, bill, fine = 0, final_bill;

    // 1. Input lo
    printf("Kitni units consume ki hai?\n");
    scanf("%d", &units);

    printf("Kya aapne bill time pe bhara? (1 = haan, 0 = nahi):\n");
    scanf("%d", &paid);

    // 2. Rate set karo units ke hisaab se
    if (units <= 100)
        rate = 5;
    else if (units <= 200)
        rate = 7;
    else if (units <= 300)
        rate = 10;
    else
        rate = 15;

    // 3. Bill calculate karo
    bill = units * rate;

    // 4. Fine lagao agar late bhara (paid == 0)
    if (paid == 0) {
        fine = bill * 0.1;  // 10% fine
    }

    final_bill = bill + fine;

    // 5. Print everything
    printf("\nUnits: %d\n", units);
    printf("Rate per unit: ₹%.2f\n", rate);
    printf("Base Bill: ₹%.2f\n", bill);

    if (paid == 0)
        printf("Late Fine (10%%): ₹%.2f\n", fine);

    printf("Final Bill to be paid: ₹%.2f\n", final_bill);

    return 0;
}
