/*Day-42 Question-83
Count vowels and consonants in a string.
*/
#include <stdio.h>
#include <ctype.h>  // for tolower() and isalpha()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input safely

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);   // convert to lowercase for easy comparison
        if (isalpha(ch)) {           // check only alphabetic characters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
