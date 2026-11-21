/*
Part B - Nested Loops
Question 12 - Closest pair difference

Find the minimum absolute difference between any two
distinct input values using nested loops.

Input: n, followed by n distinct integers.
Output: Minimum difference.
*/

#include <stdio.h>

int arr[100000];

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long minDiff = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = (long long)arr[i] - arr[j];

            if (diff < 0) {
                diff = -diff;
            }

            if (minDiff == -1 || diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("%lld\n", minDiff);

    return 0;
}