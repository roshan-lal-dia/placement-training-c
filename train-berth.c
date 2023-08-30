#include <stdio.h>>

int main() {
    char pos;
    int berth = 8;
    int mod = berth % 8;

    switch (mod)
    {
    case 1 :
        printf("Seat pos is: %c", pos = 'L1');
        break;
    case 2 :
        printf("Seat pos is: %c", pos = 'M1');
        break;        
    case 3 :
        printf("Seat pos is: %c", pos = 'U1');
        break;  
    case 4 :
        printf("Seat pos is: %c", pos = 'L2');
        break;          
    case 5 :
        printf("Seat pos is: %c", pos = 'M2');
        break;
    case 6 :
        printf("Seat pos is: %c", pos = 'U2');
        break;   
    case 7 :
        printf("Seat pos is: %c", pos = 'LW');
        break;       
    case 0 :
        printf("Seat pos is: %c", pos = 'UP');
        break;              
    }
    
}