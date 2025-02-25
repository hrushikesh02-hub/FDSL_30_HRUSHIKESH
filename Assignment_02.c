#include <stdio.h>
struct Student {
    int id;
    char name[50];
    char subject[50];
    float marks;
};


void insertStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Enter Subject: ");
        scanf(" %[^\n]", students[i].subject);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }
}


void displayStudents(struct Student students[], int n) {
    printf("\n--- Student Records ---\n");
    printf("ID\tName\t\t\tSubject\t\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].subject, students[i].marks);
    }
}


void sortByMarks(struct Student students[], int n) {
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks > students[j + 1].marks) {
                // Swap records
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("\nStudents sorted by Marks successfully!\n");
}


void sortByID(struct Student students[], int n) {
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].id > students[j + 1].id) {
                // Swap records
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("\nStudents sorted by ID successfully!\n");
}

int main() {
    int n, choice, c;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n]; 

    do {
        // Menu options
        printf("\n--- Student Management System ---\n");
        printf("1. Insert Student Details\n");
        printf("2. Display Student Records\n");
        printf("3. Sort Students by Marks\n");
        printf("4. Sort Students by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertStudents(students, n);
                break;

            case 2:
                displayStudents(students, n);
                break;

            case 3:
                sortByMarks(students, n);
                break;

            case 4:
                sortByID(students, n);
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;
                break;

            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
        printf("Do you want to continue (1/0) : ");
        scanf("%d",&c);
    } while (c!=0);

    return 0;
}
