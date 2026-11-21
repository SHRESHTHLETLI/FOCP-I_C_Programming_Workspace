/*
Part B - 2D Arrays
Question 18 - Find a saddle point

Find a cell that is minimum in its row and maximum
in its column. Print the first row-major match as
row col value, or None if no such cell exists.

Input: r c, followed by the matrix.
Output: Coordinates and value, or None.
*/

#include <stdio.h>

int arr[1000][1000];

int main() {
    int r, c;
    int found = 0;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int isMinimum = 1;
            int isMaximum = 1;

            for (int k = 0; k < c; k++) {
                if (arr[i][j] > arr[i][k]) {
                    isMinimum = 0;
                    break;
                }
            }

            for (int k = 0; k < r; k++) {
                if (arr[i][j] < arr[k][j]) {
                    isMaximum = 0;
                    break;
                }
            }

            if (isMinimum == 1 && isMaximum == 1) {
                printf("%d %d %d\n", i, j, arr[i][j]);
                found = 1;
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    if (found == 0) {
        printf("None\n");
    }

    return 0;
}