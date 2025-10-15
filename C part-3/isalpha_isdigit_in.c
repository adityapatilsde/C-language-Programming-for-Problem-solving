#include <stdio.h>
#include <ctype.h>
int main()
{ char a ;
  scanf("%c", &a);

  if (isdigit(a) || isalpha(a)) {
       printf("%d",a);
  } else {
      printf("Invalid input: Not a digit or letter");
  }

	return 0;
}