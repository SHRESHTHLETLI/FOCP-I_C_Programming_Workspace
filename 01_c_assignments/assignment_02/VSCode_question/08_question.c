/*
Part B - Nested Loops
Question 8 - Count pairs with a target sum

Read n values and count index pairs i < j whose
values add up to the given target.

Input: n target, followed by n integers.
Output: Number of pairs.
*/

#include <stdio.h>

int arr[100000];

int main() {
    int n, target;
    int count = 0;

    scanf("%d %d", &n, &target);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((long long)arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}