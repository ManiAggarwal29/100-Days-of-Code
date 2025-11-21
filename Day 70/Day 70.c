/* Day-70 Question-120
Write a program to take a string input. Change it to sentence case.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline if present
    s[strcspn(s, "\n")] = '\0';

    // Convert entire string to lowercase
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

    // Capitalize the first character if it's a letter
    if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }

    printf("Sentence case: %s\n", s);

    return 0;
}
