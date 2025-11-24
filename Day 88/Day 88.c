/* Day-88 Question-138
Print all enum names and integer values using a loop.
*/
#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    // Array of strings corresponding to enum names
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Days of the Week with Enum Values:\n");
    for (enum Days d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", dayNames[d], d);
    }

    return 0;
}
