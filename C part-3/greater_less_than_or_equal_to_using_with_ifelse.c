#include <stdio.h>
int main () {
  int grade ;
  int passing ;
  scanf("%d",&grade);
  scanf("%d",&passing);
  
  if (grade >= passing) {
    printf("You have passed!");
  }else {
    printf("You have failed. .");
  }
  return 0;
}