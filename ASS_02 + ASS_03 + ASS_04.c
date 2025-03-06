#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    float age;
};

void insertEmployees(struct Employee employees[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Enter Age: ");
        scanf("%f", &employees[i].age);
    }
    printf("Details inserted successfully!\n");
}

void displayEmployees(struct Employee employees[], int n)
{
    printf("\n--- Employee Records ---\n\n");
    printf("ID\t\tName\t\t\tAge\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%.2f\n", employees[i].id, employees[i].name, employees[i].age);
    }
}

void sortByAge_selection(struct Employee employees[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (employees[i].age > employees[j].age)
            {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
    printf("Successfully Sorted by Age !\n");
}
void sortByAge_bubble(struct Employee employees[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (employees[j].age > employees[j + 1].age)
            {
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
    printf("\nEmployees sorted by Age successfully!\n");
}
void sortByAge_insertion(struct Employee employees[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (employees[j].age > employees[i].age)
            {
                struct Employee temp = employees[i];
                for (int k = i - 1; k >= j; k--)
                {
                    employees[k + 1] = employees[k];
                }
                employees[j] = temp;
            }
        }
    }
    printf("Sorted By Age Successfully !\n");
}

void sortByID_selection(struct Employee employees[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (employees[i].id > employees[j].id)
            {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
    printf("Successfully Sorted by ID !\n");
}
void sortByID_bubble(struct Employee employees[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (employees[j].id > employees[j + 1].id)
            {
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
    printf("\nEmployees sorted by ID successfully!\n");
}
void sortByID_insertion(struct Employee employees[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (employees[j].id > employees[i].id)
            {
                struct Employee temp = employees[i];
                for (int k = i - 1; k >= j; k--)
                {
                    employees[k + 1] = employees[k];
                }
                employees[j] = temp;
            }
        }
    }
    printf("Sorted By Age Successfully !\n");
}
void sortByName_selection(struct Employee employees[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(employees[i].name, employees[j].name) > 0)
            {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
    printf("Successfully Sorted by Name!\n");
}
void sortByName_bubble(struct Employee employees[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(employees[j].name, employees[j + 1].name) > 0)
            {
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
    printf("Successfully Sorted by Name!\n");
}
void sortByName_insertion(struct Employee employees[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (strcmp(employees[j].name, employees[i].name) > 0)
            {
                struct Employee temp = employees[i];
                for (int k = i - 1; k >= j; k--)
                {
                    employees[k + 1] = employees[k];
                }
                employees[j] = temp;
            }
        }
    }
    printf("Sorted By Name Successfully !\n");
}

int main()
{
    int n, choice, choice2, choice3, choice4, c, c1, c2, c3;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    do
    {
        printf("Enter your choice :\n1.Insert Details\n2.Sort By Bubble Sort\n3.Sort By Selection sort\n4.Sort By Insertion sort\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertEmployees(employees, n);
            break;
        case 2:
            do
            {
                printf("1. Display Employee Records\n");
                printf("2. Sort Employees by Age\n");
                printf("3. Sort Employees by ID\n");
                printf("4. Sort Employees by Name\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice2);

                switch (choice2)
                {
                case 1:
                    displayEmployees(employees, n);
                    break;
                case 2:
                    sortByAge_bubble(employees, n);
                    break;
                case 3:
                    sortByID_bubble(employees, n);
                    break;
                case 4:
                    sortByName_bubble(employees, n);
                    break;
                case 5:
                    return 0;
                    break;
                default:
                    printf("Invalid choice!\n");
                }
                printf("Do you want to continue(0/1) : ");
                scanf("%d", &c1);
            } while (c1 != 0);
            break;
        case 3:
            do
            {
                printf("1. Display Employee Records\n");
                printf("2. Sort Employees(selection) by Age\n");
                printf("3. Sort Employees by ID\n");
                printf("4. Sort Employees by Name\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice3);

                switch (choice3)
                {
                case 1:
                    displayEmployees(employees, n);
                    break;
                case 2:
                    sortByAge_selection(employees, n);
                    break;
                case 3:
                    sortByID_selection(employees, n);
                    break;
                case 4:
                    sortByName_selection(employees, n);
                    break;
                case 5:
                    return 0;
                    break;
                default:
                    printf("Invalid choice!\n");
                }
                printf("Do you want to continue(0/1) : ");
                scanf("%d", &c2);
            } while (c2 != 0);
            break;
        case 4:
            do
            {
                printf("1. Display Employee Records\n");
                printf("2. Sort Employees(insertion) by Age\n");
                printf("3. Sort Employees by ID\n");
                printf("4. Sort Employees by Name\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice4);
                switch (choice4)
                {
                case 1:
                    displayEmployees(employees, n);
                    break;

                case 2:
                    sortByAge_insertion(employees, n);
                    break;

                case 3:
                    sortByID_insertion(employees, n);
                    break;

                case 4:
                    sortByName_insertion(employees, n);
                    break;
                case 5 : return 0;
                    break;
                default:
                    printf("Invalid Choice !\n");
                    break;
                }
                printf("Do you want to continue(0/1) :");
                scanf("%d", &c3);
            } while (c3!= 0);
            break;
        default:
            printf("Invalid choice !\n");
        }
        printf("Press 1 for going to main menu(0/1) : ");
        scanf("%d", &c);
    } while (c != 0);
    return 0;
}
