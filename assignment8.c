#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *a, sum = 0, avg;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    a = (float *)malloc(n * sizeof(float));
    if (a == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d floating-point numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }

    avg = sum / n;
    printf("Average of all elements: %.2f\n", avg);

    free(a);
    return 0;
}
