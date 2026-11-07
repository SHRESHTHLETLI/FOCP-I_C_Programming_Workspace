// Question 16 — Print a Diamond Pattern
// Problem statement: Given n, print a centered diamond. The upper half has n rows including the widest row; 
// then print n - 1 rows in decreasing width. 
#include <stdio.h>

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        for (int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = n-1; i >= 1; i--){
        for (int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}