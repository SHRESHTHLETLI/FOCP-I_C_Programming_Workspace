// Question 4 — Print a Number Triangle 
// Problem statement: Given n, print n rows. On row i, print integers from 1 through i, separated by one space. 

#include <stdio.h>

int main (void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf ("\n");
    }
}