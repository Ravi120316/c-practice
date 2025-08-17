//User se number n lo aur 1 se n tak ke numbers ka reverse order me print karo.//
#include<stdio.h>
int main() {
    int i = 1, n, square;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (i <= n) {
        square = i * i;          // current number ka square
        printf("%d^2 = %d\n", i, square); // print har step me
        i++;                     // next number
    }

    return 0;
}
