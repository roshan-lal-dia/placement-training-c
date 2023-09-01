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
        printf("%d", Number[i]);
    }

    return 0;
}