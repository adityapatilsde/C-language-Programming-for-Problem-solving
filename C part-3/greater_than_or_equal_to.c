#include <stdio.h>

int main() {
    int speed = 60;          
    int time = 2;           
    int minDistance = 100;  
    int total = speed * time;
  
    printf("Is the total distance sufficient? %d\n", total>=minDistance);

    return 0;
}
