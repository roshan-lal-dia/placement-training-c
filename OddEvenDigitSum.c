//In given num, separate odd and even  then find the difference.
#include <stdio.h>

int main () {
    int oddSum = 0, evenSum = 0, number = 0, rem = 0;

    scanf("%d", &number);

    while (number > 0)
    {
        rem = number % 10;
        number /=10;

    if (rem %2 == 0 )
    {
        evenSum += rem;
    }else{
        oddSum += rem;
    }
    }
    
    //unlearn - ternary is a operator, our fixed mind --ternary is shorthand for ifElse
    int diff = (oddSum > evenSum) ? oddSum - evenSum : evenSum - oddSum;

   // diff *= (-1); //@not working for positive it turns negative


    printf("Diff: %d", diff );

    return 0;
}