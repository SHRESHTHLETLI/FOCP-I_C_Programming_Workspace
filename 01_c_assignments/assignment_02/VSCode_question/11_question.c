/*
Part B - Nested Loops
Question 11 - Pairs with equal digit sums

Count index pairs i < j whose values have equal
digit sums.

Input: n, followed by n positive integers.
Output: Pair count.
*/

#include <stdio.h>

int arr[100000];

int digitSum(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main() {
    int n;
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (digitSum(arr[i]) == digitSum(arr[j])) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}