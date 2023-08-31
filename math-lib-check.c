#include <stdio.h>
#include <math.h>

// when using variables use gcc math-lib-check.c -lm -o math-lib-check

int main () {
    int a= 3, b = 3;
    int power = pow(a, b);
    printf("power: %d", power);
    return 0;
}