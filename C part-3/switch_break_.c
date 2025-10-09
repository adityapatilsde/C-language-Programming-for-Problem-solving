#include <stdio.h>

int main() {
    char category;
    int price;
     
    scanf(" %c",&category);

  
    // switch statement to determine ticket price
    switch (category) {
        case 'A':
        price = 20;
            
            printf("Ticket Price: $%d\n", price);
            break;
            
        case 'C':
        price = 10;
           
           
            printf("Ticket Price: $%d\n", price);
            break;
        
        case 'S':
        price = 15;
            
            printf("Ticket Price: $%d\n", price);
            break;
            
        default:
            printf("Invalid category\n");
    }

    return 0;
}
