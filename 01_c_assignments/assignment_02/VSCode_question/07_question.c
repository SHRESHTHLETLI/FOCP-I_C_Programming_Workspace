/*
Part B - Functions
Question 7 - Evaluate a piecewise function

Compute f(x):
x*x + 2*x + 1 if x < 0
3*x + 2 if 0 <= x < 10
5*x - 7 if x >= 10

Input: x
Output: f(x).
*/

#include <stdio.h>

long long calculate(int x) {
    if (x < 0) {
        return (long long)x * x + 2LL * x + 1;
    }
    else if (x < 10) {
        return 3LL * x + 2;
    }
    else {
        return 5LL * x - 7;
    }
}

int main() {
    int x;

    scanf("%d", &x);

    printf("%lld\n", calculate(x));

    return 0;
}