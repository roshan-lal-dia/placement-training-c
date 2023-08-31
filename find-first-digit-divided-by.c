// to find the value that is used to get the value divided by
//to get the first number
//fuucked up

#include <stdio.h>

int main() {
    int num = 0;inp = 0, modValue = 1, count = 1;

    //@get input values
    scanf("%d", &inp);

    // Calculate the count of digits
    while (num > 0) {
        num /= 10;
        count ++;
        modValue *= 10;
    }
    printf("%d", modValue);
    return 0;
}