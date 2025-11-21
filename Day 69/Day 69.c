/* Day-69 Question-119
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assuming elements are in range 0..n-1
    int seen[n]; 
    for (int i = 0; i < n; i++) {
        seen[i] = 0;
    }

    // Single iteration to find duplicate
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            printf("Repeated element = %d\n", arr[i]);
            return 0;
        }
        seen[arr[i]] = 1;
    }

    // If no duplicate found (though problem guarantees one)
    printf("No duplicate found\n");
    return 0;
}
