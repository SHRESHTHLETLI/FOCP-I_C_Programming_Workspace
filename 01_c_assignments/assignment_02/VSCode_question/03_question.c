/*
Part B - Functions
Question 3 - Rectangle area function

Write a function that returns the area of a rectangle
from its length and width. Print the returned value in main.

Input: length width
Output: Area.
*/

#include <stdio.h>

long long rectangleArea(int length, int width) {
    return (long long)length * width;
}

int main() {
    int length, width;

    scanf("%d %d", &length, &width);

    printf("%lld\n", rectangleArea(length, width));

    return 0;
}