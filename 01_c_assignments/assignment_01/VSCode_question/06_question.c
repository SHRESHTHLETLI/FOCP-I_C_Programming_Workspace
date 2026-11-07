// Question 6 — Print a Consecutive-Number Triangle 
// Problem statement: Print consecutive positive integers across triangular rows. 
// Row 1 has one number, row 2 has two, and so on. Counting starts at 1 and continues across rows. 
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