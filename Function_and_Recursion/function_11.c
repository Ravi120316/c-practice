//user se number input lo aur check karo ki vo strong number hai ya nhi ..
#include<stdio.h>

int check_strong_number (int n) {
    int sum = 0, digit, fact, i;

    while (n > 0) {
        digit = n % 10;  
        fact = 1;
        i = 1;
        while (i <= digit) {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;   
        n = n / 10;
    }
    return sum;
} 

int main () {
    int num , result , original ;
    printf("enter the number :\n ");
    scanf("%d",&num);

    original = num;

    result = check_strong_number(num);

    if(original == result) {
        printf("this is a strong number :\n");
    } else {
        printf("this is not a strong number :\n");
    }

    return 0;
}
