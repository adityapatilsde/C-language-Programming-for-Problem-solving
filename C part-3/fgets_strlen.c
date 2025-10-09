#include <stdio.h>    // Include standard input/output library
#include <string.h>  // Needed for strlen

int main() {
    char input[100];  
    
    // Prompt the user to enter a sentence(use fgets())
    fgets(input,sizeof(input),stdin);

    printf("You entered: %s\n", input);  
    // Print the string entered by the user

    int length = strlen(input);
    // Assign the length of the string to the integer variable (casting size_t to int)

    printf("Length of the string is: %d\n", length);  
    // Print the length using %d format specifier
    
    return 0;  // End of program
}
