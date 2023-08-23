#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("sum:\n");
    
    // Continue summing until we get a single-digit result
    while (sum >= 10) {
        printf("%d\n", sum); // Print intermediate sum
        int temp = sum;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
    }

    printf("sum: %d\n", sum);

    return 0;
}
