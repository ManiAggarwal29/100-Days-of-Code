/* Day-60 Question-110
Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    // Brute force: check each window
    for(int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for(int j = i; j < i + k; j++) {
            if(arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }
        printf("%d ", maxVal);
    }

    return 0;
}
