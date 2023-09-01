/*
    *   *
     * *
      *
     * *
    *   *
*/

#include <stdio.h>
int main () {
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <=input; j++)
        {
            
            //@less code
            if (i == j || i+j == input+1)// input + 1 for sum input = 5 . sum = sum +1= 6
            {
                printf("*");
            }else{
                printf(" ");
            }
            
            
        }printf("\n");
        
    }
    

    return 0;
}