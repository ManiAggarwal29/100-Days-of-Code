/* Day-75 Question-125
Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char newLine[200];

    // Ask user for filename
    printf("Enter the filename to append to: ");
    scanf("%99s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Clear input buffer before using fgets
    getchar();  

    // Ask user for new line of text
    printf("Enter a new line of text: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the text to the file
    fputs(newLine, fp);

    // Close the file
    fclose(fp);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}
