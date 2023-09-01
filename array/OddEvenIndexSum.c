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

    //without using conditional statements
    //non optimal
    //optimal is to reduce loops
    for (int i = 0; i < ArraySize; i++)
    {
        for (int j = i; j %2 ==0 ; j++)
        {
            EvenSum += i;
            //i--;
        }
        for (int k = i;k %2 !=0 ; k++)//aslo can change to k+2
        //loops can be deducted using
        //arithmetic logic like starteing i = 0;
        //nested loop itself is not needed
        //without changing the condition, just change the initialization
        {
            OddSum += i;
           // i--;
        }

    }

    printf("Difference: %d", abs(EvenSum - OddSum));

    return 0;
}