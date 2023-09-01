#include <stdio.h>
#include <stdlib.h>

int main () {

    int ArraySize = 0, EvenSum = 0, OddSum =0;
    scanf("%d", &ArraySize);
    int Number[ArraySize];

    for (int i = 0; i < ArraySize; i++)
    {
        scanf("%d", &Number[i]);   
    }
    
    for (int i = 0; i < ArraySize; i++)
    {
        if(Number[i] % 2 ==0 )
        {
            //printf("\n%d --Even", Number[i]);
            EvenSum += Number[i];
        }else{
            //printf("\n%d --Odd", Number[i]);
            OddSum += Number[i];
        }     
    }

    printf("Difference: %d", abs(EvenSum - OddSum));

    return 0;
}