/*
Part B - 2D Arrays
Question 17 - Check matrix symmetry

For a square matrix, check whether matrix[i][j]
equals matrix[j][i] for all i and j.

Input: n, followed by an n x n matrix.
Output: YES or NO.
*/

#include <stdio.h>

int arr[1000][1000];

int main() {
    int n;
    int symmetric = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0) {
            break;
        }
    }

    if (symmetric == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}