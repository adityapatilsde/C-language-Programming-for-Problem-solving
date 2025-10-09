#include <stdio.h>

int main() {
    int age = 20;              
    int minAge = 18;           
    int examScore = 50;        
    int passingScore = 40;     

    
   int isEligible = (age >= minAge) && (examScore >= passingScore);

    // Print the result: 1 for eligible, 0 for not eligible
    printf("Is the student eligible to vote? %d\n", isEligible);

    return 0;
}