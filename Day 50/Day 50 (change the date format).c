/*Day-50 Question-99
Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main() {
    char date[20];
    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%s", date);

    // Extract day, month, year
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Map month number to abbreviation
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};

    int m = atoi(month);  // convert month string to integer

    if (m >= 1 && m <= 12) {
        printf("Converted date: %s-%s-%s\n", day, months[m-1], year);
    } else {
        printf("Invalid month entered.\n");
    }

    return 0;
}