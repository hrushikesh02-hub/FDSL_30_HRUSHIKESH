#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Function to add boogie
void addBoogie(int boogie) {
    if (top == MAX - 1) {
        printf("Train is full! Cannot add more boogies.\n");
    } else {
        top++;
        stack[top] = boogie;
        printf("Boogie %d added to the train.\n", boogie);
    }
}

// Function to remove boogie
void removeBoogie() {
    if (top == -1) {
        printf("No boogies to remove.\n");
    } else {
        printf("Boogie %d removed from the train.\n", stack[top]);
        top--;
    }
}

// Function to display train
void displayTrain() {
    if (top == -1) {
        printf("Train is empty.\n");
    } else {
        printf("Train boogies from engine to end:\n");
        for (int i = 0; i <= top; i++) {
            printf("Boogie %d\n", stack[i]);
        }
    }
}

int main() {
    int choice, boogie;

    while (1) {
        printf("\n--- Train Boogie Management ---\n");
        printf("1. Add Boogie\n");
        printf("2. Remove Boogie\n");
        printf("3. Display Train\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Boogie Number to Add: ");
                scanf("%d", &boogie);
                addBoogie(boogie);
                break;
            case 2:
                removeBoogie();
                break;
            case 3:
                displayTrain();
                break;
            case 4:
                printf("Exiting program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
