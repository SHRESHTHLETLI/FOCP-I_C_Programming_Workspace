/*
Part B - 1D Arrays
Question 13 - Longest increasing contiguous run

Find the length of the longest contiguous strictly
increasing subarray.

Input: n, followed by n integers.
Output: Maximum run length.
*/

#include <stdio.h>

int arr[100000];

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int current = 1;
    int best = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            current++;
        }
        else {
            current = 1;
        }

        if (current > best) {
            best = current;
        }
    }

    printf("%d\n", best);

    return 0;
}