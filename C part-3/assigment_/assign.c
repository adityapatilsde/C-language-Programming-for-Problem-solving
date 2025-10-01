#include <stdio.h>

int main() {
    // Declare and initialize weight and height
   float weight = 72.0;   // in kilograms
    float height = 1.75;   // in meters

   // Write Your Code
   height *= height;
   weight /= height;
   
   
   
   
   
   // Print the final BMI (rounded to 2 decimal places)
    printf("Calculated BMI: %.2f\n", weight);  

    return 0;
}