 #include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0, count = 0;
    char choice;

    do {
        printf("Enter a number: ");

        // keep asking until user enters a valid integer
        while (scanf("%d", &num) != 1) {
            printf(" Invalid input! Please enter an integer: ");
            scanf("%*s");  // discard wrong input (searched on gpt)
        }

        if (num > 0) pos++;
        else if (num < 0) neg++;
        else zero++;

        count++;

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\n--- Result ---\n");
    printf("Total numbers: %d\n", count);
    printf("Positive: %d (%.2f%%)\n", pos, pos * 100.0 / count);
    printf("Negative: %d (%.2f%%)\n", neg, neg * 100.0 / count);
    printf("Zeroes  : %d (%.2f%%)\n", zero, zero * 100.0 / count);

    return 0;
}
