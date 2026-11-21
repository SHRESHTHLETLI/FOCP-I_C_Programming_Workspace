/*
Part B - Functions
Question 4 - Perfect square without sqrt

Return 1 if a non-negative integer is a perfect square,
otherwise return 0. Do not use floating-point square root.

Input: n
Output: 1 or 0.
*/

#include <stdio.h>

int isPerfectSquare(int n) {
    if (n < 0) {
        return 0;
    }

    for (long long i = 0; i * i <= n; i++) {
        if (i * i == n) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", isPerfectSquare(n));

    return 0;
}