#include <stdio.h>

int main() {
    // Declaring an integer variable to represent the system status
    int systemActive = 1;  // 1 means true (active)

    // While loop to display the status message
    while (systemActive == 1) {
        printf("System check in progress...");

        // Change the value to exit the loop
        systemActive = 0;
    }

    return 0;
}
