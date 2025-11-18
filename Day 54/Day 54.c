/* Day-54 Question-104
Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/
#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    // total sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    // check if totalSum is a perfect square
    int x = (int)sqrt(totalSum);

    if (x * x == totalSum) {
        return x;  // pivot integer found
    }
    return -1;     // no pivot integer exists
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot = findPivotInteger(n);

    if (pivot != -1)
        printf("Pivot integer is %d\n", pivot);
    else
        printf("No pivot integer exists\n");

    return 0;
}
