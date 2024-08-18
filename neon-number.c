#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, squared_value, count = 0;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    squared_value = number * number;
    
    char squared_str[20];
    sprintf(squared_str, "%d", squared_value);
    
    for (int i = 0; squared_str[i] != '\0'; i++) {
        count += squared_str[i] - '0';  
    }
    
    if (count == number) {
        printf("%d is a Neon number\n", number);
    } else {
        printf("%d is not a Neon number\n", number);
    }

    return main();
}
