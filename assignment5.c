#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int vowels = 0;

    printf("Enter a string: ");
    str = (char *)malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowels);

    // Free allocated memory
    free(str);
    
    return 0;
}

