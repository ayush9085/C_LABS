#include <stdio.h>
#include <stdlib.h>

// Function declarations
void secondLargest();
void arrayOperations();
void countPosNegZero();
void frequencyNumber();

int main() {
    int choice;
    do {
        printf("\n=== Menu ===\n");
        printf("1. Find second largest in array\n");
        printf("2. Array operations (sum, diff, product)\n");
        printf("3. Count positives, negatives, zeros\n");
        printf("4. Frequency of a number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: secondLargest(); break;
            case 2: arrayOperations(); break;
            case 3: countPosNegZero(); break;
            case 4: frequencyNumber(); break;
            case 5: printf("Exiting program.\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}

// Function 1: Find second largest
void secondLargest() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    int largest = arr[0], second = arr[0];
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > largest)
            largest = *(arr + i);
    }
    for (int i = 0; i < n; i++) {
        if (*(arr + i) != largest && *(arr + i) > second)
            second = *(arr + i);
    }

    printf("Second largest: %d\n", second);
    free(arr);
}

// Function 2: Array operations
void arrayOperations() {
    int n;
    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);
    int a[10], b[10], sum[10], diff[10], prod[10];

    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    printf("Enter elements of second array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", b + i);

    for (int i = 0; i < n; i++) {
        *(sum + i) = *(a + i) + *(b + i);
        *(diff + i) = *(a + i) - *(b + i);
        *(prod + i) = *(a + i) * *(b + i);
    }

    printf("\nSum of arrays: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(sum + i));
    printf("\nDifference of arrays: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(diff + i));
    printf("\nProduct of arrays: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(prod + i));
    printf("\n");
}

// Function 3: Count positives, negatives, zeros
void countPosNegZero() {
    int n, countPos = 0, countNeg = 0, countZero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0) countPos++;
        else if (*(arr + i) < 0) countNeg++;
        else countZero++;
    }

    printf("Positive numbers: %d\nNegative numbers: %d\nZeros: %d\n", countPos, countNeg, countZero);
    free(arr);
}

// Function 4: Frequency of a number
void frequencyNumber() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    int num, count = 0;
    printf("Enter number to find frequency: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (*(arr + i) == num)
            count++;
    }

    printf("Frequency of %d: %d\n", num, count);
    free(arr);
}
