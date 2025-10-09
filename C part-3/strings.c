#include <stdio.h>

int main() {
    // Declare a character array to store the city name
    char city[10];  // Can hold up to 9 characters + null terminator

    // Write Your Code
    city[0]='P';
    city[1]='a';
    city[2]='r';
    city[3]='i';
    city[4]='s';
    city[5]='\0';
    
    char country[]="France";
    printf("City: %s\n",city);
    printf("Country: %s\n",country);

    return 0; 
}