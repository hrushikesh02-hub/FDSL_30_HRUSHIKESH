#include<stdio.h>
	struct book{
		int book_id;
		char book_name[50];
		char book_author[50];
	};
		void insert(struct book b[],int *count){
		printf("Enter Book ID : ");
		scanf("%d",&b[*count].book_id);
		printf("Enter Book Name : ");
		scanf("%s",b[*count].book_name);
		printf("Enter Book Author : ");
		scanf("%s",b[*count].book_author);
		(*count)++;
		printf("Book Details Inserted successfully\n");
		}
		void delete(struct book b[],int *count,int id)
		{
			int found=0;
		printf("Enter the Book ID : ");
		scanf("%d",&id);
		for(int i=0;i<*count;i++){
		if(b[i].book_id==id){
		found=1;
		for(int j=i;j<*count-1;j++)
		{
			b[j]=b[j+1];
			
		}(*count)--;
			printf("The book with ID %d deleted successfully !\n",id);
			
		}
		}
		if(!found)
			{printf("Book with ID %d not found !",id);
}
	}
			void modify(struct book b[],int*count,int id,int c)
		{
			int found=0;
			printf("Enter the book u want to modify : ");
			scanf("%d",&id);
			for(int i=0;i<*count;i++){
				if(b[i].book_id==id)
				{
			printf("1.modify id\n2.modify author\n3.modify name\n");
			scanf("%d",&c);
			switch(c) {
			case 1: printf("Enter new id : ");
				       scanf("%d",&b[i].book_id);
				break;
			case 2 : printf("Enter new author : ");
					scanf("%s",b[i].book_author);
					break;
			case 3 : printf("Enter new name : ");
					scanf("%s",b[i].book_name);
					break;
			default : printf("Invalid choice\n");
			}
			}
			if(!found){
				printf("The book with ID %d not found !\n",id);
		}
}
}	
		void display(struct book b[],int count){
		printf("The Book Details : \n");
		for(int i=0;i<count;i++){
		printf("Book ID :%d\n",b[i].book_id);
		printf("Book Name :%s\n",b[i].book_name);
		printf("Book Author :%s\n",b[i].book_author);
		}
               }
		int main(){
		struct book b[50];
		int count=0, choice,id,c,n;
 		printf("Welcome to Hrushi's Library\n\n");
		do{
                        printf("Enter your choice :\n1.Insert\n2.Delete\n3.Modify\n4.Display\n5.Exit\n\n");
	              scanf("%d",&choice);
		    switch(choice){
			case 1 : insert(b,&count);
				       break; 
			case 2 : delete(b,&count,id);
				        break;
			case 3 : modify(b,&count,id,c);
				       break;
			case 4 : display(b,count);
				       break; 
			case 5 : printf("Program Ended !\n");
				       return 0; 
			default : printf("Invalid Choice\n");
			}
				printf("Do you want to continue(1/0)\n");
				scanf("%d",&n);
		}while(n==1);
		  return 0;
}

















