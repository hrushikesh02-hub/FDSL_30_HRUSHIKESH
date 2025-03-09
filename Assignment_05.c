#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char name[50];
    char subject[50];
    float marks;
};
struct Student student[10];
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
    }printf("Students Details Successfully !\n");
}
void searchStudents(struct Student students[],int n){
	int found = 0,key;
 	printf("Enter student ID : ");
	scanf("%d",&key);
		for( int i = 0 ; i < n ; i++ )
		{
			if ( students[i].id == key )
			{
				printf("Student found !\n");
				printf("ID: %d\n",students[i].id);
				printf("Name : %s\n",students[i].name);
				printf("Marks : %.2f\n",students[i].marks);
				found = 1 ;
			}
		}
		if(!found)
		{
			printf("Student not found !\n");
		}
}
void searchname(struct Student students[],int n){
    int found = 0 ;  char key1[15];
    printf("Enter Student Name : ");
    scanf("%s",key1);
    for (int i = 0 ; i < n ; i++ )
    {
        if(strcmp(students[i].name,key1)==0)
        {
        found = 1;
        printf("Student Found !\n");
        printf("ID : %d\n",students[i].id);
        printf("Name : %s\n",students[i].name);
        printf("Marks : %.2f\n",students[i].marks);
        break;
        }
    }
    if(!found)
    {
        printf("Student not found !\n");
    }
}

void displayStudents(struct Student students[], int n) {
    printf("\n--- Student Records ---\n");
    printf("ID\tName\t\t\tSubject\t\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].subject, students[i].marks);
    }
}
int main() {
    int n, choice, c;
    int key,found=0;
    char key1[15];
    int ch;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n]; 

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Insert Student Details\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
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
                printf("1. By ID\n2. By Name\nEnter your choice : ");
                scanf("%d",&ch);
                switch (ch) 
                {
                    case 1 : 
                        searchStudents(students,n);
                        break;
                    case 2 : 
                        searchname(students,n);
                        break;
                    default :
                        printf("Invalid Choice !\n");
                }
                
            break;

            case 4:
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
