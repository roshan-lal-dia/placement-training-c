 //facotors for 10 = 1, 2, 5, 10

 #include <stdio.h>

 int main () {

    int number = 0;
    scanf("%d", &number);

    //find factors
    for (int i = 1; i <= number; i++)
    {
        if(number %i==0)
        {
            printf("Factors : %d\n", i);
        }
        
    }
    

    return 0; 
 }