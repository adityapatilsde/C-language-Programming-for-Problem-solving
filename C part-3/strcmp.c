#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize three city names
    char city1[] = "Delhi";   // First city
    char city2[] = "Dubai";   // Second city
    char city3[] = "Doha";    // Third city

    // Compares "Delhi" with "Dubai"
    // 'e' (101) in "Delhi" comes before 'u' (117) in "Dubai", so result is negative
    int res1 = strcmp(city1, city2);

    // Compares "Dubai" with "Doha"
    // They differ at the second character: 'u' (117) > 'o' (111), so result is positive
    int res2 = strcmp(city2, city3);

    // Compares "Delhi" with "Doha"
    // They differ at the second character: 'e' (101) < 'o' (111), so result is negative
    int res3 = strcmp(city1, city3);

    // Display the comparison results
    printf("Comparison between '%s' and '%s': %d\n", city1, city2, res1);
    printf("Comparison between '%s' and '%s': %d\n", city2, city3, res2);
    printf("Comparison between '%s' and '%s': %d\n", city1, city3, res3);

    return 0;  
}
