#include <stdio.h>  

int main() {
    // Declare and assign calories for three meals
    int breakfast = 350;  // Calories from breakfast
    int lunch = 600;      // Calories from lunch
    int dinner = 500;     // Calories from dinner

    // Declare and assign calories burned during exercise
    int burned = 400;     // Calories burned through physical activity

    // Calculate the total calories consumed
    printf("Total calories consumed: %d\n",breakfast+lunch+dinner);
    printf("calories burned: %d\n",burned);
    printf("Net calorie intake: %d",breakfast+lunch+dinner-burned);
    

    // Calculated the net calorie intake after exercise
    

    // Printed the total, burned, and net calorie values

    return 0;  
}