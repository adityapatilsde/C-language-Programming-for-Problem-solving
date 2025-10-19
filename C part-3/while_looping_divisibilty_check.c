#include <stdio.h>

int main() {
    int n, num;
    scanf("%d", &n);
    num = n + 1;
    while(1) {
      if (num %3 == 0) {
        printf("The first number greater than %d divisible by 3 is: %d\n",n,num);
        break;
      }
      num++;
      
    }
  
    return 0;
}
