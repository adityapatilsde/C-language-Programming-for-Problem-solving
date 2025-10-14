#include <stdio.h>
#include <ctype.h>
int main()
{
    char a ;
    scanf("%c/n",&a);
    int A = a;
    
    if (isalpha(a)) {
        printf("%d", A);
    } else {
        printf("Invalid input: Not a digit or letter");
    }
	return 0;
}