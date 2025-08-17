/*User एक single-digit number (0–9) डाले,
Program उस number का word format print करे।*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (0-9): ");
    scanf("%d", &num);

    switch (num) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid number! Please enter 0-9.\n");
    }

    return 0;
}
