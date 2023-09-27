#include <stdio.h>
#include <stdlib.h>

int main () {

    int ArraySize = 0,Sum=0;
    scanf("%d", &ArraySize);
    int Number[ArraySize];


    for (int i = 0; i < ArraySize; i++)
    {
        scanf("%d", &Number[i]);   
        Sum += Number[i];
    }



    printf("Sum: %d", Sum);

    return 0;
}