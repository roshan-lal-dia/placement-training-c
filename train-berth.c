#include <stdio.h>>

int main() {
    char pos;
    int berth = 8;
    int mod = berth % 8;

    switch (mod)
    {
    case 1 :
        printf("Seat pos is: %c", pos = 'lower1');
        break;
    case 2 :
        printf("Seat pos is: %c", pos = 'lower2');
        break;        
    case 3 :
        printf("Seat pos is: %c", pos = 'lower3');
        break;  
    case 4 :
        printf("Seat pos is: %c", pos = 'lower1');
        break;          
    case 5 :
        printf("Seat pos is: %c", pos = 'lower1');
        break;
    case 6 :
        printf("Seat pos is: %c", pos = 'lower1');
        break;   
    case 7 :
        printf("Seat pos is: %c", pos = 'lower1');
        break;       
    case 0 :
        printf("Seat pos is: %c", pos = 'lower1');
        break;              
    }
    
}