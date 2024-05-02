#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *a, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum of elements: %d\n", sum);

    free(a);
    return 0;
}
