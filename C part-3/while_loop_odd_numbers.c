#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Write your code here
    scanf("%d",&n);
    
    while(n >= 1) {
      
      if (n % 2 != 0) {
        printf("%d\n", n);
      }
      n--;
    }

    return 0;
}
