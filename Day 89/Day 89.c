/* Day-89 Question-139
Show that enums store integers by printing assigned values.
*/
#include <stdio.h>

enum Status { SUCCESS = 10, FAILURE = 20, TIMEOUT = 30 };

int main() {
    printf("Enum values:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
