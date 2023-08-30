#include <stdio.h>

int main () {
    int packChoice, day, calls, sms, data;

    printf("Enter your mobile pack:");
    printf("\n1)199 \n2)299 \n3)799");
    printf("\nSelect a pack:");
    scanf("%d", &packChoice);
    //printf("%d", packChoice);

    printf("You have selcted the pack: %d \nPlease enter further details:", packChoice,);

   printf("What is the day:");
   scanf("%d", &day);
   printf("No. of calls used:");
   scanf("%d", &calls);
   printf("No. of SMS used:");
   scanf("%d", &sms);
   printf("No. of data used:");
   scanf("%d", &data);

    switch (packChoice)
    {
    case 1:
        
        break;
    
    default:
        printf("Your selected pack is invalid");
        break;
    }

    return 0;
}