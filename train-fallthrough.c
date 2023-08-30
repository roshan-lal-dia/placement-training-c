#include<stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=72)
    {
        int b=a%8;
        switch(b)
        {
            case 1:
            case 4:
            printf("lower");
            break;
            
            case 2:
            case 5:
            printf("Middle");
            break; 
            
            case 3:
            case 6:
            printf("upper");
            break;
            
            case 7:
            printf("side Lower");
            break;
            
            default:
            printf("Side Upper");
        }
    }
}
