#include <stdio.h>

int main() {
    int itemPrice = 50;   
    int quantity = 10;    
    int budget = 500; 
    int totalCost;
    
    totalCost = itemPrice * quantity;
    
    
    
    
     // Your task: Use the == operator to compare if totalCost equals budget
    printf("Does the total cost match the budget? %d\n", totalCost==budget);

    return 0;
}
