#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, **a, sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    a = (int **)malloc(r * sizeof(int *));
    if (a == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < r; i++) {
        a[i] = (int *)malloc(c * sizeof(int));
        if (a[i] == NULL) {
            printf("Memory allocation failed!");
            return 1;
        }
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    // Free allocated memory
    for (int i = 0; i < r; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
