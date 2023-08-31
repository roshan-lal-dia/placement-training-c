#include <stdio.h>

int main() {
    int num, first = num, last,sum = 0; //first = num, for dynamic inding

    printf("Enter an integer: ");
    scanf("%d", &num);

   // first = num / 100; //first num of three digit num
    
    //@find dynamically
    while (first > 10)
    {
        first /=10;

    }
    

    // Calculate the last digit
    last = num % 10;

    sum = first + last;

    printf("sum: %d\n", sum);

    return 0;
}
