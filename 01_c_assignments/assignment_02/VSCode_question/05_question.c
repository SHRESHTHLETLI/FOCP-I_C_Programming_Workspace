/*
Part B - Functions
Question 5 - GCD using Euclid's algorithm

Implement gcd(a, b) and print the greatest common divisor
of two integers. The inputs are not both zero.

Input: a b
Output: GCD.
*/

#include <stdio.h>

long long gcd(long long a, long long b) {
    if (a < 0) {
        a = -a;
    }

    if (b < 0) {
        b = -b;
    }

    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    long long a, b;

    scanf("%lld %lld", &a, &b);

    printf("%lld\n", gcd(a, b));

    return 0;
}