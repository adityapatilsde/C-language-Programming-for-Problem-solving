#include <stdio.h> 
int main () {
  int a , b ;
  scanf("%d",&a);
  scanf("%d",&b);
  while (a <= 10 && b <= 10) {
    if ((a+b) %2 == 0) {
      printf("Even\n");
    } else {
      printf("Odd\n");
    }
    a += 1;
    b += 2;
  }
  return 0;
}
