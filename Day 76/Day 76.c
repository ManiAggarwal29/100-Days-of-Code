/* Day-76 Question-126
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char buffer[200];

    // Ask user for filename
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read and display file content line by line
    printf("\n--- File Content ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0;
}
