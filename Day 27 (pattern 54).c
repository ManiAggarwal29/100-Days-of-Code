/*Day-27 Question-54 
Write a program to print the following pattern
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main() {
    int n = 5; // peak height
    // Upper half (excluding middle line)
    for (int i = 1; i <= n; i++) {
        if (i == n) continue; // Skip the 5th line
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
    // Lower half (excluding mirror of middle line)
    for (int i = n - 1; i >= 1; i--) {
        if (i == n - 1) continue; // Skip the 6th line
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
    return 0;
}
