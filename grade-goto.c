#include<stdio.h>
int main() 
{
    int a;
    label:
    scanf("%d",&a);
    if(a<=100)
    {
    if(a<=100 && a>=90)
    {
        printf("S-grade");
    }
    else if(a<90 && a>=80)
    {
        printf("A-Grade");
    }
    else if(a<80 && a>=70)
    {
        printf("B-Grade");
    }
    else if(a<70 && a>=60)
    {
        printf("C-Grade");
    }
    else if(a>60 && a<=50)
    {
        printf("D-Gade");
    }
    else 
    {
        printf("E-Grade");
    }
    }
    else 
    {
        printf("Invalid");
        goto label;
    }
}
