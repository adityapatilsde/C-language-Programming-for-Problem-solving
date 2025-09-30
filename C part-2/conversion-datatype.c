#include <stdio.h>
int main () {
  int id = 49;
  int section = 100;
  char converted = id;
  char sconverted = section;
  float tprice = 25.75f;
  printf("Zoo ID (converted to char): %c\n",converted);
  printf("Zoo Section (converted to char): %c\n",sconverted);
  printf("Ticket Price: %f",tprice);
  return 0;
}