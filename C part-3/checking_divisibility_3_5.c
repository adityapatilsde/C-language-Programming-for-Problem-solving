#include <stdio.h>

int main() {
    int a = 1;
    int start = 0;
    int n;
    scanf("%d",&n);
    while (a <= n) {
      if (a %3 == 0 || a %5 == 0) {
        start++;
      }
    a++;  
    }
    printf("There are %d numbers divisible by 3 or 5 up to %d.\n", start, n);

    return 0;
}