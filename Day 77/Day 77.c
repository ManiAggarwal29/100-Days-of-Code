/* Day-77 Question-127
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/
#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *inFile, *outFile;
    char ch;

    // Open input file in read mode
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(inFile);
        return 1;
    }

    // Read characters one by one, convert to uppercase, and write to output file
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    // Close both files
    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete. Output written to output.txt\n");

    return 0;
}
