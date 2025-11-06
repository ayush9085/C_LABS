#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        int number = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     int rows, i, j, k = 1;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("%d ", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }