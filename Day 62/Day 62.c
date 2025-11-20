/* Day-62 Question-112
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/
#include <stdio.h>
int kadane(int arr[], int n) {
    int max_sum = arr[0];       // Initialize with first element
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        // Either extend the current subarray or start a new one
        if (current_sum + arr[i] > arr[i]) {
            current_sum = current_sum + arr[i];
        } else {
            current_sum = arr[i];
        }

        // Update max_sum if needed
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = kadane(arr, n);
    printf("Maximum subarray sum = %d\n", result);

    return 0;
}
