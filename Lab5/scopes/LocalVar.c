 #include <stdio.h>

// Global variable
int a = 5;

void demo() {
    int b = 10; // local variable
    int sum = a + b; // global + local addition
    printf("Inside demo: Sum = %d\n", sum);
}

int main() {
    demo();
       printf("In main: a = %d\n", a); // Global variable accessible ✅
    return 0;
}
