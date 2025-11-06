#include <stdio.h>
#include <string.h>
long FACT(int *num);
long FACT_NONREC(int *num);
void factorial_and_binomial();
int GCD(int *num1, int *num2);
void gcd_program();
int FIBO(int *num);
void fibonacci_program();
int ISPRIME(int *num);
void prime_program();
void REVERSE(char *str);
void reverse_program();
int main() {
    int choice;
    char cont;
    while (1) {
        printf("1. Factorial (Recursive & Non-Recursive) + Binomial\n");
        printf("2. GCD using Recursion\n");
        printf("3. Fibonacci Series using Recursion\n");
        printf("4. Prime Numbers in a Range\n");
        printf("5. Reverse a String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                factorial_and_binomial();
                break;
            case 2:
                gcd_program();
                break;
            case 3:
                fibonacci_program();
                break;
            case 4:
                prime_program();
                break;
            case 5:
                reverse_program();
                break;
            case 6:
                printf("Exiting program... Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
                continue;
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);
        getchar();
        if (cont != 'y' && cont != 'Y') {
            printf("Exiting program... Goodbye!\n");
            break;
        }
    }
    return 0;
}

long FACT(int *num) {
    if (*num == 0)
        return 1;
    int temp = *num - 1;
    return (*num) * FACT(&temp);
}

long FACT_NONREC(int *num) {
    long fact = 1;
    for (int i = 1; i <= *num; i++) {
        fact *= i;
    }
    return fact;
}

void factorial_and_binomial() {
    int n, r;
    printf("\nEnter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if (r > n || n < 0 || r < 0) {
        printf("Invalid input. r should be <= n and both non-negative.\n");
        return;
    }
    long fact_n_rec = FACT(&n);
    long fact_n_nonrec = FACT_NONREC(&n);
    long fact_r = FACT(&r);
    int n_r = n - r;
    long fact_n_r = FACT(&n_r);
    long binomial = fact_n_rec / (fact_r * fact_n_r);
    printf("\nUsing Recursion: %d! = %ld\n", n, fact_n_rec);
    printf("Using Loop: %d! = %ld\n", n, fact_n_nonrec);
    printf("Binomial Coefficient C(%d, %d) = %ld\n", n, r, binomial);
}

int GCD(int *num1, int *num2) {
    if (*num2 == 0)
        return *num1;
    int temp = *num1 % *num2;
    return GCD(num2, &temp);
}

void gcd_program() {
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d = %d\n", a, b, GCD(&a, &b));
}

int FIBO(int *num) {
    if (*num == 0)
        return 0;
    else if (*num == 1)
        return 1;
    int n1 = *num - 1, n2 = *num - 2;
    return FIBO(&n1) + FIBO(&n2);
}

void fibonacci_program() {
    int terms;
    printf("\nEnter number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", FIBO(&i));
    }
    printf("\n");
}

int ISPRIME(int *num) {
    if (*num < 2)
        return 0;
    for (int i = 2; i <= *num / 2; i++) {
        if (*num % i == 0)
            return 0;
    }
    return 1;
}

void prime_program() {
    int start, end;
    printf("\nEnter range (start end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (ISPRIME(&i))
            printf("%d ", i);
    }
    printf("\n");
}

void REVERSE(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverse_program() {
    char str[100];
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    REVERSE(str);
    printf("Reversed string: %s\n", str);
}
