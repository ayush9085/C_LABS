 #include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Days count from 01/01/0001 to 01/01/year
    long totalDays = 0;

    for (int i = 1; i < year; i++) {
        // Check for leap year
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            totalDays += 366;
        } else {
            totalDays += 365;
        }
    }

    // 01/01/0001 was Monday, so day = (totalDays % 7)
    int dayOfWeek = (totalDays) % 7;

    // 0 = Monday, 1 = Tuesday, ..., 6 = Sunday
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("1st January %d is a %s\n", year, days[dayOfWeek]);

    return 0;
}