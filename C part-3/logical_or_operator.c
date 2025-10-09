#include <stdio.h>

int main() {
 
    int isStudent = 0; 

    int isSeniorCitizen = 1; 

    
    int qualifiesForMembership = (isStudent)||(isSeniorCitizen); // Use logical OR operator

   
    printf("Qualifies for library membership: %d\n", qualifiesForMembership);

    return 0;
}
