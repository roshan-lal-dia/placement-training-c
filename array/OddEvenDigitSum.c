#include <stdio.h>

int main () {

    int ArraySize = 0;
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
            printf("\n%d --Even", Number[i]);
        }else{
            printf("\n%d --Odd", Number[i]);
        }     
    }

    return 0;
}