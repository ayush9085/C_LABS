 #include <stdio.h>

// Global variable
int a = 1;

int main() {
    int b = 2;       // local variable
    int sum = a + b; // global + local ka addition
    printf("Sum = %d\n", sum);
    return 0;
}
