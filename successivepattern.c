#include <stdio.h>

// Function to calculate the sum of the series
int calculateSeriesSum(int n) {
    int sum = 0,sum1=0;
    for (int i = 1; i <= n; i++) {
        sum=0;
        for(int j=0;j<=i;j++)
        {
            sum=sum+j;
        }
        sum1+=sum;
    }

    return sum1;
}

int main() {
    int n,sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the function to calculate the sum
     sum = calculateSeriesSum(n);

    printf("Sum of the series: %d\n", sum);

    return 0;
}
