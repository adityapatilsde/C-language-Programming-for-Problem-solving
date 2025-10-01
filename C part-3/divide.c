#include <stdio.h>

int main() {
    // Declare the base bill amount and tip amount
    double billAmount = 1000.0;  // in INR
    double tip = 100.0;

    int friends = 5; // Number of friends sharing the bill
    double sum = billAmount+tip;

    // Write Your Code

    // Print the amount
    printf("Total Bill: INR %.2f\n",sum);
    printf("Each Person Pays: INR %.2f\n",sum/5);
    
    return 0;
}