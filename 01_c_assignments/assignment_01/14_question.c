// Question 14 — Print Floyd's Triangle 
// Problem statement: Given n, print Floyd's triangle with n rows.
//  Fill it with consecutive positive integers starting at 1, placing one number on row 1, two on row 2, and so on. 
#include <stdio.h>

int main (void){
    int n, a = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}