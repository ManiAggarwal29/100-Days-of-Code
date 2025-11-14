/* Day-41 Question-81
Count characters in a string without using built-in length functions.
*/
#include <stdio.h>

int main() {
    char str[100];   // buffer for input
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input method

    // Count characters until null terminator
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}

