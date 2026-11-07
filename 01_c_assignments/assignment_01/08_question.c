// Question 8 — Print a Centered Pyramid 
// Problem statement: Given n, print a centered pyramid with n rows. Row i contains 2i - 1 asterisks, 
// preceded by enough spaces to center it. 
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}