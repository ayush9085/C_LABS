#include <stdio.h>

int main(){
    int a[10], b[10], sum[10], diff[10], prod[10];
    int n, i;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }
    for (i = 0; i < n; i++) {
        diff[i] = a[i] - b[i];
    }
    for (i = 0; i < n; i++) {
        prod[i] = a[i] * b[i];
    }

    printf("\nSum of arrays: ");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    printf("\nDifference of arrays: ");
    for (i = 0; i < n; i++) {
        printf("%d ", diff[i]);
    }

    printf("\nProduct of arrays: ");
    for (i = 0; i < n; i++) {
        printf("%d ", prod[i]);
    }

    printf("\n");

    return 0;
}
