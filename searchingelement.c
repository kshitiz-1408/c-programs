#include <stdio.h>

int main() {
    int arr[3][3];
    int rows = 3, cols = 3;
    int element;
    int found = 0; // Flag to indicate whether the element is found or not
    int row, col;
    printf("enter the elements of matrix=\n");
    for(row=0;row<rows;row++)
    {
        for(col=0;col<cols;col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }
    printf("Enter the element to search: ");
    scanf("%d", &element);

    // Iterate through the 2D array to search for the element
    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            if (arr[row][col] == element) {
                found = 1;
                printf("Element %d found at position (%d, %d)\n", element, row, col);
                break; // Break out of the inner loop once the element is found
            }
        }
        if (found) // If element is found, break out of the outer loop
            break;
    }

    // If element is not found, display a message
    if (!found) {
        printf("Element %d not found in the array\n", element);
    }

    return 0;
}
