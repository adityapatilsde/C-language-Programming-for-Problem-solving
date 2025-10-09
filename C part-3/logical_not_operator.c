#include <stdio.h>

int main() {
    int num = 420;  // Check for 420

    // Check: NOT even OR positive
    int result = ((!num%2==0)||(num>0));

    // Print result of the logical expression
    printf("Did the number NOT pass the even check or is positive? %d\n", result);

    return 0;
}
