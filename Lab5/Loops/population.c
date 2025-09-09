#include <stdio.h>

int main() {
    double population = 100000; // initial population
    double growthRate = 10.0;   // in percent
    int years = 10;

    printf("Year\tPopulation\n");

    for (int i = 1; i <= years; i++) {
        population = population + (population * growthRate / 100);
        printf("%2d\t%.0lf\n", i, population);  // %.0lf prints no decimals
    }

    return 0;
}
