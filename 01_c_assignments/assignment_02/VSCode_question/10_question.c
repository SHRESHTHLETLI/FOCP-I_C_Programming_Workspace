/*
Part B - Nested Loops
Question 10 - Pythagorean triples up to N

List triples 1 <= a < b < c <= N satisfying
a*a + b*b = c*c, ordered by a, then b, then c.
Print None if no triple exists.

Input: N
Output: One triple per line, or None.
*/

#include <stdio.h>

int main() {
    int n;
    int found = 0;

    scanf("%d", &n);

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            for (int c = b + 1; c <= n; c++) {
                if ((long long)a * a + (long long)b * b ==
                    (long long)c * c) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (found == 0) {
        printf("None\n");
    }

    return 0;
}