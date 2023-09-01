#include<stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int ar[a];
    int Large = 0;
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<a;i++)
    {
      if (Large < ar[i])
      {
         Large = ar[i];
      }
      
    }

      printf("%d ",Large);
}