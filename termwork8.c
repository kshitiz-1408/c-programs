#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index from where you want to reverse the array: ");
    scanf("%d", &k);

    if (k < 0 || k >= n) {
        printf("Invalid start index.\n");
        return 1;
    }

    int a = n - 1;
    for(i=0,j=a;j>i;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
