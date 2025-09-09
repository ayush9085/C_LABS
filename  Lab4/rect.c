#include <stdio.h>

int main() {
    int l1, b1, l2, b2, l3, b3;
    int p1, p2, p3;
    int perimeter;

    printf("Enter length and breadth for Rectangle 1: ");
    scanf("%d %d", &l1, &b1);

    printf("Enter length and breadth for Rectangle 2: ");
    scanf("%d %d", &l2, &b2);

    printf("Enter length and breadth for Rectangle 3: ");
    scanf("%d %d", &l3, &b3);

    p1 = 2 * (l1 + b1);
    p2 = 2 * (l2 + b2);
    p3 = 2 * (l3 + b3);

    perimeter = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);

    printf("\nPerimeter of Rectangle 1: %d\n", p1);
    printf("Perimeter of Rectangle 2: %d\n", p2);
    printf("Perimeter of Rectangle 3: %d\n", p3);

    if (perimeter == p1) {
        printf("\nRectangle 1 has the highest perimeter: %d\n", perimeter);
    } else if (perimeter == p2) {
        printf("\nRectangle 2 has the highest perimeter: %d\n", perimeter);
    } else {
        printf("\nRectangle 3 has the highest perimeter: %d\n", perimeter);
    }

    return 0;
}
