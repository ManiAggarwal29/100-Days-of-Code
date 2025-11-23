/* Day-78 Question-128
Read a text file and count how many vowels and consonants are in the file Ignore digits and special characters.
*/
#include <stdio.h>
#include <ctype.h>  // for isalpha() and tolower()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");  // open file in read mode
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // normalize to lowercase

        if (isalpha(ch)) {  // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
