#include <stdio.h>

int main() {
    int num, first, last, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    first = num / 100; //first num of three digit num
    
    //@find dynamically
    /*while (first > 100)
    {
        first /=10;
    }*/
    

    // Calculate the last digit
    last = num % 10;

    sum = first + last;

    printf("sum: %d\n", sum);

    return 0;
}
