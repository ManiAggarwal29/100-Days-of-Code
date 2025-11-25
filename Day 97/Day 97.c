/*Day-97 Question-147
Store employee data in a binary file using fwrite() and read using fread().
*/
#include <stdio.h>
#include <stdlib.h>

// Define a structure for employee
struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp[3], emp_read[3];
    FILE *fp;
    int i;

    // Input employee data
    for (i = 0; i < 3; i++) {
        printf("Enter ID, Name, Salary for Employee %d: ", i+1);
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fwrite(emp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    fread(emp_read, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Display read data
    printf("\nEmployee Data Read from File:\n");
    for (i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               emp_read[i].id, emp_read[i].name, emp_read[i].salary);
    }

    return 0;
}
