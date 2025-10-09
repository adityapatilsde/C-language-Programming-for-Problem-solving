
include <stdio.h>

int main() {
    char word[] = "Technology";

    // Access the first character
    char firstChar = word[0];       // 'T'
    printf("First character: %c\n", firstChar);

    // Access the fourth character
    char fourthChar = word[3];      // 'h'
    printf("Fourth character: %c\n", fourthChar);

    // Modifying the last character (originally 'y' at index 9)
    word[9] = '!';

    
    printf("Modified last character: %c\n", word[9]);

    
    printf("Modified word: %s\n", word);

    return 0;
}