#include <stdio.h>  

int main() {
    // Declare and initialize the variable 
    int ticketPrice = 120;     // Cost of one movie ticket in ?
    int ticketsSold = 50;      // Total tickets sold
    int expenses = 300;        // Fixed expenses for the day
    int snackEarnings = 500;   // Extra income from snacks
    
    printf("Gross Revenue from Tickets: %d\n",ticketPrice*ticketsSold);
    printf("After Expenses: %d\n",ticketPrice*ticketsSold-expenses);
    printf("Final Total with Snacks: %d",ticketsSold*ticketPrice-expenses+snackEarnings);
    
    return 0;  
}