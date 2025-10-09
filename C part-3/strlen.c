#include <stdio.h>
#include <string.h>

int main() {
    // Store the quote in a character array
    char quote[] = "The only limit to our realization of tomorrow is our doubts of today.";

    // Calculate the length of the quote using strlen()
    // Code
    char quoteLength= strlen(quote);

    // Display the quote and its length
    printf("Quote: %s\n", quote);
    printf("Quote Consists: %d characters\n", quoteLength);

    return 0;
}