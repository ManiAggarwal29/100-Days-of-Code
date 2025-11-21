/* Day-66 Question-116
Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
*/
#include <stdio.h>

#define MAX 10000   // assuming numbers are <= 10000 for simplicity

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    // Hash map: store index of each number
    int map[MAX];
    for (int i = 0; i < MAX; i++) map[i] = -1;

    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (complement >= 0 && map[complement] != -1) {
            printf("%d %d\n", map[complement], i);
            return 0;
        }
        map[nums[i]] = i;
    }

    // If no solution exists
    printf("-1 -1\n");
    return 0;
}
