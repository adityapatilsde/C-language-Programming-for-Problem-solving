#include <stdio.h>

int main() {
    
    char phone [] = "9876543210";
    phone [7] = '*';
    phone [8] = '*';
    phone [9] = '*';
    
    printf("Masked Phone Number: %s\n", phone);

    return 0;
}
