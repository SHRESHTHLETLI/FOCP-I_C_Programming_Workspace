// Question 5 — Print a Repeated-Number Triangle  
// Problem statement: Given n, print n rows. On row i, print the number i exactly i times, separated by one space. 

#include <stdio.h>

int main (void){
    int n, a = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            printf("%d ",a);
        }
        printf("\n");
        a++;
    }
}