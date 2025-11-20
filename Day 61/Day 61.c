/* Day-61 Question-111
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/
#include <stdio.h>
void firstNegativeInWindow(int arr[], int n, int k) {
    int i, j;
    int queue[n];   // to store indices of negative numbers
    int front = 0, rear = 0;

    // Process first window
    for (i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[rear++] = i;
        }
    }

    // Process rest of the windows
    for (i = k; i <= n; i++) {
        // Print first negative integer of current window
        if (front != rear) {
            printf("%d ", arr[queue[front]]);
        } else {
            printf("0 ");
        }

        // Slide the window
        if (i < n) {
            // Remove elements not in current window
            while (front != rear && queue[front] <= i - k) {
                front++;
            }
            // Add current element if it is negative
            if (arr[i] < 0) {
                queue[rear++] = i;
            }
        }
    }
}
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    firstNegativeInWindow(arr, n, k);

    return 0;
}
