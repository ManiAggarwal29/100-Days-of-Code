/* Day-83 Question-133
Create an enum for months and print how many days each month has.
*/
#include <stdio.h>

enum Months {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Months m;

    printf("Months of the Year with Days:\n");
    for (m = JANUARY; m <= DECEMBER; m++) {
        switch (m) {
            case JANUARY:   printf("JANUARY (%d) -> 31 days\n", m); break;
            case FEBRUARY:  printf("FEBRUARY (%d) -> 28/29 days\n", m); break;
            case MARCH:     printf("MARCH (%d) -> 31 days\n", m); break;
            case APRIL:     printf("APRIL (%d) -> 30 days\n", m); break;
            case MAY:       printf("MAY (%d) -> 31 days\n", m); break;
            case JUNE:      printf("JUNE (%d) -> 30 days\n", m); break;
            case JULY:      printf("JULY (%d) -> 31 days\n", m); break;
            case AUGUST:    printf("AUGUST (%d) -> 31 days\n", m); break;
            case SEPTEMBER: printf("SEPTEMBER (%d) -> 30 days\n", m); break;
            case OCTOBER:   printf("OCTOBER (%d) -> 31 days\n", m); break;
            case NOVEMBER:  printf("NOVEMBER (%d) -> 30 days\n", m); break;
            case DECEMBER:  printf("DECEMBER (%d) -> 31 days\n", m); break;
        }
    }

    return 0;
}
