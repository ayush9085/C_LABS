//WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the length :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter ARRAy\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int Num;
    printf("enter the number to find the frequency :");
    scanf("%d" , &Num);

    
    int count=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == Num) {
            count++;
        }
    }
    printf("The frequency of the %d is %d" , Num ,count);
    return 0;



}