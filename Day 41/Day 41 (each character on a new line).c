/* Day-41 Question-82
Print each character of a string on a new line.
*/
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer input method
    // Print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')  // ignore newline from fgets
            printf("%c\n", str[i]);
    }
    return 0;
}
