/*Day-33 Question-66
Insert an element in a sorted array at the appropriate position.
*/
#include <stdio.h>

void insertSorted(int arr[], int *n, int key, int capacity) {
    if (*n >= capacity) {
        printf("Array is full, cannot insert.\n");
        return;
    }

    int i = *n - 1;

    // Shift elements greater than key to the right
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert key at the correct position
    arr[i + 1] = key;
    (*n)++;  // Increase size
}

int main() {
    int arr[20] = {2, 5, 8, 12, 16, 23};
    int n = 6;  // Current size
    int key = 10;

    insertSorted(arr, &n, key, 20);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
