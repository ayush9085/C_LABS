 #include <stdio.h>

int main() {
    int L;

    printf("Enter the limit: ");
    scanf("%d", &L);

    printf("Ramanujan numbers up to %d are:\n", L);

    // Check each number from 1 to L
    for (int n = 1; n <= L; n++) {
        int count = 0;

        // Try all pairs a, b
        for (int a = 1; a*a*a <= n; a++) {
            for (int b = a; b*b*b <= n; b++) {
                if (a*a*a + b*b*b == n) {
                    count++;  // found one way
                }
            }
        }

        if (count >= 2) {
            printf("%d\n", n);  // print if 2 or more ways
        }
    }

    return 0;
}
