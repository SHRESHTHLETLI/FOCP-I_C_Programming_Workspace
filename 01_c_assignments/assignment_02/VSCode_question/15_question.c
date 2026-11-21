/*
Part B - Strings and Character Arrays
Question 15 - Run-length encode

Compress consecutive repeated letters as a character
followed by its run length.
Example: aaabbc becomes a3b2c1.

Input: Letters-only string.
Output: Encoded string.
*/

#include <stdio.h>

int main() {
    char str[1000];

    scanf("%999s", str);

    int count = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        }
        else {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }

    printf("\n");

    return 0;
}