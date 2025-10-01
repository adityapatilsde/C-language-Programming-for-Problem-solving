#include <stdio.h>

int main() {
    // Declare and initialize all variables
    int accountBalance = 0;             // Starting with zero balance
    int salary = 3000;                  // Monthly salary credited to the account
    int utilityBill = 1200;             // Amount to be paid for utility bills
    int cashbackReward = 100;           // Cashback reward from a transaction

    // Write Your Code 
    accountBalance += 3000;
    accountBalance -= 1200;
    accountBalance += 100;
    
    
    
    // Print the final account balance
    printf("Final Account Balance: %d\n", accountBalance); 
    return 0;
}