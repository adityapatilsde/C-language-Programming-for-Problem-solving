#include <stdio.h>

int main() {
    int baseSalary = 5000;  // Base salary in dollars
    int bonus = 2000;       // Bonus in dollars
    int taxRate = 15;       // Tax rate in percentage

    // Arithmetic expression: Calculate total salary after adding bonus and deducting tax
    int totalSalary = (baseSalary + bonus) * (100 - taxRate) / 100; 
    // (5000 + 2000) * (100 - 15) / 100 = 7000 * 85 / 100 = 5950
    
    // Relational expression: Check if the total salary is greater than 6000
    int comparisonResult = totalSalary > 6000;

    printf("Arithmetic Result: %d\n", totalSalary); 
    printf("Comparison Result: %d\n", comparisonResult);  

    return 0;
}
