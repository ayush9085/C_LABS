#include <stdio.h>

int main() {
    
    int year, total_days, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    total_days = (year - 1) * 365;
    total_days += (year - 1) / 4;
    total_days -= (year - 1) / 100;
    total_days += (year - 1) / 400;

    day = total_days % 7;

    if (day == 0) {
        printf("The day on 1st January of %d is Monday.\n", year);
    } else if (day == 1) {
        printf("The day on 1st January of %d is Tuesday.\n", year);
    } else if (day == 2) {
        printf("The day on 1st January of %d is Wednesday.\n", year);
    } else if (day == 3) {
        printf("The day on 1st January of %d is Thursday.\n", year);
    } else if (day == 4) {
        printf("The day on 1st January of %d is Friday.\n", year);
    } else if (day == 5) {
        printf("The day on 1st January of %d is Saturday.\n", year);
    } else if (day == 6) {
        printf("The day on 1st January of %d is Sunday.\n", year);
    }

    return 0;
}
