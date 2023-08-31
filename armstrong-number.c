#include <stdio.h>

int main() {
    int num, spliNum = 0, digit, pow = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the count of digits
    while (num > 0) {
        digit = num % 10;
        num /= 10;
        count ++;
    }

    printf("pow num: %d", num);
    int armstrong = num;

   // if(armstrong == )
    printf("sum: %d\n", count);

    return 0;
}
