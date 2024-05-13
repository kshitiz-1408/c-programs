#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define n 100

int main() {
    FILE *input, *output;
    char word[n];

    // Open input file
    input = fopen("Data.txt", "r");
    if (input == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open output file
    output = fopen("Del.txt", "w");
    if (output == NULL) {
        perror("Error creating output file");
        fclose(input);
        return 1;
    }

    // Read words from input file, remove "a", "the", "an", and write to output file
    while (fscanf(input, "%s", word) != EOF) {
        if (strcmp(word, "a") == 0 || strcmp(word, "the") == 0 || strcmp(word, "an") == 0) {
            fprintf(output, " "); // Replace with a space
        } else {
            fprintf(output, "%s ", word);
        }
    }

    // Close files
    fclose(input);
    fclose(output);

    printf("Words removed and replaced successfully!\n");

    return 0;
}
