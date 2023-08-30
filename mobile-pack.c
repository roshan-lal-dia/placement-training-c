#include <stdio.h>

int main () {
    int packChoice;

    printf("Enter your mobile pack:");
    printf("\n1)199 \n2)299 \n3)799");
    printf("\nSelect a pack:");
    scanf("%d", &packChoice);
    printf("%d", packChoice);

    return 0;
}