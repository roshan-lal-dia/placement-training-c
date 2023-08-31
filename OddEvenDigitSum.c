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
    
    int diff = oddSum - evenSum;

    //diff *= (-1); @not working

    printf("Diff: %d", diff );

    return 0;
}