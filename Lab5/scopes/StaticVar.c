#include <stdio.h>

void countfunctioncalls() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            static int staticcounter = 0;
            int regularcounter = 0;

            staticcounter++;
            regularcounter++;

            printf("    Static counter (persists): %d\n", staticcounter);
            printf("    Regular counter (resets): %d\n\n", regularcounter);
        }
    }
}

int main() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Calling function the 1st time:\n");
            countfunctioncalls();
            
            printf("Calling function the 2nd time:\n");
            countfunctioncalls();
            
            printf("Calling function the 3rd time:\n");
            countfunctioncalls();
        }
    }
    return 0;
}