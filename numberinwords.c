#include <stdio.h>

// Function to print each digit of a number in words
void printDigitsInWords(int num) {
    // Arrays to store words for digits
    char *digits[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    // Check for invalid input
    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return;
    }

    // Print each digit in words
    printf("In words: ");
    int divisor = 1000; // Adjust this divisor based on the maximum input size you want to handle

    while (divisor > 0) {
        int digit = (num / divisor) % 10;
        printf("%s ", digits[digit]);
        divisor /= 10;
    }

    printf("\n");
}

// Main function
int main() {
    int num;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Call the function to print each digit in words
    printDigitsInWords(num);

    return 0;
}
