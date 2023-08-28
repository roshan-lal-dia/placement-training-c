#include <stdio.h>

#define pi = 3.14;
int diameter = 0;

int area() {
         int radius = diameter /2 ;
         int areaOfCircle = 0;
        areaOfCircle =  pi * (radius * radius);
}

int main () {
    printf("Please enter the diameter: ");
    scanf("%d", &diameter);
}