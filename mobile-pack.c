#include <stdio.h>

int main (){
    int InitDays=28, InitCalls = 100, InitSMS=100, InitData=1000;
    int packChoice, day, calls, sms, data;
    int RemDays, RemCalls, RemSMS, RemData;

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
        if(day <= 28){
            RemDays = InitDays - day;
            printf("\nRemaining days is: %d", RemDays);
            if(calls > 100){
            printf("\nNo more available SMS");
        }else {
            RemSMS = InitSMS - sms;
            printf("\nRemaining calls is: %d", RemSMS);
        }         
        if(sms > 100){
            printf("\nNo more available SMS");
        }else {
            RemSMS = InitSMS - sms;
            printf("\nRemaining sms is: %d", RemSMS);
        } 
        if(data > 1000){
            printf("\nNo more available data");
        }else {
            RemData = InitData - data;
            printf("\nRemaining data is: %d", RemData);
        } 
        } else {
            printf("\nYour pack has expired");
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