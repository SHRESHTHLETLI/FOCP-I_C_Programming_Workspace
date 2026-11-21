/*
Part B - 2D Arrays
Question 19 - Count local peaks

Count cells strictly greater than every existing
up, down, left, and right neighbour.
Missing boundary neighbours are ignored.

Input: r c, followed by the matrix.
Output: Number of peaks.
*/

#include <stdio.h>

int arr[1000][1000];

int main() {
    int r, c;
    int count = 0;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int peak = 1;

            if (i > 0 && arr[i][j] <= arr[i - 1][j]) {
                peak = 0;
            }

            if (i < r - 1 && arr[i][j] <= arr[i + 1][j]) {
                peak = 0;
            }

            if (j > 0 && arr[i][j] <= arr[i][j - 1]) {
                peak = 0;
            }

            if (j < c - 1 && arr[i][j] <= arr[i][j + 1]) {
                peak = 0;
            }

            if (peak == 1) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}