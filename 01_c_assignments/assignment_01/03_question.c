// Question 3 — Print an Inverted Triangle 
// Problem statement: Given n, print a left-aligned inverted triangle. The first row contains n asterisks;
// each following row contains one fewer. 

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}