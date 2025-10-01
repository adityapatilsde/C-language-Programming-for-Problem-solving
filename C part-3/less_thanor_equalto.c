#include <stdio.h>

int main() {
    int totalDistance = 150; 
    int timeTaken = 3;        
    int speedLimit = 60;
    int averagespeed = totalDistance/timeTaken;
    
    
    printf("Is the vehicle within the speed limit? %d\n",averagespeed<=speedLimit);

    return 0;
}
