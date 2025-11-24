/* Day-85 Question-135
Assign explicit values starting from 10 and print them.
*/
#include <stdio.h>

enum Status { SUCCESS = 10, FAILURE, TIMEOUT };

int main() {
    enum Status s;

    printf("Enum values:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
