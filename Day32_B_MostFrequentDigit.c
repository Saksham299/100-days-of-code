#include <stdio.h>

int main() {
    int num, digit, freq[10] = {0}, max = 0, mostFrequent;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            mostFrequent = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", mostFrequent, max);

    return 0;
}
