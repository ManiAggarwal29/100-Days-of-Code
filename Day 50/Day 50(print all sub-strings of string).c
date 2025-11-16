/*Day-50 Question-100
Print all sub-strings of a string.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("All substrings are:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            // print substring from i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
