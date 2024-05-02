#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int n;

    printf("Enter the length of the string: ");
    scanf("%d", &n);

    str = (char *)malloc((n + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the string: ");
    scanf("%s", str);

    // Reversing the string
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    free(str);
    return 0;
}
