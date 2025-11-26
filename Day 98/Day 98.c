/*Day-98 Question-148
Take two structs as input and check if they are identical.
*/
#include <stdio.h>
#include <string.h>

// Define a struct
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to check if two structs are identical
int areIdentical(struct Student s1, struct Student s2) {
    if (s1.id != s2.id) return 0;
    if (strcmp(s1.name, s2.name) != 0) return 0;
    if (s1.marks != s2.marks) return 0;
    return 1; // All members matched
}

int main() {
    struct Student a = {1, "Alice", 95.5};
    struct Student b = {1, "Alice", 95.5};
    struct Student c = {2, "Bob", 88.0};

    if (areIdentical(a, b))
        printf("Struct a and b are identical.\n");
    else
        printf("Struct a and b are NOT identical.\n");

    if (areIdentical(a, c))
        printf("Struct a and c are identical.\n");
    else
        printf("Struct a and c are NOT identical.\n");

    return 0;
}
