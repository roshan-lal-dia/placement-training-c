#include <stdio.h>

int main() {
    int berth = 57;
    int mod = berth % 8;
   // printf("mod is: %d", mod);

    switch (mod)
    {
    case 1 :
        printf("Seat pos is: L1");
        break;
    case 2 :
        printf("Seat pos is: M1");
        break;        
    case 3 :
        printf("Seat pos is: U1");
        break;  
    case 4 :
        printf("Seat pos is: L2");
        break;          
    case 5 :
        printf("Seat pos is: M2");
        break;
    case 6 :
        printf("Seat pos is: U2");
        break;   
    case 7 :
        printf("Seat pos is: LW");
        break;       
    case 0 :
        printf("Seat pos is: UW");
        break;              
    }
    
}