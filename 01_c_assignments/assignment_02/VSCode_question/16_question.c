/*
Part B - 2D Arrays
Question 16 - Row and column sums

Print all row sums on the first line and column sums
on the second line.

Input: r c, followed by an r x c matrix.
Output: Row sums, then column sums.
*/

#include <stdio.h>

int arr[1000][1000];

int main() {
    int r, c;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        int sum = 0;

        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }

        printf("%d", sum);

        if (i < r - 1) {
            printf(" ");
        }
    }

    printf("\n");

    for (int j = 0; j < c; j++) {
        int sum = 0;

        for (int i = 0; i < r; i++) {
            sum += arr[i][j];
        }

        printf("%d", sum);

        if (j < c - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}