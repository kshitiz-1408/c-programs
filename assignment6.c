#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;
    int **a, **b, **result;

    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrices cannot be multiplied!");
        return 1;
    }

    // Allocate memory for the matrices
    a = (int **)malloc(r1 * sizeof(int *));
    b = (int **)malloc(r2 * sizeof(int *));
    result = (int **)malloc(r1 * sizeof(int *));
    if (a == NULL || b == NULL || result == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    for (int i = 0; i < r1; i++) {
        a[i] = (int *)malloc(c1 * sizeof(int));
        result[i] = (int *)malloc(c2 * sizeof(int));
        if (a[i] == NULL || result[i] == NULL) {
            printf("Memory allocation failed!");
            return 1;
        }
    }
    for (int i = 0; i < r2; i++) {
        b[i] = (int *)malloc(c2 * sizeof(int));
        if (b[i] == NULL) {
            printf("Memory allocation failed!");
            return 1;
        }
    }

    // Input elements of a
    printf("Enter elements of matrix1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of b
    printf("Enter elements of matrix2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < r1; i++) {
        free(a[i]);
        free(result[i]);
    }
    for (int i = 0; i < r2; i++) {
        free(b[i]);
    }
    free(a);
    free(b);
    free(result);

    return 0;
}
