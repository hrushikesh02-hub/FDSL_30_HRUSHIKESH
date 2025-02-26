#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float age;
};

void insertEmployees(struct Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Enter Age: ");
        scanf("%f", &employees[i].age);
    }printf("Details inserted successfully!\n");
}

void displayEmployees(struct Employee employees[], int n) {
    printf("\n--- Employee Records ---\n\n");
    printf("ID\t\tName\t\t\tAge\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\n", employees[i].id, employees[i].name, employees[i].age);
    }
}

void sortByAge(struct Employee employees[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].age > employees[j].age) {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }printf("Successfully Sorted by Age !\n");
}

void sortByID(struct Employee employees[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].id > employees[j].id) {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }printf("Successfully Sorted by ID !\n");
}


void sortByName(struct Employee employees[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
    printf("Successfully Sorted by Name!\n");
}


int main() {
    int n, choice,c;
    

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Insert Employee Details\n");
        printf("2. Display Employee Records\n");
        printf("3. Sort Employees by Age\n");
        printf("4. Sort Employees by ID\n");
        printf("5. Sort Employees by Name\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertEmployees(employees, n);
                break;
            case 2:
                displayEmployees(employees, n);
                break;
            case 3:
                sortByAge(employees, n);
                break;
            case 4:
                sortByID(employees, n);
                break;
            case 5:
                sortByName(employees,n);
                break;
            case 6:
                return 0;
                break;
            default:
                printf("Invalid choice!\n");
        }
        printf("Do you want to continue (1/0) : ");
        scanf("%d", &c);
    } while (c != 0);

    return 0;
}
