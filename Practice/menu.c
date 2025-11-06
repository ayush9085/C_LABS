 #include <stdio.h>

int num;//declared global var

int prime() {
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int armstrong() {
    int temp = num, rem, sum = 0, digits = 0, n;
    n = num;
    while (n != 0) {
        digits++;
        n /= 10;
    }
    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        int mul = 1;
        for (int i = 0; i < digits; i++) {
            mul *= rem;
        }
        sum += mul;
        temp /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}

int palindrome() {
    int temp = num, rev = 0, rem;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == num)
        return 1;
    else
        return 0;
}

int main() {
    int choice;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    printf("1. Check Prime\n");
    printf("2. Check Armstrong\n");
    printf("3. Check Palindrome\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (prime())
                printf("Prime number\n");
            else
                printf("Not prime\n");
            break;
        case 2:
            if (armstrong())
                printf("Armstrong number\n");
            else
                printf("Not Armstrong\n");
            break;
        case 3:
            if (palindrome())
                printf("Palindrome number\n");
            else
                printf("Not palindrome\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
