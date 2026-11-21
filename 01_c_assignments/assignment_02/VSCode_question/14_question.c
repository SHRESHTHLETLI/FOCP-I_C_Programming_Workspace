/*
Part B - Strings and Character Arrays
Question 14 - Count vowels, consonants, digits, spaces

Read a line and count English vowels, consonants,
digits, and spaces. Ignore punctuation.

Input: One line.
Output: Four counts in that order.
*/

#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ') {
            spaces++;
        }
    }

    printf("%d %d %d %d\n",
           vowels, consonants, digits, spaces);

    return 0;
}