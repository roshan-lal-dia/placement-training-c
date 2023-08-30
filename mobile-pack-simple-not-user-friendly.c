#include<stdio.h>
int main() 
{
    int a,days,calls,sms,data;
    scanf("%d",&a);
    if(a==199)
    {
        scanf("%d",&days);
        if(days<=28)
        {
            printf("Your plan is working and its valid remaining %d days\n",28-days);
        }
        else 
        {
            printf("Your plan is Expired\n");
        }
        scanf("%d",&calls);
        if(calls<=100)
        {
            printf("you can make the call. Remaining-%d\n",100-calls);
        }
        else 
        {
            printf("Calls Count is Expired for today\n");
        }
        scanf("%d",&sms);
        if(sms<=100)
        {
            printf("you can make this sms. Remaining-%d\n",100-sms);
        }
        else 
        {
            printf("sms count is Expired for today\n");
        }
        scanf("%d",&data);
        if(data<=1000)
        {
            printf("you can continue your browsing. remaining-%d MB\n",1000-data);
        }
        else 
        {
            printf("Data pack is expired for today\n");
        }
    }
}
