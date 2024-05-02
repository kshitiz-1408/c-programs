#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, **a, sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    a = (int **)malloc(n * sizeof(int *));
    if (a == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        a[i] = (int *)malloc(n * sizeof(int));
        if (a[i] == NULL) {
            printf("Memory allocation failed!");
            return 1;
        }
        printf("Enter elements for row %d:\n", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(a[i]);
    }
    free(a);

    return 0;
}
