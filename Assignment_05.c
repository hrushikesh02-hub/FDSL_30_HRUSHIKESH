#include <stdio.h>

#define MAX 100

int arr[MAX], size = 0;

void insertArray()
{
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray()
{
    if (size == 0)
    {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort()
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted using Bubble Sort.\n");
}

void selectionSort()
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted using Selection Sort.\n");
}

void insertionSort()
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                for (int k = i - 1; k >= j; k--)
                {
                    arr[k + 1] = arr[k];
                }
                arr[j] = temp;
                break;
            }
        }
    }
    printf("Array sorted using Insertion Sort.\n");
}

void linearSearch()
{
    int key, found = 0;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d.\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element not found!\n");
    }
}

void binarySearch()
{
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at index %d.\n", mid);
            return;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found!\n");
}

int main()
{
    int choice;
    char cont;

    do
    {
        printf("\nMenu:\n");
        printf("1. Insert Array\n2. Display Array\n3. Bubble Sort\n4. Selection Sort\n");
        printf("5. Insertion Sort\n6. Linear Search\n7. Binary Search (Sorted Array Required)\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertArray();
            break;
        case 2:
            displayArray();
            break;
        case 3:
            bubbleSort();
            break;
        case 4:
            selectionSort();
            break;
        case 5:
            insertionSort();
            break;
        case 6:
            linearSearch();
            break;
        case 7:
            binarySearch();
            break;
        case 8:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }

        printf("Do you want to continue? (1/0): ");
        scanf(" %c", &cont);
    } while (cont != 0);

    printf("Exiting...\n");
    return 0;
}
