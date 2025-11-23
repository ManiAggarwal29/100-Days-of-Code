/* Day-79 Question-129
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");  // open file in read mode
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {  // read integers until EOF
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("No integers found in file.\n");
    }

    return 0;
}
