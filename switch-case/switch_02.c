/*Question:

एक C प्रोग्राम लिखो जो electricity units के हिसाब से total bill निकाले।

Units के rate:

0 से 100 → ₹5/unit

101 से 200 → ₹7/unit

200 से ज्यादा → ₹10/unit*/
#include <stdio.h>

int main() {
    int units;
    float bill;
    
    printf("Enter total electricity units used: ");
    scanf("%d", &units);
    
    switch (units <= 100 ? 1 : (units <= 200 ? 2 : 3)) {
        case 1:
            bill = units * 5;
            break;
        case 2:
            bill = (100 * 5) + ((units - 100) * 7);
            break;
        case 3:
            bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
            break;
        default:
            bill = 0; // Not really needed but safe
    }
    
    printf("Total bill = ₹%.2f\n", bill);
    
    return 0;
}
