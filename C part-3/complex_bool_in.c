#include <stdio.h>

int main() {
  int experience , age , isDisqualified_from_user ;
  scanf("%d\n",&experience);
  scanf("%d\n",&age);
  scanf("%d\n",&isDisqualified_from_user);
  
  if (((experience >= 3) || (experience==2 && age>30 )) && (age>=25 && age<=40) && !isDisqualified_from_user) {
    printf("You are eligible to prepare a meal!\n");
  } else {
    printf("You are not eligible to prepare a meal\n");
  }
   return 0;
}