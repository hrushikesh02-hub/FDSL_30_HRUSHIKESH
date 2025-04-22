#include<stdio.h>
#define n 4
int q[n];
int front=-1,rear=-1;

struct song{
	int id;
	char a[10];
	char ss[10];
};

struct song s[n];

void enQueue(int element)
{
	if(rear==-1 && front==-1)
	{
		rear=0;
		front=0;
		q[rear]=element;
	}
	else if((rear+1)%n==front)
	{
		printf("Queue is Full !\n");
	}
	else
	{
		rear=(rear+1)%n;
		q[rear]=element;
	}
}
void deQueue()
{
	if(rear==-1 && front==-1)
	{
		printf("Queue is Empty !\n");
	}
	else if(rear==front)
	{
		printf("Element %d deleted successfully !",q[front]);
		rear=-1;
		front=-1;
	}
	else
	{
		printf("Element %d deleted successfully !",q[front]);
		front=(front+1)%n;
	}
}
void display()
{
	int t;
	
	if(rear==-1 && front==-1)
	{
		printf("Queue is Empty !\n");
	}
	else 
	{	printf("How many times you want to play songs ? : ");
		scanf("%d",&t);
		for(int j = 0 ; j<t ; j++)
		{
			printf("\nPlaying songs %d time :\n",(j+1));
			int i=front;
		while(1)
		{
			printf("Track : %d\n",q[i]);
			printf("Artist Name : %s\n",s[i].a);
			printf("Song Name : %s\n",s[i].ss);
			if(i==rear)
				break;
			i=(i+1)%n;
		}
		printf("\n");
		printf("----------------------\n");
		}
		
	}
}

int main()
{
	int N;
	int choice;
	int t=0;
	while(1)
	{
		printf("\n1. Add songs\n2. Delete song\n3. Play songs\n4. Exit\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : 	printf("Enter Track ID : ");
			      		scanf("%d",&s[t].id);
			      		printf("Enter Artist name : ");
			      		scanf("%s",s[t].a);
			      		printf("Enter Song name : ");
			      		scanf("%s",s[t].ss);
			      		enQueue(s[t].id);
			      		t+=1;
					break;
			case 2 : deQueue();
					break;
			case 3 : display();
					break;
			case 4 : printf("Exiting Program.......\n");
				       return 0;
			default : printf("Invalid Choice !\n");		
		}
	}
	return 0;
}
