#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *front=NULL,*rear=NULL,*new_node,*temp;
void enqueue();
void dequeue();
void display();
int main()
{
int choice;
printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT");
	do
	{
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("EXIT");
				break;
			default:
				printf("INVALID");	
				break;
		}
	}while(choice!=4);
}
void enqueue()
{
new_node=(struct node*)malloc(sizeof(struct node));
printf("Enter value:");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(front==NULL && rear==NULL)
	{
	front=rear=new_node;
	new_node->next=front;
	}
else
	{
	rear->next=new_node;
	new_node->next=front;
	rear=new_node;
	}
}
void dequeue()
{
temp=front;
if(front==NULL && rear==NULL)
{
	printf("underflow");
}
else if(front==rear)
		{
		front=NULL;
		rear=NULL;
		printf("Popped element is %d",temp->data);
		free(temp);
		}
	 else
		{
		front=front->next;
		rear->next=front;
		printf("popped element is %d",temp->data);
		free(temp);
		}
}
void display()
{
temp=front;
if (front==NULL && rear==NULL)
{
	printf("Queue is empty");
}
else
	{
		do{
		printf("%d->",temp->data);
		temp=temp->next;
		}while(temp!=rear->next);
	}

}		
	
	
	


	
