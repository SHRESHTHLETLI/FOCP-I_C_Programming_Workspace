// Question 9 — Print an Inverted Centered Pyramid 
// Problem statement: Given n, print an inverted centered pyramid. The first row contains 2n - 1 asterisks; 
// each next row has two fewer and one more leading space.
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}