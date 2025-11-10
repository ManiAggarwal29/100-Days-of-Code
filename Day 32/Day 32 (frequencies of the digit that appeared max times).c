/* Day-32 Question-64
Find the digit that occurs the most times in an integer number.
*/
#include <stdio.h>
int main() {
    long long num;
    int freq[10] = {0};  // frequency array for digits 0-9
    int digit, maxDigit = 0, maxCount = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }
    // Count digit frequencies
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }
    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxCount);

    return 0;
}
