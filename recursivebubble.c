#include <stdio.h>

// Helper function for one pass of Bubble Sort
void bubbleSortPass(int arr[], int n, int i) {
    // Base case: If the entire array has been traversed, return
    if (i == n - 1) {
        return;
    }

    // Compare and swap adjacent elements
    if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    // Recursively call for the next pass
    bubbleSortPass(arr, n, i + 1);
}

// Recursive Bubble Sort function
void recursiveBubbleSort(int arr[], int n) {
    // Base case: If the array is empty or already sorted
    if (n <= 1) {
        return;
    }

    // Perform one pass of Bubble Sort
    bubbleSortPass(arr, n, 0);

    // Recursively call for the remaining elements
    recursiveBubbleSort(arr, n - 1);
}

int main() {
    int n, i;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the array elements
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursiveBubbleSort function
    recursiveBubbleSort(arr, n);

    // Display the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}