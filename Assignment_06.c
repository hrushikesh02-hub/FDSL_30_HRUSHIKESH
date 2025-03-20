#include <stdio.h>
#define MAX 20
int s[MAX];
int top = -1;

void push()
{
    int n;
    printf("Enter Element : ");
    scanf("%d",&n);
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        s[top] = n;
    }
    printf("Element Pushed Successfully !\n");
}

void pop()
{
    if (top == -1)
        printf("Stack is Empty!\n");
    else
    {
        top--;
        printf("Element Popped Successfully !\n");
    }
}
void display()
{
    if (top == -1)
        printf("Stack Underflow!\n");
    else
    {
        printf("Stack Elements : ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", s[i]);
        }
    }
}

int main()
{
    int c;
    int choice;
    do
    {
        printf("1. Push\n2. Pop\n3. Display\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Invalid Choice !");
        }
        printf("Do you want to continue ? (1/0) : ");
        scanf("%d", &c);
    }

    while (c != 0);
    return 0;
}
