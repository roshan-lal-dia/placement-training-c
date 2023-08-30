#include <stdio.h>

int main (){
    int InitDays, InitSMS, InitData;
    int packChoice, day, calls, sms, data;
    int RemDays, RemSMS, RemData;

    printf("Enter your mobile pack:");
    printf("\n1)199 \n2)299 \n3)799");
    printf("\nSelect a pack:");
    scanf("%d", &packChoice);
    printf("%d", packChoice);

    printf("You have selcted the pack: %d \nPlease enter further details:\n", packChoice);

   printf("What is the day:");
   scanf("%d", &day);
   printf("No. of calls used:");
   scanf("%d", &calls);
   printf("No. of SMS used:");
   scanf("%d", &sms);
   printf("Size. of data used:");
   scanf("%d", &data);

    switch (packChoice)
    {
    case 1:
        printf("You have selected: %d", packChoice);
        if(InitDays > 28){
            printf("Your pack has expired");
        }else {
            RemDays = InitDays - day;
            printf("Remaining days is: %d", RemDays);
        }
        if(InitSMS > 100){
            printf("No more available SMS");
        }else {
            RemSMS = InitSMS - sms;
            printf("Remaining days is: %d", RemSMS);
        } 
        if(InitData > 1000){
            printf("No more available data");
        }else {
            RemData = InitData - data;
            printf("Remaining days is: %d", RemData);
        } 
        break;
    case 2:
        printf("You have selected: %d", packChoice);
        break;
    case 3:
        printf("You have selected: %d", packChoice);
        break;
    
    default:
        printf("Your selected pack is invalid");
        break;
    }

    return 0;
}