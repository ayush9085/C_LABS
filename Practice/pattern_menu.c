 #include <stdio.h>
#include <string.h>
//declared all the functions here
void left_triangle(int n, char s[]);
void rev_pyramid(int n, char s[]);
void pyramid(int n, char s[]);
void diamond(int n, char s[]);
void square(int n, char s[]);
void right_triangle(int n, char s[]);
int main() {
    int n, ch;
    char s[10];
    char again;
start: //  this is label to restart program (goto)(chatgpt)
    do {
        printf("Enter what you want to print (e.g. *, #, A, 😊): ");
        scanf("%9s", s);

        printf("Enter number of rows: ");
        scanf("%d", &n);

        if (n <= 0 || n > 20) {
            printf("\nInvalid number of rows! Restarting program\n");
            goto start;  //restarts everything
        }

        printf("\nChoose Pattern\n");
        printf("1. Left Aligned Triangle\n");
        printf("2. Reverse Pyramid\n");
        printf("3. Pyramid\n");
        printf("4. Diamond\n");
        printf("5. Square\n");
        printf("6. Right Aligned Triangle\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");
//switch casses starts from here.takinf user input for patterns
        switch (ch) {
            case 1:
                printf("Printing Left Aligned Triangle\n\n");
                left_triangle(n, s);
                break;

            case 2:
                printf("Printing Reverse Pyramid\n\n");
                rev_pyramid(n, s);
                break;

            case 3:
                printf("Printing Pyramid\n\n");
                pyramid(n, s);
                break;

            case 4:
                printf("Printing Diamond\n\n");
                diamond(n, s);
                break;

            case 5:
                printf("Printing Square\n\n");
                square(n, s);
                break;
                case 6:
                printf("Printing Right Aligned Triangle\n\n");
                 right_triangle(n,s);
                break;

            default:
                printf("Invalid choice! Please run again.\n");
                 
        }

        printf("\nDo you want to print another pattern? (y/n): ");
        scanf(" %c", &again);
        printf("\n");

    } while (again == 'y' || again == 'Y');

    printf("Thanks. Exiting Program.\n");
    return 0;
}


//function definations gere for all the patterns
void left_triangle(int n, char s[]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%s ", s);
        printf("\n");
    }
}
void right_triangle(int n, char s[]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%s", s);
        }
        printf("\n");
    }
}

void rev_pyramid(int n, char s[]) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("%s ", s);
        printf("\n");
    }
}

void pyramid(int n, char s[]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("%s ", s);
        printf("\n");
    }
}

void diamond(int n, char s[]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("%s ", s);
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("%s ", s);
        printf("\n");
    }
}

void square(int n, char s[]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            printf("%s ", s);
        printf("\n");
    }
}
