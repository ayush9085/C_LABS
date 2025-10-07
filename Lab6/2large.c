//WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.
 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find largest
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    //  Find second largest
    int second = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > second) {
            second = arr[i];
        }
    }

    
    printf("Second largest: %d\n", second);


    return 0;
}
