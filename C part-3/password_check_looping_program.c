#include <stdio.h>
#include <stdbool.h>

int main() {
    int enteredPIN;       // Variable to store user-entered PIN
    bool accessGranted = false;   // Flag to control loop execution

    // Flag-controlled loop: continues until correct PIN is entered
    while (!accessGranted) {
        scanf("%d", &enteredPIN);  // Prompt the user to enter PIN

        // Check if the entered PIN is correct
        if (enteredPIN == 1234) {
            accessGranted = true;  // Set accessGranted flag to true when correct PIN is entered
        } else {
            printf("Incorrect PIN. Please try again.\n");  // Inform the user of incorrect PIN
        }
    }

    // This message is displayed once the correct PIN is entered
    printf("Access granted! You are now logged in.\n");

    return 0;
}