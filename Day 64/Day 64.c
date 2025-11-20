/* Day-64 Question-114
Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>
#include <string.h>
int longestUniqueSubstring(char *s) {
    int n = strlen(s);
    int freq[256] = {0};   // frequency array for ASCII characters
    int start = 0, max_len = 0;

    for (int end = 0; end < n; end++) {
        freq[(unsigned char)s[end]]++;

        // If character repeats, shrink window from left
        while (freq[(unsigned char)s[end]] > 1) {
            freq[(unsigned char)s[start]]--;
            start++;
        }

        // Update maximum length
        int window_len = end - start + 1;
        if (window_len > max_len) {
            max_len = window_len;
        }
    }

    return max_len;
}
int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int result = longestUniqueSubstring(s);
    printf("Length of longest substring without repeating characters = %d\n", result);

    return 0;
}
