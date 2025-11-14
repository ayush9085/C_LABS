#include <stdlib.h>
#include <stdio.h>

int main(){
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

     for (int i = 0; i < 5 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }

    printf("Reversed array elements:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}