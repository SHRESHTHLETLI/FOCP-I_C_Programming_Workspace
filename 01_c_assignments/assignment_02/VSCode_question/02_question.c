/*
Part B - Functions
Question 2 - Count multiples in a range

Write countMultiples(n, k) to count positive integers
from 1 through n that are divisible by positive k.

Input: n k
Output: Count of multiples.
*/

#include <stdio.h>

int countMultiples(int n, int k) {
    return n / k;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    printf("%d\n", countMultiples(n, k));

    return 0;
}