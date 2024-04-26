#include <stdio.h>

int main() {
    int rows, number = 1;

    // Input the number of rows for the pattern
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ",number);
            number++;
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
