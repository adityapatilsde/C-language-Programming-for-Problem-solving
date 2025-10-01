#include <stdio.h>

int main() {
    int itemPrice = 15;     
    int itemQuantity = 4;    
    int extraCharges = 10;   
    int budget = 80; 
    
    
    int total = itemPrice * itemQuantity;
    int additional = total + extraCharges;
 
 
 
    
    printf("Is the total cost within the budget? %d\n", additional<budget);
    
    return 0;
}
