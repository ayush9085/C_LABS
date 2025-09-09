#include <stdio.h>

int main() {
    int L;

    printf("Enter the limit: ");
    scanf("%d", &L);

    printf("Ramanujan numbers up to %d are:\n", L);

    for (int n = 1; n <= L; n++) {
        int count = 0; // count of ways to express n as sum of two cubes

        // check all pairs (a, b) such that a^3 + b^3 = n
        for (int a = 1; a*a*a < n; a++) {
            for (int b = a; b*b*b < n; b++) {  // b >= a to avoid repetition
                if (a*a*a + b*b*b == n) {
                    count++;
                }
            }
        }

        if (count >= 2) {
            printf("%d\n", n);
        }
    }

    return 0;
}
