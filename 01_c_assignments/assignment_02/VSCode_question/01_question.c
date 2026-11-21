/*
Part B - Functions
Question 1 - Find maximum of three integers

Write int maxOfThree(int a, int b, int c) and return
the largest value.

Input: Three integers a, b, c.
Output: Largest integer.
*/

#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", maxOfThree(a, b, c));

    return 0;
}