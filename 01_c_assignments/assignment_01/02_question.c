// Question 2 — Print a Right-Angled Triangle  
// Problem statement: Given n, print a left-aligned triangle. Row i must contain exactly i asterisks, for i from 1 to n. 

#include <stdio.h>

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}