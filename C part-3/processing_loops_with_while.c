#include <stdio.h>

int main() {
    char text[] = "Hello World";  
    int i = 0;  
    while (text[i] != '\0') {  
        if (text[i] != ' ') {  
            printf("%c\n", text[i]);  
        }
        i++;  
    }

    return 0;
}