#include <stdio.h>

int main() {
    int row = 4;

    while (row >= 1) {
        int col = 1;
        while (col <= row) {
            printf("%d", row);
            col++;
        }
        printf("\n");
        row--;
    }

    return 0;
}