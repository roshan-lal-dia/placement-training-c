#include <stdio.h>

float pi = 3.14;


int area(int diameter) {
         float radius = (float)diameter /2 ;
         float areaOfCircle = 0;
        areaOfCircle =  pi * (radius * radius);

        return areaOfCircle;
}

int main () {
    int diameter = 0;
    printf("Please enter the diameter: ");
    scanf("%d", &diameter);

    float final =  area(diameter);
    printf("Area: %.2f", final );
       return 0;
}