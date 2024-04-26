#include <stdio.h>
#include<conio.h>

int main() {
    int rows;

    // Taking input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int number = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number = (number % 9) + 1;  // Reset to 1 after reaching 9
        }
        printf("\n");
    }

    return 0;
}
