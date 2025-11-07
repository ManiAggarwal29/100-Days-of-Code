/*Day-27 Question-53 
Q53: Write a program to print the following patter
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main() {
    int n = 5; // peak height
    // Upper half including the middle line
    for (int i = 1; i <= n; i++) {
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
    // Lower half excluding the middle line
    for (int i = n - 1; i >= 1; i--) {
        for (int star = 1; star <= 2 * i - 1; star++)
            printf("*");
        printf("\n");
    }
    return 0;
}

