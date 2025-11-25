/*Day-95 Question-145
Return a structure containing top student's details from a function.
*/
#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find top student
struct Student findTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];  // Return the structure of top student
}

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Call function to get top student
    struct Student top = findTopStudent(s, 5);

    // Print top student details
    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
