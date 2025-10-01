#include <stdio.h>

int main() {
    int baseScore = 100;  
    int bonus = 20;       
    int redeemed = 5; 
    int total;
    
    
   // write your code here
   total= bonus++ + baseScore;
   printf("Score after bonus addition: %d\n",total);
   
   total= total - --redeemed;
   printf("Score after redemption: %d\n", total);      

    // Show final values of bonus and redeemed
    printf("Final bonus value: %d\n", bonus);           
    printf("Final redeemed value: %d\n", redeemed);     

    return 0;
}