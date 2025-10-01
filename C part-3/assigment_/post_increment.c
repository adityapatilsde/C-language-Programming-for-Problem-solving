#include <stdio.h>

int main() {
    int stock = 120;       // Initial stock in the warehouse
    int newStock = 30;     // New items received
    int damaged = 5;       // Damaged items to be removed

    stock = newStock + stock;
    printf("Stock after receiving new items: %d\n",stock);
    stock = stock - damaged;
    printf("Stock after removing damaged items: %d\n",stock);
    printf("Stock after post-increment: %d\n",stock++);
    printf("Final Recorded Stock: %d\n",stock);
    
    return 0;
}

