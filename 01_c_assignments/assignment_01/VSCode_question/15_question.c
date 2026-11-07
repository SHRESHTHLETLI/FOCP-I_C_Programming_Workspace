// Question 15 — Print a Butterfly Pattern 
// Problem statement: Given an odd integer n, print a butterfly made of asterisks. The top half widens row by row and the lower half mirrors it.
//  Use spaces between the left and right wings. 
#include <stdio.h>

int main(void){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        for (int j = 1; j <= 2 * (n - i); j++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        for (int j = 1; j <= 2 * (n - i); j++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}