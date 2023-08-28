#include <stdio.h>

float pi = 3.14;


int area(int diameter) {
         float radius = diameter /2.0 ;
         float areaOfCircle = 0;
        areaOfCircle =  pi * (radius * radius);

        return areaOfCircle;
}

int main () {
    float diameter = 0;
    printf("Please enter the diameter: ");
    scanf("%f", &diameter);

    float final =  area(diameter);
    printf("Area: %.2f", final );
       return 0;
}