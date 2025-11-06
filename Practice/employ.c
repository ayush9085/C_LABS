#include <stdio.h>
#include <string.h>
#include <time.h>

// Structure for storing name
struct Name {
    char first[30];
    char last[30];
};

// Structure for date (for DOB)
struct Date {
    int day;
    int month;
    int year;
};

// Structure for Employee details
struct Employee {
    int id;
    struct Name name;
    char gender[10];
    char department[30];
    char grade;          // A, B, C, D
    float salary;
    struct Date dob;
    int age;
};

// Function to calculate age
int calculateAge(struct Date dob) {
    time_t t = time(NULL);
    struct tm current = *localtime(&t);

    int age = current.tm_year + 1900 - dob.year;
    if (dob.month > current.tm_mon + 1 ||
       (dob.month == current.tm_mon + 1 && dob.day > current.tm_mday)) {
        age--;
    }
    return age;
}

// Function to display one employee
void displayEmployee(struct Employee e) {
    printf("\n------------------------------------\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s %s\n", e.name.first, e.name.last);
    printf("Gender: %s\n", e.gender);
    printf("Department: %s\n", e.department);
    printf("Grade: %c\n", e.grade);
    printf("Salary: %.2f\n", e.salary);
    printf("DOB: %02d-%02d-%d\n", e.dob.day, e.dob.month, e.dob.year);
    printf("Age: %d\n", e.age);
    printf("------------------------------------\n");
}

int main() {
    struct Employee emp[50];
    int n, choice, id, i;
    char grade;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("First Name: ");
        scanf("%s", emp[i].name.first);
        printf("Last Name: ");
        scanf("%s", emp[i].name.last);
        printf("Gender: ");
        scanf("%s", emp[i].gender);
        printf("Department: ");
        scanf("%s", emp[i].department);
        printf("Grade (A/B/C/D): ");
        scanf(" %c", &emp[i].grade);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &emp[i].dob.day, &emp[i].dob.month, &emp[i].dob.year);

        emp[i].age = calculateAge(emp[i].dob);
    }

    // Menu-driven system
    do {
        printf("\n=========== Employee Menu ===========\n");
        printf("1. Display all employees\n");
        printf("2. Search employee by ID\n");
        printf("3. Update salary by ID\n");
        printf("4. Display employees by grade\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (i = 0; i < n; i++) {
                    displayEmployee(emp[i]);
                }
                break;

            case 2:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        displayEmployee(emp[i]);
                        break;
                    }
                }
                if (i == n)
                    printf("Employee not found!\n");
                break;

            case 3:
                printf("Enter ID to update salary: ");
                scanf("%d", &id);
                for (i = 0; i < n; i++) {
                    if (emp[i].id == id) {
                        printf("Current salary: %.2f\n", emp[i].salary);
                        printf("Enter new salary: ");
                        scanf("%f", &emp[i].salary);
                        printf("Salary updated successfully!\n");
                        break;
                    }
                }
                if (i == n)
                    printf("Employee not found!\n");
                break;

            case 4:
                printf("Enter grade (A/B/C/D): ");
                scanf(" %c", &grade);
                for (i = 0; i < n; i++) {
                    if (emp[i].grade == grade)
                        displayEmployee(emp[i]);
                }
                break;

            case 5:
                printf("Exiting program... Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
